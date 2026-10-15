#!/usr/bin/env python3
"""Find strongly corroborated relocation-translation templates across levels.

This is a structural shared-code audit, not source-level identity or a
ByteMatch denominator. It requires private Ghidra exports and the pinned ISO.
"""

from __future__ import annotations

import argparse
import bisect
import csv
import hashlib
import json
import struct
from collections import Counter, defaultdict
from pathlib import Path

from disc import IsoDisc, verify_disc
from level_ghidra_crosscheck import rows
from rel import HEADER, iter_packed_relocations

ROOT = Path(__file__).resolve().parent.parent
WORK = ROOT / "build/level-functions"
SUMMARY = ROOT / "config/levels/translation_families_summary.json"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
GHIDRA_CROSSCHECK = ROOT / "config/levels/ghidra_crosscheck_summary.json"
CODE_CATALOGUE = ROOT / "config/levels/code_intervals.tsv"
MODULE_CATALOGUE = ROOT / "config/levels/modules.tsv"
TARGET = ROOT / "config/target.json"
WORD = struct.Struct("<I")


def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def uniform_translation(reference: dict[int, int], current: dict[int, int]) -> int | None:
    if reference.keys() != current.keys():
        return None
    shifts = {current[site] - value for site, value in reference.items()}
    return shifts.pop() if len(shifts) == 1 else None


def lows_follow_translation(reference: dict[int, int], current: dict[int, int],
                            shift: int) -> bool:
    return (reference.keys() == current.keys()
            and all(((current[site] - value) & 0xFFFF) == (shift & 0xFFFF)
                    for site, value in reference.items()))


def local_references(data: bytes, start: int, end: int, code_end: int,
                     fixups: list, sites: list[int]) -> tuple[dict[int, int], dict[int, int]] | None:
    hi_targets = {}
    paired_low = set()
    low_values = {}
    for fixup in fixups[bisect.bisect_left(sites, start):bisect.bisect_left(sites, end)]:
        site = fixup.site - start
        if fixup.kind in (2, 3):
            return None  # local code jump or full pointer needs a separate graph audit
        if fixup.kind == 0:
            low_values[site] = WORD.unpack_from(data, fixup.site)[0] & 0xFFFF
            continue
        if fixup.kind != 1 or fixup.low_site is None or not start <= fixup.low_site < end:
            return None
        high = WORD.unpack_from(data, fixup.site)[0] & 0xFFFF
        low = WORD.unpack_from(data, fixup.low_site)[0] & 0xFFFF
        if low & 0x8000:
            low -= 0x10000
        target = (high << 16) + low
        if not code_end <= target < len(data):
            return None
        hi_targets[site] = target
        paired_low.add(fixup.low_site - start)
    return hi_targets, {site: value for site, value in low_values.items()
                        if site not in paired_low}


def ghidra_confirmed(row: dict[str, str], functions: dict[int, dict[str, str]]) -> bool:
    start = int(row["start"], 16)
    function = functions.get(start)
    return bool(function and row["body_end"]
                and int(function["min"], 16) == start
                and int(function["max"], 16) + 1 == int(row["body_end"], 16)
                and int(function["body_bytes"]) == int(row["body_bytes"]))


def local_code_references(data: bytes, start: int, end: int, fixups: list,
                          known_entries: dict[tuple[str, int], tuple[int, str]],
                          module: str) -> dict[int, tuple[str, int | tuple[int, str]]] | None:
    """Resolve each local J/JAL to an internal offset or corroborated callee.

    Unknown targets and 32-bit code pointers fail closed. The masked body hash
    already fixes the instruction opcode and relocation-site positions.
    """
    references = {}
    for fixup in fixups:
        if fixup.kind == 3:
            return None
        if fixup.kind != 2:
            continue
        word = WORD.unpack_from(data, fixup.site)[0]
        if word >> 26 not in (2, 3):
            return None
        target = (word & 0x03FFFFFF) << 2
        if start <= target < end:
            references[fixup.site - start] = ("internal", target - start)
        elif (module, target) in known_entries:
            references[fixup.site - start] = ("callee", known_entries[(module, target)])
        else:
            return None
    return references


