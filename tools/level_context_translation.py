#!/usr/bin/env python3
"""Corroborate repeated level-code shapes with local context and data anchors.

Candidate equivalence remains conditional. The private write pass requires the
pinned ISO, Ghidra boundaries and previously reviewed relocation targets.
"""

from __future__ import annotations

import argparse
import bisect
import hashlib
import json
from collections import defaultdict
from pathlib import Path

from disc import IsoDisc, verify_disc
from level_function_inventory import masked_body, relocations
from level_ghidra_crosscheck import rows
from level_shape_scenario import measured_units
from level_translation_families import (combined_dedupe_savings, ghidra_confirmed,
                                        local_code_references, local_references,
                                        unique_data_window)
from rel import HEADER, iter_packed_relocations

ROOT = Path(__file__).resolve().parent.parent
WORK = ROOT / "build/level-functions"
OUTPUT = ROOT / "config/levels/context_translation_summary.json"
REVIEW = WORK / "context_translation_review.tsv"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
SPLIT = ROOT / "config/levels/split_dedupe_summary.json"
SHAPE = ROOT / "config/levels/shape_scenario_summary.json"
TRANSLATION = ROOT / "config/levels/translation_families_summary.json"
GHIDRA = ROOT / "config/levels/ghidra_crosscheck_summary.json"
MODULES = ROOT / "config/levels/modules.tsv"
CODE = ROOT / "config/levels/code_intervals.tsv"
TARGET = ROOT / "config/target.json"
REFERENCE = "LEVEL_01.REL"
MAX_ANCHOR_DISTANCE = 65536


def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def member_map(text: str, data_deltas: bool) -> dict[str, int]:
    result = {}
    for part in text.split(";"):
        fields = part.split(":")
        if len(fields) != (3 if data_deltas else 2):
            raise ValueError("invalid private family member")
        result[fields[0]] = int(fields[1], 16)
    return result


def context_key(static: list[dict[str, str]], index: int) -> str:
    neighborhood = [(static[j]["body_bytes"], static[j]["masked_lead_sha256"])
                    if 0 <= j < len(static) else None
                    for j in range(index - 1, index + 2)]
    return hashlib.sha256(json.dumps(neighborhood, separators=(",", ":"))
                          .encode("ascii")).hexdigest()


def anchored_target(source: int, target: int, anchors: dict,
                    reverse: dict, ordered: list[int],
                    source_data: bytes, target_data: bytes,
                    source_code_end: int, target_code_end: int,
                    source_payload_end: int, target_payload_end: int,
                    windows: dict) -> bool:
    """Require a unique direct, exact-data, or two-sided regional witness."""
    if not (source_code_end <= source <= source_payload_end - 64 and
            target_code_end <= target <= target_payload_end - 64):
        return False
    direct = anchors.get(source, {})
    if len(direct) == 1 and target in direct and reverse.get(target) == {source}:
        return True
    for module, address, data, code_end, payload_end in (
            ("source", source, source_data, source_code_end, source_payload_end),
            ("target", target, target_data, target_code_end, target_payload_end)):
        if (module, address) not in windows:
            windows[module, address] = unique_data_window(
                data, code_end, payload_end, address)
    signature = windows["source", source]
    if signature is not None and signature == windows["target", target]:
        return True
    index = bisect.bisect_left(ordered, source)
    if index == 0 or index == len(ordered):
        return False
    lower, upper = ordered[index - 1], ordered[index]
    if (source - lower > MAX_ANCHOR_DISTANCE or
            upper - source > MAX_ANCHOR_DISTANCE):
        return False
    lower_values, upper_values = anchors[lower], anchors[upper]
    if len(lower_values) != 1 or len(upper_values) != 1:
        return False
    lower_target = next(iter(lower_values))
    upper_target = next(iter(upper_values))
    shift = target - source
    return (lower_target - lower == upper_target - upper == shift
            and len(lower_values[lower_target] | upper_values[upper_target]) >= 2)


def close_context_dependencies(pending: dict[tuple[str, str], set]) -> set:
    """Close paired functions only after their paired callees have closed."""
    closed = set()
    while True:
        fresh = {key for key, needs in pending.items()
                 if key not in closed and needs <= closed | {key}}
        if not fresh:
            return closed
        closed.update(fresh)


