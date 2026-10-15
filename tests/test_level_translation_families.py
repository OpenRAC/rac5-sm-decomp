"""A translated data-reference family needs one uniform offset shift."""

from __future__ import annotations

import sys
import struct
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_translation_families import (ghidra_confirmed, local_references,  # noqa: E402
                                        lows_follow_translation, uniform_translation)
from rel import PackedRelocation  # noqa: E402


class LevelTranslationFamiliesTests(unittest.TestCase):
    def test_uniform_data_shift_and_boundary_agreement(self) -> None:
        self.assertEqual(uniform_translation({4: 100, 12: 200},
                                             {4: 116, 12: 216}), 16)
        self.assertIsNone(uniform_translation({4: 100, 12: 200},
                                                  {4: 116, 12: 212}))
        self.assertTrue(lows_follow_translation({4: 0xD768}, {4: 0x4C68},
                                                0x17500))
        self.assertFalse(lows_follow_translation({4: 0xD768}, {4: 0x4C69},
                                                 0x17500))
        row = {"start": "0x100", "body_end": "0x108", "body_bytes": "8"}
        function = {0x100: {"min": "0x100", "max": "0x107", "body_bytes": "8"}}
        self.assertTrue(ghidra_confirmed(row, function))
        function[0x100]["body_bytes"] = "4"
        self.assertFalse(ghidra_confirmed(row, function))

    def test_paired_hi_lo_points_to_data_and_tracks_uniform_shift(self) -> None:
        source = bytearray(0x400)
        struct.pack_into("<I", source, 0x100, 0x3C020000)
        struct.pack_into("<I", source, 0x104, 0x24420200)
        fixups = [PackedRelocation(1, 0x100, 0x104), PackedRelocation(0, 0x104)]
        self.assertEqual(local_references(bytes(source), 0x100, 0x108, 0x180,
                                          fixups, [0x100, 0x104]),
                         ({0: 0x200}, {}))
        self.assertIsNone(local_references(bytes(source), 0x100, 0x108, 0x280,
                                           fixups, [0x100, 0x104]))


if __name__ == "__main__":
    unittest.main()
