#!/usr/bin/env python3
"""Generate a scoped RAC5 progress snapshot from private gate receipts.

The public snapshot contains metadata, hashes and qualified C coverage only.
It is not an objdiff/ByteMatch report: level function boundaries and unique
shared-code accounting are not yet qualified.
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import defaultdict
from pathlib import Path

from boot_assembly import TEXT_SIZE
from boot_c_campaign import ACCEPTED_SOURCES, REPLACEMENTS, source_path
from level_program_gate import MEASURED_LOADS

ROOT = Path(__file__).resolve().parent.parent
OUTPUT = ROOT / "progress/status.json"
BOOT_GATE = ROOT / "build/boot-trial-gate/report.json"
LEVEL_GATE = ROOT / "build/level-program-gate/report.json"
LEVEL_C_GATE = ROOT / "build/level-c-gate/report.json"
CODE_CATALOGUE = ROOT / "config/levels/code_intervals.tsv"
MODULE_CATALOGUE = ROOT / "config/levels/modules.tsv"
PROFILE = ROOT / "config/boot/compiler_trial.json"
LEVEL_PROFILE = ROOT / "config/levels/compiler_trial.json"
FUNCTION_INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
GHIDRA_CROSSCHECK = ROOT / "config/levels/ghidra_crosscheck_summary.json"
TRANSLATION_FAMILIES = ROOT / "config/levels/translation_families_summary.json"
FLOW_RANGES = ROOT / "config/levels/flow_range_summary.json"
FULL_MODULE_FLOW = ROOT / "config/levels/full_module_flow_summary.json"
SPLIT_DEDUPE = ROOT / "config/levels/split_dedupe_summary.json"
TARGET = ROOT / "config/target.json"
ACCEPTED_SYMBOL = "MEMCARD_Busy__Fv"


def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def normalized_source_digest(path: Path) -> str:
    return hashlib.sha256(path.read_text(encoding="utf-8")
                          .replace("\r\n", "\n").encode("utf-8")).hexdigest()


def records(path: Path) -> list[dict[str, str]]:
    with path.open(encoding="utf-8", newline="") as file:
        return list(csv.DictReader((line for line in file if not line.startswith("#")),
                                   delimiter="\t"))


def public_evidence(boot: dict[str, object], level: dict[str, object],
                    level_c: dict[str, object]) -> dict[str, object]:
    if (boot.get("status") != "passed_boot_only"
            or boot.get("raw_load_and_header_exact") is not True
            or boot.get("whole_elf_exact") is not True
            or boot.get("counted_matches") != 1
            or boot.get("counted_bytes") != 16
            or boot.get("accepted_functions") != [ACCEPTED_SYMBOL]):
        raise ValueError("private boot gate has no qualifying single-function result")
    if (level.get("status") != "passed_assembly_only"
            or level.get("counted_matches") != 0
            or not isinstance(level.get("modules"), list)):
        raise ValueError("private level-program gate is incomplete")
    if (level_c.get("status") != "passed_two_shared_functions"
            or level_c.get("accepted_functions") !=
            ["func_00000100", "func_shared_zero_buffer"]
            or level_c.get("counted_matches") != 2
            or level_c.get("unique_body_bytes") != 80
            or level_c.get("matched_placement_bytes") != 1600
            or not isinstance(level_c.get("placements"), list)):
        raise ValueError("private shared-level C gate is incomplete")
    keys = ("module", "size", "sha256", "code_interval_bytes",
            "code_interval_sha256", "measured_base", "relocated_sha256",
            "missing_imports_resolved_to_zero", "counted_matches")
    checked_modules = []
    for row in level["modules"]:
        if not isinstance(row, dict) or any(key not in row for key in keys):
            raise ValueError("level gate receipt lacks measured fields")
        checked_modules.append({key: row[key] for key in keys})
    return {
        "boot": {key: boot[key] for key in
                 ("status", "raw_load_and_header_exact", "whole_elf_exact",
                  "profile", "boot_sha256", "raw_load_size", "raw_load_sha256",
                  "whole_elf_size", "whole_elf_sha256", "counted_matches",
                  "counted_bytes", "accepted_functions")},
        "level_gate_status": level["status"],
        "levels": checked_modules,
        "level_c": {key: level_c[key] for key in
                    ("status", "profile", "accepted_functions", "counted_matches",
                     "unique_body_bytes", "matched_placement_bytes", "placements",
                     "provisional_controls", "runtime_measured_placements")},
    }


def snapshot(evidence: dict[str, object]) -> dict[str, object]:
    target = json.loads(TARGET.read_text(encoding="utf-8"))
    profile = json.loads(PROFILE.read_text(encoding="utf-8"))
    level_profile = json.loads(LEVEL_PROFILE.read_text(encoding="utf-8"))
    boot = evidence["boot"]
    if (boot["status"] != "passed_boot_only"
            or boot["raw_load_and_header_exact"] is not True
            or boot["whole_elf_exact"] is not True
            or evidence["level_gate_status"] != "passed_assembly_only"
            or boot["profile"] != profile["id"] or boot["boot_sha256"] != target["boot_sha256"]
            or boot["whole_elf_sha256"] != target["boot_sha256"]
            or boot["whole_elf_size"] != target["boot_size"]
            or boot["raw_load_size"] != 809872
            or boot["raw_load_sha256"] !=
            "4f4fb8fe218317dbd7a2f65ca4e64934d743d03e673dbd75220937cfc6fd47fb"
            or boot["counted_matches"] != 1 or boot["counted_bytes"] != 16
            or boot["accepted_functions"] != [ACCEPTED_SYMBOL]
            or profile["status"] != "qualified_boot_only"
            or ACCEPTED_SOURCES != frozenset({"memcard_busy"})):
        raise ValueError("boot evidence differs from pinned qualified scope")
    accepted = next(item for item in REPLACEMENTS if item.name == "memcard_busy")
    source = source_path(accepted.name)
    if (normalized_source_digest(source) != accepted.source_sha256
            or accepted.end - accepted.start != 16):
        raise ValueError("accepted C source or boundary changed")
    level_c = evidence["level_c"]
    level_source = ROOT / level_profile["accepted"]["source"]
    additional = level_profile["additional_accepted"]
    additional_source = ROOT / additional["source"]
    if (level_c["status"] != "passed_two_shared_functions"
            or level_c["profile"] != level_profile["id"]
            or level_c["accepted_functions"] !=
            ["func_00000100", "func_shared_zero_buffer"]
            or level_c["counted_matches"] != 2
            or level_c["unique_body_bytes"] != 80
            or level_c["matched_placement_bytes"] != 1600
            or level_profile["status"] != "qualified_two_shared_functions_only"
            or level_profile["accepted"]["source"] !=
            "src/levels/shared/func_00000100.c"
            or normalized_source_digest(level_source) !=
            level_profile["accepted"]["source_sha256_lf"]
            or additional["source"] !=
            "src/levels/shared/func_shared_zero_buffer.c"
            or additional["body_bytes"] != 72
            or normalized_source_digest(additional_source) !=
            additional["source_sha256_lf"]):
        raise ValueError("accepted level C evidence differs from pinned scope")
    intervals = records(CODE_CATALOGUE)
    modules = records(MODULE_CATALOGUE)
    by_name = {Path(row["path"]).name: row for row in modules}
    if (len(intervals) != 21 or len(by_name) != 21
            or {row["module"] for row in intervals} != set(by_name)):
        raise ValueError("level placement catalogues disagree")
    rows = []
    groups: dict[str, list[str]] = defaultdict(list)
    for row in intervals:
        module = row["module"]
        size = int(row["interval_bytes"])
        if (int(row["start"], 16) != 0x80
                or int(row["end_exclusive"], 16) - 0x80 != size
                or size <= 0 or size % 4):
            raise ValueError(f"invalid candidate code interval: {module}")
        groups[row["sha256"]].append(module)
        rows.append({"module": module, "module_sha256": by_name[module]["sha256"],
                     "candidate_code_bytes_by_placement": size,
                     "candidate_code_sha256": row["sha256"],
                     "accepted_c_bytes": 80 if module.startswith("LEVEL_") else 0})
    measured = {row["module"]: row for row in evidence["levels"]}
    if set(measured) != set(MEASURED_LOADS) or len(evidence["levels"]) != len(measured):
        raise ValueError("level gate receipt lacks the two measured placements")
    for module, row in measured.items():
        catalogue = next(item for item in rows if item["module"] == module)
        base, loaded_sha, missing = MEASURED_LOADS[module]
        if (row["size"] != int(by_name[module]["size"])
                or row["sha256"] != catalogue["module_sha256"]
                or row["code_interval_bytes"] != catalogue["candidate_code_bytes_by_placement"]
                or row["code_interval_sha256"] != catalogue["candidate_code_sha256"]
                or row["measured_base"] != f"0x{base:08X}"
                or row["relocated_sha256"] != loaded_sha
                or tuple(row["missing_imports_resolved_to_zero"]) != missing
                or row["counted_matches"] != 0):
            raise ValueError(f"level gate evidence differs from pinned placement: {module}")
    duplicates = [names for names in groups.values() if len(names) > 1]
    inventory = json.loads(FUNCTION_INVENTORY.read_text(encoding="utf-8"))
    crosscheck = json.loads(GHIDRA_CROSSCHECK.read_text(encoding="utf-8"))
    translation = json.loads(TRANSLATION_FAMILIES.read_text(encoding="utf-8"))
    flow = json.loads(FLOW_RANGES.read_text(encoding="utf-8"))
    full_flow = json.loads(FULL_MODULE_FLOW.read_text(encoding="utf-8"))
    split = json.loads(SPLIT_DEDUPE.read_text(encoding="utf-8"))
    if (inventory["status"] != "candidate_inventory_only"
            or inventory["module_count"] != 21
            or inventory["candidate_code_bytes_by_placement"] !=
            sum(row["candidate_code_bytes_by_placement"] for row in rows)
            or inventory["overall_percent"] is not None
            or inventory["bytematch_ready"] is not False):
        raise ValueError("level function inventory is not a qualified denominator")
    if (crosscheck["status"] != "independent_candidate_crosscheck"
            or crosscheck["inventory_sha256"] != digest(FUNCTION_INVENTORY)
            or crosscheck["module_count"] != 21
            or crosscheck["overall_percent"] is not None
            or crosscheck["bytematch_ready"] is not False
            or translation["status"] != "structural_translation_leads"
            or translation["inventory_sha256"] != digest(FUNCTION_INVENTORY)
            or translation["ghidra_crosscheck_sha256"] != digest(GHIDRA_CROSSCHECK)
            or translation["module_count"] != 21
            or translation["overall_percent"] is not None
            or translation["bytematch_ready"] is not False):
        raise ValueError("independent boundaries or shared-code leads are stale")
    if (flow["status"] != "flow_range_candidates_only"
            or flow["inventory_sha256"] != digest(FUNCTION_INVENTORY)
            or flow["crosscheck_sha256"] != digest(GHIDRA_CROSSCHECK)
            or flow["module_count"] != 21
            or flow["overall_percent"] is not None
            or flow["bytematch_ready"] is not False):
        raise ValueError("Ghidra flow-range review is stale")
    if (full_flow["status"] != "full_module_flow_leads_only"
            or full_flow["flow_range_sha256"] != digest(FLOW_RANGES)
            or full_flow["module_catalogue_sha256"] != digest(MODULE_CATALOGUE)
            or full_flow["code_catalogue_sha256"] != digest(CODE_CATALOGUE)
            or full_flow["module_count"] != 21
            or full_flow["candidate_entries"] != flow["candidate_internal_block_leads"]
            or full_flow["overall_percent"] is not None
            or full_flow["bytematch_ready"] is not False):
        raise ValueError("full-module flow review is stale or overclaims")
    if (split["status"] != "split_structural_leads_only"
            or split["inventory_sha256"] != digest(FUNCTION_INVENTORY)
            or split["translation_sha256"] != digest(TRANSLATION_FAMILIES)
            or split["flow_sha256"] != digest(FLOW_RANGES)
            or split["full_flow_sha256"] != digest(FULL_MODULE_FLOW)
            or split["module_count"] != 21
            or split["previous_conditional_bytes"] !=
            translation["template_lead_upper_bound_bytes"]
            or split["overall_percent"] is not None
            or split["bytematch_ready"] is not False):
        raise ValueError("split-body dedupe review is stale or overclaims")
    level_placements = {row["module"]: row for row in level_c["placements"]}
    level_names = {name for name in by_name if name.startswith("LEVEL_")}
    if (set(level_placements) != level_names
            or set(additional["placements"]) != level_names
            or len(level_c["placements"]) != len(level_names)
            or level_c["provisional_controls"] != ["LEVEL_01.REL:0x190:24",
                                                     "FRONTEND.REL:0x2CD8:12"]
            or level_c["runtime_measured_placements"] !=
            ["FRONTEND.REL", "LEVEL_01.REL"]):
        raise ValueError("shared C placement list differs from pinned levels")
    for module, row in level_placements.items():
        if (row["sha256"] != by_name[module]["sha256"]
                or row["size"] != int(by_name[module]["size"])
                or row["body_offset"] != 0x100 or row["body_bytes"] != 8
                or row["shared_buffer_offset"] !=
                additional["placements"][module]
                or row["shared_buffer_bytes"] != 72):
            raise ValueError(f"shared C placement differs from pinned module: {module}")
    return {
        "format": "rac5-scoped-progress-v1",
        "target": target["serial"],
        "status": "partial_verified",
        "overall_percent": None,
        "bytematch_objdiff_ready": False,
        "boot": {"code_bytes": TEXT_SIZE, "accepted_c_bytes": 16,
                 "accepted_functions": [ACCEPTED_SYMBOL],
                 "scoped_code_percent": round(100 * 16 / TEXT_SIZE, 8)},
        "levels": {"placements": rows,
                   "candidate_code_bytes_by_placement": sum(
                       row["candidate_code_bytes_by_placement"] for row in rows),
                   "full_program_gates": sorted(measured),
                   "accepted_shared_functions": ["func_00000100",
                                                 "func_shared_zero_buffer"],
                   "accepted_c_bytes_per_unique_source": 80,
                   "accepted_c_bytes_by_placement": 1600,
                   "known_identical_full_intervals": duplicates},
        "function_inventory": {
            "candidate_entry_intervals": inventory["entry_intervals"],
            "bounded_candidate_intervals":
                inventory["boundary_status_counts"]["bounded_candidate"],
            "unresolved_or_pointer_only_intervals": inventory["entry_intervals"] -
                inventory["boundary_status_counts"]["bounded_candidate"],
            "bounded_candidate_body_bytes_by_placement":
                inventory["bounded_candidate_body_bytes_by_placement"],
            "raw_exact_distinct_candidate_bytes":
                inventory["raw_exact_distinct_candidate_bytes"],
            "relocation_masked_conservative_lead_bytes":
                inventory["relocation_masked_conservative_lead_bytes"],
            "exact_byte_dedupe_upper_bound":
                inventory["exact_byte_dedupe_upper_bound"],
            "identical_full_interval_groups":
                inventory["identical_full_interval_groups"],
            "qualified_unique_denominator": None,
        },
        "independent_boundary_crosscheck": {
            "corroborated_candidate_boundaries": crosscheck["corroborated_boundaries"],
            "corroborated_body_bytes_by_placement":
                crosscheck["corroborated_body_bytes_by_placement"],
            "ghidra_only_entries": sum(row["ghidra_only_entries"]
                                       for row in crosscheck["modules"]),
            "static_only_entries": sum(row["static_only_entries"]
                                       for row in crosscheck["modules"]),
            "no_return_cross_limit_or_noncontiguous": sum(
                row["no_return_cross_limit_or_noncontiguous"]
                for row in crosscheck["modules"]),
        },
        "structural_shared_code_leads": {
            "families": translation["group_count"],
            "placement_body_bytes": translation["placement_body_bytes"],
            "template_body_bytes": translation["template_body_bytes"],
            "local_callgraph_resolved_families":
                translation["callgraph_resolved_groups"],
            "candidate_upper_bound_after_translation":
                translation["template_lead_upper_bound_bytes"],
            "qualified_unique_denominator": None,
        },
        "flow_range_review": {
            "ghidra_body_bytes_by_placement": flow["ghidra_body_bytes_by_placement"],
            "possible_internal_block_entries": flow["candidate_internal_block_leads"],
            "with_same_body_direct_edge":
                flow["internal_block_with_same_body_direct_edge"],
            "qualified_unique_denominator": None,
        },
        "full_module_flow_review": {
            "code_only_inside_body_candidates": full_flow["candidate_entries"],
            "categories": full_flow["categories"],
            "ignored_noncode_auto_functions":
                full_flow["ignored_noncode_auto_functions"],
            "qualified_unique_denominator": None,
        },
        "split_boundary_review": {
            "parent_candidate_intervals": split["split_parent_intervals"],
            "corroborated_segments": split["split_segments"],
            "selected_span_bytes": split["selected_span_bytes"],
            "uncollapsed_parent_bytes": split["residual_parent_bytes"],
            "closed_structural_groups": split["closed_split_groups"],
            "newly_closed_static_groups": split["newly_closed_static_groups"],
            "conditional_candidate_bytes": split["conditional_candidate_bytes"],
            "qualified_unique_denominator": None,
        },
        "remaining_for_gamewide_report": [
            "review Ghidra-only and static-only entries and unbounded function spans",
            "validate masked code/data relocation target equivalence beyond the structural leads",
            "complete-program C gates for accepted level functions",
        ],
        "evidence": evidence,
        "public_inputs_sha256": {
            "target": digest(TARGET), "compiler_profile": digest(PROFILE),
            "level_code_catalogue": digest(CODE_CATALOGUE),
            "level_module_catalogue": digest(MODULE_CATALOGUE),
            "accepted_c_source_lf": accepted.source_sha256,
            "level_compiler_profile": digest(LEVEL_PROFILE),
            "accepted_level_c_source_lf": level_profile["accepted"]["source_sha256_lf"],
            "accepted_shared_buffer_c_source_lf":
                level_profile["additional_accepted"]["source_sha256_lf"],
            "level_function_inventory": digest(FUNCTION_INVENTORY),
            "level_ghidra_crosscheck": digest(GHIDRA_CROSSCHECK),
            "level_translation_families": digest(TRANSLATION_FAMILIES),
            "level_flow_ranges": digest(FLOW_RANGES),
            "level_full_module_flow": digest(FULL_MODULE_FLOW),
            "level_split_dedupe": digest(SPLIT_DEDUPE),
        },
    }


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument("--write", action="store_true", help="use private local gate receipts")
    mode.add_argument("--check", action="store_true", help="check committed snapshot metadata")
    args = parser.parse_args()
    if args.write:
        boot = json.loads(BOOT_GATE.read_text(encoding="utf-8"))
        level = json.loads(LEVEL_GATE.read_text(encoding="utf-8"))
        level_c = json.loads(LEVEL_C_GATE.read_text(encoding="utf-8"))
        evidence = public_evidence(boot, level, level_c)
    else:
        current = json.loads(OUTPUT.read_text(encoding="utf-8"))
        evidence = current["evidence"]
    content = json.dumps(snapshot(evidence), indent=2) + "\n"
    if args.write:
        OUTPUT.write_text(content, encoding="utf-8", newline="\n")
    elif OUTPUT.read_text(encoding="utf-8") != content:
        raise ValueError("progress snapshot is stale; rerun private gates and --write")
    print("scoped progress: boot 16/498900 C bytes; two shared level C "
          "functions (8+72 bytes) at 20 placements; no game-wide percentage")


if __name__ == "__main__":
    main()