def main_write(image: Path) -> dict[str, object]:
    inventory = json.loads(INVENTORY.read_text(encoding="utf-8"))
    split = json.loads(SPLIT.read_text(encoding="utf-8"))
    shape = json.loads(SHAPE.read_text(encoding="utf-8"))
    translation = json.loads(TRANSLATION.read_text(encoding="utf-8"))
    ghidra_summary = json.loads(GHIDRA.read_text(encoding="utf-8"))
    target = json.loads(TARGET.read_text(encoding="utf-8"))
    if (digest(WORK / "split_boundary_review.tsv") != split["split_review_sha256"]
            or digest(WORK / "split_translation_review_leads.tsv") !=
            split["translation_review_sha256"]):
        raise ValueError("private split worklists differ from pinned audit")
    _verified_units, retained_bytes, _residual = measured_units(image)
    if retained_bytes != shape["retained_candidate_interval_bytes"]:
        raise ValueError("optimistic shape input differs from retained intervals")
    retained = {row["module"] for row in inventory["modules"]} - {
        module for group in inventory["identical_full_interval_groups"]
        for module in group[1:]}
    compared = sorted(module for module in retained if module.startswith("LEVEL_"))
    if len(compared) != 19 or REFERENCE not in compared:
        raise ValueError("expected 19 retained numbered level modules")
    module_rows = {Path(row["path"]).name: row for row in rows(MODULES)}
    code_ends = {row["module"]: int(row["end_exclusive"], 16)
                 for row in rows(CODE)}
    ghidra_hashes = {row["module"]: row["ghidra_export_sha256"]
                     for row in ghidra_summary["modules"]}
    parents = {(row["module"], int(row["parent_start"], 16))
               for row in rows(WORK / "split_boundary_review.tsv")}
    data, fixups, sites, contexts, known = {}, {}, {}, {}, {}
    static_rows = {}
    with IsoDisc(image) as disc:
        verify_disc(disc, target)
        for module in compared:
            data[module] = disc.file_bytes("LVL/" + module)
            if hashlib.sha256(data[module]).hexdigest() != module_rows[module]["sha256"]:
                raise ValueError(f"{module} differs from pinned module")
            head = HEADER.unpack_from(data[module])
            fixups[module] = list(iter_packed_relocations(
                data[module], head[13], head[1]))
            sites[module] = [item.site for item in fixups[module]]
            ghidra_path = WORK / f"{module}.code.bin.ghidra.tsv"
            if digest(ghidra_path) != ghidra_hashes[module]:
                raise ValueError(f"{module} independent Ghidra export changed")
            ghidra = {int(row["entry"], 16): row for row in rows(ghidra_path)}
            static = rows(WORK / f"{module}.tsv")
            static_rows[module] = static
            contexts[module] = defaultdict(list)
            for index, row in enumerate(static):
                if not row["masked_lead_sha256"]:
                    continue
                start = int(row["start"], 16)
                confirmed = (row["status"] in (
                    "bounded_candidate", "pointer_only", "nonzero_tail")
                    and ghidra_confirmed(row, ghidra))
                if confirmed:
                    known[module, start] = (int(row["body_bytes"]),
                                            row["masked_lead_sha256"])
                if confirmed and (module, start) not in parents:
                    contexts[module][context_key(static, index)].append(row)

    previous = rows(WORK / "translation_review_leads.tsv")
    if len(previous) != translation["group_count"]:
        raise ValueError("private translation leads differ from public summary")
    accepted_nodes = set()
    accepted = []
    previous_members = []
    for row in previous:
        members = member_map(row["members_and_data_deltas"], True)
        accepted_nodes.update(members.items())
        accepted.append({"body_bytes": int(row["body_bytes"]),
                         "placements": list(members.items())})
        previous_members.append((row["fingerprint"], int(row["body_bytes"]),
                                 members))
    current = rows(WORK / "split_translation_review_leads.tsv")
    for row in current:
        members = member_map(row["members"], False)
        accepted_nodes.update(members.items())
        accepted.append({"body_bytes": int(row["body_bytes"]),
                         "placements": list(members.items())})

    ref_cache = {}
    def references(module: str, start: int, size: int):
        key = module, start, size
        if key not in ref_cache:
            local = fixups[module][bisect.bisect_left(sites[module], start):
                                   bisect.bisect_left(sites[module], start + size)]
            code = local_code_references(data[module], start, start + size,
                                         local, known, module)
            data_fixups = [item for item in local if item.kind != 2]
            refs = local_references(data[module], start, start + size,
                                    code_ends[module], data_fixups,
                                    [item.site for item in data_fixups])
            ref_cache[key] = code, refs
        return ref_cache[key]

    def external_calls(module: str, start: int, size: int) -> dict[int, int]:
        local = fixups[module][bisect.bisect_left(sites[module], start):
                               bisect.bisect_left(sites[module], start + size)]
        targets = {}
        for item in local:
            if item.kind != 2:
                continue
            word = int.from_bytes(data[module][item.site:item.site + 4], "little")
            target = (word & 0x03FFFFFF) << 2
            if not start <= target < start + size:
                targets[item.site - start] = target
        return targets

    context_ids = {(module, int(member[0]["start"], 16)): context
                   for module in compared
                   for context, member in contexts[module].items()
                   if len(member) == 1}
    candidate_pairs = {}
    windows = {}
    for module in compared:
        if module == REFERENCE:
            continue
        anchors = defaultdict(lambda: defaultdict(set))
        for fingerprint, size, members in previous_members:
            if REFERENCE not in members or module not in members:
                continue
            source = references(REFERENCE, members[REFERENCE], size)[1]
            dest = references(module, members[module], size)[1]
            if source is None or dest is None or source[0].keys() != dest[0].keys():
                raise ValueError("accepted data-anchor references changed")
            for site, address in source[0].items():
                anchors[address][dest[0][site]].add(fingerprint)
        ordered = sorted(anchors)
        reverse = defaultdict(set)
        for address, targets in anchors.items():
            for other in targets:
                reverse[other].add(address)
        for context, originals in contexts[REFERENCE].items():
            others = contexts[module].get(context, [])
            if len(originals) != 1 or len(others) != 1:
                continue
            original, other = originals[0], others[0]
            left_start, right_start = (int(original["start"], 16),
                                       int(other["start"], 16))
            size = int(original["body_bytes"])
            if ((REFERENCE, left_start) in accepted_nodes and
                    (module, right_start) in accepted_nodes):
                continue
            code_a, refs_a = references(REFERENCE, left_start, size)
            code_b, refs_b = references(module, right_start, size)
            if (code_a is None or code_a != code_b or refs_a is None or
                    refs_b is None):
                continue
            hi_a, low_a = refs_a
            hi_b, low_b = refs_b
            if hi_a.keys() != hi_b.keys() or low_a.keys() != low_b.keys():
                continue
            source_end = HEADER.unpack_from(data[REFERENCE])[1]
            dest_end = HEADER.unpack_from(data[module])[1]
            if not all(anchored_target(
                    address, hi_b[site], anchors, reverse, ordered,
                    data[REFERENCE], data[module], code_ends[REFERENCE],
                    code_ends[module], source_end, dest_end, windows)
                    for site, address in hi_a.items()):
                continue
            shifts = {hi_b[site] - address for site, address in hi_a.items()}
            if any(((low_b[site] - value) & 0xFFFF) not in
                   {shift & 0xFFFF for shift in shifts}
                   for site, value in low_a.items()):
                continue
            candidate_pairs[context, module] = (
                size, original["masked_lead_sha256"], left_start, right_start)

    pending = {}
    invalid_pairs = 0
    for (context, module), (size, _masked, left_start, right_start) in candidate_pairs.items():
        source_calls = external_calls(REFERENCE, left_start, size)
        target_calls = external_calls(module, right_start, size)
        if source_calls.keys() != target_calls.keys():
            invalid_pairs += 1
            continue
        dependencies = set()
        for site, source_target in source_calls.items():
            target = target_calls[site]
            if ((REFERENCE, source_target) in accepted_nodes and
                    (module, target) in accepted_nodes):
                continue
            source_context = context_ids.get((REFERENCE, source_target))
            target_context = context_ids.get((module, target))
            if (source_context is None or source_context != target_context or
                    (source_context, module) not in candidate_pairs):
                invalid_pairs += 1
                break
            dependencies.add((source_context, module))
        else:
            pending[context, module] = dependencies
    # A pair cannot depend on a candidate rejected by the call-target check.
    closed = close_context_dependencies(pending)
    family_groups = {}
    for context, module in sorted(closed):
        size, masked, left_start, right_start = candidate_pairs[context, module]
        key = context, size, masked, left_start
        family = family_groups.setdefault(key, {"body_bytes": size,
            "placements": [(REFERENCE, left_start)]})
        family["placements"].append((module, right_start))

    exact = defaultdict(list)
    for module in retained:
        static = static_rows[module] if module in static_rows else rows(
            WORK / f"{module}.tsv")
        for row in static:
            start = int(row["start"], 16)
            if row["status"] == "bounded_candidate" and (module, start) not in parents:
                exact[int(row["body_bytes"]), row["raw_sha256"]].append(
                    {"module": module, "start": row["start"]})
    for row in rows(WORK / "split_boundary_review.tsv"):
        exact[int(row["span_bytes"]), row["raw_sha256"]].append(
            {"module": row["module"], "start": row["start"]})
    old_exact, old_combined = combined_dedupe_savings(exact, accepted, retained)
    if (old_exact != split["split_aware_exact_candidate_savings"] or
            old_combined != split["combined_candidate_savings"]):
        raise ValueError("context audit does not reproduce split accounting")
    _new_exact, new_combined = combined_dedupe_savings(
        exact, accepted + list(family_groups.values()), retained)
    review = ["# Conditional context/data structural leads only; no C match.",
              "context_sha256\tbody_bytes\tplacements\tmembers"]
    for (context, size, _masked, _start), family in sorted(family_groups.items()):
        review.append(f"{context}\t{size}\t{len(family['placements'])}\t" +
                      ";".join(f"{name}:0x{start:X}"
                               for name, start in family["placements"]))
    REVIEW.write_text("\n".join(review) + "\n", encoding="utf-8", newline="\n")
    summary = {
        "status": "context_translation_leads_only",
        "reference_module": REFERENCE,
        "compared_modules": len(compared),
        "context_pair_candidates": len(candidate_pairs),
        "rejected_call_target_pairs": invalid_pairs,
        "closed_context_pairs": len(closed),
        "dependency_closed_pairs": sum(bool(pending[key]) for key in closed),
        "context_families": len(family_groups),
        "placement_body_bytes": sum(item["body_bytes"] * len(item["placements"])
                                    for item in family_groups.values()),
        "previous_combined_candidate_savings": old_combined,
        "combined_candidate_savings": new_combined,
        "additional_candidate_savings": new_combined - old_combined,
        "conditional_candidate_bytes": retained_bytes - new_combined,
        "review_sha256": digest(REVIEW),
        "inventory_sha256": digest(INVENTORY),
        "split_sha256": digest(SPLIT),
        "shape_sha256": digest(SHAPE),
        "translation_sha256": digest(TRANSLATION),
        "ghidra_sha256": digest(GHIDRA),
        "module_catalogue_sha256": digest(MODULES),
        "code_catalogue_sha256": digest(CODE),
        "overall_percent": None,
        "bytematch_ready": False,
        "warning": ("Unique neighboring code shapes and independently corroborated "
                    "data anchors support conditional pairing only. Callees must "
                    "already be accepted or close in the same placement-paired "
                    "callgraph. Neither source equivalence nor a game-wide "
                    "unique-code denominator is qualified."),
    }
    OUTPUT.write_text(json.dumps(summary, indent=2) + "\n",
                      encoding="utf-8", newline="\n")
    return summary


