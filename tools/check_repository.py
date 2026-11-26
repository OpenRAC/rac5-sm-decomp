#!/usr/bin/env python3
"""Reject game data, build output and proprietary binaries from the Git index."""

from __future__ import annotations

import subprocess
from pathlib import Path

from c_source_policy import policy_errors

ROOT = Path(__file__).resolve().parent.parent
PRIVATE_DIRS = ("baserom/", "asm/", "build/", "toolchain/", "work/", "assets/")
PRIVATE_SUFFIXES = (
    ".iso", ".elf", ".bin", ".wad", ".bwd", ".rel", ".irx", ".exe",
    ".dll", ".7z", ".zip", ".img", ".cnf", ".bik", ".vag",
    ".pss", ".o", ".a", ".map", ".log",
)
# The two accepted-body tables grow with proved sources and placements, and the
# ByteMatch report carries one unit per candidate function. Their schema and
# contents are checked separately; all other tracked files retain the strict
# one-megabyte default.
LARGE_TRACKED = {
    "config/levels/body_sources.tsv": 16_000_000,
    "config/levels/bodies.tsv": 8_000_000,
    "progress/report.json": 6_000_000,
}


C_SUFFIXES = {".c", ".cc", ".cpp", ".cxx", ".h", ".hpp"}


def size_limit(name: str) -> int:
    return LARGE_TRACKED.get(name.replace("\\", "/"), 1_000_000)


def forbidden_reason(name: str) -> str | None:
    path = name.replace("\\", "/")
    lower = path.lower()
    if lower.startswith("scratch/") or any(part.startswith("_scratch") for part in lower.split("/")):
        return "private scratch experiment directory"
    if path.startswith(PRIVATE_DIRS):
        return "private runtime directory"
    if lower.endswith(PRIVATE_SUFFIXES):
        return "game/toolchain/build file extension"
    if lower == ".env" or lower.startswith(".env.") or "/.env" in lower:
        return "environment file"
    return None


def check() -> list[str]:
    result = subprocess.run(["git", "ls-files", "--cached", "-z"], cwd=ROOT,
                            capture_output=True, check=True)
    problems: list[str] = []
    for raw in result.stdout.split(b"\0"):
        if not raw:
            continue
        name = raw.decode("utf-8", "replace")
        reason = forbidden_reason(name)
        if reason:
            problems.append(f"{name}: {reason}")
            continue
        path = ROOT / name
        if path.exists():
            source = path.suffix.lower() in C_SUFFIXES
            if path.stat().st_size > size_limit(name):
                problems.append(f"{name}: unexpectedly large tracked file")
                head = b""
            else:
                # Read a whole file only when its text is checked as C source.
                with path.open("rb") as handle:
                    head = handle.read() if source else handle.read(4)
                if head[:4] == b"\x7fELF":
                    problems.append(f"{name}: ELF bytes in a tracked file")
            if source:
                # Same universal-newline text that Path.read_text() returns.
                text = (head.decode("utf-8").replace("\r\n", "\n").replace("\r", "\n")
                        if head else path.read_text(encoding="utf-8"))
                problems.extend(f"{name}: {reason}" for reason in policy_errors(text))
    return problems


if __name__ == "__main__":
    found = check()
    if found:
        raise SystemExit("repository check failed:\n" + "\n".join(found))
    print("repository check: no game data, build output or toolchain in Git index")
