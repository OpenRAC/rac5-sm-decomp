#!/usr/bin/env python3
"""Keep hand-written current figures and public wording in step with the repository.

Two checks need no game input:

* **Figures.** Several documents restate the current accepted totals that
  ``progress/status.json`` and ``config/boot/witness_boundaries.tsv`` already
  record. Each restatement is listed in ``CLAIMS`` as a file, a pattern with one
  number group and the generated value it must show. ``--write`` rewrites the
  numbers in place after a regenerated snapshot; the default only reports.
  Dated measurements ("on 11 November 2026 ...") are history and are not listed.
* **Vocabulary.** AGENTS.md asks public text to describe a scope and a date
  rather than private working terms. Tracked Markdown other than AGENTS.md must
  not use *wave*, *lot* or *kit*; a term written in italics, as the rule itself
  quotes it, is allowed.

Patterns are matched against the document with every run of whitespace folded to
one space, so rewrapping a paragraph does not break them. A pattern that no
longer matches is reported: reword the claim list together with the document.
"""

from __future__ import annotations

import argparse
import csv
import json
import re
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
STATUS = ROOT / "progress" / "status.json"
BOUNDARIES = ROOT / "config" / "boot" / "witness_boundaries.tsv"


@dataclass(frozen=True)
class Claim:
    path: str
    pattern: str   # regular expression with exactly one capturing group
    key: str       # name in figures()
    style: str = "comma"  # "comma" (1,234), "plain" (1234) or "percent" (12.34)


def _boot_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(encoding="utf-8", newline="") as handle:
        rows = (line for line in handle if not line.startswith("#"))
        return list(csv.DictReader(rows, delimiter="\t"))


def figures(status: dict, boundaries: list[dict[str, str]]) -> dict[str, int | float]:
    boot = status["boot"]
    levels = status["levels"]
    body = sum(int(row["body_bytes"]) for row in boundaries)
    padding = sum(int(row["zero_padding_bytes"]) for row in boundaries)
    return {
        "boot_functions": len(boot["accepted_functions"]),
        "boot_bytes": boot["accepted_c_bytes"],
        "boot_percent": boot["scoped_code_percent"],
        "boot_objects": len(boundaries),
        "boot_body_bytes": body,
        "boot_padding_bytes": padding,
        "boot_linked_bytes": body + padding,
        "level_placements": levels["accepted_level_body_placements"],
        "level_sources": levels["accepted_level_body_unique_sources"],
        "level_placement_bytes": levels["accepted_level_body_placement_bytes"],
        "level_source_bytes": levels["accepted_level_body_unique_source_bytes"],
    }


def render(value: int | float, style: str) -> str:
    if style == "percent":
        return f"{value:.2f}"
    if style == "plain":
        return str(value)
    return f"{value:,}"


_N = r"([0-9][0-9,]*)"
_P = r"([0-9]+\.[0-9]{2})"