def check_summary(summary: dict[str, object]) -> None:
    split = json.loads(SPLIT.read_text(encoding="utf-8"))
    if (summary["status"] != "context_translation_leads_only"
            or summary["reference_module"] != REFERENCE
            or summary["compared_modules"] != 19
            or not 0 <= summary["closed_context_pairs"] <=
            summary["context_pair_candidates"]
            or not 0 <= summary["dependency_closed_pairs"] <=
            summary["closed_context_pairs"]
            or not 0 <= summary["rejected_call_target_pairs"] <=
            summary["context_pair_candidates"]
            or summary["context_families"] < 0
            or summary["placement_body_bytes"] < 0
            or summary["previous_combined_candidate_savings"] !=
            split["combined_candidate_savings"]
            or summary["additional_candidate_savings"] !=
            summary["combined_candidate_savings"] -
            summary["previous_combined_candidate_savings"]
            or summary["conditional_candidate_bytes"] !=
            split["retained_candidate_interval_bytes"] -
            summary["combined_candidate_savings"]
            or not 0 <= summary["conditional_candidate_bytes"] <=
            split["conditional_candidate_bytes"]
            or len(summary["review_sha256"]) != 64
            or summary["inventory_sha256"] != digest(INVENTORY)
            or summary["split_sha256"] != digest(SPLIT)
            or summary["shape_sha256"] != digest(SHAPE)
            or summary["translation_sha256"] != digest(TRANSLATION)
            or summary["ghidra_sha256"] != digest(GHIDRA)
            or summary["module_catalogue_sha256"] != digest(MODULES)
            or summary["code_catalogue_sha256"] != digest(CODE)
            or summary["overall_percent"] is not None
            or summary["bytematch_ready"] is not False):
        raise ValueError("context translation snapshot is stale or overclaims")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument("--write", type=Path, metavar="PINNED_ISO")
    mode.add_argument("--check", action="store_true")
    args = parser.parse_args()
    summary = main_write(args.write) if args.write else json.loads(
        OUTPUT.read_text(encoding="utf-8"))
    check_summary(summary)
    print(f"context/data structural scenario: {summary['conditional_candidate_bytes']} "
          "candidate bytes; no qualified unique-code denominator")


if __name__ == "__main__":
    main()
