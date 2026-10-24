#!/usr/bin/env python3
"""
Progress report for ByteMatch (bytematch.dev), in objdiff's report format (version 2).

ByteMatch reads a `report.json` uploaded by GitHub Actions as an artifact named
`<SERIAL>_report` (e.g. `SCUS_976.15_report` and `SCES_550.19_report`).

Following OpenRAC methodology:
  - Each level and the boot executable is tracked individually as its own unit
    and category named after the level in the game (e.g. levels/level01_pokitaru),
    carrying its placed functions.
  - Overall headline project measures are deduplicated across shared sources,
    preventing 20x static linking duplication from falsely reporting ~35 MB
    of code for a spin-off title whose true deduplicated code is ~6.42 MB.

Usage:
  python3 tools/gen_progress_report.py            # write progress/report.json and progress/pal/report.json
  python3 tools/gen_progress_report.py --check    # CI: fail if the committed reports are out of date
  python3 tools/gen_progress_report.py --version pal

The report holds names, addresses, sizes and percentages -- no retail bytes.
"""

from __future__ import annotations

import argparse
import csv
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

import boot_trial_gate  # noqa: E402
import versions  # noqa: E402

STATUS = ROOT / "progress/status.json"
SHAPE = ROOT / "config/levels/shape_scenario_summary.json"
CODE_INTERVALS = ROOT / "config/levels/code_intervals.tsv"

LEVEL_NAMES: dict[str, tuple[str, str]] = {
    "FRONTEND.REL": ("frontend", "Frontend (FRONTEND.REL)"),
    "LEVEL_01.REL": ("level01_pokitaru", "Level 01: Pokitaru (Jowai Resort)"),
    "LEVEL_02.REL": ("level02_rykan_v", "Level 02: Rykan V (Lava Fields)"),
    "LEVEL_03.REL": ("level03_kalidon", "Level 03: Kalidon (Cerullean Sector)"),
    "LEVEL_04.REL": ("level04_metalis", "Level 04: Metalis (Junkyard)"),
    "LEVEL_05.REL": ("level05_medical_outpost", "Level 05: Medical Outpost Omega"),
    "LEVEL_06.REL": ("level06_challax", "Level 06: Challax (Technomite City)"),
    "LEVEL_07.REL": ("level07_dreamtime", "Level 07: Pokitaru Dreamtime"),
    "LEVEL_08.REL": ("level08_dayni_moon", "Level 08: Dayni Moon (Agricultural Planet)"),
    "LEVEL_09.REL": ("level09_inside_clank", "Level 09: Inside Clank"),
    "LEVEL_10.REL": ("level10_quodrona", "Level 10: Quodrona (Otto-Matic Factory)"),
    "LEVEL_15.REL": ("level15_giant_clank_metalis", "Level 15: Giant Clank (Metalis)"),
    "LEVEL_16.REL": ("level16_multiplayer_01", "Level 16: Multiplayer (Map 1)"),
    "LEVEL_17.REL": ("level17_multiplayer_02", "Level 17: Multiplayer (Map 2)"),
    "LEVEL_18.REL": ("level18_multiplayer_03", "Level 18: Multiplayer (Map 3)"),
    "LEVEL_19.REL": ("level19_multiplayer_04", "Level 19: Multiplayer (Map 4)"),
    "LEVEL_20.REL": ("level20_multiplayer_lobby", "Level 20: Multiplayer Lobby"),
    "LEVEL_21.REL": ("level21_giant_clank_space", "Level 21: Giant Clank (Space)"),
    "LEVEL_22.REL": ("level22_skyboard_kalidon", "Level 22: Skyboard Race (Kalidon)"),
    "LEVEL_23.REL": ("level23_skyboard_challax", "Level 23: Skyboard Race (Challax)"),
    "LEVEL_24.REL": ("level24_treehouse", "Level 24: High Impact Games Treehouse"),
}


def read_tsv(path: Path) -> list[dict[str, str]]:
    if not path.is_file():
        return []
    with path.open(encoding="utf-8", newline="") as f:
        return list(csv.DictReader((line for line in f if not line.startswith("#")), delimiter="\t"))


def make_measures(
    items: list[tuple[int, float, bool]],
    units: int = 0,
    complete_units: int = 0,
    complete_code: int = 0,
) -> dict[str, object]:
    """items: (size, fuzzy%, finished). uint64 fields are strings as in protobuf JSON."""
    total = sum(s for s, _, _ in items)
    matched = sum(s for s, _, e in items if e)
    nfun = len(items)
    nmatch = sum(1 for _, _, e in items if e)
    fuzzy = sum(s * p for s, p, _ in items) / total if total else 0.0
    m: dict[str, object] = {
        "fuzzy_match_percent": fuzzy,
        "total_code": str(total),
        "matched_code": str(matched),
        "matched_code_percent": 100.0 * matched / total if total else 0.0,
        "total_functions": nfun,
        "matched_functions": nmatch,
        "matched_functions_percent": 100.0 * nmatch / nfun if nfun else 0.0,
        "complete_code": str(complete_code),
        "complete_code_percent": 100.0 * complete_code / total if total else 0.0,
        "total_units": units,
        "complete_units": complete_units,
    }
    return m


