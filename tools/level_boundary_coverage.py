#!/usr/bin/env python3
"""Measure code not owned by the pinned full-module Ghidra function export.

This is a boundary-review aid, never a function count. Retail code slices and
the detailed gap list stay under ignored build/; the tracked summary has only
counts and hashes.
"""

from __future__ import annotations

import argparse
import csv
import json
from bisect import bisect_left
from collections import Counter
from pathlib import Path

from level_flow_ranges import digest
from level_ghidra_crosscheck import rows

ROOT = Path(__file__).resolve().parent.parent
WORK = ROOT / "build/level-functions"
CODE = ROOT / "config/levels/code_intervals.tsv"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
FULL_FLOW = ROOT / "config/levels/full_module_flow_summary.json"
SUMMARY = ROOT / "config/levels/boundary_coverage_summary.json"
GAPS = WORK / "unowned_code_gaps.tsv"

COUNT_KEYS = (
    "function_entries", "code_bytes", "single_owned_bytes", "overlap_bytes",
    "unowned_bytes", "unowned_zero_bytes", "unowned_nonzero_bytes",
    "unowned_gaps", "unowned_zero_gaps", "unowned_nonzero_gaps",
    "nonzero_gaps_with_call", "nonzero_gaps_with_pointer",
)


def exported_ranges(functions: list[dict[str, str]]) -> list[tuple[int, int]]:
    """Read Ghidra spans without hiding any overlap between function owners."""
    intervals = []
    entries = set()
    for row in functions:
        entry = int(row["entry"], 16)
        if entry in entries or not row.get("ranges"):
            raise ValueError("duplicate Ghidra entry or missing body ranges")
        entries.add(entry)
        size = 0
        for item in row["ranges"].split(";"):
            left, right = (int(value, 16) for value in item.split("-"))
            if left > right or left % 4 or (right + 1) % 4:
                raise ValueError("invalid R5900 Ghidra body range")
            size += right - left + 1
            intervals.append((left, right))
        if size != int(row["body_bytes"]):
            raise ValueError("Ghidra body ranges disagree with reported size")
    return intervals


def coverage(module: str, start: int, end: int, code: bytes,
             functions: list[dict[str, str]],
             candidates: list[dict[str, str]]) -> tuple[dict[str, int], list[tuple]]:
    """Count owners per byte; keep nonzero uncovered regions for private review."""
    if end <= start or len(code) != end - start:
        raise ValueError(f"{module}: code extent disagrees with the pinned slice")
    ranges = exported_ranges(functions)
    counts: Counter[str] = Counter()
    counts["code_bytes"] = end - start
    counts["function_entries"] = sum(
        start <= int(row["entry"], 16) < end for row in functions)
    events: Counter[int] = Counter({start: 0, end: 0})
    for left, right in ranges:
        if left < start or right + 1 > end:
            raise ValueError(f"{module}: Ghidra body escapes the pinned code interval")
        events[left] += 1
        events[right + 1] -= 1
    starts = sorted((int(row["start"], 16), row["evidence"])
                    for row in candidates)
    candidate_offsets = [offset for offset, _evidence in starts]
    gap_rows = []
    previous, owners = start, 0
    for position, delta in sorted(events.items()):
        span = position - previous
        if span:
            if owners == 0:
                gap = code[previous - start:position - start]
                nonzero = len(gap) - gap.count(0)
                index = bisect_left(candidate_offsets, previous)
                call = pointer = False
                while index < len(starts) and starts[index][0] < position:
                    evidence = starts[index][1]
                    call |= "call" in evidence
                    pointer |= "pointer" in evidence
                    index += 1
                counts["unowned_bytes"] += span
                counts["unowned_zero_bytes"] += span - nonzero
                counts["unowned_nonzero_bytes"] += nonzero
                counts["unowned_gaps"] += 1
                counts["unowned_nonzero_gaps" if nonzero else "unowned_zero_gaps"] += 1
                if nonzero and call:
                    counts["nonzero_gaps_with_call"] += 1
                if nonzero and pointer:
                    counts["nonzero_gaps_with_pointer"] += 1
                gap_rows.append((module, previous, position, span, nonzero, call, pointer))
            elif owners == 1:
                counts["single_owned_bytes"] += span
            else:
                counts["overlap_bytes"] += span
        owners += delta
        if owners < 0:
            raise ValueError(f"{module}: negative function ownership")
        previous = position
    if owners or previous != end or sum(counts[key] for key in
            ("single_owned_bytes", "overlap_bytes", "unowned_bytes")) != end - start:
        raise ValueError(f"{module}: incomplete code partition")
    return {key: counts[key] for key in COUNT_KEYS}, gap_rows