CLAIMS: tuple[Claim, ...] = (
    Claim("progress/README.md", rf"It records \*\*{_N} accepted boot C functions", "boot_functions"),
    Claim("progress/README.md", rf"accepted boot C functions \({_N} bytes\)", "boot_bytes"),
    Claim("progress/README.md", rf"\*\*{_N} accepted level-body placements\*\*", "level_placements"),
    Claim("progress/README.md", rf"\({_N} placement bytes carried by", "level_placement_bytes"),
    Claim("progress/README.md", rf"placement bytes carried by {_N} sources", "level_sources"),
    Claim("progress/README.md", rf"sources, {_N} distinct-source bytes", "level_source_bytes"),
    Claim("progress/README.md", rf"the boot `\.text`: {_N} / 498,900 bytes", "boot_bytes"),
    Claim("progress/README.md", rf"/ 498,900 bytes \({_P}%\)", "boot_percent", "percent"),
    Claim("CONTRIBUTING.md", rf"\*\*{_N}\*\* narrowly accepted boot placements", "boot_functions"),
    Claim("CONTRIBUTING.md", rf"narrowly accepted boot placements \({_N} bytes\)", "boot_bytes"),
    Claim("CONTRIBUTING.md", rf"counted separately, {_N} accepted level-body placements", "level_placements"),
    Claim("docs/contributing/roadmap.md", rf"campaign recompiles {_N} objects", "boot_objects"),
    Claim("docs/contributing/roadmap.md", rf"catalogues {_N} body extents", "boot_objects"),
    Claim("docs/contributing/roadmap.md", rf"{_N} reviewed boot placements are accepted", "boot_functions"),
    Claim("docs/contributing/roadmap.md", rf"level-body table accepts {_N} placements", "level_placements"),
    Claim("docs/contributing/roadmap.md", rf"placements carried by {_N} sources\. Other", "level_sources"),
    Claim("docs/contributing/matching-blockers.md", rf"the level scope is \*\*{_N} measured placements", "level_placements"),
    Claim("docs/contributing/matching-blockers.md", rf"measured placements\*\* of {_N} placement bytes", "level_placement_bytes"),
    Claim("docs/contributing/matching-blockers.md", rf"carried by \*\*{_N} sources\*\*, and many bounded", "level_sources"),
    Claim("docs/contributing/matching-blockers.md", rf"The boot keeps \*\*{_N} accepted functions", "boot_functions"),
    Claim("docs/contributing/matching-blockers.md", rf"accepted functions\*\* covering {_N} of 498,900", "boot_bytes"),
    Claim("docs/contributing/matching-blockers.md", rf"The {_N} linked boot C bodies", "boot_objects"),
    Claim("docs/contributing/matching-blockers.md", rf"linked boot C bodies cover {_N} bytes including alignment", "boot_linked_bytes"),
    Claim("docs/compiler/compiler-status.md", rf"\*\*{_N} boot `\.text` bytes in", "boot_body_bytes"),
    Claim("docs/compiler/compiler-status.md", rf"boot `\.text` bytes in {_N} C bodies\*\*", "boot_objects"),
    Claim("docs/compiler/compiler-status.md", rf"rebuilds all {_N} objects from authored C", "boot_objects"),
    Claim("docs/compiler/compiler-status.md", rf"report accepts {_N} boot-only placements", "boot_functions"),
    Claim("docs/compiler/compiler-status.md", rf"boot-only placements \({_N} bytes\)", "boot_bytes"),
    Claim("docs/compiler/compiler-status.md", rf"accepted for its {_N} reviewed placements", "boot_functions"),
    Claim("docs/gates/boot-match-scope.md", rf"\*\*{_N} boot placements covering", "boot_functions"),
    Claim("docs/gates/boot-match-scope.md", rf"boot placements covering {_N} boot `\.text` bytes", "boot_bytes"),
    Claim("docs/gates/boot-match-scope.md", r"`counted_matches: ([0-9]+)`", "boot_functions", "plain"),
    Claim("docs/gates/boot-match-scope.md", r"`counted_bytes: ([0-9]+)`", "boot_bytes", "plain"),
    Claim("docs/gates/boot-match-scope.md", rf"listing the {_N} accepted retail symbols", "boot_functions"),
    Claim("docs/gates/boot-trial-gate.md", rf"campaign contains {_N} compiler-produced C objects", "boot_objects"),
    Claim("docs/gates/boot-trial-gate.md", rf"catalogue records {_N} bodies", "boot_objects"),
    Claim("docs/gates/boot-trial-gate.md", rf"bodies \({_N} compiled bytes plus", "boot_body_bytes"),
    Claim("docs/gates/boot-trial-gate.md", rf"compiled bytes plus {_N} zero alignment", "boot_padding_bytes"),
    Claim("docs/gates/boot-trial-gate.md", rf"Of these, {_N} reviewed placements supply", "boot_functions"),
    Claim("docs/gates/boot-trial-gate.md", rf"reviewed placements supply {_N} accepted C bytes", "boot_bytes"),
    Claim("docs/gates/boot-trial-gate.md", r"`counted_matches: ([0-9]+)`", "boot_functions", "plain"),
    Claim("docs/gates/boot-trial-gate.md", r"`counted_bytes: ([0-9]+)`", "boot_bytes", "plain"),
    Claim("docs/gates/boot-c-witness.md", rf"campaign links {_N} objects", "boot_objects"),
    Claim("docs/gates/boot-c-witness.md", rf"objects and catalogues {_N} bodies", "boot_objects"),
)


