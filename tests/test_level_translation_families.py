"""A translated data-reference family needs one uniform offset shift."""

from __future__ import annotations

import sys
import struct
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_translation_families import (close_callgraph, combined_dedupe_savings,  # noqa: E402
                                        ghidra_confirmed,
                                        local_code_references, local_references,
                                        lows_follow_translation, uniform_translation)
from rel import PackedRelocation  # noqa: E402


class LevelTranslationFamiliesTests(unittest.TestCase):
    def test_uniform_data_shift_and_boundary_agreement(self) -> None:
        self.assertEqual(uniform_translation({4: 100, 12: 200},
                                             {4: 116, 12: 216}), 16)
        self.assertIsNone(uniform_translation({4: 100, 12: 200},
                                                  {4: 116, 12: 212}))
        self.assertEqual(uniform_translation({}, {}), 0)
        self.assertTrue(lows_follow_translation({4: 0x1234}, {4: 0x1234}, 0))
        self.assertFalse(lows_follow_translation({4: 0x1234}, {4: 0x1235}, 0))
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

    def test_local_jump_requires_correlated_callee_or_internal_offset(self) -> None:
        source = bytearray(0x400)
        struct.pack_into("<I", source, 0x100, 0x0C000080)  # jal 0x200
        fixups = [PackedRelocation(2, 0x100)]
        callee = (16, "callee-family")
        self.assertEqual(local_code_references(bytes(source), 0x100, 0x104,
                                               fixups, {("A", 0x200): callee}, "A"),
                         {0: ("callee", callee)})
        self.assertIsNone(local_code_references(bytes(source), 0x100, 0x104,
                                                 fixups, {}, "A"))
        struct.pack_into("<I", source, 0x100, 0x08000041)  # j 0x104
        self.assertEqual(local_code_references(bytes(source), 0x100, 0x108,
                                               fixups, {}, "A"),
                         {0: ("internal", 4)})
        self.assertIsNone(local_code_references(bytes(source), 0x100, 0x108,
                                                 [PackedRelocation(3, 0x100)], {}, "A"))

    def test_callgraph_closes_only_when_dependencies_are_accepted(self) -> None:
        base = (8, "base")
        middle = (12, "middle")
        outer = (16, "outer")
        unknown = (20, "unknown")
        pending = {middle: ({}, {base}), outer: ({}, {middle}),
                   unknown: ({}, {(24, "missing")})}
        self.assertEqual(close_callgraph(pending, {base}), {middle, outer})
        cycle_a = (28, "cycle-a")
        cycle_b = (32, "cycle-b")
        pending[cycle_a] = ({}, {cycle_b})
        pending[cycle_b] = ({}, {cycle_a})
        self.assertEqual(close_callgraph(pending, {base}), {middle, outer})

    def test_exact_and_structural_links_are_counted_once(self) -> None:
        exact = {
            (8, "x"): [{"module": "A", "start": "0x100"},
                       {"module": "B", "start": "0x100"}],
            (8, "y"): [{"module": "A", "start": "0x200"},
                       {"module": "B", "start": "0x200"}],
        }
        structural = [
            {"body_bytes": 8, "placements": [("A", 0x100), ("A", 0x200)]},
            {"body_bytes": 8, "placements": [("B", 0x100), ("B", 0x200)]},
        ]
        with self.assertRaisesRegex(ValueError, "repeats a module"):
            combined_dedupe_savings(exact, structural, {"A", "B"})
        # Three placements linked through exact and structural evidence form
        # one component, so only two copies can be removed.
        structural = [{"body_bytes": 8,
                       "placements": [("A", 0x100), ("B", 0x200)]}]
        self.assertEqual(combined_dedupe_savings(exact, structural, {"A", "B"}),
                         (16, 24))

    def test_structural_nonbounded_body_adds_savings_beyond_exact(self) -> None:
        structural = [{"body_bytes": 12,
                       "placements": [("A", 0x300), ("B", 0x340)]}]
        self.assertEqual(combined_dedupe_savings({}, structural, {"A", "B"}),
                         (0, 12))


if __name__ == "__main__":
    unittest.main()
