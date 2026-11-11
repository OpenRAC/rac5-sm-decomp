"""Boot twin names and original source files of level code."""

from __future__ import annotations

import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import level_function_names as names  # noqa: E402

JR_RA, NOP = 0x03E00008, 0
ADDIU_SP = 0x27BDFFF0  # addiu $sp, $sp, -16
LUI_V0 = 0x3C020000    # lui $v0, 0      (HI16 field)
LW_V0 = 0x8C420000     # lw $v0, 0($v0)  (LO16 field)
JAL = 0x0C000000       # jal 0           (26-bit field)


def jal(target: int) -> int:
    return JAL | (target >> 2)


def boot_index(bodies: dict[str, tuple[int, tuple[int, ...]]]) -> dict:
    """Index synthetic boot bodies (name -> (address, words)) like boot_bodies does."""
    index: dict = {}
    for name, (address, body) in bodies.items():
        key = (len(body), tuple(names.skeleton(word) for word in body[:names.LEAD_WORDS]))
        index.setdefault(key, []).append((name, address, body))
    return index


class BodyComparisonTests(unittest.TestCase):
    def test_relocation_fields_compare_opcodes_and_registers_only(self) -> None:
        boot = (LUI_V0 | 0x1234, LW_V0 | 0x0010, jal(0x01E80000), NOP, JR_RA, NOP)
        level = (LUI_V0, LW_V0 | 0x7FF0, jal(0x00000400), NOP, JR_RA, NOP)
        fields = {0: "half", 1: "half", 2: "jump"}
        self.assertTrue(names.same_body(level, boot, fields))
        self.assertFalse(names.same_body(level, boot, {0: "half", 2: "jump"}))
        other_register = (0x3C030000,) + level[1:]  # lui $v1 instead of $v0
        self.assertFalse(names.same_body(other_register, boot, fields))
        self.assertTrue(names.same_body(level, boot, {0: "word", 1: "word", 2: "word"}))

    def test_jump_target_keeps_the_segment_of_the_delay_slot(self) -> None:
        self.assertEqual(names.jump_target(0x01E60000, jal(0x01E80040)), 0x01E80040)
        self.assertEqual(names.jump_target(0x400, jal(0x1000)), 0x1000)

    def test_body_end_is_after_the_last_return(self) -> None:
        words = (ADDIU_SP, JR_RA, NOP, ADDIU_SP, JR_RA, NOP, NOP)
        self.assertEqual(names.body_end(words, 0, len(words)), 6)
        self.assertIsNone(names.body_end((ADDIU_SP, NOP), 0, 2))


class BootTwinTests(unittest.TestCase):
    def module(self, words: tuple[int, ...]) -> bytes:
        return struct.pack(f"<{len(words)}I", *words)

    def test_a_unit_takes_the_one_boot_symbol_whose_calls_agree(self) -> None:
        body = (ADDIU_SP, jal(0), NOP, 0x24020001, JR_RA, NOP)
        boot = {"Twin__Fv": (0x01E70000, body[:1] + (jal(0x01E70100),) + body[2:]),
                "Other__Fv": (0x01E70040, body[:1] + (jal(0x01E70200),) + body[2:])}
        boot_names = {0x01E70100: "Callee__Fv", 0x01E70200: "Elsewhere__Fv"}
        data = self.module(body)
        named = {4: ("named", 4, "Callee__Fv", 0)}
        self.assertEqual(names.boot_twins(data, [(0, 24)], named, boot_index(boot), boot_names),
                         [(0, 24, "Twin__Fv", 0x01E70000, [])])
        # Without the import name, the two boot bodies are equally good: no name.
        local = {4: ("local", 2, "", 0)}
        self.assertEqual(names.boot_twins(data, [(0, 24)], local, boot_index(boot), boot_names), [])
        # A named call to a function neither boot body calls rejects both.
        stranger = {4: ("named", 4, "Stranger__Fv", 0)}
        self.assertEqual(
            names.boot_twins(data, [(0, 24)], stranger, boot_index(boot), boot_names), [])

    def test_short_or_open_units_are_not_compared(self) -> None:
        body = (ADDIU_SP, JR_RA, NOP, NOP, NOP, 0x24020001)
        boot = {"Open__Fv": (0x01E70000, body)}
        self.assertEqual(names.boot_twins(self.module(body), [(0, 24)], {},
                                          boot_index(boot), {}), [])
        short = (ADDIU_SP, 0x24020001, JR_RA, NOP)
        self.assertEqual(names.boot_twins(self.module(short), [(0, 16)], {},
                                          boot_index({"Short__Fv": (0x01E70000, short)}), {}), [])

    def test_generic_shapes_and_contradicted_calls_lose_their_names(self) -> None:
        twins = {
            "LEVEL_01.REL": [(0x100, 24, "Getter__Fv", 0x01E70000, []),
                             (0x200, 24, "Getter__Fv", 0x01E70000, []),
                             (0x300, 32, "Caller__Fv", 0x01E70100, [(0x400, "Callee__Fv")]),
                             (0x400, 24, "Callee__Fv", 0x01E70200, []),
                             (0x500, 32, "Wrong__Fv", 0x01E70300, [(0x400, "Other__Fv")]),
                             (0x600, 32, "Open__Fv", 0x01E70400, [(0x900, "Unnamed__Fv")])],
            "LEVEL_02.REL": [(0x100, 24, "Getter__Fv", 0x01E70000, [])]}
        self.assertEqual(names.consistent_twins(twins), {
            "LEVEL_01.REL": [(0x300, 32, "Caller__Fv", 0x01E70100),
                             (0x400, 24, "Callee__Fv", 0x01E70200),
                             (0x600, 32, "Open__Fv", 0x01E70400)],
            "LEVEL_02.REL": []})


