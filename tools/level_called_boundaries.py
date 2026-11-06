#!/usr/bin/env python3
"""Verify relocation-backed calls into code missed by full-module Ghidra.

This is a boundary witness, not a C match or a shared-source identity claim.
The detailed review stays under ignored build/; the public table contains only
addresses, sizes and hashes from the pinned USA modules.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import struct
from bisect import bisect_left
from collections import Counter, defaultdict, deque
from pathlib import Path

from disc import IsoDisc, verify_disc
from level_flow_ranges import digest
from level_function_inventory import control_flow, relocations
from level_ghidra_crosscheck import rows

ROOT = Path(__file__).resolve().parent.parent
WORK = ROOT / "build/level-functions"
TARGET = ROOT / "config/target.json"
MODULES = ROOT / "config/levels/modules.tsv"
CODE = ROOT / "config/levels/code_intervals.tsv"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
COVERAGE = ROOT / "config/levels/boundary_coverage_summary.json"
TABLE = ROOT / "config/levels/called_boundary_witnesses.tsv"
SUMMARY = ROOT / "config/levels/called_boundary_summary.json"
GAPS = WORK / "unowned_code_gaps.tsv"
PRIVATE = WORK / "called_boundary_review.json"
FIELDS = ("module", "start", "end_exclusive", "body_bytes", "static_status",
          "call_witness", "masked_lead_sha256")


def branch_target(site: int, word: int) -> int:
    immediate = word & 0xFFFF
    if immediate & 0x8000:
        immediate -= 0x10000
    return site + 4 + immediate * 4


def relocated_jal_target(site: int, word: int, relocation: tuple | None) -> int | None:
    if word >> 26 != 3 or relocation is None or relocation[:2] != ("local", 2):
        return None
    return ((site + 4) & 0xF0000000) | ((word & 0x03FFFFFF) << 2)


def transfer(site: int, word: int) -> tuple[str, tuple[int, ...], bool]:
    """Return flow kind, successors and whether a delay slot is executed."""
    opcode = word >> 26
    source, target_reg = (word >> 21) & 31, (word >> 16) & 31
    if opcode == 0:
        function = word & 63
        if function == 8:
            return ("return" if word == 0x03E00008 else "indirect_jump", (), True)
        if function == 9:
            return "indirect_call", (site + 8,), True
        if function in (12, 13):
            return "trap", (), False
    if opcode in (2, 3):
        dest = ((site + 4) & 0xF0000000) | ((word & 0x03FFFFFF) << 2)
        return (("direct_jump", (dest,), True) if opcode == 2 else
                ("direct_call", (site + 8,), True))
    branch = opcode in (4, 5, 6, 7, 20, 21, 22, 23)
    branch |= opcode == 1 and target_reg in (0, 1, 2, 3, 16, 17, 18, 19)
    branch |= opcode in (16, 17, 18) and source == 8
    if branch:
        dest = branch_target(site, word)
        if opcode == 1 and target_reg in (16, 17, 18, 19):
            return "branch_call", (site + 8,), True
        unconditional = (opcode in (4, 20) and source == target_reg)
        unconditional |= opcode == 1 and source == 0 and target_reg in (1, 3)
        unconditional |= opcode in (6, 22) and source == 0
        return "branch", (dest,) if unconditional else (dest, site + 8), True
    if opcode == 16 and source == 16 and (word & 63) == 24:
        return "exception_return", (), False
    return "ordinary", (site + 4,), False


def closed_return_body(code: bytes, code_start: int, start: int, end: int,
                       decoder=None) -> dict[str, int | bool]:
    """Fail closed on escape, unknown control, or nonzero unreachable code."""
    if (not code_start <= start < end <= code_start + len(code)
            or (start | end | code_start) & 3):
        raise ValueError("body falls outside aligned code")
    queue = deque([start])
    seen: set[int] = set()
    delays: set[int] = set()
    counts: Counter[str] = Counter()
    while queue:
        site = queue.popleft()
        if site < start or site >= end or site & 3:
            counts["escape"] += 1
            continue
        if site in seen:
            continue
        seen.add(site)
        word = struct.unpack_from("<I", code, site - code_start)[0]
        kind, following, delay = transfer(site, word)
        if decoder is not None:
            insn = decoder(word, site)
            if not insn.isValid():
                counts["invalid_instruction"] += 1
            if ((insn.isBranch() and kind not in ("branch", "branch_call"))
                    or (insn.isJumpWithAddress() and kind not in
                        ("direct_jump", "direct_call"))
                    or (insn.isFunctionCall() and kind not in
                        ("direct_call", "indirect_call", "branch_call"))):
                counts["unknown_control_form"] += 1
        counts[kind] += 1
        if delay:
            if site + 4 >= end:
                counts["delay_outside"] += 1
            else:
                delays.add(site + 4)
        queue.extend(following)
    if decoder is not None:
        for site in delays:
            word = struct.unpack_from("<I", code, site - code_start)[0]
            insn = decoder(word, site)
            if not insn.isValid():
                counts["invalid_instruction"] += 1
            if (insn.isBranch() or insn.isJumpWithAddress()
                    or (word >> 26 == 0 and (word & 63) in (8, 9))):
                counts["control_in_delay"] += 1
    executed = seen | delays
    unseen_nonzero = sum(
        struct.unpack_from("<I", code, site - code_start)[0] != 0
        for site in range(start, end, 4) if site not in executed)
    counts["unseen_nonzero"] = unseen_nonzero
    closed = (counts["return"] > 0 and not any(counts[key] for key in
              ("escape", "invalid_instruction", "unknown_control_form",
               "indirect_jump", "trap", "exception_return", "delay_outside",
               "control_in_delay", "unseen_nonzero")))
    return {"closed": bool(closed), "reachable_words": len(executed),
            **dict(counts)}


def validate_inputs() -> tuple[list[dict[str, str]], dict, dict, dict]:
    code_rows = rows(CODE)
    modules = {Path(row["path"]).name: row for row in rows(MODULES)}
    inventory = json.loads(INVENTORY.read_text(encoding="utf-8"))
    coverage = json.loads(COVERAGE.read_text(encoding="utf-8"))
    if (len(code_rows) != 21 or {row["module"] for row in code_rows} != set(modules)
            or inventory["catalogue_sha256"]["code_intervals.tsv"] != digest(CODE)
            or coverage["code_catalogue_sha256"] != digest(CODE)
            or coverage["inventory_summary_sha256"] != digest(INVENTORY)
            or coverage["private_gap_worklist_sha256"] != digest(GAPS)):
        raise ValueError("candidate inventory or Ghidra gap worklist is stale")
    return code_rows, modules, inventory, coverage


def review(image: Path) -> tuple[list[dict[str, str]], dict]:
    import rabbitizer
    if rabbitizer.__version__ != "1.16.2":
        raise ValueError("called-boundary audit requires rabbitizer 1.16.2")
    code_rows, modules, _inventory, _coverage = validate_inputs()
    target = json.loads(TARGET.read_text(encoding="utf-8"))
    gaps: dict[str, list[tuple[int, int]]] = defaultdict(list)
    for row in rows(GAPS):
        if int(row["nonzero_bytes"]) and int(row["call_target"]):
            gaps[row["module"]].append((int(row["start"], 16),
                                        int(row["end_exclusive"], 16)))
    public = []
    private = []
    summary: Counter[str] = Counter()
    with IsoDisc(image) as disc:
        verify_disc(disc, target)
        for code_row in code_rows:
            module = code_row["module"]
            data = disc.file_bytes("LVL/" + module)
            if hashlib.sha256(data).hexdigest() != modules[module]["sha256"]:
                raise ValueError(f"{module}: full REL differs from pin")
            code_start = int(code_row["start"], 16)
            code_end = int(code_row["end_exclusive"], 16)
            code = data[code_start:code_end]
            if hashlib.sha256(code).hexdigest() != code_row["sha256"]:
                raise ValueError(f"{module}: code slice differs from pin")
            inventory_rows = rows(WORK / f"{module}.tsv")
            starts = [int(row["start"], 16) for row in inventory_rows]
            if starts != sorted(starts):
                raise ValueError(f"{module}: candidate inventory is not sorted")
            candidates = {}
            for left, right in gaps[module]:
                index = bisect_left(starts, left)
                while index < len(starts) and starts[index] < right:
                    row = inventory_rows[index]
                    if "call" in row["evidence"]:
                        candidates[starts[index]] = (row, right)
                    index += 1
            if not candidates:
                continue
            module_public_start = len(public)
            indexed_relocs, pointer_targets = relocations(data, code_end)
            callers: dict[int, list[int]] = defaultdict(list)
            for offset in range(code_start, code_end, 4):
                word = struct.unpack_from("<I", data, offset)[0]
                if word >> 26 != 3:
                    continue
                destination = ((offset + 4) & 0xF0000000) | ((word & 0x03FFFFFF) << 2)
                if destination in candidates:
                    if relocated_jal_target(offset, word,
                                            indexed_relocs.get(offset)) != destination:
                        raise ValueError(f"{module}: candidate call lacks local J26 relocation")
                    callers[destination].append(offset)
            for start, (row, gap_end) in sorted(candidates.items()):
                if not callers[start]:
                    raise ValueError(f"{module}: candidate has no relocation-backed JAL")
                summary["relocation_backed_call_sites"] += len(callers[start])
                body_end = int(row["body_end"], 16) if row["body_end"] else None
                entry = {"module": module, "start": f"0x{start:08X}",
                         "static_status": row["status"],
                         "call_sites": [f"0x{site:08X}" for site in callers[start]]}
                if body_end is None:
                    summary["open_entries"] += 1
                    private.append({**entry, "result": "no_return_before_next_entry"})
                    continue
                if (body_end > gap_end or body_end - start != int(row["body_bytes"])
                        or hashlib.sha256(data[start:body_end]).hexdigest()
                        != row["raw_sha256"]):
                    raise ValueError(f"{module}: body extent or bytes differ from inventory")
                if row["status"] not in ("bounded_candidate", "nonzero_tail"):
                    raise ValueError(f"{module}: body class needs separate review")
                def decode(word: int, site: int):
                    return rabbitizer.Instruction(word, site,
                                                  rabbitizer.InstrCategory.R5900)
                flow = closed_return_body(code, code_start, start, body_end, decode)
                if not flow["closed"]:
                    raise ValueError(f"{module}: called body has unresolved flow at 0x{start:X}")
                public.append({
                    "module": module, "start": f"0x{start:08X}",
                    "end_exclusive": f"0x{body_end:08X}",
                    "body_bytes": str(body_end - start),
                    "static_status": row["status"],
                    "call_witness": f"0x{callers[start][0]:08X}",
                    "masked_lead_sha256": row["masked_lead_sha256"],
                })
                summary["closed_return_entries"] += 1
                summary["body_placement_bytes"] += body_end - start
                private.append({**entry, "body_end": f"0x{body_end:08X}",
                                "result": "closed_return_witness", "flow": flow})
            for source, destination in control_flow(data, code_end)[2]:
                for body in public[module_public_start:]:
                    left = int(body["start"], 16)
                    right = int(body["end_exclusive"], 16)
                    if left < destination < right and not left <= source < right:
                        raise ValueError(f"{module}: external control flow enters a reviewed body")
            for body in public[module_public_start:]:
                left = int(body["start"], 16)
                right = int(body["end_exclusive"], 16)
                if any(left < target < right for target in pointer_targets):
                    raise ValueError(f"{module}: code pointer enters a reviewed body's interior")
    public.sort(key=lambda row: (row["module"], int(row["start"], 16)))
    for current, next_row in zip(public, public[1:]):
        if (current["module"] == next_row["module"] and
                int(current["end_exclusive"], 16) > int(next_row["start"], 16)):
            raise ValueError("reviewed called boundaries overlap")
    WORK.mkdir(parents=True, exist_ok=True)
    PRIVATE.write_text(json.dumps(private, indent=2) + "\n", encoding="utf-8", newline="\n")
    return public, {"status": "relocation_backed_called_boundary_witnesses",
                    "candidate_entries": len(public) + summary["open_entries"],
                    "closed_return_entries": summary["closed_return_entries"],
                    "open_entries": summary["open_entries"],
                    "relocation_backed_call_sites": summary["relocation_backed_call_sites"],
                    "body_placement_bytes": summary["body_placement_bytes"],
                    "module_count": len(code_rows),
                    "code_catalogue_sha256": digest(CODE),
                    "module_catalogue_sha256": digest(MODULES),
                    "inventory_summary_sha256": digest(INVENTORY),
                    "coverage_summary_sha256": digest(COVERAGE),
                    "target_sha256": digest(TARGET),
                    "private_review_sha256": digest(PRIVATE),
                    "qualified_function_denominator": False,
                    "warning": ("A relocation-backed call and closed returning body "
                                "support these entry boundaries. Cross-level source "
                                "identity, other entries and the boot remain unreviewed; "
                                "this is not a function denominator or a C match.")}


def check(summary: dict) -> None:
    code_rows = rows(CODE)
    entries = rows(TABLE)
    if (summary["status"] != "relocation_backed_called_boundary_witnesses"
            or summary["qualified_function_denominator"] is not False
            or summary["module_count"] != 21 or len(code_rows) != 21
            or summary["code_catalogue_sha256"] != digest(CODE)
            or summary["module_catalogue_sha256"] != digest(MODULES)
            or summary["inventory_summary_sha256"] != digest(INVENTORY)
            or summary["coverage_summary_sha256"] != digest(COVERAGE)
            or summary["target_sha256"] != digest(TARGET)
            or summary["table_sha256"] != digest(TABLE)
            or summary["closed_return_entries"] != len(entries)
            or summary["candidate_entries"] != len(entries) + summary["open_entries"]
            or summary["body_placement_bytes"] != sum(int(row["body_bytes"]) for row in entries)):
        raise ValueError("called-boundary evidence or public input pin is stale")
    if len({(row["module"], row["start"]) for row in entries}) != len(entries):
        raise ValueError("duplicate called-boundary entry")
    known_modules = {row["module"] for row in code_rows}
    for row in entries:
        if (row["module"] not in known_modules
                or set(row) != set(FIELDS)
                or row["static_status"] not in ("bounded_candidate", "nonzero_tail")
                or int(row["end_exclusive"], 16) - int(row["start"], 16)
                != int(row["body_bytes"])):
            raise ValueError("malformed called-boundary row")
    ordered = sorted(entries, key=lambda row: (row["module"], int(row["start"], 16)))
    for current, next_row in zip(ordered, ordered[1:]):
        if (current["module"] == next_row["module"] and
                int(current["end_exclusive"], 16) > int(next_row["start"], 16)):
            raise ValueError("overlapping called-boundary rows")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument("--write", type=Path, metavar="PINNED_ISO")
    mode.add_argument("--check", action="store_true")
    args = parser.parse_args()
    if args.write:
        entries, summary = review(args.write)
        lines = ["\t".join(FIELDS)]
        lines.extend("\t".join(row[field] for field in FIELDS) for row in entries)
        TABLE.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
        summary["table_sha256"] = digest(TABLE)
        SUMMARY.write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8", newline="\n")
    else:
        summary = json.loads(SUMMARY.read_text(encoding="utf-8"))
    check(summary)
    print(f"called boundary witnesses: {summary['closed_return_entries']} closed, "
          f"{summary['open_entries']} unresolved; no function denominator")


if __name__ == "__main__":
    main()
