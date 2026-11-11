"""Accepted level bodies are counted by the level denominator's own shape rule."""

from __future__ import annotations

import copy
import json
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_accepted_shapes import (OUTPUT, PADDING, UNBOUNDED, accepted_counts,  # noqa: E402
                                   check_summary, covering_source, map_totals,
                                   residual_pieces, shape_unit_rows)


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

    def test_code_outside_units_splits_into_pieces_padding_and_unbounded(self) -> None:
        data = bytearray(b"\x27" * 0xA0)   # addiu words, no branch
        data[0x18:0x20] = bytes(8)
        data[0x38:0x40] = bytes(8)
        static = [{"start": "0x00", "limit": "0x20", "status": "bounded_candidate"},
                  {"start": "0x20", "limit": "0x40", "status": "no_return"},
                  {"start": "0x40", "limit": "0x60", "status": "nonzero_tail"},
                  {"start": "0x60", "limit": "0x80", "status": "no_return"},
                  {"start": "0x80", "limit": "0xA0", "status": "bounded_candidate"}]
        units = [(0x00, 0x18), (0x40, 0x50), (0x80, 0x98)]
        pieces, padding, unbounded = residual_pieces(
            bytes(data), static, units, [(0x60, 0x70, "src/x.c")], [(0x80, 0x98)], set())
        # A no_return entry is a candidate function, the code after a last return
        # a fragment; accepted C is its own piece; zeros are padding; switch
        # leftovers stay unbounded. Every byte lands in exactly one place.
        self.assertEqual(pieces, [(0x20, 0x18, True, ""), (0x50, 0x10, False, ""),
                                  (0x60, 0x10, True, "src/x.c"), (0x70, 0x10, False, "")])
        self.assertEqual((padding, unbounded), (16, 8))
        self.assertEqual(sum(b - a for a, b in units) + sum(p[1] for p in pieces)
                         + padding + unbounded, len(data))

    def test_map_rows_count_each_shape_once_at_its_largest_multiplicity(self) -> None:
        front = "src/levels/frontend/FRONTEND_000108.c"
        level = "src/levels/01_pokitaru/LEVEL_01_000300.c"
        placements = [("FRONTEND.REL", 0x100, 8, "x", True, ""),
                      ("FRONTEND.REL", 0x108, 8, "x", True, front),
                      ("LEVEL_01.REL", 0x200, 8, "x", True, ""),
                      ("LEVEL_01.REL", 0x300, 12, "y", True, level),
                      ("LEVEL_01.REL", 0x30C, 4, "z", False, level)]
        rows = shape_unit_rows(placements, {"FRONTEND.REL": (0, 0), "LEVEL_01.REL": (8, 4)},
                               ["FRONTEND.REL", "LEVEL_01.REL"])
        common = {"modules": 1, "matched_functions": 0}
        self.assertEqual(rows, [
            {"home": "01_pokitaru", "name": "LEVEL_01_000300", "kind": "function", "size": 12,
             "copies": 1, "matched_copies": 1, "functions": 1, "matched_functions": 1,
             "modules": 1, "source": level},
            {**common, "home": "01_pokitaru", "name": "LEVEL_01_00030C", "kind": "fragment",
             "size": 4, "copies": 1, "matched_copies": 1, "functions": 0, "source": level},
            {**common, "home": "01_pokitaru", "name": PADDING, "kind": "padding", "size": 8,
             "copies": 1, "matched_copies": 0, "functions": 0, "source": ""},
            {**common, "home": "01_pokitaru", "name": UNBOUNDED, "kind": "unbounded",
             "size": 4, "copies": 1, "matched_copies": 0, "functions": 0, "source": ""},
            {"home": "shared", "name": "FRONTEND_000108", "kind": "function", "size": 8,
             "copies": 2, "matched_copies": 1, "functions": 2, "matched_functions": 1,
             "modules": 2, "source": front},
        ])
        totals = map_totals(rows)
        # Zero alignment padding is not code: 44 bytes of rows, 36 of code.
        self.assertEqual((totals["map_bytes"], totals["map_matched_bytes"]), (36, 24))
        self.assertEqual(totals["map_padding_bytes"], 8)
        self.assertEqual((totals["map_functions"], totals["map_matched_functions"]), (3, 2))
        spans = {"LEVEL_01.REL": [(0x304, 0x310, "src/levels/01_pokitaru/LEVEL_01_000304.c")]}
        with self.assertRaisesRegex(ValueError, "part of a candidate unit"):
            covering_source(spans, {"LEVEL_01.REL": [0x304]}, "LEVEL_01.REL", 0x300, 12)

    def test_committed_map_closes_on_the_denominator(self) -> None:
        summary = json.loads(OUTPUT.read_text(encoding="utf-8"))
        broken = copy.deepcopy(summary)
        broken["map_matched_bytes"] += 4
        with self.assertRaisesRegex(ValueError, "does not close"):
            check_summary(broken)


if __name__ == "__main__":
    unittest.main()
