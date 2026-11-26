#!/usr/bin/env python3
"""Check and count the retail code listed as original assembly.

config/handwritten_asm.tsv lists report units whose retail body is assembly:
each holds an instruction the pinned C chains never emit, or is nothing but
syscall trampolines (the table's header gives the rule and the classes). They
are finished work, but not C: tools/progress_status.py counts them in a column
of their own and the ByteMatch report (progress/report.json) does not count
them as matched.

Usage:
  python3 tools/handwritten_asm.py            # check the table against the committed catalogues
  python3 tools/handwritten_asm.py --retail   # also verify each row's evidence in the retail bytes

The default check needs no game data: every row names a unit of
progress/report.json with the same code bytes and no accepted C, a boot row
starts where config/boot/code_intervals.tsv starts that unit, and a level row
is a function shape unit of config/levels/shape_units.tsv at its module offset.
--retail reads the pinned boot executable and level modules (baserom/, never in
the repository) and checks that each row's class is what its bytes hold.
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import struct
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

from boot_zero_padding import read as boot_zero_padding  # noqa: E402
from level_accepted_shapes import read_units  # noqa: E402

TABLE = ROOT / "config/handwritten_asm.tsv"
REPORT = ROOT / "progress/report.json"
BOOT_INTERVALS = ROOT / "config/boot/code_intervals.tsv"
MODULES = ROOT / "config/levels/modules.tsv"
TARGET = ROOT / "config/target.json"
HEADER = ["scope", "name", "start", "bytes", "class", "evidence"]
CLASSES = ("cop0", "gp-store", "mmi", "vu0", "syscall")
TEXT_START = 0x01E62500

# 128-bit MMI groups (major opcode 0x1C, function field) and the sub-operations
# ee-gcc uses as plain 128-bit moves, which are no evidence on their own.
MMI_GROUPS = (0x08, 0x09, 0x28, 0x29)
MMI_MOVES = {(0x29, 0x12), (0x09, 0x0E), (0x29, 0x0E)}  # por, pcpyld, pcpyud
TRAMPOLINE_TAIL = (0x0000000C, 0x03E00008, 0x00000000)  # syscall; jr $ra; nop


def read_rows(path: Path = TABLE) -> list[dict[str, str]]:
    lines = [line for line in path.read_text(encoding="utf-8").splitlines()
             if line and not line.startswith("#")]
    if not lines or lines[0].split("\t") != HEADER:
        raise ValueError(f"{path.name}: header must be {' / '.join(HEADER)}")
    rows = list(csv.DictReader(lines, delimiter="\t"))
    for row in rows:
        if None in row or any(value is None or not value.strip() for value in row.values()):
            raise ValueError(f"{path.name}: incomplete row {row.get('name')}")
    return rows


def report_units() -> dict[str, dict[str, object]]:
    return {unit["name"]: unit for unit in json.loads(REPORT.read_text(encoding="utf-8"))["units"]}


def level_unit_name(shape: dict[str, object], table: list[dict[str, object]]) -> str:
    from gen_progress_report import level_unit_names
    rows = [row for row in table if row["kind"] != "padding"]
    return level_unit_names(rows)[rows.index(shape)]


def summary(rows: list[dict[str, str]] | None = None) -> dict[str, object]:
    """Validate the table against the committed catalogues; return the counts.

    Needs no game data and no generated report, so tools/progress_status.py can
    restate it in its snapshot.
    """
    from boot_c_campaign import accepted_replacements
    rows = read_rows() if rows is None else rows
    intervals = {}
    for row in csv.DictReader((line for line in BOOT_INTERVALS.read_text(encoding="utf-8")
                               .splitlines() if not line.startswith("#")), delimiter="	"):
        intervals[int(row["start"], 16)] = row
    padding = boot_zero_padding()
    accepted = {owner.start for owner in accepted_replacements()}
    modules = {Path(row["path"]).name for row in csv.DictReader(
        (line for line in MODULES.read_text(encoding="utf-8").splitlines()
         if not line.startswith("#")), delimiter="	")}
    by_shape = {row["name"]: row for row in read_units()}
    seen = set()
    counts: Counter[str] = Counter()
    boot_bytes = level_bytes = level_placements = 0
    for row in rows:
        name, scope, cls = row["name"], row["scope"], row["class"]
        if cls not in CLASSES:
            raise ValueError(f"{name}: unknown class {cls}")
        if (scope, name) in seen:
            raise ValueError(f"{name}: listed twice")
        seen.add((scope, name))
        start, size = int(row["start"], 16), int(row["bytes"])
        if scope == "boot":
            interval = intervals.get(start)
            if (interval is None
                    or interval["symbols"].split("|")[-1].strip() != name
                    or int(interval["max_bytes"]) - padding.get(start, 0) != size):
                raise ValueError(f"{name}: not the boot interval at 0x{start:08X} of {size} bytes")
            if start in accepted:
                raise ValueError(f"{name}: accepted C already owns this interval")
            boot_bytes += size
        else:
            shape = by_shape.get(name)
            if (scope not in modules or shape is None or shape["kind"] != "function"
                    or name != f"{scope.removesuffix('.REL')}_{start:06X}"
                    or int(shape["size"]) * int(shape["copies"]) != size):
                raise ValueError(f"{name}: not a level function shape unit of {size} bytes")
            if int(shape["matched_copies"]):
                raise ValueError(f"{name}: accepted C already covers this shape")
            level_bytes += size
            level_placements += int(shape["modules"])
        counts[cls] += 1
    return {
        "table": TABLE.relative_to(ROOT).as_posix(),
        "boot_units": sum(1 for row in rows if row["scope"] == "boot"),
        "boot_bytes": boot_bytes,
        "level_units": sum(1 for row in rows if row["scope"] != "boot"),
        "level_bytes": level_bytes,
        "level_placements": level_placements,
        "classes": {cls: counts[cls] for cls in CLASSES if counts[cls]},
        "counted_as_c": False,
    }


def check_report(rows: list[dict[str, str]]) -> None:
    """Each row is a unit of progress/report.json with its bytes and no matched code."""
    units = report_units()
    shapes = read_units()
    by_shape = {row["name"]: row for row in shapes}
    for row in rows:
        name = (f"boot/{row['name']}" if row["scope"] == "boot"
                else level_unit_name(by_shape[row["name"]], shapes))
        unit = units.get(name)
        if unit is None:
            raise ValueError(f"{row['name']}: no report unit {name}")
        measures = unit["measures"]
        if (int(measures["total_code"]) != int(row["bytes"])
                or int(measures["matched_code"]) != 0):
            raise ValueError(f"{row['name']}: report unit {name} differs or is counted as matched")


def evidence_holds(cls: str, words: tuple[int, ...]) -> bool:
    """Whether the words hold what the class claims."""
    if cls == "cop0":
        return any(word >> 26 == 0x10 for word in words)
    if cls == "vu0":
        return any(word >> 26 in (0x12, 0x36, 0x3E) for word in words)
    if cls == "mmi":
        return any(word >> 26 == 0x1C and word & 0x3F in MMI_GROUPS
                   and (word & 0x3F, (word >> 6) & 0x1F) not in MMI_MOVES for word in words)
    if cls == "gp-store":
        # sw, sd or sq with $gp as the stored register
        return any(word >> 26 in (0x2B, 0x3F, 0x1F) and (word >> 16) & 0x1F == 28
                   for word in words)
    if cls == "syscall":
        if not words or len(words) % 4:
            return False
        return all(words[i] >> 16 == 0x2403 and tuple(words[i + 1:i + 4]) == TRAMPOLINE_TAIL
                   for i in range(0, len(words), 4))
    return False


def verify_retail(rows: list[dict[str, str]], boot: Path, levels: Path) -> int:
    from boot_assembly import text_words
    target = json.loads(TARGET.read_text(encoding="utf-8"))
    text = text_words(boot, target["boot_sha256"])
    hashes = {Path(row["path"]).name: row["sha256"] for row in csv.DictReader(
        (line for line in MODULES.read_text(encoding="utf-8").splitlines()
         if not line.startswith("#")), delimiter="\t")}
    images: dict[str, bytes] = {}
    for row in rows:
        start, size = int(row["start"], 16), int(row["bytes"])
        if row["scope"] == "boot":
            first = (start - TEXT_START) // 4
            words = tuple(text[first:first + size // 4])
        else:
            module = row["scope"]
            if module not in images:
                data = (levels / module).read_bytes()
                if hashlib.sha256(data).hexdigest() != hashes[module]:
                    raise ValueError(f"{module} differs from config/levels/modules.tsv")
                images[module] = data
            words = struct.unpack_from("<" + "I" * (size // 4), images[module], start)
        if len(words) != size // 4 or not evidence_holds(row["class"], words):
            raise ValueError(f"{row['name']}: the retail bytes do not hold {row['class']} evidence")
    return len(rows)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--retail", action="store_true",
                        help="also verify each row's evidence against the retail bytes")
    parser.add_argument("--boot", type=Path, default=ROOT / "baserom/SCUS_976.15")
    parser.add_argument("--levels", type=Path, default=ROOT / "baserom/LVL")
    args = parser.parse_args()
    rows = read_rows()
    counts = summary(rows)
    check_report(rows)
    if args.retail:
        print(f"retail evidence holds for {verify_retail(rows, args.boot, args.levels)} rows")
    print(f"original assembly: {counts['boot_units']} boot units ({counts['boot_bytes']:,} bytes), "
          f"{counts['level_units']} level shape units ({counts['level_bytes']:,} bytes, "
          f"{counts['level_placements']} placements); "
          + ", ".join(f"{cls} {n}" for cls, n in counts["classes"].items())
          + "; not counted as C")


if __name__ == "__main__":
    main()
