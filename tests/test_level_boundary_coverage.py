"""The boundary audit must not turn holes or shared body bytes into functions."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_boundary_coverage import coverage  # noqa: E402


def function(start: int, end: int) -> dict[str, str]:
    return {
        "entry": f"0x{start:X}", "min": f"0x{start:X}",
        "max": f"0x{end - 1:X}", "body_bytes": str(end - start),
        "ranges": f"0x{start:X}-0x{end - 1:X}",
    }


class BoundaryCoverageTests(unittest.TestCase):
    def test_zero_gap_and_nonzero_called_gap_stay_unowned(self) -> None:
        code = bytearray(32)
        code[0x98 - 0x80] = 7
        functions = [function(0x80, 0x88), function(0x90, 0x98),
                     function(0x9C, 0xA0)]
        candidates = [{"start": "0x8C", "evidence": "pointer"},
                      {"start": "0x98", "evidence": "call"}]
        result, gaps = coverage("LEVEL_TEST.REL", 0x80, 0xA0, bytes(code),
                                functions, candidates)
        self.assertEqual(result["function_entries"], 3)
        self.assertEqual(result["single_owned_bytes"], 20)
        self.assertEqual(result["unowned_bytes"], 12)
        self.assertEqual(result["unowned_zero_bytes"], 11)
        self.assertEqual(result["unowned_nonzero_bytes"], 1)
        self.assertEqual(result["unowned_zero_gaps"], 1)
        self.assertEqual(result["unowned_nonzero_gaps"], 1)
        self.assertEqual(result["nonzero_gaps_with_call"], 1)
        self.assertEqual(result["nonzero_gaps_with_pointer"], 0)
        self.assertEqual(len(gaps), 2)

    def test_overlapping_function_ranges_are_reported_once_per_byte(self) -> None:
        code = bytes(32)
        functions = [function(0x80, 0x90), function(0x88, 0x98)]
        result, _ = coverage("LEVEL_TEST.REL", 0x80, 0xA0, code,
                             functions, [])
        self.assertEqual(result["overlap_bytes"], 8)
        self.assertEqual(result["single_owned_bytes"], 16)
        self.assertEqual(result["unowned_bytes"], 8)
        with self.assertRaises(ValueError):
            coverage("LEVEL_TEST.REL", 0x80, 0xA0, code[:-1], functions, [])
        with self.assertRaises(ValueError):
            coverage("LEVEL_TEST.REL", 0x80, 0xA0, code,
                     [function(0x7C, 0x84)], [])


if __name__ == "__main__":
    unittest.main()
