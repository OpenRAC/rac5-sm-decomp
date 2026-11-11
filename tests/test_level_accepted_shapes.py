"""Accepted level bodies are counted by the level denominator's own shape rule."""

from __future__ import annotations

import copy
import json
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_accepted_shapes import (OUTPUT, UNBOUNDED, accepted_counts,  # noqa: E402
                                   check_summary, map_totals, shape_unit_rows)


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

    def test_map_rows_cover_whole_units_once_per_shape(self) -> None:
        # Shape X (8 bytes) sits in both modules, twice in FRONTEND; shape Y
        # (12 bytes) only in LEVEL_01. One accepted FRONTEND body covers one X,
        # one accepted LEVEL_01 body covers Y and 4 bytes outside every unit.
        records = [("FRONTEND.REL", 0x100, 8, "x"), ("FRONTEND.REL", 0x108, 8, "x"),
                   ("LEVEL_01.REL", 0x200, 8, "x"), ("LEVEL_01.REL", 0x300, 12, "y")]
        spans = {"FRONTEND.REL": [(0x108, 0x110, "src/levels/frontend/FRONTEND_000108.c")],
                 "LEVEL_01.REL": [(0x300, 0x310, "src/levels/01_pokitaru/LEVEL_01_000300.c")]}
        rows = shape_unit_rows(records, spans, {"FRONTEND.REL": 16, "LEVEL_01.REL": 40},
                               ["FRONTEND.REL", "LEVEL_01.REL"])
        self.assertEqual(rows, [
            {"home": "01_pokitaru", "name": "LEVEL_01_000300", "bytes": 12, "matched_bytes": 12,
             "functions": 1, "matched_functions": 1, "modules": 1,
             "source": "src/levels/01_pokitaru/LEVEL_01_000300.c"},
            {"home": "01_pokitaru", "name": UNBOUNDED, "bytes": 20, "matched_bytes": 4,
             "functions": 0, "matched_functions": 0, "modules": 1, "source": ""},
            {"home": "shared", "name": "FRONTEND_000108", "bytes": 16, "matched_bytes": 8,
             "functions": 2, "matched_functions": 1, "modules": 2,
             "source": "src/levels/frontend/FRONTEND_000108.c"},
        ])
        self.assertEqual(map_totals(rows)["map_bytes"], 16 + 40 - 8)
        partial = {"LEVEL_01.REL": [(0x304, 0x310, "src/levels/01_pokitaru/LEVEL_01_000304.c")]}
        with self.assertRaisesRegex(ValueError, "part of a candidate unit"):
            shape_unit_rows(records, partial, {"FRONTEND.REL": 16, "LEVEL_01.REL": 40},
                            ["FRONTEND.REL", "LEVEL_01.REL"])

    def test_committed_map_closes_on_the_denominator(self) -> None:
        summary = json.loads(OUTPUT.read_text(encoding="utf-8"))
        broken = copy.deepcopy(summary)
        broken["map_matched_bytes"] += 4
        with self.assertRaisesRegex(ValueError, "does not close"):
            check_summary(broken)


if __name__ == "__main__":
    unittest.main()
