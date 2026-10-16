#!/usr/bin/env python3
"""Per-source cc1 flags measured against the retail boot.

``config/cflags.txt`` holds one entry per line: the repository-relative path of
a campaign C source, then the extra cc1 flags measured for that file. A source
without an entry compiles with the profile's global flags only, so its pinned
object stays valid without requalification. Every entry must name an existing
C source of a repository compiler campaign, so a mistyped path, a duplicate or
a flag on a file no gate compiles fails instead of being ignored silently.
"""

from __future__ import annotations

import json
from pathlib import Path, PurePosixPath

ROOT = Path(__file__).resolve().parent.parent
CFLAGS = ROOT / "config/cflags.txt"
# C sources belong to a campaign when a gate compiles them or when they are
# staged for review in one of these directories.
CAMPAIGN_DIRS = ("src/boot", "nonmatching/boot", "src/levels", "nonmatching/levels")


def campaign_sources() -> frozenset[str]:
    """Repository-relative C sources the campaigns compile or stage."""
    from boot_c_campaign import REPLACEMENTS, source_path

    names = {source_path(item.name).relative_to(ROOT).as_posix()
             for item in REPLACEMENTS}
    level = json.loads((ROOT / "config/levels/compiler_trial.json")
                       .read_text(encoding="utf-8"))
    for row in (level["accepted"], level["additional_accepted"],
                level["frontend_accepted"],
                *level["provisional_controls"]):
        names.add(row["source"])
    for folder in CAMPAIGN_DIRS:
        base = ROOT / folder
        if base.is_dir():
            names.update(path.relative_to(ROOT).as_posix()
                         for path in base.glob("*.c"))
    return frozenset(names)


def load(path: Path = CFLAGS) -> dict[str, tuple[str, ...]]:
    """Parse and validate the per-source flag file."""
    known = campaign_sources()
    entries: dict[str, tuple[str, ...]] = {}
    problems: list[str] = []
    for number, line in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        entry = line.split("#", 1)[0].strip()
        if not entry:
            continue
        fields = entry.split()
        name, flags = fields[0].replace("\\", "/"), fields[1:]
        if name in entries:
            problems.append(f"line {number}: {name}: duplicate entry")
            continue
        if (PurePosixPath(name).is_absolute() or Path(name).is_absolute()
                or ".." in PurePosixPath(name).parts
                or not name.endswith(".c")):
            problems.append(f"line {number}: {name}: not a repository-relative C source")
            continue
        if not (ROOT / name).is_file():
            problems.append(f"line {number}: {name}: source file does not exist")
            continue
        if name not in known:
            problems.append(f"line {number}: {name}: not a campaign C source")
            continue
        if not flags:
            problems.append(f"line {number}: {name}: no cc1 flags")
            continue
        entries[name] = tuple(flags)
    if problems:
        raise ValueError("config/cflags.txt: " + "; ".join(problems))
    return entries


def for_source(entries: dict[str, tuple[str, ...]], source: Path) -> tuple[str, ...]:
    """Extra cc1 flags measured for one source file, empty when it has no entry."""
    try:
        name = Path(source).resolve().relative_to(ROOT).as_posix()
    except ValueError:
        return ()
    return entries.get(name, ())
