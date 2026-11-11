"""Accepted level bodies are counted by the level denominator's own shape rule."""

from __future__ import annotations

import copy
import json
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_accepted_shapes import OUTPUT, accepted_counts, check_summary  # noqa: E402


class LevelAcceptedShapesTests(unittest.TestCase):
    def test_address_variants_of_one_shape_count_once_per_module(self) -> None:
        keys = [("A", 8, "shape_x"), ("B", 8, "shape_x"), ("C", 8, "shape_x"),
                ("A", 12, "shape_y"), ("A", 12, "shape_y")]
        self.assertEqual(accepted_counts(keys), {
            "accepted_masked_shape_groups": 2,
            "accepted_masked_max_per_module_bytes": 8 + 2 * 12,
            "accepted_masked_max_per_module_units": 3,
        })

    def test_committed_summary_matches_tables_and_stays_within_denominator(self) -> None:
        summary = json.loads(OUTPUT.read_text(encoding="utf-8"))
        check_summary(summary)
        self.assertLessEqual(summary["accepted_masked_max_per_module_units"],
                             summary["candidate_masked_max_per_module_units"])
        stale = copy.deepcopy(summary)
        stale["bodies_table_sha256"] = "0" * 64
        with self.assertRaisesRegex(ValueError, "stale or exceeds"):
            check_summary(stale)
        inflated = copy.deepcopy(summary)
        inflated["accepted_masked_max_per_module_units"] = (
            summary["candidate_masked_max_per_module_units"] + 1)
        with self.assertRaisesRegex(ValueError, "stale or exceeds"):
            check_summary(inflated)


if __name__ == "__main__":
    unittest.main()
