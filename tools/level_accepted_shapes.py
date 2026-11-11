#!/usr/bin/env python3
"""Count accepted level bodies by relocation-masked shape, like the level denominator.

The level denominator (config/levels/shape_scenario_summary.json) counts every
relocation-masked candidate shape once, at its largest multiplicity in one of the
20 retained modules. Counting accepted bodies by source instead credits the
address-variant copies of one function (one source per level) up to 20 times
against a denominator that counts them once. This tool counts the accepted
placements of config/levels/bodies.tsv by the denominator's rule: each accepted
placement in a retained module is rehashed against the pinned disc with the same
relocation mask, and every (size, masked shape) is credited once per module at its
largest accepted multiplicity. Shape units are candidate functions, not a reviewed
function catalogue.

The private --write pass needs the pinned disc and the private candidate
worklists; --check verifies that the committed summary belongs to the current
tables and stays within the denominator.
"""

from __future__ import annotations

import argparse
import hashlib
import json
from collections import Counter, defaultdict
from pathlib import Path

from disc import IsoDisc, verify_disc
from level_function_inventory import masked_body, relocations
from level_ghidra_crosscheck import rows

ROOT = Path(__file__).resolve().parent.parent
OUTPUT = ROOT / "config/levels/accepted_shape_summary.json"
BODIES = ROOT / "config/levels/bodies.tsv"
SHAPE = ROOT / "config/levels/shape_scenario_summary.json"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
MODULES = ROOT / "config/levels/modules.tsv"
CODE = ROOT / "config/levels/code_intervals.tsv"
TARGET = ROOT / "config/target.json"


def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def retained_modules() -> tuple[set[str], set[str]]:
    """The 20 modules the shape scenario measures, and the identical copies it leaves out."""
    inventory = json.loads(INVENTORY.read_text(encoding="utf-8"))
    code = {row["module"] for row in rows(CODE)}
    copies = {module for group in inventory["identical_full_interval_groups"]
              for module in group[1:]}
    retained = code - copies
    if len(code) != 21 or len(retained) != 20:
        raise ValueError("pinned module catalogue changed")
    return retained, copies


def accepted_placements() -> list[tuple[str, int, int]]:
    out = []
    for row in rows(BODIES):
        out.append((row["module"], int(row["offset"], 0), int(row["size"], 0)))
    return out


def accepted_counts(keys: list[tuple[str, int, str]]) -> dict[str, int]:
    """keys: (module, size, masked shape) of accepted placements in retained modules."""
    shapes: dict[tuple[int, str], Counter[str]] = defaultdict(Counter)
    for module, size, masked in keys:
        if size <= 0 or not masked:
            raise ValueError("accepted placement is missing bytes or a fingerprint")
        shapes[size, masked][module] += 1
    return {
        "accepted_masked_shape_groups": len(shapes),
        "accepted_masked_max_per_module_bytes": sum(
            size * max(counts.values()) for (size, _hash), counts in shapes.items()),
        "accepted_masked_max_per_module_units": sum(
            max(counts.values()) for counts in shapes.values()),
    }