def _folded(text: str) -> tuple[str, list[int]]:
    """Fold whitespace runs to one space and map folded offsets to the original."""
    out: list[str] = []
    where: list[int] = []
    index = 0
    while index < len(text):
        if text[index].isspace():
            start = index
            while index < len(text) and text[index].isspace():
                index += 1
            out.append(" ")
            where.append(start)
        else:
            out.append(text[index])
            where.append(index)
            index += 1
    where.append(len(text))
    return "".join(out), where


def check_claims(texts: dict[str, str], values: dict[str, int | float],
                 claims: tuple[Claim, ...] = CLAIMS) -> tuple[list[str], dict[str, str]]:
    """Return problems and the documents with every listed number corrected."""
    problems: list[str] = []
    fixed = dict(texts)
    for claim in claims:
        text = fixed.get(claim.path)
        if text is None:
            problems.append(f"{claim.path}: file is missing")
            continue
        folded, where = _folded(text)
        matches = list(re.finditer(claim.pattern, folded))
        if not matches:
            problems.append(f"{claim.path}: no text matches /{claim.pattern}/; "
                            "update CLAIMS in tools/check_doc_figures.py with the wording")
            continue
        expected = render(values[claim.key], claim.style)
        # Replace from the end so earlier offsets stay valid.
        for match in reversed(matches):
            found = match.group(1)
            if found == expected:
                continue
            problems.append(f"{claim.path}: shows {found} where {claim.key} is {expected}")
            start, end = where[match.start(1)], where[match.end(1) - 1] + 1
            text = text[:start] + expected + text[end:]
        fixed[claim.path] = text
    return problems, fixed


_ITALIC_TERM = re.compile(r"\*(?:waves?|lots?|kits?|campaigns?|roots?)\*", re.IGNORECASE)
_PRIVATE_TERM = re.compile(r"\bwave-[0-9]+|\b(?:waves?|lots?|kits?)\b", re.IGNORECASE)


def vocabulary_problems(path: str, text: str) -> list[str]:
    problems = []
    for number, line in enumerate(text.splitlines(), 1):
        for match in _PRIVATE_TERM.finditer(_ITALIC_TERM.sub("", line)):
            problems.append(f"{path}:{number}: private working term '{match.group(0)}'; "
                            "describe the scope and its date instead")
    return problems


def tracked_markdown() -> list[str]:
    result = subprocess.run(["git", "ls-files", "--cached", "-z", "--", "*.md"],
                            cwd=ROOT, capture_output=True, check=True)
    names = [raw.decode("utf-8") for raw in result.stdout.split(b"\0") if raw]
    return sorted(name for name in names if name != "AGENTS.md")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--write", action="store_true",
                        help="rewrite stale figures in place from the generated files")
    args = parser.parse_args(argv)

    values = figures(json.loads(STATUS.read_text(encoding="utf-8")), _boot_tsv(BOUNDARIES))
    paths = sorted({claim.path for claim in CLAIMS})
    texts = {path: (ROOT / path).read_text(encoding="utf-8")
             for path in paths if (ROOT / path).exists()}
    problems, fixed = check_claims(texts, values)
    if args.write:
        for path, text in fixed.items():
            if text != texts[path]:
                (ROOT / path).write_text(text, encoding="utf-8")
        problems = [p for p in problems if "no text matches" in p or "missing" in p]

    for name in tracked_markdown():
        path = ROOT / name
        if path.exists():
            problems.extend(vocabulary_problems(name, path.read_text(encoding="utf-8")))

    if problems:
        print("documentation check failed:", *problems, sep="\n", file=sys.stderr)
        if not args.write and any(" shows " in p for p in problems):
            print("run: python tools/check_doc_figures.py --write", file=sys.stderr)
        return 1
    print(f"documentation check: {len(CLAIMS)} current figures match the generated "
          "files; no private working terms in tracked Markdown")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
