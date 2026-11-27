"""The level body table stays consistent with its sources and modules."""

from __future__ import annotations

import csv
import hashlib
import json
import os
import re
import sys
import unittest
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from c_source_policy import policy_errors  # noqa: E402
import level_function_names  # noqa: E402
from level_source_layout import (misplaced, original_folders,  # noqa: E402
                                 repeated_names, valid_source)

ROOT = Path(__file__).resolve().parents[1]
BODIES = ROOT / "config/levels/bodies.tsv"
BODY_SOURCES = ROOT / "config/levels/body_sources.tsv"
LEVEL_PROFILE = ROOT / "config/levels/compiler_trial.json"
MODULES = ROOT / "config/levels/modules.tsv"
INTERVALS = ROOT / "config/levels/code_intervals.tsv"
# Two reviewed level sources outside the body table, each checked by its own gate.
OWN_GATE_SOURCES = {"src/levels/frontend/func_00002F80.c",
                    "src/levels/shared/func_shared_zero_buffer.c"}
HEADER = ["module", "offset", "size", "source"]
SOURCE_HEADER = ["source", "source_sha256_lf", "object_sha256", "profile", "as"]
PROFILES = ("pinned", "gnu-ee-trial", "gnu-ee-trial-divpad",
            "gnu-ee-trial-divpad-blockmove", "sdk991111", "sdk991111sync")


def records(path: Path) -> list[dict[str, str]]:
    with path.open(encoding="utf-8", newline="") as file:
        return list(csv.DictReader((line for line in file if not line.startswith("#")),
                                   delimiter="\t"))


def source_digest(path: Path) -> str:
    return text_digest(path.read_text(encoding="utf-8"))


def text_digest(text: str) -> str:
    return hashlib.sha256(text.replace("\r\n", "\n").encode("utf-8")).hexdigest()


def fail_if(problems: list[str], test: unittest.TestCase) -> None:
    """One assertion listing every failure, cheaper than a subTest per row."""
    test.assertEqual(problems, [], f"{len(problems)} problem(s), first: "
                     + (problems[0] if problems else ""))


class LevelBodyTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls) -> None:
        cls.rows = records(BODIES)
        cls.source_rows = records(BODY_SOURCES)
        cls.sources = {row["source"]: row for row in cls.source_rows}
        cls.assembler_pins = json.loads(LEVEL_PROFILE.read_text(encoding="utf-8"))[
            "extra_assemblers"]
        cls.modules = {Path(row["path"]).name: row for row in records(MODULES)}
        cls.ends = {row["module"]: int(row["end_exclusive"], 16)
                    for row in records(INTERVALS)}
        cls._texts: dict[str, str | None] = {}

    @classmethod
    def text(cls, source: str) -> str | None:
        """Each source is read once for every test of the class."""
        if source not in cls._texts:
            path = ROOT / source
            cls._texts[source] = (path.read_text(encoding="utf-8")
                                  if path.is_file() else None)
        return cls._texts[source]

    def test_schema_and_placement_bounds(self) -> None:
        self.assertEqual(list(self.rows[0]), HEADER)
        problems: list[str] = []
        seen: set[tuple[str, int]] = set()
        spans: dict[str, list[tuple[int, int]]] = defaultdict(list)
        for row in self.rows:
            where = f"{row['module']}:{row['offset']}"
            if row["module"] not in self.modules:
                problems.append(f"{where}: unknown module")
                continue
            offset, size = int(row["offset"], 0), int(row["size"])
            if offset < 0x80:
                problems.append(f"{where}: offset below the module header")
            if size <= 0 or size % 4:
                problems.append(f"{where}: size {size} is not a positive word multiple")
            if offset + size > self.ends[row["module"]]:
                problems.append(f"{where}: placement ends past the code interval")
            if (row["module"], offset) in seen:
                problems.append(f"{where}: duplicate placement")
            seen.add((row["module"], offset))
            spans[row["module"]].append((offset, offset + size))
        for module, items in spans.items():
            items.sort()
            for left, right in zip(items, items[1:]):
                if left[1] > right[0]:
                    problems.append(f"overlapping placements in {module} at {right[0]:#x}")
        fail_if(problems, self)

    def test_sources_and_hashes(self) -> None:
        self.assertEqual(list(self.source_rows[0]), SOURCE_HEADER)
        problems: list[str] = []
        sizes: dict[str, int] = {}
        for row in self.rows:
            source = row["source"]
            if source not in self.sources:
                problems.append(f"{source}: placement names a source the source table lacks")
            prior = sizes.setdefault(source, int(row["size"]))
            if prior != int(row["size"]):
                problems.append(f"{source}: placements disagree on its size")
        digest = re.compile(r"^[0-9a-f]{64}$")
        for row in self.source_rows:
            source = row["source"]
            if not valid_source(source):
                problems.append(f"{source}: invalid source path")
            text = self.text(source)
            if text is None:
                problems.append(f"missing source {source}")
            elif text_digest(text) != row["source_sha256_lf"]:
                problems.append(f"{source}: source_sha256_lf does not match the file")
            if not digest.match(row["source_sha256_lf"]) or not digest.match(row["object_sha256"]):
                problems.append(f"{source}: malformed hash column")
            if row["profile"] not in PROFILES:
                problems.append(f"{source}: unknown profile {row['profile']}")
            if row["as"] != "gnu-ee-trial":
                pin = self.assembler_pins.get(row["as"])
                if pin is None:
                    problems.append(f"{source}: unknown assembler {row['as']}")
                elif source not in pin["accepted_sources"]:
                    problems.append(f"{source}: not accepted by assembler {row['as']}")
            if source not in sizes:
                problems.append(f"{source}: source table carries a source no placement uses")
        fail_if(problems, self)
        selected = {row["source"] for row in self.source_rows
                    if row["as"] != "gnu-ee-trial"}
        qualified = {source for entry in self.assembler_pins.values()
                     for source in entry["accepted_sources"]}
        self.assertEqual(selected, qualified)

    def test_every_body_file_is_referenced(self) -> None:
        referenced = {row["source"] for row in self.rows}
        files = {os.path.relpath(os.path.join(folder, name), ROOT).replace(os.sep, "/")
                 for folder, _, names in os.walk(ROOT / "src/levels")
                 for name in names if name.endswith(".c")}
        self.assertEqual(files - referenced, OWN_GATE_SOURCES)

    def test_sources_sit_in_their_module_directory(self) -> None:
        # One directory per module, src/levels/shared/ for sources placed in
        # several modules, and a folder per cited original source file
        # (tools/level_source_layout.py --apply restores it).
        labels = level_function_names.labeller(*level_function_names.check())
        self.assertEqual(misplaced(self.rows, original_folders(self.rows, labels)), {})
        self.assertEqual(repeated_names(self.rows), [])

    def test_sources_pass_the_c_policy(self) -> None:
        problems = []
        for source in dict.fromkeys(row["source"] for row in self.rows):
            text = self.text(source)
            if text is None:
                problems.append(f"missing source {source}")
                continue
            problems.extend(f"{source}: {error}" for error in policy_errors(text))
        fail_if(problems, self)


if __name__ == "__main__":
    unittest.main()
