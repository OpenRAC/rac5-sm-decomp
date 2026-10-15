#!/usr/bin/env python3
"""Review Ghidra-corroborated zero-gap splits of oversized level intervals.

This is a conditional code-shape dedupe audit, not an accepted function
catalogue or a ByteMatch denominator. Detailed rows remain under ignored build/.
"""

from __future__ import annotations

import argparse
import bisect
import hashlib
import json
import struct
from collections import Counter, defaultdict
from pathlib import Path

from disc import IsoDisc, verify_disc
from level_function_inventory import masked_body, relocations
from level_ghidra_crosscheck import rows
from level_translation_families import (close_callgraph, combined_dedupe_savings,
                                        digest, ghidra_confirmed,
                                        local_code_references, local_references,
                                        lows_follow_translation, uniform_translation)
from rel import HEADER, iter_packed_relocations

ROOT = Path(__file__).resolve().parent.parent
WORK = ROOT / "build/level-functions"
SUMMARY = ROOT / "config/levels/split_dedupe_summary.json"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
TRANSLATION = ROOT / "config/levels/translation_families_summary.json"
FLOW = ROOT / "config/levels/flow_range_summary.json"
FULL_FLOW = ROOT / "config/levels/full_module_flow_summary.json"
CODE = ROOT / "config/levels/code_intervals.tsv"
MODULES = ROOT / "config/levels/modules.tsv"
TARGET = ROOT / "config/target.json"
JR_RA = 0x03E00008


def zero_without_relocation(data: bytes, left: int, right: int,
                            relocation_sites: list[int]) -> bool:
    return (left <= right and not any(data[left:right]) and
            bisect.bisect_left(relocation_sites, left) ==
            bisect.bisect_left(relocation_sites, right))


def split_parent(row: dict[str, str], code_functions: dict[int, dict[str, str]],
                 code_ranges: dict[int, dict[str, str]],
                 full_ranges: dict[int, dict[str, str]],
                 entries: list[int], data: bytes,
                 relocation_sites: list[int]) -> list[tuple[int, int, int]] | None:
    """Select only corroborated returning spans; leave other parent bytes unique."""
    if row["status"] != "bounded_candidate" or not row["body_end"]:
        return None
    start, end = int(row["start"], 16), int(row["body_end"], 16)
    if ghidra_confirmed(row, code_functions):
        return None
    selected = entries[bisect.bisect_left(entries, start):bisect.bisect_left(entries, end)]
    if not selected:
        return None
    spans = []
    last = start
    for entry in selected:
        function = code_ranges[entry]
        full = full_ranges.get(entry)
        if full is None or any(full.get(key) != function.get(key)
                               for key in ("min", "max", "body_bytes", "ranges")):
            continue
        maximum = int(function["max"], 16) + 1
        if (int(function["min"], 16) != entry or maximum > end or
                maximum - entry < 8 or entry < last or
                struct.unpack_from("<I", data, maximum - 8)[0] != JR_RA):
            continue
        body_ranges = []
        valid = True
        for part in function["ranges"].split(";"):
            left, right = (int(value, 16) for value in part.split("-"))
            if left % 4 or (right + 1) % 4 or left > right:
                valid = False
                break
            body_ranges.append((left, right + 1))
        if (not valid or not body_ranges or body_ranges[0][0] != entry or
                body_ranges[-1][1] != maximum or
                sum(right - left for left, right in body_ranges) !=
                int(function["body_bytes"])):
            continue
        for (_left, left_end), (right_start, _right_end) in zip(body_ranges,
                                                               body_ranges[1:]):
            if not zero_without_relocation(data, left_end, right_start,
                                           relocation_sites):
                valid = False
                break
        if not valid:
            continue
        spans.append((entry, maximum, int(function["body_bytes"])))
        last = maximum
    return spans or None


