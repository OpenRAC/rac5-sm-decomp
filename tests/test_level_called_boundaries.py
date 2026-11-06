"""Closed bodies need reachable returns and cannot hide nonzero code."""

from __future__ import annotations

import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_called_boundaries import (closed_return_body, relocated_jal_target,  # noqa: E402
                                     transfer)


def words(*items: int) -> bytes:
    return b"".join(struct.pack("<I", item) for item in items)


class CalledBoundaryTests(unittest.TestCase):
    def test_returning_body_with_direct_call_and_delay_slots_closes(self) -> None:
        code = words(0x0C000040, 0, 0x03E00008, 0)  # call, delay, return, delay
        result = closed_return_body(code, 0x80, 0x80, 0x90)
        self.assertTrue(result["closed"])
        self.assertEqual(result["return"], 1)
        self.assertEqual(result["direct_call"], 1)
        self.assertEqual(result["unseen_nonzero"], 0)

    def test_early_return_does_not_cover_hidden_nonzero_body(self) -> None:
        code = words(0x03E00008, 0, 0x24020001, 0)
        result = closed_return_body(code, 0x80, 0x80, 0x90)
        self.assertFalse(result["closed"])
        self.assertEqual(result["unseen_nonzero"], 1)

    def test_branch_escape_and_indirect_jump_remain_unresolved(self) -> None:
        branch = words(0x10000007, 0, 0x03E00008, 0)
        result = closed_return_body(branch, 0x80, 0x80, 0x90)
        self.assertFalse(result["closed"])
        self.assertGreater(result["escape"], 0)
        indirect = closed_return_body(words(0x03200008, 0), 0x80, 0x80, 0x88)
        self.assertFalse(indirect["closed"])
        self.assertEqual(indirect["indirect_jump"], 1)

    def test_unconditional_branch_has_no_false_fallthrough(self) -> None:
        kind, following, delay = transfer(0x80, 0x10000007)
        self.assertEqual((kind, following, delay), ("branch", (0xA0,), True))

    def test_jal_bytes_alone_do_not_prove_a_relocated_call(self) -> None:
        word = 0x0C000040  # direct call to 0x100 from 0x80
        self.assertEqual(relocated_jal_target(0x80, word, ("local", 2, "", 0)),
                         0x100)
        self.assertIsNone(relocated_jal_target(0x80, word, None))
        self.assertIsNone(relocated_jal_target(0x80, word, ("local", 3, "", 0)))
        self.assertIsNone(relocated_jal_target(0x80, 0x03E00008,
                                                ("local", 2, "", 0)))


if __name__ == "__main__":
    unittest.main()
