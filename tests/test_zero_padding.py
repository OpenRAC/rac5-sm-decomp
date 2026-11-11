"""Zero alignment padding never swallows a delay slot."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from zero_padding import transfers_control, trailing_zero_padding  # noqa: E402

JR_RA = 0x03E00008
J = 0x08000040        # j 0x100
BEQ = 0x10400002      # beq v0, zero, +2
BC1T = 0x45010003     # bc1t +3
ADDIU = 0x27BD0010    # addiu sp, sp, 16


def code(*words: int) -> bytes:
    return b"".join(word.to_bytes(4, "little") for word in words)


class ZeroPaddingTests(unittest.TestCase):
    def test_branches_and_jumps_transfer_control(self) -> None:
        for word in (JR_RA, J, BEQ, BC1T, 0x0C000040, 0x04110002, 0x50400002, 0x0040F809):
            self.assertTrue(transfers_control(word), hex(word))
        for word in (ADDIU, 0, 0x8FBF0010, 0x46000002):
            self.assertFalse(transfers_control(word), hex(word))

    def test_trailing_zero_words_are_padding_except_a_delay_slot(self) -> None:
        # jr ra; addiu (delay slot); then two padding words.
        self.assertEqual(trailing_zero_padding(code(JR_RA, ADDIU, 0, 0), 0, 16), 8)
        # j target; nop (the delay slot is a zero word); then one padding word.
        self.assertEqual(trailing_zero_padding(code(ADDIU, J, 0, 0), 0, 16), 4)
        # A range of zero words only is padding; no zero word, no padding.
        self.assertEqual(trailing_zero_padding(code(0, 0), 0, 8), 8)
        self.assertEqual(trailing_zero_padding(code(ADDIU, ADDIU), 0, 8), 0)
        # Only the range counts: the branch before it does not keep a word.
        self.assertEqual(trailing_zero_padding(code(BEQ, 0, 0), 4, 12), 8)


if __name__ == "__main__":
    unittest.main()