def generate_report(v: versions.Version) -> dict[str, object]:
    status = json.loads(STATUS.read_text(encoding="utf-8"))
    shape = json.loads(SHAPE.read_text(encoding="utf-8"))
    code_intervals = {row["module"]: int(row["interval_bytes"]) for row in read_tsv(CODE_INTERVALS)}

    is_us = (v.key == "us")
    boot_total_code = 498900 if is_us else 499156
    boot_matches = boot_trial_gate.accepted_matches()
    boot_matched_code = sum(m["body_bytes"] for m in boot_matches)

    units_list: list[dict[str, object]] = []
    categories_list: list[dict[str, object]] = []

    # 1. Boot Executable Unit
    boot_items: list[tuple[int, float, bool]] = []
    boot_functions_objs: list[dict[str, object]] = []
    for m in boot_matches:
        size = int(m["body_bytes"])
        boot_items.append((size, 100.0, True))
        boot_functions_objs.append({
            "name": m["symbol"],
            "size": size,
            "fuzzy_match_percent": 100.0,
        })
    boot_unmatched = boot_total_code - boot_matched_code
    if boot_unmatched > 0:
        boot_items.append((boot_unmatched, 0.0, False))
        boot_functions_objs.append({
            "name": "__unmatched_boot_code",
            "size": boot_unmatched,
            "fuzzy_match_percent": 0.0,
        })

    boot_m = make_measures(boot_items)
    units_list.append({
        "name": "boot/executable",
        "measures": boot_m,
        "functions": boot_functions_objs,
        "metadata": {
            "progress_categories": ["boot"],
        },
    })
    categories_list.append({
        "id": "boot",
        "name": f"Boot Executable ({v.exe})",
        "measures": boot_m,
    })

    # Level modules
    level_combined_items: list[tuple[int, float, bool]] = []

    # Placed accepted functions per module
    # Frontend: func_00002F80 (476 bytes)
    # Level 1-10, 15-24: func_00000100 (48 bytes), func_shared_zero_buffer (32 bytes)
    for mod_name, (slug, friendly_title) in LEVEL_NAMES.items():
        mod_total = code_intervals.get(mod_name, 0)
        mod_items: list[tuple[int, float, bool]] = []
        mod_funcs: list[dict[str, object]] = []

        if mod_name == "FRONTEND.REL":
            fe_matched = 476
            mod_items.append((fe_matched, 100.0, True))
            mod_funcs.append({
                "name": "func_00002F80",
                "size": fe_matched,
                "fuzzy_match_percent": 100.0,
            })
            unmatched = max(0, mod_total - fe_matched)
            if unmatched > 0:
                mod_items.append((unmatched, 0.0, False))
                mod_funcs.append({
                    "name": f"__{slug}_unmatched_code",
                    "size": unmatched,
                    "fuzzy_match_percent": 0.0,
                })
        else:
            # Placed shared bodies
            f1_bytes = 48
            f2_bytes = 32
            mod_items.append((f1_bytes, 100.0, True))
            mod_funcs.append({
                "name": "func_00000100",
                "size": f1_bytes,
                "fuzzy_match_percent": 100.0,
            })
            mod_items.append((f2_bytes, 100.0, True))
            mod_funcs.append({
                "name": "func_shared_zero_buffer",
                "size": f2_bytes,
                "fuzzy_match_percent": 100.0,
            })
            unmatched = max(0, mod_total - (f1_bytes + f2_bytes))
            if unmatched > 0:
                mod_items.append((unmatched, 0.0, False))
                mod_funcs.append({
                    "name": f"__{slug}_unmatched_code",
                    "size": unmatched,
                    "fuzzy_match_percent": 0.0,
                })

        mod_m = make_measures(mod_items)
        unit_name = f"levels/{slug}"
        units_list.append({
            "name": unit_name,
            "measures": mod_m,
            "functions": mod_funcs,
            "metadata": {
                "progress_categories": [slug, "level_code"],
            },
        })
        categories_list.append({
            "id": slug,
            "name": f"{friendly_title} ({mod_name})",
            "measures": mod_m,
        })
        level_combined_items.extend(mod_items)

    # Insert combined level category
    categories_list.insert(1, {
        "id": "level_code",
        "name": "Level Modules (Combined Placements)",
        "measures": make_measures(level_combined_items),
    })

    # Overall project measures: deduplicated across candidate interval scenario
    frontend_total = code_intervals.get("FRONTEND.REL", 162944)
    frontend_matched = 476
    level_dedup_total = shape["masked_max_per_module_scenario_bytes"]  # 5,756,360
    level_dedup_matched = 80  # 48 + 32 unique source bytes

    dedup_total_code = boot_total_code + frontend_total + level_dedup_total
    dedup_matched_code = boot_matched_code + frontend_matched + level_dedup_matched
    overall_pct = 100.0 * dedup_matched_code / dedup_total_code if dedup_total_code else 0.0

    n_matched_functions = len(boot_matches) + 1 + 2  # boot + frontend + 2 level unique
    n_total_functions = n_matched_functions + len(units_list)

    overall_m = {
        "fuzzy_match_percent": overall_pct,
        "total_code": str(dedup_total_code),
        "matched_code": str(dedup_matched_code),
        "matched_code_percent": overall_pct,
        "total_functions": n_total_functions,
        "matched_functions": n_matched_functions,
        "matched_functions_percent": 100.0 * n_matched_functions / n_total_functions if n_total_functions else 0.0,
        "complete_code": "0",
        "complete_code_percent": 0.0,
        "total_units": len(units_list),
        "complete_units": 0,
    }

    return {
        "version": 2,
        "measures": overall_m,
        "units": units_list,
        "categories": categories_list,
    }