def generate() -> dict:
    code_rows = rows(CODE)
    inventory = json.loads(INVENTORY.read_text(encoding="utf-8"))
    if inventory["catalogue_sha256"]["code_intervals.tsv"] != digest(CODE):
        raise ValueError("function inventory is not pinned to the code catalogue")
    full_flow = json.loads(FULL_FLOW.read_text(encoding="utf-8"))
    pinned = {row["module"]: row for row in full_flow["modules"]}
    modules = {row["module"] for row in code_rows}
    if len(code_rows) != 21 or modules != set(pinned):
        raise ValueError("the pinned code and full-module catalogues disagree")
    totals: Counter[str] = Counter()
    records = []
    gap_lines = ["module\tstart\tend_exclusive\tbytes\tnonzero_bytes\tcall_target\tpointer_target"]
    for row in code_rows:
        module = row["module"]
        code_path = WORK / f"{module}.code.bin"
        ghidra_path = WORK / "full-ghidra" / f"{module}.ghidra.tsv"
        inventory_path = WORK / f"{module}.tsv"
        if digest(code_path) != row["sha256"]:
            raise ValueError(f"{module}: code slice differs from pinned catalogue")
        if digest(ghidra_path) != pinned[module]["full_export_sha256"]:
            raise ValueError(f"{module}: full-module Ghidra export differs from pin")
        start, end = int(row["start"], 16), int(row["end_exclusive"], 16)
        functions = [function for function in rows(ghidra_path)
                     if start <= int(function["entry"], 16) < end]
        if len(functions) != pinned[module]["full_ghidra_functions"]:
            raise ValueError(f"{module}: Ghidra code-entry count differs from pin")
        counts, gaps = coverage(module, start, end, code_path.read_bytes(),
                                functions, rows(inventory_path))
        if counts["code_bytes"] != int(row["interval_bytes"]):
            raise ValueError(f"{module}: code interval size differs from pin")
        totals.update(counts)
        records.append({"module": module, **counts,
                        "inventory_tsv_sha256": digest(inventory_path)})
        gap_lines.extend(
            f"{name}\t0x{lo:08X}\t0x{hi:08X}\t{size}\t{nonzero}\t{int(call)}\t{int(pointer)}"
            for name, lo, hi, size, nonzero, call, pointer in gaps)
    GAPS.parent.mkdir(parents=True, exist_ok=True)
    GAPS.write_text("\n".join(gap_lines) + "\n", encoding="utf-8", newline="\n")
    return {
        "status": "boundary_coverage_incomplete",
        "module_count": len(records),
        **{key: totals[key] for key in COUNT_KEYS},
        "modules": records,
        "code_catalogue_sha256": digest(CODE),
        "inventory_summary_sha256": digest(INVENTORY),
        "full_module_flow_sha256": digest(FULL_FLOW),
        "private_gap_worklist_sha256": digest(GAPS),
        "qualified_function_denominator": False,
        "warning": ("Ghidra ownership is a review lead. Unowned nonzero bytes, "
                    "ambiguous boundaries and cross-level source identity must be "
                    "resolved before a game-wide function denominator is counted."),
    }


def check(summary: dict) -> None:
    if (summary["status"] != "boundary_coverage_incomplete"
            or summary["qualified_function_denominator"] is not False
            or summary["module_count"] != 21
            or summary["code_catalogue_sha256"] != digest(CODE)
            or summary["inventory_summary_sha256"] != digest(INVENTORY)
            or summary["full_module_flow_sha256"] != digest(FULL_FLOW)):
        raise ValueError("boundary coverage summary or input pins are stale")
    if len(summary["modules"]) != summary["module_count"]:
        raise ValueError("boundary coverage module list is incomplete")
    code_rows = rows(CODE)
    if ({row["module"] for row in summary["modules"]}
            != {row["module"] for row in code_rows}):
        raise ValueError("boundary coverage module names differ from code catalogue")
    for key in COUNT_KEYS:
        if summary[key] != sum(module[key] for module in summary["modules"]):
            raise ValueError(f"boundary coverage {key} disagrees with modules")
    if (summary["code_bytes"] != summary["single_owned_bytes"]
            + summary["overlap_bytes"] + summary["unowned_bytes"]
            or summary["unowned_bytes"] != summary["unowned_zero_bytes"]
            + summary["unowned_nonzero_bytes"]
            or summary["unowned_gaps"] != summary["unowned_zero_gaps"]
            + summary["unowned_nonzero_gaps"]):
        raise ValueError("boundary coverage byte or gap accounting is inconsistent")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument("--write", action="store_true")
    mode.add_argument("--check", action="store_true")
    args = parser.parse_args()
    if args.write:
        summary = generate()
        check(summary)
        SUMMARY.write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8", newline="\n")
    else:
        summary = json.loads(SUMMARY.read_text(encoding="utf-8"))
        check(summary)
    print("full-module boundary coverage: "
          f"{summary['unowned_nonzero_bytes']} "
          "nonzero bytes remain unowned; no qualified function denominator")


if __name__ == "__main__":
    main()
