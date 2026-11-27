#!/usr/bin/env python3
"""Reject invalid UTF-8 and double-encoded text in tracked text files.

Double encoding happens when UTF-8 bytes are decoded as Windows-1252 (or
Latin-1) and written back as UTF-8: an en dash becomes ``â€“``. The check
reports a run only when re-encoding it byte for byte yields one valid UTF-8
non-ASCII character, so ordinary accented text is not flagged. ``--fix``
repairs those runs in place. The tool needs only Python's standard library and
no game inputs.
"""

from __future__ import annotations

import argparse
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
TEXT_SUFFIXES = {
    ".md", ".txt", ".py", ".c", ".cc", ".cpp", ".cxx", ".h", ".hpp", ".s",
    ".json", ".tsv", ".csv", ".yml", ".yaml", ".toml", ".cfg", ".ini", ".ld",
    ".sh", ".gitignore", ".gitattributes",
}


def _byte_map() -> dict[str, int]:
    """Map each character a single misdecoded byte can become back to that byte."""
    table = {}
    for value in range(0x80, 0x100):
        table[chr(value)] = value  # Latin-1 and undefined Windows-1252 slots
        try:
            table[bytes([value]).decode("cp1252")] = value
        except UnicodeDecodeError:
            pass
    return table


BYTE = _byte_map()


def _class(low: int, high: int) -> str:
    chars = sorted({char for char, value in BYTE.items() if low <= value <= high})
    return "[" + "".join(re.escape(char) for char in chars) + "]"


# A misdecoded UTF-8 lead byte (0xC2-0xF4) followed by one to three continuations.
MOJIBAKE = re.compile(_class(0xC2, 0xF4) + _class(0x80, 0xBF) + "{1,3}")


def _repair(run: str) -> str | None:
    try:
        fixed = bytes(BYTE[char] for char in run).decode("utf-8")
    except (KeyError, UnicodeDecodeError):
        return None
    return fixed if len(fixed) == 1 else None


def findings(text: str) -> list[tuple[int, str, str]]:
    """Return (line, double-encoded run, repaired character) for each occurrence."""
    found = []
    for match in MOJIBAKE.finditer(text):
        fixed = _repair(match[0])
        if fixed is not None:
            found.append((text.count("\n", 0, match.start()) + 1, match[0], fixed))
    return found


def repair(text: str) -> str:
    return MOJIBAKE.sub(lambda match: _repair(match[0]) or match[0], text)


def tracked_text_files(root: Path) -> list[str]:
    result = subprocess.run(["git", "ls-files", "--cached", "-z"], cwd=root,
                            capture_output=True, check=True)
    names = [raw.decode("utf-8", "replace") for raw in result.stdout.split(b"\0") if raw]
    return [name for name in names
            if Path(name).suffix.lower() in TEXT_SUFFIXES or Path(name).name in TEXT_SUFFIXES]


def audit(root: Path, fix: bool = False) -> list[str]:
    problems = []
    for name in tracked_text_files(root):
        path = root / name
        if not path.is_file():
            continue
        data = path.read_bytes()
        try:
            text = data.decode("utf-8")
        except UnicodeDecodeError as error:
            line = data.count(b"\n", 0, error.start) + 1
            problems.append(f"{name}:{line}: invalid UTF-8")
            continue
        found = findings(text)
        if found and fix:
            path.write_bytes(repair(text).encode("utf-8"))
        verb = "repaired" if fix else "double-encoded"
        problems.extend(f"{name}:{line}: {verb} {run!r} (should be {char!r})"
                        for line, run, char in found)
    return problems


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--root", type=Path, default=ROOT, help="repository directory (defaults to this checkout)")
    parser.add_argument("--fix", action="store_true", help="repair double-encoded characters in place")
    args = parser.parse_args()
    problems = audit(args.root, fix=args.fix)
    for problem in problems:
        print(problem)
    if args.fix:
        remaining = [problem for problem in problems if problem.endswith("invalid UTF-8")]
        print(f"Repaired {len(problems) - len(remaining)} double-encoded characters.")
        return int(bool(remaining))
    print(f"Text encoding: {len(problems)} problem(s) in tracked text files.")
    return int(bool(problems))


if __name__ == "__main__":
    raise SystemExit(main())