def write_reports() -> None:
    us_v = versions.get("us")
    pal_v = versions.get("pal")

    us_report = generate_report(us_v)
    pal_report = generate_report(pal_v)

    prog_dir = ROOT / "progress"
    prog_dir.mkdir(parents=True, exist_ok=True)
    (prog_dir / "us").mkdir(parents=True, exist_ok=True)
    (prog_dir / "pal").mkdir(parents=True, exist_ok=True)

    us_json = json.dumps(us_report, indent=1) + "\n"
    pal_json = json.dumps(pal_report, indent=1) + "\n"

    (prog_dir / "report.json").write_text(us_json, encoding="utf-8")
    (prog_dir / "us" / "report.json").write_text(us_json, encoding="utf-8")
    (prog_dir / "pal" / "report.json").write_text(pal_json, encoding="utf-8")

    # Also write to build/bytematch/ for CI and objdiff compatibility
    build_us = ROOT / f"build/bytematch/{us_v.id}"
    build_pal = ROOT / f"build/bytematch/{pal_v.id}"
    build_us.mkdir(parents=True, exist_ok=True)
    build_pal.mkdir(parents=True, exist_ok=True)
    (build_us / "report.json").write_text(us_json, encoding="utf-8")
    (build_pal / "report.json").write_text(pal_json, encoding="utf-8")

    (prog_dir / "functional.json").write_text("[]\n", encoding="utf-8")

    m_us = us_report["measures"]
    print(f"wrote progress/report.json ({us_v.id}): {m_us['matched_code_percent']:.2f}% code ({m_us['matched_code']}/{m_us['total_code']} bytes), {m_us['matched_functions']} functions, {m_us['total_units']} individual units")
    m_pal = pal_report["measures"]
    print(f"wrote progress/pal/report.json ({pal_v.id}): {m_pal['matched_code_percent']:.2f}% code ({m_pal['matched_code']}/{m_pal['total_code']} bytes), {m_pal['matched_functions']} functions, {m_pal['total_units']} individual units")


def check_reports() -> bool:
    us_v = versions.get("us")
    pal_v = versions.get("pal")

    us_path = ROOT / "progress" / "report.json"
    pal_path = ROOT / "progress" / "pal" / "report.json"

    if not us_path.is_file() or not pal_path.is_file():
        print("progress reports are missing; run 'python3 tools/gen_progress_report.py'", file=sys.stderr)
        return False

    current_us = json.dumps(generate_report(us_v), indent=1) + "\n"
    current_pal = json.dumps(generate_report(pal_v), indent=1) + "\n"

    committed_us = us_path.read_text(encoding="utf-8")
    committed_pal = pal_path.read_text(encoding="utf-8")

    if current_us != committed_us:
        print("progress/report.json is out of date; re-run 'python3 tools/gen_progress_report.py'", file=sys.stderr)
        return False

    if current_pal != committed_pal:
        print("progress/pal/report.json is out of date; re-run 'python3 tools/gen_progress_report.py'", file=sys.stderr)
        return False

    print("progress reports are current with source and placement tables")
    return True


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--check", action="store_true", help="verify that committed reports are current")
    parser.add_argument("--version", choices=("us", "pal"), help="generate report for specific version only")
    args = parser.parse_args()

    if args.check:
        sys.exit(0 if check_reports() else 1)

    write_reports()


if __name__ == "__main__":
    main()
