#!/usr/bin/env python3
"""Per-source compiler and cc1 flags measured against the retail boot.

``config/cflags.txt`` holds one entry per line: the repository-relative path of
a campaign C source, an optional compiler selector, then the flags measured for
that file. A source without an entry compiles with the profile's global flags
and the pinned chain, so its pinned object stays valid without requalification.

The selector is a bare token in the first flag position, in front of the flags,
and names one of the compilers the boot profile pins besides its own chain.
An entry without a selector extends the pinned chain's global flags; an entry
with a selector carries the complete flag set for the selected compiler, so a
reader never has to combine two places to know how that file was built. Every
entry must name an existing C source of a repository compiler campaign and at
least one flag, so a mistyped path, an unknown selector, a duplicate or a
flag on a file no gate compiles fails instead of being ignored silently.
"""

from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path, PurePosixPath

ROOT = Path(__file__).resolve().parent.parent
CFLAGS = ROOT / "config/cflags.txt"
PROFILE = ROOT / "config/boot/compiler_trial.json"
# C sources belong to a campaign when a gate compiles them or when they are
# staged for review in one of these directories.
CAMPAIGN_DIRS = ("src/boot", "nonmatching/boot", "src/levels", "nonmatching/levels")


@dataclass(frozen=True)
class Entry:
    """One ``config/cflags.txt`` line: which compiler, which flags for that file."""

    compiler: str
    flags: tuple[str, ...]

    @property
    def pinned(self) -> bool:
        """True when the entry asks for the profile's own compiler chain."""
        return self.compiler == DEFAULT_COMPILER


# The profile's own chain. A source with no entry, and an entry with no
# selector, both mean this compiler.
DEFAULT_COMPILER = "pinned"
DEFAULT_ENTRY = Entry(DEFAULT_COMPILER, ())


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


def pinned_compilers() -> tuple[str, ...]:
    """Every selector a line may name: the profile chain and its pinned extras."""
    profile = json.loads(PROFILE.read_text(encoding="utf-8"))
    return (DEFAULT_COMPILER, *sorted(profile.get("extra_compilers", {})))


def load(path: Path = CFLAGS) -> dict[str, Entry]:
    """Parse and validate the per-source compiler/flag file."""
    known = campaign_sources()
    selectors = pinned_compilers()
    entries: dict[str, Entry] = {}
    problems: list[str] = []
    for number, line in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        entry = line.split("#", 1)[0].strip()
        if not entry:
            continue
        fields = entry.split()
        name, rest = fields[0].replace("\\", "/"), fields[1:]
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
        # A leading bare token is a compiler selector; flags always start with "-".
        compiler = DEFAULT_COMPILER
        if rest and not rest[0].startswith("-"):
            compiler, rest = rest[0], rest[1:]
            if compiler not in selectors:
                problems.append(f"line {number}: {name}: unknown compiler selector "
                                f"{compiler}; pinned selectors are "
                                f"{', '.join(selectors)}")
                continue
        if not rest:
            problems.append(f"line {number}: {name}: no cc1 flags")
            continue
        if not all(flag.startswith("-") for flag in rest):
            problems.append(f"line {number}: {name}: not a flag: "
                            f"{next(f for f in rest if not f.startswith('-'))}")
            continue
        entries[name] = Entry(compiler, tuple(rest))
    if problems:
        raise ValueError("config/cflags.txt: " + "; ".join(problems))
    return entries


def for_source(entries: dict[str, Entry], source: Path) -> Entry:
    """Compiler and flags measured for one source file; the profile chain by default."""
    try:
        name = Path(source).resolve().relative_to(ROOT).as_posix()
    except ValueError:
        return DEFAULT_ENTRY
    return entries.get(name, DEFAULT_ENTRY)
