"""Selected sub-bodies require independent agreement and leave gaps untouched."""

from __future__ import annotations

import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_split_dedupe import split_parent  # noqa: E402


class LevelSplitDedupeTests(unittest.TestCase):
    def test_selects_only_valid_returning_sub_bodies(self) -> None:
        data = bytearray(0x200)
        struct.pack_into("<I", data, 0x90, 0x03E00008)
        struct.pack_into("<I", data, 0xAC, 0x03E00008)
        row = {"status": "bounded_candidate", "start": "0x80",
               "body_end": "0xB4", "body_bytes": "52"}
        ranges = {
            0x80: {"min": "0x80", "max": "0x97", "body_bytes": "20",
                   "ranges": "0x80-0x87;0x8C-0x97"},
            0x9C: {"min": "0x9C", "max": "0xB3", "body_bytes": "24",
                   "ranges": "0x9C-0xB3"},
        }
        self.assertEqual(split_parent(row, ranges, ranges, ranges,
                                      [0x80, 0x9C], bytes(data), []),
                         [(0x80, 0x98, 20), (0x9C, 0xB4, 24)])
        data[0x88] = 1
        self.assertEqual(split_parent(row, ranges, ranges, ranges,
                                      [0x80, 0x9C], bytes(data), []),
                         [(0x9C, 0xB4, 24)])
        data[0x88] = 0
        self.assertEqual(split_parent(row, ranges, ranges, ranges,
                                      [0x80, 0x9C], bytes(data), [0x98]),
                         [(0x80, 0x98, 20), (0x9C, 0xB4, 24)])
        divergent = {**ranges, 0x9C: {**ranges[0x9C], "body_bytes": "20"}}
        self.assertEqual(split_parent(row, ranges, ranges, divergent,
                                      [0x80, 0x9C], bytes(data), []),
                         [(0x80, 0x98, 20)])
        struct.pack_into("<I", data, 0x90, 0)
        self.assertEqual(split_parent(row, ranges, ranges, ranges,
                                      [0x80, 0x9C], bytes(data), []),
                         [(0x9C, 0xB4, 24)])
        struct.pack_into("<I", data, 0xAC, 0)
        self.assertIsNone(split_parent(row, ranges, ranges, ranges,
                                       [0x80, 0x9C], bytes(data), []))


if __name__ == "__main__":
    unittest.main()
