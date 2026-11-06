#!/usr/bin/env python3
"""Qualify reviewed source-role families across pinned USA level placements.

Only families explicitly selected in the public specification are considered.
The private pass checks exact C controls, call contexts, data targets and local
callees. It does not create a game-wide function denominator or a C match.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import struct
from collections import Counter, defaultdict
from pathlib import Path

from disc import IsoDisc, verify_disc
from level_flow_ranges import digest
from level_function_inventory import masked_body, relocations
from level_ghidra_crosscheck import rows
from rel import HEADER, packed_relocations_by_site

ROOT = Path(__file__).resolve().parent.parent
WORK = ROOT / "build/level-functions"
TARGET = ROOT / "config/target.json"
MODULES = ROOT / "config/levels/modules.tsv"
CODE = ROOT / "config/levels/code_intervals.tsv"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
FULL_FLOW = ROOT / "config/levels/full_module_flow_summary.json"
CALLED = ROOT / "config/levels/called_boundary_witnesses.tsv"
BODIES = ROOT / "config/levels/bodies.tsv"
SOURCES = ROOT / "config/levels/body_sources.tsv"
SPECS = ROOT / "config/levels/family_identity_specs.tsv"
CONTROLS = ROOT / "config/levels/family_identity_controls.tsv"
TABLE = ROOT / "config/levels/reviewed_family_placements.tsv"
SUMMARY = ROOT / "config/levels/family_identity_summary.json"
PRIVATE = WORK / "family_identity_review.json"
WINDOW = 64
FIELDS = ("family_id", "module", "start", "end_exclusive", "body_bytes",
          "boundary_evidence", "masked_sha256")


def normalized_control(text: str) -> str:
    """Keep the roles and order of each external symbol while removing offsets."""
    mapping: dict[str, str] = {}
    counts: Counter[str] = Counter()

    def replace(match: re.Match[str]) -> str:
        symbol = match.group(0)
        if symbol not in mapping:
            prefix = symbol.split("_", 1)[0]
            counts[prefix] += 1
            mapping[symbol] = f"{prefix}_{counts[prefix]}"
        return mapping[symbol]

    return re.sub(r"\b(?:D|func)_[0-9A-Fa-f]+\b", replace, text)


def common_unique_contexts(per_member: list[set[str]]) -> set[str]:
    if not per_member:
        return set()
    return set.intersection(*per_member)


def data_policy(mode: str, members: list[dict[int, tuple[str, bool, int]]]) -> bool:
    """Require stable target content and mode-specific independent anchors."""
    if mode == "no_local_data":
        return bool(members) and all(not member for member in members)
    if not members or not members[0]:
        return False
    sites = set(members[0])
    if any(set(member) != sites for member in members):
        return False
    for site in sites:
        if len({member[site][0] for member in members}) != 1:
            return False
    if mode == "unique_data_window":
        return all(all(member[site][1] for site in sites) for member in members)
    if mode == "paired_target_offsets":
        return (len(sites) >= 2
                and all(any(member[site][1] for site in sites) for member in members)
                and all(len({member[site][2] for member in members}) == 1
                        for site in sites))
    raise ValueError(f"unknown family data policy: {mode}")


def module_facts(data: bytes, code_end: int, inventory: dict[int, dict],
                 accepted: dict[tuple[str, int], dict], module: str,
                 ghidra: dict[int, dict]) -> dict:
    head = HEADER.unpack_from(data)
    packed = packed_relocations_by_site(data, head[13], head[1])
    indexed, _ = relocations(data, code_end)
    indexed_sites = sorted(indexed)
    shape_counts = Counter(row["masked_lead_sha256"] for row in inventory.values())
    caller_contexts: dict[int, set[str]] = defaultdict(set)
    context_counts: Counter[str] = Counter()
    for site, info in indexed.items():
        if info[:2] != ("local", 2):
            continue
        word = struct.unpack_from("<I", data, site)[0]
        if word >> 26 != 3:
            continue
        target = (word & 0x03FFFFFF) << 2
        left, right = site - 28, site + 36
        if left < 0x80 or right > code_end:
            continue
        fingerprint, _ = masked_body(data[left:right], left, indexed,
                                     indexed_sites)
        caller_contexts[target].add(fingerprint)
        context_counts[fingerprint] += 1
    return {"data": data, "packed": packed, "indexed": indexed,
            "indexed_sites": indexed_sites, "shape_counts": shape_counts,
            "caller_contexts": caller_contexts,
            "context_counts": context_counts, "inventory": inventory,
            "accepted": accepted, "module": module, "ghidra": ghidra,
            "code_end": code_end}


def member_roles(facts: dict, start: int, end: int) -> tuple[
        dict[int, tuple[str, bool, int]], dict[int, tuple[int, str]]]:
    data = facts["data"]
    inventory = facts["inventory"]
    data_roles = {}
    code_roles = {}
    paired_lows = set()
    local = [fixup for fixup in facts["packed"] if start <= fixup.site < end]
    for fixup in local:
        relative = fixup.site - start
        if fixup.kind == 1:
            if fixup.low_site is None or not start <= fixup.low_site < end:
                raise ValueError("HI16 data target has no paired low inside body")
            high = struct.unpack_from("<I", data, fixup.site)[0] & 0xFFFF
            low = struct.unpack_from("<I", data, fixup.low_site)[0] & 0xFFFF
            low -= 0x10000 if low & 0x8000 else 0
            target = (high << 16) + low
            if target < 0 or target + WINDOW > len(data):
                raise ValueError("data target window escapes pinned module")
            window = data[target:target + WINDOW]
            unique = (data.find(window, 0, target) < 0
                      and data.find(window, target + 1) < 0)
            data_roles[relative] = (hashlib.sha256(window).hexdigest(),
                                    unique, target - start)
            paired_lows.add(fixup.low_site)
        elif fixup.kind == 2:
            word = struct.unpack_from("<I", data, fixup.site)[0]
            if word >> 26 not in (2, 3):
                raise ValueError("local J26 fixup is not an address jump")
            target = (word & 0x03FFFFFF) << 2
            callee = inventory.get(target)
            if callee is None or not callee["body_end"]:
                raise ValueError("local callee has no bounded entry")
            shape = callee["masked_lead_sha256"]
            if facts["shape_counts"][shape] != 1:
                raise ValueError("local callee role repeats in one module")
            ghidra = facts["ghidra"].get(target)
            exact_ghidra = bool(ghidra and int(ghidra["min"], 16) == target
                                and int(ghidra["max"], 16) + 1
                                == int(callee["body_end"], 16)
                                and int(ghidra["body_bytes"]) == int(callee["body_bytes"]))
            accepted = facts["accepted"].get((facts["module"], target))
            if not exact_ghidra and not (accepted and int(accepted["size"])
                                          == int(callee["body_bytes"])):
                raise ValueError("local callee has no independent boundary witness")
            code_roles[relative] = (int(callee["body_bytes"]), shape)
        elif fixup.kind == 3:
            raise ValueError("local 32-bit pointer role is not qualified")
        elif fixup.kind != 0:
            raise ValueError("unknown local relocation kind")
    if any(fixup.kind == 0 and fixup.site not in paired_lows for fixup in local):
        raise ValueError("unpaired local low target is not qualified")
    return data_roles, code_roles


def generate(image: Path) -> tuple[list[dict[str, str]], dict]:
    specs = rows(SPECS)
    controls = rows(CONTROLS)
    if len({row["family_id"] for row in specs}) != len(specs):
        raise ValueError("duplicate reviewed family id")
    controls_by_family: dict[str, list[dict]] = defaultdict(list)
    for row in controls:
        controls_by_family[row["family_id"]].append(row)
    if set(controls_by_family) - {row["family_id"] for row in specs}:
        raise ValueError("C control names an unreviewed family")
    code_rows = {row["module"]: row for row in rows(CODE)}
    module_rows = {Path(row["path"]).name: row for row in rows(MODULES)}
    inventory_by_module = {module: {int(row["start"], 16): row
                                    for row in rows(WORK / f"{module}.tsv")}
                           for module in code_rows}
    matched = {(row["module"], int(row["offset"], 0)): row for row in rows(BODIES)}
    source_hashes = {row["source"]: row["source_sha256_lf"]
                     for row in rows(SOURCES)}
    called = {(row["module"], int(row["start"], 16)): row for row in rows(CALLED)}
    full_summary = json.loads(FULL_FLOW.read_text(encoding="utf-8"))
    full_hashes = {row["module"]: row["full_export_sha256"]
                   for row in full_summary["modules"]}
    target = json.loads(TARGET.read_text(encoding="utf-8"))
    facts = {}
    with IsoDisc(image) as disc:
        verify_disc(disc, target)
        for module, meta in code_rows.items():
            data = disc.file_bytes("LVL/" + module)
            if hashlib.sha256(data).hexdigest() != module_rows[module]["sha256"]:
                raise ValueError(f"{module}: full REL differs from pin")
            code_end = int(meta["end_exclusive"], 16)
            if hashlib.sha256(data[int(meta["start"], 16):code_end]).hexdigest() != meta["sha256"]:
                raise ValueError(f"{module}: code differs from pin")
            ghidra_path = WORK / "full-ghidra" / f"{module}.ghidra.tsv"
            if digest(ghidra_path) != full_hashes[module]:
                raise ValueError(f"{module}: full-module Ghidra export differs from pin")
            ghidra = {int(row["entry"], 16): row for row in rows(ghidra_path)}
            facts[module] = module_facts(data, code_end, inventory_by_module[module],
                                         matched, module, ghidra)
    public = []
    family_results = []
    for spec in specs:
        family_id, shape = spec["family_id"], spec["masked_sha256"]
        members = []
        for module, inv in inventory_by_module.items():
            members.extend((module, int(row["start"], 16), row)
                           for row in inv.values()
                           if row["masked_lead_sha256"] == shape and row["body_end"])
        if len(members) != int(spec["expected_placements"]):
            raise ValueError(f"{family_id}: unexpected masked-body placements")
        if len({module for module, _start, _row in members}) != len(members):
            raise ValueError(f"{family_id}: masked shape collides within a module")
        ref = spec["reference_module"], int(spec["reference_start"], 16)
        if ref not in {(module, start) for module, start, _row in members}:
            raise ValueError(f"{family_id}: canonical reference is absent")
        control_rows = controls_by_family[family_id]
        if len(control_rows) < 2:
            raise ValueError(f"{family_id}: source-level controls are insufficient")
        control_sites = {(row["module"], int(row["start"], 16)): row for row in control_rows}
        if len(control_sites) != len(control_rows):
            raise ValueError(f"{family_id}: duplicate C control")
        member_sites = {(module, start) for module, start, _row in members}
        if not set(control_sites) <= member_sites or ref not in control_sites:
            raise ValueError(f"{family_id}: source controls do not cover the canonical reference")
        normalized = set()
        for key, control in control_sites.items():
            accepted = matched.get(key)
            source = control["source"]
            if accepted is None or accepted["source"] != source or source not in source_hashes:
                raise ValueError(f"{family_id}: control source is not accepted")
            raw = (ROOT / source).read_bytes().replace(b"\r\n", b"\n")
            if hashlib.sha256(raw).hexdigest() != source_hashes[source]:
                raise ValueError(f"{family_id}: control source hash differs from pin")
            normalized.add(hashlib.sha256(normalized_control(raw.decode("utf-8")).encode()).hexdigest())
        if len(normalized) != 1:
            raise ValueError(f"{family_id}: accepted C controls have different logic")
        data_roles = []
        code_roles = []
        contexts = []
        for module, start, inv in members:
            end = int(inv["body_end"], 16)
            boundary = called.get((module, start))
            control = control_sites.get((module, start))
            if control:
                if int(matched[module, start]["size"]) != end - start:
                    raise ValueError(f"{family_id}: C control has a different extent")
                evidence = "accepted_C_control"
            elif boundary and int(boundary["end_exclusive"], 16) == end:
                evidence = "relocation_backed_call"
            else:
                raise ValueError(f"{family_id}: member has no reviewed boundary")
            fingerprint, _ = masked_body(facts[module]["data"][start:end], start,
                                          facts[module]["indexed"],
                                          facts[module]["indexed_sites"])
            if fingerprint != shape:
                raise ValueError(f"{family_id}: body fingerprint differs from reviewed shape")
            data_sig, code_sig = member_roles(facts[module], start, end)
            data_roles.append(data_sig)
            code_roles.append(code_sig)
            unique_contexts = {context for context in facts[module]["caller_contexts"][start]
                               if facts[module]["context_counts"][context] == 1}
            contexts.append(unique_contexts)
            public.append({"family_id": family_id, "module": module,
                           "start": f"0x{start:08X}", "end_exclusive": f"0x{end:08X}",
                           "body_bytes": str(end - start),
                           "boundary_evidence": evidence,
                           "masked_sha256": shape})
        if not common_unique_contexts(contexts):
            raise ValueError(f"{family_id}: no common unique caller context")
        if any(role != code_roles[0] for role in code_roles):
            raise ValueError(f"{family_id}: local callee roles differ")
        if not data_policy(spec["proof_mode"], data_roles):
            raise ValueError(f"{family_id}: local data targets are not equivalent")
        shared_context = min(common_unique_contexts(contexts))
        family_results.append({
            "family_id": family_id, "placements": len(members),
            "body_bytes": int(members[0][2]["body_bytes"]),
            "accepted_C_controls": len(control_rows),
            "normalized_C_sha256": next(iter(normalized)),
            "caller_context_sha256": shared_context,
            "data_window_sha256": {str(site): data_roles[0][site][0]
                                   for site in sorted(data_roles[0])},
            "local_callee_roles": {str(site): {"body_bytes": code_roles[0][site][0],
                                               "masked_sha256": code_roles[0][site][1]}
                                   for site in sorted(code_roles[0])},
            "proof_mode": spec["proof_mode"],
        })
    public.sort(key=lambda row: (row["family_id"], row["module"], row["start"]))
    PRIVATE.write_text(json.dumps(family_results, indent=2) + "\n",
                       encoding="utf-8", newline="\n")
    summary = {"status": "reviewed_shared_source_role_families",
               "family_count": len(family_results),
               "placement_count": len(public),
               "control_count": len(controls),
               "families": family_results,
               "spec_sha256": digest(SPECS), "controls_sha256": digest(CONTROLS),
               "code_catalogue_sha256": digest(CODE),
               "module_catalogue_sha256": digest(MODULES),
               "inventory_summary_sha256": digest(INVENTORY),
               "full_flow_summary_sha256": digest(FULL_FLOW),
               "called_boundary_sha256": digest(CALLED),
               "target_sha256": digest(TARGET),
               "qualified_gamewide_function_denominator": False,
               "warning": ("Only these explicitly reviewed placement families have "
                           "source-role identity evidence. Other boundaries and families "
                           "remain unresolved; no game-wide count or C credit follows.")}
    return public, summary


def check(summary: dict) -> None:
    specs = rows(SPECS)
    controls = rows(CONTROLS)
    placements = rows(TABLE)
    if (summary["status"] != "reviewed_shared_source_role_families"
            or summary["qualified_gamewide_function_denominator"] is not False
            or summary["family_count"] != len(specs)
            or len(summary["families"]) != len(specs)
            or summary["placement_count"] != len(placements)
            or summary["control_count"] != len(controls)
            or summary["spec_sha256"] != digest(SPECS)
            or summary["controls_sha256"] != digest(CONTROLS)
            or summary["table_sha256"] != digest(TABLE)
            or summary["code_catalogue_sha256"] != digest(CODE)
            or summary["module_catalogue_sha256"] != digest(MODULES)
            or summary["inventory_summary_sha256"] != digest(INVENTORY)
            or summary["full_flow_summary_sha256"] != digest(FULL_FLOW)
            or summary["called_boundary_sha256"] != digest(CALLED)
            or summary["target_sha256"] != digest(TARGET)):
        raise ValueError("reviewed family evidence or public input pin is stale")
    family_sizes = Counter(row["family_id"] for row in placements)
    spec_ids = {spec["family_id"] for spec in specs}
    if (set(family_sizes) != spec_ids
            or {row["family_id"] for row in controls} != spec_ids
            or {row["family_id"] for row in summary["families"]} != spec_ids):
        raise ValueError("reviewed family identifiers disagree")
    if any(family_sizes[spec["family_id"]] != int(spec["expected_placements"])
           for spec in specs):
        raise ValueError("reviewed family placement count differs from specification")
    if len({(row["module"], row["start"]) for row in placements}) != len(placements):
        raise ValueError("reviewed family placements overlap at an entry")
    if len({(row["family_id"], row["module"]) for row in placements}) != len(placements):
        raise ValueError("reviewed family repeats in one module")
    for row in placements:
        if (row["family_id"] not in spec_ids
                or row["boundary_evidence"] not in
                ("accepted_C_control", "relocation_backed_call")
                or int(row["end_exclusive"], 16) - int(row["start"], 16)
                != int(row["body_bytes"])):
            raise ValueError("malformed reviewed family placement")
    ordered = sorted(placements, key=lambda row: (row["module"], int(row["start"], 16)))
    for current, following in zip(ordered, ordered[1:]):
        if (current["module"] == following["module"] and
                int(current["end_exclusive"], 16) > int(following["start"], 16)):
            raise ValueError("reviewed family bodies overlap")
    accepted = {(row["module"], int(row["offset"], 0)): row["source"]
                for row in rows(BODIES)}
    placement_index = {(row["family_id"], row["module"], int(row["start"], 16)): row
                       for row in placements}
    controls_per_family = Counter(row["family_id"] for row in controls)
    for family in summary["families"]:
        if (family["placements"] != family_sizes[family["family_id"]]
                or family["accepted_C_controls"] != controls_per_family[family["family_id"]]):
            raise ValueError("reviewed family summary differs from placements or controls")
    source_hashes = {row["source"]: row["source_sha256_lf"]
                     for row in rows(SOURCES)}
    normalized_by_family: dict[str, set[str]] = defaultdict(set)
    for control in controls:
        key = control["module"], int(control["start"], 16)
        source = control["source"]
        placement = placement_index.get((control["family_id"], *key))
        if placement is None or placement["boundary_evidence"] != "accepted_C_control":
            raise ValueError("C control is not a reviewed placement")
        if accepted.get(key) != source or source not in source_hashes:
            raise ValueError("reviewed C control is no longer accepted")
        raw = (ROOT / source).read_bytes().replace(b"\r\n", b"\n")
        if hashlib.sha256(raw).hexdigest() != source_hashes[source]:
            raise ValueError("reviewed C control source hash changed")
        normalized_by_family[control["family_id"]].add(
            hashlib.sha256(normalized_control(raw.decode("utf-8")).encode()).hexdigest())
    for family in summary["families"]:
        if (normalized_by_family[family["family_id"]]
                != {family["normalized_C_sha256"]}):
            raise ValueError("reviewed C control logic changed")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument("--write", type=Path, metavar="PINNED_ISO")
    mode.add_argument("--check", action="store_true")
    args = parser.parse_args()
    if args.write:
        placements, summary = generate(args.write)
        lines = ["\t".join(FIELDS)]
        lines.extend("\t".join(row[field] for field in FIELDS) for row in placements)
        TABLE.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
        summary["table_sha256"] = digest(TABLE)
        SUMMARY.write_text(json.dumps(summary, indent=2) + "\n",
                           encoding="utf-8", newline="\n")
    else:
        summary = json.loads(SUMMARY.read_text(encoding="utf-8"))
    check(summary)
    print(f"reviewed source-role families: {summary['family_count']} families, "
          f"{summary['placement_count']} placements; no game-wide denominator")


if __name__ == "__main__":
    main()
