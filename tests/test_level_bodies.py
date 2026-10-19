"""The level body table stays consistent with its sources and modules."""

from __future__ import annotations

import csv
import hashlib
import sys
import unittest
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from c_source_policy import policy_errors  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
BODIES = ROOT / "config/levels/bodies.tsv"
MODULES = ROOT / "config/levels/modules.tsv"
INTERVALS = ROOT / "config/levels/code_intervals.tsv"
BODY_PREFIX = "src/levels/bodies/"
SHARED_0100 = "src/levels/shared/func_00000100.c"
HEADER = ["module", "offset", "size", "source", "source_sha256_lf",
          "object_sha256", "profile", "as"]


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
        by_source: dict[str, dict[str, str]] = {}
        for row in self.rows:
            source = row["source"]
            with self.subTest(source=source):
                self.assertTrue(source.startswith(BODY_PREFIX) or source == SHARED_0100)
                path = ROOT / source
                self.assertTrue(path.is_file(), f"missing source {source}")
                self.assertEqual(source_digest(path), row["source_sha256_lf"])
                self.assertRegex(row["source_sha256_lf"], r"^[0-9a-f]{64}$")
                self.assertRegex(row["object_sha256"], r"^[0-9a-f]{64}$")
                self.assertIn(row["profile"], ("pinned", "gnu-ee-trial"))
                self.assertEqual(row["as"], "gnu-ee-trial")
                prior = by_source.setdefault(source, row)
                self.assertEqual(prior["profile"], row["profile"])
                self.assertEqual(prior["size"], row["size"])
                self.assertEqual(prior["source_sha256_lf"], row["source_sha256_lf"])
                self.assertEqual(prior["object_sha256"], row["object_sha256"])

    def test_every_body_file_is_referenced(self) -> None:
        referenced = {row["source"] for row in self.rows}
        files = {path.relative_to(ROOT).as_posix()
                 for path in (ROOT / "src/levels/bodies").glob("*.c")}
        self.assertEqual(files - referenced, set())

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
