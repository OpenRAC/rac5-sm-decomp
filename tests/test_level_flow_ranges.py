"""A pointer entry inside a discontiguous body remains a review lead."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_flow_ranges import classify, parse_ranges  # noqa: E402


class LevelFlowRangesTests(unittest.TestCase):
    def test_distinguishes_internal_pointer_and_unowned_entry(self) -> None:
        functions = [{"entry": "0x100", "body_bytes": "16",
                      "ranges": "0x100-0x107;0x120-0x127"}]
        candidates = [{"start": "0x100", "status": "bounded_candidate"},
                      {"start": "0x120", "status": "pointer_only"},
                      {"start": "0x130", "status": "no_return"}]
        result, worklist = classify(candidates, functions)
        self.assertEqual(result["ghidra_body_bytes_by_placement"], 16)
        self.assertEqual(result["candidate_internal_block_leads"], 1)
        self.assertEqual(result["disposition_counts"]["no_return:unowned"], 1)
        self.assertIn("0x00000120\tpointer_only\t0x00000100", worklist)

    def test_rejects_overlapping_body_ranges(self) -> None:
        functions = [{"entry": "0x100", "body_bytes": "8",
                      "ranges": "0x100-0x107"},
                     {"entry": "0x104", "body_bytes": "8",
                      "ranges": "0x104-0x10B"}]
        with self.assertRaisesRegex(ValueError, "overlap"):
            parse_ranges(functions)


if __name__ == "__main__":
    unittest.main()