def translated_family(group: list[dict], size: int, data: dict[str, bytes],
                      fixups: dict[str, list], sites: dict[str, list[int]],
                      code_ends: dict[str, int], known: dict) -> tuple[dict, set] | None:
    references = []
    calls = []
    for row in group:
        module, start = row["module"], int(row["start"], 16)
        local = fixups[module][bisect.bisect_left(sites[module], start):
                               bisect.bisect_left(sites[module], start + size)]
        code = local_code_references(data[module], start, start + size,
                                     local, known, module)
        if code is None:
            return None
        data_fixups = [item for item in local if item.kind != 2]
        ref = local_references(data[module], start, start + size,
                               code_ends[module], data_fixups,
                               [item.site for item in data_fixups])
        if ref is None:
            return None
        calls.append(code)
        references.append(ref)
    base_hi, base_lo = references[0]
    if (any((shift := uniform_translation(base_hi, hi)) is None or
            not lows_follow_translation(base_lo, low, shift)
            for hi, low in references) or
            any(code != calls[0] for code in calls)):
        return None
    item = {"body_bytes": size,
            "placements": [(row["module"], int(row["start"], 16)) for row in group]}
    targets = {value[1] for value in calls[0].values() if value[0] == "callee"}
    return item, targets


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument("--write", type=Path, metavar="PINNED_ISO")
    mode.add_argument("--check", action="store_true")
    parser.add_argument("--ghidra-dir", type=Path,
                        help="private full-module Ghidra metadata directory")
    args = parser.parse_args()
    inventory = json.loads(INVENTORY.read_text(encoding="utf-8"))
    translation = json.loads(TRANSLATION.read_text(encoding="utf-8"))
    flow = json.loads(FLOW.read_text(encoding="utf-8"))
    full_flow = json.loads(FULL_FLOW.read_text(encoding="utf-8"))
    modules = sorted(row["module"] for row in inventory["modules"])
    if (len(modules) != 21 or translation["module_count"] != 21 or
            flow["module_count"] != 21 or full_flow["module_count"] != 21):
        raise ValueError("pinned level inventories are missing")
    if args.check:
        summary = json.loads(SUMMARY.read_text(encoding="utf-8"))
        if (summary["status"] != "split_structural_leads_only" or
                summary["module_count"] != 21 or
                summary["inventory_sha256"] != digest(INVENTORY) or
                summary["translation_sha256"] != digest(TRANSLATION) or
                summary["flow_sha256"] != digest(FLOW) or
                summary["full_flow_sha256"] != digest(FULL_FLOW) or
                summary["code_catalogue_sha256"] != digest(CODE) or
                summary["module_catalogue_sha256"] != digest(MODULES) or
                summary["previous_conditional_bytes"] !=
                translation["template_lead_upper_bound_bytes"] or
                summary["conditional_candidate_bytes"] !=
                summary["retained_candidate_interval_bytes"] -
                summary["combined_candidate_savings"] or
                summary["additional_conditional_savings"] !=
                summary["previous_conditional_bytes"] -
                summary["conditional_candidate_bytes"] or
                summary["split_parent_intervals"] != sum(
                    row["split_parent_intervals"] for row in summary["modules"]) or
                summary["split_segments"] != sum(
                    row["split_segments"] for row in summary["modules"]) or
                summary["split_parent_placement_bytes"] != sum(
                    row["parent_placement_bytes"] for row in summary["modules"]) or
                summary["selected_span_bytes"] != sum(
                    row["selected_span_bytes"] for row in summary["modules"]) or
                summary["residual_parent_bytes"] != sum(
                    row["residual_parent_bytes"] for row in summary["modules"]) or
                summary["split_parent_placement_bytes"] !=
                summary["selected_span_bytes"] + summary["residual_parent_bytes"] or
                not 0 <= summary["closed_split_groups"] <=
                summary["candidate_masked_split_groups"] or
                summary["newly_closed_static_groups"] < 0 or
                summary["overall_percent"] is not None or
                summary["bytematch_ready"] is not False):
            raise ValueError("split-body candidate snapshot is stale or overclaims")
        print(f"split-body candidate metadata current: {summary['split_parent_intervals']} placements")
        return
    if args.ghidra_dir is None:
        parser.error("--ghidra-dir is required with --write")
    target = json.loads(TARGET.read_text(encoding="utf-8"))
    code_ends = {row["module"]: int(row["end_exclusive"], 16) for row in rows(CODE)}
    module_rows = {Path(row["path"]).name: row for row in rows(MODULES)}
    if set(code_ends) != set(modules) or set(module_rows) != set(modules):
        raise ValueError("pinned module catalogues differ")
    data = {}
    with IsoDisc(args.write) as disc:
        verify_disc(disc, target)
        for module in modules:
            data[module] = disc.file_bytes("LVL/" + module)
            if hashlib.sha256(data[module]).hexdigest() != module_rows[module]["sha256"]:
                raise ValueError(f"{module} differs from pinned REL")
    fixups, sites, exact_original, exact_split = {}, {}, defaultdict(list), defaultdict(list)
    known, split_groups, static_groups = {}, defaultdict(list), defaultdict(list)
    resolved_parents = set()
    detail = ["# Split code-shape leads only; private metadata, no accepted function claims.",
              "module\tparent_start\tstart\tend\tspan_bytes\tghidra_body_bytes\t"
              "zero_gap_bytes\traw_sha256\tmasked_sha256"]
    module_results = []
    for module in modules:
        code_functions_path = WORK / f"{module}.code.bin.ghidra.tsv"
        range_path = WORK / "ranges" / f"{module}.code.bin.ghidra.tsv"
        full_path = args.ghidra_dir / f"{module}.ghidra.tsv"
        expected_range = next(row for row in flow["modules"] if row["module"] == module)
        expected_full = next(row for row in full_flow["modules"] if row["module"] == module)
        if (digest(range_path) != expected_range["ranges_export_sha256"] or
                digest(full_path) != expected_full["full_export_sha256"]):
            raise ValueError(f"{module} private Ghidra export is stale")
        code_functions = {int(row["entry"], 16): row for row in rows(code_functions_path)}
        ranges = {int(row["entry"], 16): row for row in rows(range_path)}
        full = {int(row["entry"], 16): row for row in rows(full_path)}
        entries = sorted(code_functions)
        indexed, _pointers = relocations(data[module], code_ends[module])
        relocation_sites = sorted(indexed)
        header = HEADER.unpack_from(data[module])
        fixups[module] = list(iter_packed_relocations(data[module], header[13], header[1]))
        sites[module] = [item.site for item in fixups[module]]
        static = rows(WORK / f"{module}.tsv")
        parents, segments, placement_bytes, selected_bytes = 0, 0, 0, 0
        for row in static:
            if row["status"] == "bounded_candidate":
                exact_original[(int(row["body_bytes"]), row["raw_sha256"])].append(
                    {**row, "module": module})
            if (row["status"] in ("bounded_candidate", "pointer_only", "nonzero_tail")
                    and ghidra_confirmed(row, code_functions)):
                key = (int(row["body_bytes"]), row["masked_lead_sha256"])
                known[(module, int(row["start"], 16))] = key
                static_groups[key].append({**row, "module": module})
            spans = split_parent(row, code_functions, ranges, full, entries,
                                 data[module], relocation_sites)
            if spans is None:
                continue
            parent_start = int(row["start"], 16)
            resolved_parents.add((module, parent_start))
            parents += 1
            segments += len(spans)
            placement_bytes += int(row["body_bytes"])
            selected_bytes += sum(end - start for start, end, _body in spans)
            for start, end, body_bytes in spans:
                raw = data[module][start:end]
                fingerprint, _relocations = masked_body(raw, start, indexed,
                                                         relocation_sites)
                member = {"module": module, "start": f"0x{start:08X}",
                          "span_bytes": end - start,
                          "raw_sha256": hashlib.sha256(raw).hexdigest()}
                # A split body and an independently bounded static body can
                # have the same masked shape without proven target identity.
                key = (end - start, fingerprint, "split")
                split_groups[key].append(member)
                exact_split[(end - start, member["raw_sha256"])].append(member)
                known[(module, start)] = key
                detail.append(f"{module}\t0x{parent_start:08X}\t0x{start:08X}\t"
                              f"0x{end:08X}\t{end-start}\t{body_bytes}\t"
                              f"{end-start-body_bytes}\t{member['raw_sha256']}\t{fingerprint}")
        module_results.append({"module": module, "split_parent_intervals": parents,
                               "split_segments": segments,
                               "parent_placement_bytes": placement_bytes,
                               "selected_span_bytes": selected_bytes,
                               "residual_parent_bytes": placement_bytes - selected_bytes})
    accepted_previous = []
    accepted_keys = set()
    for row in rows(WORK / "translation_review_leads.tsv"):
        size = int(row["body_bytes"])
        accepted_keys.add((size, row["fingerprint"]))
        placements = [(module, int(at, 16))
                      for item in row["members_and_data_deltas"].split(";")
                      for module, at, _delta in [item.split(":")]]
        accepted_previous.append({"body_bytes": size, "placements": placements})
    if len(accepted_previous) != translation["group_count"]:
        raise ValueError("private translation worklist differs from public summary")
    pending = {}
    exact_split_seeds = set()
    rejection = Counter()
    for key, group in split_groups.items():
        size = key[0]
        if len(group) < 2:
            continue
        if len({row["module"] for row in group}) != len(group):
            rejection["split_repeated_module"] += 1
            continue
        if len({row["raw_sha256"] for row in group}) == 1:
            exact_split_seeds.add(key)
        candidate = translated_family(group, size, data, fixups, sites,
                                      code_ends, known)
        if candidate is None:
            rejection["split_unresolved_references"] += 1
        else:
            pending[key] = candidate
    for key, group in static_groups.items():
        if key in accepted_keys or len(group) < 2:
            continue
        if len({row["module"] for row in group}) != len(group):
            rejection["static_repeated_module"] += 1
            continue
        candidate = translated_family(group, key[0], data, fixups, sites,
                                      code_ends, known)
        if candidate is None:
            rejection["static_unresolved_references"] += 1
        else:
            pending[key] = candidate
    closed = close_callgraph(pending, accepted_keys | exact_split_seeds)
    closed_split = {key for key in closed if len(key) == 3}
    closed_static = closed - closed_split
    accepted_new = [pending[key][0] for key in sorted(closed)]
    exact_replaced = defaultdict(list)
    for key, group in exact_original.items():
        exact_replaced[key].extend(
            row for row in group
            if (row["module"], int(row["start"], 16)) not in resolved_parents)
    for key, group in exact_split.items():
        exact_replaced[key].extend(group)
    retained = set(modules) - {name for group in inventory["identical_full_interval_groups"]
                               for name in group[1:]}
    old_exact, old_combined = combined_dedupe_savings(
        exact_original, accepted_previous, retained)
    new_exact, new_combined = combined_dedupe_savings(
        exact_replaced, accepted_previous + accepted_new, retained)
    interval_bytes = sum(int(row["candidate_code_bytes"]) for row in inventory["modules"]
                         if row["module"] in retained)
    if (interval_bytes - old_exact != inventory["exact_byte_dedupe_upper_bound"] or
            interval_bytes - old_combined != translation["template_lead_upper_bound_bytes"]):
        raise ValueError("split audit does not reproduce existing candidate accounting")
    review_path = WORK / "split_boundary_review.tsv"
    review_path.write_text("\n".join(detail) + "\n", encoding="utf-8", newline="\n")
    summary = {
        "status": "split_structural_leads_only",
        "module_count": len(modules),
        "split_parent_intervals": sum(row["split_parent_intervals"] for row in module_results),
        "split_segments": sum(row["split_segments"] for row in module_results),
        "split_parent_placement_bytes": sum(row["parent_placement_bytes"]
                                            for row in module_results),
        "selected_span_bytes": sum(row["selected_span_bytes"] for row in module_results),
        "residual_parent_bytes": sum(row["residual_parent_bytes"]
                                     for row in module_results),
        "candidate_masked_split_groups": sum(len(group) > 1 for group in split_groups.values()),
        "closed_split_groups": len(closed_split),
        "newly_closed_static_groups": len(closed_static),
        "raw_identical_split_target_seeds": len(exact_split_seeds),
        "rejection_counts": dict(sorted(rejection.items())),
        "retained_candidate_interval_bytes": interval_bytes,
        "previous_exact_candidate_savings": old_exact,
        "split_aware_exact_candidate_savings": new_exact,
        "previous_combined_candidate_savings": old_combined,
        "combined_candidate_savings": new_combined,
        "previous_conditional_bytes": interval_bytes - old_combined,
        "conditional_candidate_bytes": interval_bytes - new_combined,
        "additional_conditional_savings": new_combined - old_combined,
        "inventory_sha256": digest(INVENTORY),
        "translation_sha256": digest(TRANSLATION),
        "flow_sha256": digest(FLOW),
        "full_flow_sha256": digest(FULL_FLOW),
        "code_catalogue_sha256": digest(CODE),
        "module_catalogue_sha256": digest(MODULES),
        "overall_percent": None, "bytematch_ready": False,
        "warning": "Selected Ghidra spans pass independent return and internal zero-gap checks. Unselected parent bytes remain unique. All shared-code links remain conditional review leads, not accepted retail function boundaries or a progress denominator.",
        "modules": module_results,
    }
    SUMMARY.write_text(json.dumps(summary, indent=2) + "\n",
                       encoding="utf-8", newline="\n")
    print(f"{summary['split_parent_intervals']} corroborated split intervals, "
          f"{summary['closed_split_groups']} closed segment groups; "
          "no game-wide percentage")


if __name__ == "__main__":
    main()