def measure(image: Path) -> dict[str, object]:
    import level_shape_scenario  # private worklists, read only by the write pass

    retained, copies = retained_modules()
    target = json.loads(TARGET.read_text(encoding="utf-8"))
    modules = {Path(row["path"]).name: row for row in rows(MODULES)}
    code = {row["module"]: row for row in rows(CODE)}
    placements = accepted_placements()
    by_module: dict[str, list[tuple[int, int]]] = defaultdict(list)
    for module, offset, size in placements:
        if module not in code:
            raise ValueError(f"accepted placement names an unknown module: {module}")
        by_module[module].append((offset, size))
    units, _retained_bytes, _residual = level_shape_scenario.measured_units(image)
    unit_keys = {(size, masked) for _module, size, _raw, masked in units}
    keys: list[tuple[str, int, str]] = []
    with IsoDisc(image) as disc:
        verify_disc(disc, target)
        for module in sorted(retained):
            data = disc.file_bytes("LVL/" + module)
            if hashlib.sha256(data).hexdigest() != modules[module]["sha256"]:
                raise ValueError(f"{module} differs from pinned module")
            start = int(code[module]["start"], 16)
            code_end = int(code[module]["end_exclusive"], 16)
            indexed, _pointers = relocations(data, code_end)
            sites = sorted(indexed)
            for offset, size in sorted(by_module.get(module, [])):
                if not start <= offset < offset + size <= code_end:
                    raise ValueError(f"{module} accepted placement escapes candidate code")
                masked, _count = masked_body(data[offset:offset + size], offset, indexed, sites)
                keys.append((module, size, masked))
    counts = accepted_counts(keys)
    outside = {(size, masked) for _module, size, masked in keys} - unit_keys
    candidate: dict[tuple[int, str], Counter[str]] = defaultdict(Counter)
    for module, size, _raw, masked in units:
        candidate[size, masked][module] += 1
    return {
        "status": "accepted_bodies_by_masked_shape",
        "module_count": 20,
        "bodies_table_sha256": digest(BODIES),
        "shape_summary_sha256": digest(SHAPE),
        "retained_placements": len(keys),
        "identical_module_copy_placements": sum(len(by_module.get(m, [])) for m in copies),
        "accepted_placements_by_module": {
            module: len(by_module.get(module, [])) for module in sorted(retained)},
        "candidate_body_units": len(units),
        "candidate_units_by_module": dict(sorted(
            Counter(module for module, _size, _raw, _masked in units).items())),
        "candidate_masked_max_per_module_bytes": sum(
            size * max(c.values()) for (size, _hash), c in candidate.items()),
        "candidate_masked_max_per_module_units": sum(
            max(c.values()) for c in candidate.values()),
        **counts,
        "accepted_shapes_outside_candidate_units": len(outside),
        "accepted_shape_bytes_outside_candidate_units": sum(size for size, _hash in outside),
        "warning": ("Accepted bodies are credited once per relocation-masked shape, at "
                    "their largest per-module multiplicity, like the optimistic level "
                    "denominator; shape units are candidate functions, not a reviewed "
                    "function catalogue."),
    }


def check_summary(summary: dict[str, object]) -> None:
    shape = json.loads(SHAPE.read_text(encoding="utf-8"))
    retained, copies = retained_modules()
    placements = accepted_placements()
    per_module = Counter(module for module, _offset, _size in placements)
    if (summary.get("status") != "accepted_bodies_by_masked_shape"
            or summary.get("module_count") != 20
            or summary.get("bodies_table_sha256") != digest(BODIES)
            or summary.get("shape_summary_sha256") != digest(SHAPE)
            or summary["accepted_placements_by_module"] !=
            {module: per_module.get(module, 0) for module in sorted(retained)}
            or summary["retained_placements"] != sum(per_module[m] for m in retained)
            or summary["identical_module_copy_placements"] != sum(per_module[m] for m in copies)
            or summary["retained_placements"] + summary["identical_module_copy_placements"]
            != len(placements)
            or not (0 <= summary["accepted_masked_shape_groups"] <=
                    summary["accepted_masked_max_per_module_units"] <=
                    summary["retained_placements"])
            or summary["candidate_body_units"] != shape["body_units"]
            or sum(summary["candidate_units_by_module"].values()) != shape["body_units"]
            or sorted(summary["candidate_units_by_module"]) != sorted(retained)
            or summary["candidate_masked_max_per_module_bytes"] !=
            shape["masked_max_per_module_bytes"]
            or not (shape["masked_shape_groups"] <=
                    summary["candidate_masked_max_per_module_units"] <=
                    shape["body_units"])
            or summary["accepted_masked_max_per_module_units"] >
            summary["candidate_masked_max_per_module_units"]
            or not (0 <= summary["accepted_masked_max_per_module_bytes"] <=
                    shape["masked_max_per_module_scenario_bytes"])
            or any(summary["accepted_placements_by_module"][module] >
                   summary["candidate_units_by_module"][module] for module in sorted(retained))
            or summary["accepted_shapes_outside_candidate_units"] >
            summary["accepted_masked_shape_groups"]):
        raise ValueError("accepted shape summary is stale or exceeds the denominator")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument("--write", type=Path, metavar="PINNED_ISO")
    mode.add_argument("--check", action="store_true")
    args = parser.parse_args()
    if args.write:
        summary = measure(args.write)
        OUTPUT.write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8", newline="\n")
    else:
        summary = json.loads(OUTPUT.read_text(encoding="utf-8"))
    check_summary(summary)
    print("accepted level bodies by masked shape: "
          f"{summary['accepted_masked_max_per_module_bytes']} bytes in "
          f"{summary['accepted_masked_max_per_module_units']} shape units")


if __name__ == "__main__":
    main()
