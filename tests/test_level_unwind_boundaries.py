"""Regression controls for the SNR2 unwind review."""

from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_unwind_boundaries import (  # noqa: E402
    UnwindRange, exception_targets, ordinary_delay_slot, return_cut, unwind_ranges,
)


class UnwindBoundaryTests(unittest.TestCase):
    def setUp(self):
        self.data = bytearray(0x140)
        self.cie, self.fde, self.table = 0xD0, 0xEC, 0x120
        self.frame = UnwindRange(0x80, 0xB0, self.table)
        struct.pack_into("<II4sI", self.data, self.cie, 24, 0, b"\x01eh\0", self.table)
        struct.pack_into("<4I", self.data, self.fde, 12, self.fde + 4 - self.cie, 0x80, 0x30)
        struct.pack_into("<5I", self.data, self.table, 0x80, 0x90, 0xA0, 0xFFFFFFFF, 0xFFFFFFFF)
        self.pointers = {self.cie + 12: self.table, self.fde + 8: 0x80,
                         self.table: 0x80, self.table + 4: 0x90, self.table + 8: 0xA0}

    def test_extent_requires_relocated_frame_start(self):
        self.assertEqual(unwind_ranges(self.data, 0xC0, len(self.data), self.pointers), [self.frame])
        del self.pointers[self.fde + 8]
        with self.assertRaisesRegex(ValueError, "start relocation"):
            unwind_ranges(self.data, 0xC0, len(self.data), self.pointers)

    def test_empty_cie_requires_a_complete_linked_frame_chain(self):
        self.data = bytearray(0x140)
        struct.pack_into("<IIBBBBB", self.data, self.cie, 16, 0, 1, 0, 1, 0x78, 0x40)
        fde = self.cie + 20
        struct.pack_into("<4I", self.data, fde, 12, fde + 4 - self.cie, 0x80, 0x30)
        pointers = {fde + 8: 0x80}
        frame = UnwindRange(0x80, 0xB0, None)
        self.assertEqual(unwind_ranges(self.data, 0xC0, len(self.data), pointers), [frame])
        self.assertEqual(exception_targets(self.data, frame, len(self.data), pointers), set())
        struct.pack_into("<I", self.data, fde + 4, 0)
        self.assertEqual(unwind_ranges(self.data, 0xC0, len(self.data), pointers), [])

    def test_unrelated_interior_pointer_blocks_metadata_only_classification(self):
        self.assertEqual(exception_targets(self.data, self.frame, len(self.data), self.pointers),
                         {0x80, 0x90, 0xA0})
        self.pointers[0x118] = 0x90
        self.assertEqual(exception_targets(self.data, self.frame, len(self.data), self.pointers), set())

    def test_cut_requires_pointer_only_evidence_and_no_linked_or_external_entry(self):
        row = {"status": "no_return", "limit": 0x90}
        interior = [{"start": 0x90, "evidence": "pointer"}]
        self.assertEqual(return_cut(row, self.frame, interior, {0x90}, False), 0x90)
        self.assertIsNone(return_cut(row, self.frame, interior, {0x90}, True))
        self.assertIsNone(return_cut(row, self.frame, interior, {0xA0}, False))
        interior[0]["evidence"] = "call+pointer"
        self.assertIsNone(return_cut(row, self.frame, interior, {0x90}, False))

    def test_return_slot_excludes_transfers_traps_and_system_calls(self):
        try:
            import rabbitizer  # noqa: F401
        except ImportError:
            self.skipTest("Rabbitizer is required to decode an R5900 delay slot")
        self.assertTrue(ordinary_delay_slot(0, 0xAC))
        for value in (0x04110001, 0x03E00008, 0x0000000C, 0x0000000D, 0x00000034,
                      0x42000010, 0x42000018):
            with self.subTest(word=hex(value)):
                self.assertFalse(ordinary_delay_slot(value, 0xAC))
