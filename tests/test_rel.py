"""Synthetic SNR2 metadata tests; no game bytes."""

from __future__ import annotations

import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from rel import HEADER, MAGIC, RELOCATION, SYMBOL, parse_module, render_exports, render_modules  # noqa: E402


def sample() -> bytearray:
    data = bytearray(0xE0)
    HEADER.pack_into(data, 0, MAGIC, 0xB0, 1, 0xBC, 2, 0xAC, 0, 0,
                     0xD4, 0, 0x80, len(data), 0, 0xD4, 0xD4)
    data[0x80:0x80 + len(b"external\0")] = b"external\0"
    data[0x90:0x90 + len(b"lib_main__FiPPc\0")] = b"lib_main__FiPPc\0"
    RELOCATION.pack_into(data, 0xB0, 0xA4, 4, 0, 0, 0)
    SYMBOL.pack_into(data, 0xBC, 0x80, 0, 0, 1, 0)
    SYMBOL.pack_into(data, 0xC8, 0x90, 0xA0, 0, 2, 0)
    return data


class RelTests(unittest.TestCase):
    def test_parse_and_render_metadata(self) -> None:
        module = parse_module("LVL/TEST.REL", bytes(sample()))
        self.assertEqual(module.relocation_count, 1)
        self.assertEqual(module.symbol_count, 2)
        self.assertEqual(module.imports, ("external",))
        self.assertEqual(module.import_references, (("external", 1),))
        self.assertEqual(module.relocation_types, ((4, 1),))
        self.assertEqual([(x.name, x.address) for x in module.exports],
                         [("lib_main__FiPPc", 0xA0)])
        self.assertIn("LVL/TEST.REL\t224\t", render_modules([module]))
        self.assertIn("LVL/TEST.REL\tlib_main__FiPPc\t0x000000A0", render_exports([module]))

    def test_rejects_bad_magic_and_size(self) -> None:
        blob = sample()
        blob[0] = 0
        with self.assertRaisesRegex(ValueError, "magic"):
            parse_module("test", bytes(blob))
        with self.assertRaisesRegex(ValueError, "file size"):
            parse_module("test", bytes(sample()[:-1]))

    def test_rejects_bad_relocation_index_and_symbol_name(self) -> None:
        blob = sample()
        blob[0xB0 + 5] = 2
        with self.assertRaisesRegex(ValueError, "relocation"):
            parse_module("test", bytes(blob))
        blob = sample()
        struct.pack_into("<I", blob, 0xC8, 0xD8)
        with self.assertRaisesRegex(ValueError, "symbol"):
            parse_module("test", bytes(blob))
