"""Synthetic checks for the SNR2 jump-site assembly gate; no game bytes."""

from __future__ import annotations

import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from snr2_assembly import check_jump_relocations  # noqa: E402
from rel import HEADER, MAGIC, RELOCATION  # noqa: E402


def sample() -> bytearray:
    data = bytearray(0xE0)
    HEADER.pack_into(data, 0, MAGIC, 0xC0, 1, 0xCC, 1, 0, 0, 0, 0, 0,
                     0x80, len(data), 0, 0xD0, 0)
    RELOCATION.pack_into(data, 0xC0, 0x80, 4, 0)
    data[0xD0:0xDA] = b"\x02" + struct.pack("<I", 0x84) + bytes(5)
    return data


class FrontendAssemblyTests(unittest.TestCase):
    def test_named_and_local_jump_sites_agree(self) -> None:
        # One unresolved import at 0x80 and one module-local jump at 0x84.
        words = (0x0C000000, 0x0C000024)
        self.assertEqual(check_jump_relocations(bytes(sample()), words), (1, 1))

    def test_rejects_site_disagreement(self) -> None:
        words = (0x0C000000, 0x0C000024)
        data = sample()
        RELOCATION.pack_into(data, 0xC0, 0x88, 4, 0)
        with self.assertRaisesRegex(ValueError, "disagree"):
            check_jump_relocations(bytes(data), words)


if __name__ == "__main__":
    unittest.main()
