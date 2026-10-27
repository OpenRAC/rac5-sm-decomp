"""Tests for multi-version program configuration and cross-version checking."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))

import version_check  # noqa: E402
import versions  # noqa: E402


class VersionsTests(unittest.TestCase):
    def test_versions_table(self) -> None:
        self.assertEqual(len(versions.VERSIONS), 2)
        us = versions.get("us")
        pal = versions.get("pal")
        self.assertEqual(us.id, "SCUS_976.15")
        self.assertEqual(us.hz, 60)
        self.assertTrue(us.primary)
        self.assertEqual(pal.id, "SCES_550.19")
        self.assertEqual(pal.hz, 50)
        self.assertFalse(pal.primary)

    def test_committed_programs_tsv_readable(self) -> None:
        for v in versions.VERSIONS:
            rows = versions.read_programs(v)
            self.assertGreater(len(rows), 0)
            # A program's summary row has section '-'
            prog_rows = [r for r in rows if r[1] == "-"]
            self.assertEqual(len(prog_rows), 22)  # 1 boot + 21 modules

    def test_mask_mips_word(self) -> None:
        # jal 0x00100000 -> opcode 0x03
        jal = (0x03 << 26) | 0x00040000
        self.assertEqual(version_check.mask_mips_word(jal), 0x03 << 26)
        # beq $a0, $a1, 0x1234 -> opcode 0x04
        beq = (0x04 << 26) | (4 << 21) | (5 << 16) | 0x1234
        self.assertEqual(version_check.mask_mips_word(beq), beq & 0xFFFF0000)

    def test_compare_code_spans(self) -> None:
        # Exact match
        code_a = b"\x00\x00\x00\x00\x01\x00\x00\x00"
        self.assertEqual(version_check.compare_code_spans(code_a, code_a), "exact")

        # Masked match (different branch offsets)
        beq1 = (0x04 << 26) | (4 << 21) | (5 << 16) | 0x0010
        beq2 = (0x04 << 26) | (4 << 21) | (5 << 16) | 0x0020
        span1 = beq1.to_bytes(4, "little")
        span2 = beq2.to_bytes(4, "little")
        self.assertEqual(version_check.compare_code_spans(span1, span2), "refs")

        # Differing instructions
        add = (0x00 << 26) | (4 << 21) | (5 << 16) | (6 << 11) | 0x20
        span3 = add.to_bytes(4, "little")
        self.assertEqual(version_check.compare_code_spans(span1, span3), "differs")


if __name__ == "__main__":
    unittest.main()
