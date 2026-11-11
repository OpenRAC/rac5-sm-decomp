"""The level body table stays consistent with its sources and modules."""

from __future__ import annotations

import csv
import hashlib
import json
import sys
import unittest
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from c_source_policy import policy_errors  # noqa: E402
from level_source_layout import SOURCE_DIRS, misplaced, repeated_names  # noqa: E402

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
    return hashlib.sha256(path.read_text(encoding="utf-8")
                          .replace("\r\n", "\n").encode("utf-8")).hexdigest()


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

    def test_schema_and_placement_bounds(self) -> None:
        self.assertEqual(list(self.rows[0]), HEADER)
        seen: set[tuple[str, int]] = set()
        spans: dict[str, list[tuple[int, int]]] = defaultdict(list)
        for row in self.rows:
            with self.subTest(module=row["module"], offset=row["offset"]):
                self.assertIn(row["module"], self.modules)
                offset, size = int(row["offset"], 0), int(row["size"])
                self.assertGreaterEqual(offset, 0x80)
                self.assertGreater(size, 0)
                self.assertEqual(size % 4, 0)
                self.assertLessEqual(offset + size, self.ends[row["module"]])
                self.assertNotIn((row["module"], offset), seen)
                seen.add((row["module"], offset))
                spans[row["module"]].append((offset, offset + size))
        for module, items in spans.items():
            items.sort()
            for left, right in zip(items, items[1:]):
                self.assertLessEqual(left[1], right[0],
                                     f"overlapping placements in {module}")

    def test_sources_and_hashes(self) -> None:
        self.assertEqual(list(self.source_rows[0]), SOURCE_HEADER)
        sizes: dict[str, int] = {}
        for row in self.rows:
            source = row["source"]
            with self.subTest(source=source):
                self.assertIn(source, self.sources,
                              "placement names a source the source table lacks")
                prior = sizes.setdefault(source, int(row["size"]))
                self.assertEqual(prior, int(row["size"]))
        for row in self.source_rows:
            source = row["source"]
            with self.subTest(source=source):
                parts = source.split("/")
                self.assertEqual(parts[:2], ["src", "levels"])
                self.assertEqual(len(parts), 4)
                self.assertIn(parts[2], SOURCE_DIRS)
                path = ROOT / source
                self.assertTrue(path.is_file(), f"missing source {source}")
                self.assertEqual(source_digest(path), row["source_sha256_lf"])
                self.assertRegex(row["source_sha256_lf"], r"^[0-9a-f]{64}$")
                self.assertRegex(row["object_sha256"], r"^[0-9a-f]{64}$")
                self.assertIn(row["profile"], PROFILES)
                if row["as"] != "gnu-ee-trial":
                    self.assertIn(row["as"], self.assembler_pins)
                    self.assertIn(source, self.assembler_pins[row["as"]]["accepted_sources"])
                self.assertIn(source, sizes,
                              "source table carries a source no placement uses")
        selected = {row["source"] for row in self.source_rows
                    if row["as"] != "gnu-ee-trial"}
        qualified = {source for entry in self.assembler_pins.values()
                     for source in entry["accepted_sources"]}
        self.assertEqual(selected, qualified)

    def test_every_body_file_is_referenced(self) -> None:
        referenced = {row["source"] for row in self.rows}
        files = {path.relative_to(ROOT).as_posix()
                 for path in (ROOT / "src/levels").rglob("*.c")}
        self.assertEqual(files - referenced, OWN_GATE_SOURCES)

    def test_sources_sit_in_their_module_directory(self) -> None:
        # One directory per module, src/levels/shared/ for sources placed in
        # several modules (tools/level_source_layout.py --apply restores it).
        self.assertEqual(misplaced(self.rows), {})
        self.assertEqual(repeated_names(self.rows), [])

    def test_sources_pass_the_c_policy(self) -> None:
        checked = set()
        for row in self.rows:
            if row["source"] in checked:
                continue
            checked.add(row["source"])
            with self.subTest(source=row["source"]):
                self.assertEqual(
                    policy_errors((ROOT / row["source"]).read_text(encoding="utf-8")),
                    [])


if __name__ == "__main__":
    unittest.main()