def close_callgraph(pending: dict[tuple[int, str], tuple[dict, set]],
                    seeds: set[tuple[int, str]]) -> set[tuple[int, str]]:
    """Accept a family only when every external callee family is accepted."""
    accepted = set(seeds)
    while True:
        fresh = {key for key, (_group, targets) in pending.items()
                 if key not in accepted and targets <= accepted | {key}}
        if not fresh:
            return accepted - seeds
        accepted.update(fresh)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument("--write", type=Path, metavar="PINNED_ISO")
    mode.add_argument("--check", action="store_true")
    args = parser.parse_args()
    inventory = json.loads(INVENTORY.read_text(encoding="utf-8"))
    crosscheck = json.loads(GHIDRA_CROSSCHECK.read_text(encoding="utf-8"))
    if inventory["status"] != "candidate_inventory_only":
        raise ValueError("function inventory is not the pinned candidate audit")
    if (crosscheck["status"] != "independent_candidate_crosscheck"
            or crosscheck["module_count"] != 21
            or crosscheck["inventory_sha256"] != digest(INVENTORY)
            or crosscheck["identical_interval_analysis_agrees"] is not True):
        raise ValueError("Ghidra boundary cross-check is missing or stale")
    if args.check:
        summary = json.loads(SUMMARY.read_text(encoding="utf-8"))
        if (summary["status"] != "structural_translation_leads"
                or summary["inventory_sha256"] != digest(INVENTORY)
                or summary["ghidra_crosscheck_sha256"] != digest(GHIDRA_CROSSCHECK)
                or summary["overall_percent"] is not None
                or summary["bytematch_ready"] is not False
                or summary["module_count"] != 21
                or not 0 <= summary["callgraph_resolved_groups"] <= summary["group_count"]
                or not 0 <= summary["callgraph_placement_body_bytes"] <=
                summary["placement_body_bytes"]
                or summary["template_lead_upper_bound_bytes"] !=
                inventory["exact_byte_dedupe_upper_bound"] -
                summary["extra_candidate_savings_beyond_exact"]):
            raise ValueError("translation-family snapshot is stale or overclaims")
        print(f"translation leads current: {summary['group_count']} groups")
        return
    target = json.loads(TARGET.read_text(encoding="utf-8"))
    interval_rows = {row["module"]: row for row in rows(CODE_CATALOGUE)}
    module_rows = {Path(row["path"]).name: row for row in rows(MODULE_CATALOGUE)}
    modules = sorted(interval_rows)
    if len(modules) != 21 or set(module_rows) != set(modules):
        raise ValueError("level catalogues differ from 21 pinned modules")
    bodies: dict[tuple[int, str], list[dict]] = defaultdict(list)
    ghidra = {}
    known_entries = {}
    for module in modules:
        file = WORK / f"{module}.code.bin.ghidra.tsv"
        ghidra[module] = {int(row["entry"], 16): row for row in rows(file)}
        for row in rows(WORK / f"{module}.tsv"):
            if row["status"] == "bounded_candidate":
                key = (int(row["body_bytes"]), row["masked_lead_sha256"])
                bodies[key].append({**row, "module": module})
                if ghidra_confirmed(row, ghidra[module]):
                    known_entries[(module, int(row["start"], 16))] = key
    accepted = []
    base_keys = set()
    pending = {}
    reasons = Counter()
    retained = set(modules) - {name for group in inventory["identical_full_interval_groups"]
                               for name in group[1:]}
    with IsoDisc(args.write) as disc:
        verify_disc(disc, target)
        data = {module: disc.file_bytes("LVL/" + module) for module in modules}
    for module in modules:
        if hashlib.sha256(data[module]).hexdigest() != module_rows[module]["sha256"]:
            raise ValueError(f"{module} differs from pinned SNR2 file")
    fixups = {}
    fixup_sites = {}
    for module in modules:
        head = HEADER.unpack_from(data[module])
        fixups[module] = list(iter_packed_relocations(
            data[module], head[13], head[1]))
        fixup_sites[module] = [row.site for row in fixups[module]]
    for (size, fingerprint), group in bodies.items():
        if len(group) < 2:
            continue
        names = [row["module"] for row in group]
        if len(set(names)) != len(names):
            reasons["repeated_module"] += 1
            continue
        if not all(ghidra_confirmed(row, ghidra[row["module"]]) for row in group):
            reasons["boundary_disagreement"] += 1
            continue
        references = []
        call_references = []
        has_code_relocation = False
        for row in group:
            module = row["module"]
            start = int(row["start"], 16)
            code_end = int(interval_rows[module]["end_exclusive"], 16)
            local = fixups[module][bisect.bisect_left(fixup_sites[module], start):
                                   bisect.bisect_left(fixup_sites[module], start + size)]
            code = local_code_references(data[module], start, start + size,
                                         local, known_entries, module)
            if code is None:
                break
            has_code_relocation |= bool(code)
            data_fixups = [fixup for fixup in local if fixup.kind != 2]
            refs = local_references(data[module], start, start + size, code_end,
                                    data_fixups, [fixup.site for fixup in data_fixups])
            if refs is None:
                break
            references.append(refs)
            call_references.append(code)
        if len(references) != len(group):
            reasons["code_relocation_or_unpaired_hi"] += 1
            continue
        ref_hi, ref_unpaired = references[0]
        translations = []
        for hi, unpaired in references:
            shift = uniform_translation(ref_hi, hi)
            if shift is None or not lows_follow_translation(ref_unpaired,
                                                              unpaired, shift):
                break
            translations.append(shift)
        if len(translations) != len(group):
            reasons["nonuniform_data_translation"] += 1
            continue
        if any(code != call_references[0] for code in call_references):
            reasons["different_local_code_targets"] += 1
            continue
        item = {"body_bytes": size, "fingerprint": fingerprint,
                         "placements": [(row["module"], int(row["start"], 16))
                                        for row in group],
                         "raw_variants": len({row["raw_sha256"] for row in group}),
                         "data_deltas": translations,
                         "resolution": "callgraph" if has_code_relocation else "uniform_data"}
        key = (size, fingerprint)
        if has_code_relocation:
            targets = {value[1] for value in call_references[0].values()
                       if value[0] == "callee"}
            pending[key] = (item, targets)
        else:
            accepted.append(item)
            base_keys.add(key)
    resolved_keys = close_callgraph(pending, base_keys)
    accepted.extend(pending[key][0] for key in sorted(resolved_keys))
    reasons["unresolved_callgraph_dependencies"] = len(pending) - len(resolved_keys)
    extra_savings = 0
    for group in accepted:
        kept_rows = [module for module, _start in group["placements"] if module in retained]
        if len(kept_rows) < 2:
            continue
        # Raw-identical bodies have already been removed by the strict bound.
        # Recompute variants on the retained placements rather than counting
        # the fully identical LEVEL_15/LEVEL_21 interval twice.
        source_group = bodies[(group["body_bytes"], group["fingerprint"])]
        variants = {row["raw_sha256"] for row in source_group
                    if row["module"] in retained}
        extra_savings += group["body_bytes"] * (len(variants) - 1)
    summary = {
        "status": "structural_translation_leads",
        "module_count": len(modules),
        "group_count": len(accepted),
        "placement_body_bytes": sum(group["body_bytes"] * len(group["placements"])
                                    for group in accepted),
        "template_body_bytes": sum(group["body_bytes"] for group in accepted),
        "callgraph_resolved_groups": len(resolved_keys),
        "callgraph_placement_body_bytes": sum(
            group["body_bytes"] * len(group["placements"]) for group in accepted
            if group["resolution"] == "callgraph"),
        "extra_candidate_savings_beyond_exact": extra_savings,
        "template_lead_upper_bound_bytes":
            inventory["exact_byte_dedupe_upper_bound"] - extra_savings,
        "rejection_counts": dict(sorted(reasons.items())),
        "largest_groups": [
            {"body_bytes": group["body_bytes"],
             "placements": len(group["placements"]),
             "fingerprint": group["fingerprint"]}
            for group in sorted(accepted, key=lambda item: item["body_bytes"] *
                                (len(item["placements"]) - 1), reverse=True)[:20]],
        "inventory_sha256": digest(INVENTORY),
        "ghidra_crosscheck_sha256": digest(GHIDRA_CROSSCHECK),
        "overall_percent": None,
        "bytematch_ready": False,
        "warning": "Uniform translated data references, corroborated bodies and closed local callee families identify templates, not proven source semantics or a complete unique-code denominator.",
    }
    lines = ["# Structural translation leads only; no accepted C or denominator claims.",
             "body_bytes\tplacements\traw_variants\tresolution\tfingerprint\tmembers_and_data_deltas"]
    for group in sorted(accepted, key=lambda item: -item["body_bytes"] *
                        (len(item["placements"]) - 1)):
        members = ";".join(f"{module}:0x{start:X}:{delta:+d}" for
                           (module, start), delta in zip(group["placements"],
                                                        group["data_deltas"]))
        lines.append(f"{group['body_bytes']}\t{len(group['placements'])}\t"
                     f"{group['raw_variants']}\t{group['resolution']}\t"
                     f"{group['fingerprint']}\t{members}")
    (WORK / "translation_review_leads.tsv").write_text(
        "\n".join(lines) + "\n", encoding="utf-8", newline="\n")
    SUMMARY.write_text(json.dumps(summary, indent=2) + "\n",
                       encoding="utf-8", newline="\n")
    print(f"{len(accepted)} structural leads, including {len(resolved_keys)} "
          "closed local-callgraph groups; "
          "no game-wide percentage")


if __name__ == "__main__":
    main()
