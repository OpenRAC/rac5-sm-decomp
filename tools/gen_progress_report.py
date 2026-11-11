#!/usr/bin/env python3
"""
Progress report for ByteMatch (bytematch.dev), in objdiff's report format (version 2).

ByteMatch reads a `report.json` uploaded by GitHub Actions as an artifact named
`<SERIAL>_report` (e.g. `SCUS_976.15_report` and `SCES_550.19_report`). Its map
draws one tile per unit, grouped in folders by the unit names, sized by code
bytes and coloured by how much of the unit is matched.

The units follow the source tree, one per candidate function:
  - boot/<symbol>: the candidate boot code intervals without their zero
    alignment padding (config/boot/zero_padding.tsv). An accepted C function
    counts its body bytes; the unlabeled code after it, up to the next label,
    is boot/<symbol>.unlabeled_tail.
  - levels/<module directory>/<MODULE_OFFSET> and levels/shared/<MODULE_OFFSET>:
    the rows of config/levels/shape_units.tsv (tools/level_accepted_shapes.py),
    one per relocation-masked shape of candidate code (candidate functions and
    fragments of the function before them) at its largest multiplicity in one
    module, in the directory where src/levels keeps such a source: shared/ for a
    shape found in several modules. Each module's few unbounded bytes are one
    more unit; zero alignment padding is not code and is left out.
The headline measures are the sums of the units, so the map, the categories and
the totals agree: the boot .text without its zero alignment padding plus the
code of the 20 retained level modules
(FRONTEND.REL included; LEVEL_21.REL repeats LEVEL_15.REL), every masked shape
counted once at its largest per-module multiplicity. A piece counts as matched
when accepted C reproduces all of its bytes at its own placement. These are
candidate functions, not a reviewed function catalogue.

Usage:
  python3 tools/gen_progress_report.py            # write progress/report.json and progress/pal/report.json
  python3 tools/gen_progress_report.py --check    # CI: fail if the committed reports are out of date

The report holds names, addresses, sizes and percentages -- no retail bytes.
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

import boot_trial_gate  # noqa: E402
import versions  # noqa: E402
from boot_c_campaign import accepted_replacements  # noqa: E402
from boot_zero_padding import read as boot_zero_padding  # noqa: E402
from level_accepted_shapes import read_units  # noqa: E402
from level_names import LEVEL_NAMES  # noqa: E402
from level_source_layout import COPIES, MODULE_DIRS, SHARED  # noqa: E402

STATUS = ROOT / "progress/status.json"
SHAPE = ROOT / "config/levels/shape_scenario_summary.json"
BODY_PLACEMENTS = ROOT / "config/levels/bodies.tsv"
BODY_SOURCES = ROOT / "config/levels/body_sources.tsv"
BOOT_INTERVALS = ROOT / "config/boot/code_intervals.tsv"
ACCEPTED_SHAPES = ROOT / "config/levels/accepted_shape_summary.json"
SHAPE_UNITS = ROOT / "config/levels/shape_units.tsv"
REPORTS = {"us": ROOT / "progress/report.json", "pal": ROOT / "progress/pal/report.json"}

BOOT_CODE = {"us": 498900, "pal": 499156}
BOOT_REMAINDER = "_unlabeled_code"
BOOT_TAIL = ".unlabeled_tail"
COMMENT = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)
# Fields that stay zero in every unit (no unit is linked from source yet).
UNIT_ZERO_FIELDS = ("complete_code", "complete_code_percent", "total_units", "complete_units")


def definition_start(head: str) -> int | None:
    """Where the function name starts when `head` ends with `name(parameters)`."""
    end = len(head.rstrip())
    if not end or head[end - 1] != ")":
        return None
    depth = 0
    for index in range(end - 1, -1, -1):
        char = head[index]
        if char in ";{}":
            return None
        if char == ")":
            depth += 1
        elif char == "(":
            depth -= 1
            if depth == 0:
                match = re.search(r"[A-Za-z_]\w*\s*$", head[:index])
                return match.start() if match else None
    return None


def read_tsv(path: Path) -> list[dict[str, str]]:
    if not path.is_file():
        return []
    with path.open(encoding="utf-8", newline="") as f:
        return list(csv.DictReader((line for line in f if not line.startswith("#")), delimiter="\t"))


def accepted_us_level_bodies(status: dict) -> tuple[dict[str, int], int, int]:
    """Measure placed bytes per module and distinct C bytes from the accepted tables."""
    placements = read_tsv(BODY_PLACEMENTS)
    source_rows = read_tsv(BODY_SOURCES)
    sources = {row["source"] for row in source_rows}
    if len(sources) != len(source_rows):
        raise ValueError("duplicate accepted level body source")

    by_module: dict[str, int] = {}
    by_source: dict[str, int] = {}
    for row in placements:
        module, source, size = row["module"], row["source"], int(row["size"])
        if module not in LEVEL_NAMES or source not in sources or size <= 0 or size % 4:
            raise ValueError("invalid accepted level body placement")
        if source in by_source and by_source[source] != size:
            raise ValueError(f"inconsistent accepted body size: {source}")
        by_source[source] = size
        by_module[module] = by_module.get(module, 0) + size

    level = status["levels"]
    if (set(by_source) != sources
            or len(placements) != level["accepted_level_body_placements"]
            or len(by_source) != level["accepted_level_body_unique_sources"]
            or sum(by_source.values()) != level["accepted_level_body_unique_source_bytes"]
            or sum(by_module.values()) != level["accepted_level_body_placement_bytes"]):
        raise ValueError("accepted level body tables disagree with the scoped snapshot")
    return by_module, sum(by_source.values()), len(by_source)


def make_measures(total: int, matched: int, functions: int = 0,
                  matched_functions: int = 0, units: int = 0) -> dict[str, object]:
    """uint64 fields are strings, as in protobuf JSON."""
    if not (0 <= matched <= total and 0 <= matched_functions <= functions):
        raise ValueError("matched code or functions exceed their totals")
    percent = 100.0 * matched / total if total else 0.0
    return {
        "fuzzy_match_percent": percent,
        "total_code": str(total),
        "matched_code": str(matched),
        "matched_code_percent": percent,
        "total_functions": functions,
        "matched_functions": matched_functions,
        "matched_functions_percent": (100.0 * matched_functions / functions
                                      if functions else 0.0),
        "complete_code": "0",
        "complete_code_percent": 0.0,
        "total_units": units,
        "complete_units": 0,
    }


def unit(name: str, total: int, matched: int, functions: int, matched_functions: int,
         categories: list[str], source: str = "",
         function: dict[str, object] | None = None) -> dict[str, object]:
    measures = make_measures(total, matched, functions, matched_functions)
    for field in UNIT_ZERO_FIELDS:
        del measures[field]
    item: dict[str, object] = {"name": name, "measures": measures}
    if function is not None:
        item["functions"] = [function]
    metadata: dict[str, object] = {"progress_categories": categories}
    if source:
        metadata["source_path"] = source
    item["metadata"] = metadata
    return item


def defined_function(source: str) -> str:
    """The name of the function a level body source defines.

    Scans the top-level braces; a brace that follows `name(parameters)` opens a
    definition. The last definition without `static` wins (helpers come first).
    """
    text = COMMENT.sub(" ", (ROOT / source).read_text(encoding="utf-8"))
    found: list[tuple[bool, str]] = []
    depth = 0
    for brace in re.finditer(r"[{}]", text):
        if brace.group() == "}":
            depth -= 1
            continue
        if depth == 0:
            head = text[:brace.start()]
            start = definition_start(head)
            if start is not None:
                name = re.match(r"[A-Za-z_]\w*", head[start:]).group()
                statement = re.split(r"[;}]", head[:start])[-1]
                found.append((re.search(r"\bstatic\b", statement) is not None, name))
        depth += 1
    if not found:
        raise ValueError(f"{source}: no function definition found")
    return next((name for is_static, name in reversed(found) if not is_static), found[-1][1])


def boot_units(v: versions.Version) -> list[dict[str, object]]:
    total = BOOT_CODE[v.key]
    if v.key != "us":
        # The private boot gate and all accepted sources target SCUS; the PAL
        # catalogue has no matching gate yet, so it cannot inherit them.
        return [unit("boot/executable", total, 0, 0, 0, ["boot"])]
    matches = {match["owner"]: match for match in boot_trial_gate.accepted_matches()}
    owners = {owner.start: owner for owner in accepted_replacements()}
    # Zero alignment words are not code: they leave the boot total and each
    # interval (config/boot/zero_padding.tsv).
    padding = boot_zero_padding()
    total -= sum(padding.values())
    units, used, matched = [], 0, 0
    for row in read_tsv(BOOT_INTERVALS):
        start = int(row["start"], 16)
        owner = owners.get(start)
        if owner is not None:
            match = matches[owner.name]
            size = int(match["body_bytes"])
            units.append(unit(
                f"boot/{match['symbol']}", size, size, 1, 1, ["boot"],
                f"src/boot/{owner.name}.c",
                {"name": match["symbol"], "size": str(size), "fuzzy_match_percent": 100.0}))
            matched += 1
            # Unlabeled code after the accepted body, up to the next label.
            rest = int(row["max_bytes"]) - padding.get(start, 0) - size
            if rest > 0:
                units.append(unit(f"boot/{match['symbol']}{BOOT_TAIL}", rest, 0, 0, 0,
                                  ["boot"]))
                size += rest
        else:
            size = int(row["max_bytes"]) - padding.get(start, 0)
            units.append(unit(f"boot/{row['symbols'].split('|')[-1].strip()}",
                              size, 0, 1, 0, ["boot"]))
        used += size
    if matched != len(owners) or matched != len(matches) or used > total:
        raise ValueError("accepted boot C does not fill the catalogued boot intervals")
    if total > used:
        units.append(unit(f"boot/{BOOT_REMAINDER}", total - used, 0, 0, 0, ["boot"]))
    return units


def module_categories() -> dict[str, tuple[str, str]]:
    """Directory -> (category id, category name) for each retained module."""
    out = {}
    for module, directory in MODULE_DIRS.items():
        slug, title = LEVEL_NAMES[module]
        modules = [module] + sorted(copy for copy, owner in COPIES.items() if owner == module)
        name = title if module in title else f"{title} ({', '.join(modules)})"
        out[directory] = (slug, name)
    return out


def level_units(v: versions.Version) -> list[dict[str, object]]:
    summary = json.loads(ACCEPTED_SHAPES.read_text(encoding="utf-8"))
    if (hashlib.sha256(SHAPE_UNITS.read_bytes()).hexdigest() != summary["shape_units_sha256"]
            or hashlib.sha256(BODY_PLACEMENTS.read_bytes()).hexdigest()
            != summary["bodies_table_sha256"]):
        raise ValueError("config/levels/shape_units.tsv is stale; run "
                         "tools/level_accepted_shapes.py --write with the pinned disc")
    categories = module_categories()
    table = read_units(SHAPE_UNITS)
    if v.key != "us":
        # The level candidate shapes are measured on the USA modules only; PAL
        # keeps the same denominator per directory and no accepted C.
        sizes: dict[str, int] = defaultdict(int)
        for row in table:
            if row["kind"] != "padding":
                sizes[row["home"]] += row["size"] * row["copies"]
        return [unit(f"levels/{home}", total, 0, 0, 0, ["levels"])
                for home, total in sizes.items()]
    units = []
    names: dict[str, str] = {}
    for row in table:
        if row["kind"] == "padding":
            continue
        home = row["home"]
        category = SHARED if home == SHARED else categories[home][0]
        function = None
        if row["source"] and row["kind"] == "function":
            if row["source"] not in names:
                names[row["source"]] = defined_function(row["source"])
            function = {"name": names[row["source"]], "size": str(row["size"]),
                        "fuzzy_match_percent": 100.0}
        units.append(unit(f"levels/{home}/{row['name']}", row["size"] * row["copies"],
                          row["size"] * row["matched_copies"], row["functions"],
                          row["matched_functions"], [category, "levels"],
                          row["source"], function))
    return units


def category(category_id: str, name: str, units: list[dict[str, object]]) -> dict[str, object]:
    return {"id": category_id, "name": name, "measures": totals(units)}


def totals(units: list[dict[str, object]]) -> dict[str, object]:
    def total(field: str) -> int:
        return sum(int(item["measures"].get(field, 0)) for item in units)
    return make_measures(total("total_code"), total("matched_code"), total("total_functions"),
                         total("matched_functions"), len(units))


def generate_report(v: versions.Version) -> dict[str, object]:
    if v.key == "us":
        accepted_us_level_bodies(json.loads(STATUS.read_text(encoding="utf-8")))
    boot = boot_units(v)
    levels = level_units(v)
    categories = [category("boot", f"Boot executable ({v.exe})", boot),
                  category("levels", "Level modules (each candidate shape counted once)",
                           levels)]
    if v.key == "us":
        for directory, (category_id, name) in module_categories().items():
            members = [item for item in levels if item["metadata"]["progress_categories"][0]
                       == category_id]
            categories.append(category(category_id, name, members))
        categories.append(category(SHARED, "Level code shared by several modules",
                                   [item for item in levels
                                    if item["metadata"]["progress_categories"][0] == SHARED]))
    return {
        "version": 2,
        "measures": totals(boot + levels),
        "units": boot + levels,
        "categories": categories,
    }


def dumps(report: dict[str, object]) -> str:
    """JSON with one unit and one category per line, so diffs stay readable."""
    def line(item: object) -> str:
        return json.dumps(item, separators=(",", ":"))
    return "\n".join([
        "{",
        f' "version": {report["version"]},',
        f' "measures": {line(report["measures"])},',
        ' "units": [',
        ",\n".join("  " + line(item) for item in report["units"]),
        " ],",
        ' "categories": [',
        ",\n".join("  " + line(item) for item in report["categories"]),
        " ]",
        "}",
    ]) + "\n"


def write_reports() -> None:
    for key, path in REPORTS.items():
        v = versions.get(key)
        report = generate_report(v)
        text = dumps(report)
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(text, encoding="utf-8", newline="\n")
        # Also write to build/bytematch/ for CI and objdiff compatibility.
        build = ROOT / f"build/bytematch/{v.id}"
        build.mkdir(parents=True, exist_ok=True)
        (build / "report.json").write_text(text, encoding="utf-8", newline="\n")
        m = report["measures"]
        print(f"wrote {path.relative_to(ROOT).as_posix()} ({v.id}): "
              f"{m['matched_code_percent']:.2f}% code ({m['matched_code']}/{m['total_code']} "
              f"bytes), {m['matched_functions']}/{m['total_functions']} functions, "
              f"{m['total_units']} units")
    (ROOT / "progress/functional.json").write_text("[]\n", encoding="utf-8", newline="\n")


def check_reports() -> bool:
    for key, path in REPORTS.items():
        if not path.is_file():
            print("progress reports are missing; run 'python3 tools/gen_progress_report.py'",
                  file=sys.stderr)
            return False
        if dumps(generate_report(versions.get(key))) != path.read_text(encoding="utf-8"):
            print(f"{path.relative_to(ROOT).as_posix()} is out of date; "
                  "re-run 'python3 tools/gen_progress_report.py'", file=sys.stderr)
            return False
    print("progress reports are current with source and placement tables")
    return True


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--check", action="store_true",
                        help="verify that committed reports are current")
    args = parser.parse_args()
    if args.check:
        sys.exit(0 if check_reports() else 1)
    write_reports()


if __name__ == "__main__":
    main()