class SourceFileTests(unittest.TestCase):
    def test_cited_files_and_the_intervals_between_them(self) -> None:
        static = [(0x100, 0x140), (0x140, 0x180), (0x180, 0x1C0), (0x1C0, 0x200),
                  (0x200, 0x240), (0x240, 0x280), (0x280, 0x2C0)]
        sites = {"CORE/a.cpp": [0x104, 0x1C8], "CORE/a.h": [0x144], "CORE/b.cpp": [0x204],
                 "CORE/c.cpp": [0x244, 0x284], "CORE/d.cpp": [0x264]}
        self.assertEqual(names.attribute_files(static, sites), [
            (0x100, 0x140, "CORE/a.cpp", "cites"),
            (0x140, 0x180, "CORE/a.h", "cites"),
            (0x180, 0x1C0, "CORE/a.cpp", "between"),
            (0x1C0, 0x200, "CORE/a.cpp", "cites"),
            (0x200, 0x240, "CORE/b.cpp", "cites"),
            (0x280, 0x2C0, "CORE/c.cpp", "cites")])

    def test_folders_and_labels(self) -> None:
        self.assertEqual(names.folder("CORE/Breakable.cpp"), "CORE/Breakable")
        self.assertEqual(names.folder("main.c"), "main")
        self.assertEqual(names.folder("CORE/Breakable.h"), "")
        self.assertEqual(names.folder("CORE/odd-name.cpp"), "")
        labels = names.labeller(
            [{"module": "LEVEL_01.REL", "offset": "0x000100", "size": "24", "symbol": "Twin__Fv",
              "boot_address": "0x01E70000"}],
            [{"module": "LEVEL_01.REL", "start": "0x000100", "end": "0x000200",
              "file": "CORE/a.cpp", "evidence": "cites"},
             {"module": "LEVEL_01.REL", "start": "0x000200", "end": "0x000300",
              "file": "CORE/a.h", "evidence": "cites"}])
        self.assertEqual(labels("LEVEL_01.REL", 0x100), ("Twin__Fv", "CORE/a.cpp"))
        self.assertEqual(labels("LEVEL_01.REL", 0x1FC), ("", "CORE/a.cpp"))
        self.assertEqual(labels("LEVEL_01.REL", 0x200), ("", ""))
        self.assertEqual(labels("LEVEL_02.REL", 0x100), ("", ""))

    def test_committed_tables_belong_to_the_catalogues(self) -> None:
        twins, files = names.check()
        self.assertGreater(len(twins), 3000)
        self.assertIn("Quat_Slerp__FP4QUATPC4QUATT1f", {row["symbol"] for row in twins})
        self.assertIn("CORE/Breakable.cpp", {row["file"] for row in files})


if __name__ == "__main__":
    unittest.main()
