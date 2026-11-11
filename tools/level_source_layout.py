"""Keep the level body sources in one directory per SNR2 module.

The layout follows the first two Ratchet & Clank decompilations
(``src/levels/<level>/`` plus ``src/levels/shared/``), adapted to the SNR2
modules of Size Matters:

* a body source whose placements in ``config/levels/bodies.tsv`` all lie in
  one module lives in that module's directory: ``src/levels/frontend/`` or
  ``src/levels/01_pokitaru/`` ... ``src/levels/24_treehouse/``;
* a body source placed in several modules lives in ``src/levels/shared/``.

A module that is an identical copy of another (``identical_full_interval_groups``
in ``config/levels/function_inventory_summary.json``: LEVEL_21.REL repeats
LEVEL_15.REL) has no directory of its own; its placements count as the first
module's.  Directory names are the level names of the progress report
(``tools/gen_progress_report.py``) without the ``level`` prefix.

usage: python tools/level_source_layout.py [--apply]

Without ``--apply`` misplaced sources are listed and the exit status is 1 when
there is any.  ``--apply`` moves them (file names are kept) and rewrites every
reference to their old paths in the level tables, ``config/cflags.txt``,
``config/levels/compiler_trial.json`` and the Markdown documents.  When the
reviewed family identity controls name a moved source, their pinned digest
(``controls_sha256`` in ``config/levels/family_identity_summary.json``) is
updated as well: a move changes the paths in that table, never the reviewed
families.  Run it after adding or re-placing level body sources; it is
idempotent.
"""

from __future__ import annotations

import argparse
import csv
import json
import re
import shutil
import sys
from collections import Counter, defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compile_boot_trial import digest  # noqa: E402
from gen_progress_report import LEVEL_NAMES  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
BODIES = ROOT / "config/levels/bodies.tsv"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
FAMILY_CONTROLS = ROOT / "config/levels/family_identity_controls.tsv"
FAMILY_SUMMARY = ROOT / "config/levels/family_identity_summary.json"
TABLES = ("config/levels/bodies.tsv", "config/levels/body_sources.tsv",
          "config/levels/family_identity_controls.tsv",
          "config/levels/local_link_symbols.tsv",
          "config/levels/compiler_trial.json", "config/cflags.txt")
DOCUMENT_TREES = ("config", "docs", "progress", "src")
SHARED = "shared"
REFERENCE = re.compile(r"src/levels/[A-Za-z0-9_]+/[A-Za-z0-9_]+\.c(?![A-Za-z0-9_])")


def identical_copies() -> dict[str, str]:
    """Map each module that repeats another module byte for byte to that module."""
    inventory = json.loads(INVENTORY.read_text(encoding="utf-8"))
    return {copy: group[0] for group in inventory["identical_full_interval_groups"]
            for copy in group[1:]}


COPIES = identical_copies()
MODULE_DIRS = {module: slug if slug == "frontend" else slug.removeprefix("level")
               for module, (slug, _title) in LEVEL_NAMES.items() if module not in COPIES}
SOURCE_DIRS = frozenset(MODULE_DIRS.values()) | {SHARED}


def records(path: Path = BODIES) -> list[dict[str, str]]:
    with path.open(encoding="utf-8", newline="") as file:
        return list(csv.DictReader((line for line in file if not line.startswith("#")),
                                   delimiter="\t"))


def home(modules) -> str:
    """Return the directory of a source placed in ``modules``."""
    owners = {COPIES.get(module, module) for module in modules}
    if len(owners) != 1:
        return SHARED
    return MODULE_DIRS[owners.pop()]


def misplaced(rows) -> dict[str, str]:
    """Map each source of ``rows`` (bodies.tsv records) that sits elsewhere to its path."""
    modules: dict[str, set[str]] = defaultdict(set)
    for row in rows:
        modules[row["source"].replace("\\", "/")].add(row["module"])
    moves = {}
    for source, placed in sorted(modules.items()):
        expected = f"src/levels/{home(placed)}/{source.rsplit('/', 1)[-1]}"
        if source != expected:
            moves[source] = expected
    return moves


def repeated_names(rows) -> list[str]:
    """File names carried by more than one source (the gates compile sources by name)."""
    names = Counter(source.rsplit("/", 1)[-1]
                    for source in {row["source"].replace("\\", "/") for row in rows})
    return sorted(name for name, count in names.items() if count > 1)


def documents() -> list[Path]:
    paths = sorted(ROOT.glob("*.md"))
    for tree in DOCUMENT_TREES:
        paths += sorted((ROOT / tree).rglob("*.md"))
    return paths


def rewrite_references(moves: dict[str, str]) -> int:
    rewritten = 0
    for path in [ROOT / table for table in TABLES] + documents():
        if not path.is_file():
            continue
        text = path.read_text(encoding="utf-8")
        hits = 0

        def replace(match: re.Match) -> str:
            nonlocal hits
            new = moves.get(match.group(0))
            if new is None:
                return match.group(0)
            hits += 1
            return new

        updated = REFERENCE.sub(replace, text)
        if hits:
            path.write_text(updated, encoding="utf-8", newline="\n")
            rewritten += hits
    return rewritten


def refresh_family_digest() -> bool:
    raw = FAMILY_SUMMARY.read_text(encoding="utf-8")
    summary = json.loads(raw)
    current = digest(FAMILY_CONTROLS)
    if summary["controls_sha256"] == current:
        return False
    FAMILY_SUMMARY.write_text(raw.replace(summary["controls_sha256"], current),
                              encoding="utf-8", newline="\n")
    return True


def apply(moves: dict[str, str]) -> None:
    for old, new in moves.items():
        target = ROOT / new
        if target.exists():
            raise SystemExit(f"{new} already exists; {old} was not moved")
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.move(str(ROOT / old), str(target))
    for old in moves:
        folder = (ROOT / old).parent
        if folder.is_dir() and not any(folder.iterdir()):
            folder.rmdir()
    print(f"moved {len(moves)} sources; rewrote {rewrite_references(moves)} references")
    if refresh_family_digest():
        print("refreshed controls_sha256 in config/levels/family_identity_summary.json")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--apply", action="store_true",
                        help="move misplaced sources and rewrite their references")
    args = parser.parse_args(argv)
    rows = records()
    repeated = repeated_names(rows)
    if repeated:
        print("source file names used by several sources: " + ", ".join(repeated[:20]))
        return 1
    moves = misplaced(rows)
    if args.apply and moves:
        apply(moves)
        moves = misplaced(records())
    if moves:
        for old, new in list(moves.items())[:20]:
            print(f"{old} -> {new}")
        print(f"{len(moves)} level body sources are outside their module directory; "
              "run python tools/level_source_layout.py --apply")
        return 1
    homes = Counter(row["source"].split("/")[2] for row in
                    {row["source"]: row for row in rows}.values())
    print(f"level source layout: {sum(homes.values())} sources in {len(homes)} directories "
          f"({homes[SHARED]} shared)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
