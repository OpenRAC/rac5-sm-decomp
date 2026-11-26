"""Original assembly is listed by evidence, checked against the catalogues and never counted as C."""

from __future__ import annotations

import json
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import handwritten_asm as h  # noqa: E402
from progress_status import OUTPUT  # noqa: E402

TRAMPOLINE = (0x24030012, 0x0000000C, 0x03E00008, 0x00000000)  # addiu $v1,$0,0x12; syscall; jr $ra; nop


class HandwrittenAsmTests(unittest.TestCase):
    def setUp(self) -> None:
        self.rows = h.read_rows()

    def test_committed_table_matches_the_catalogues_and_the_report(self) -> None:
        counts = h.summary(self.rows)
        h.check_report(self.rows)
        self.assertFalse(counts["counted_as_c"])
        self.assertEqual(counts["boot_units"] + counts["level_units"], len(self.rows))
        self.assertEqual(sum(counts["classes"].values()), len(self.rows))
        self.assertEqual(counts["boot_bytes"],
                         sum(int(row["bytes"]) for row in self.rows if row["scope"] == "boot"))

    def test_progress_snapshot_restates_the_table(self) -> None:
        status = json.loads(OUTPUT.read_text(encoding="utf-8"))
        self.assertEqual(status["original_assembly"], h.summary(self.rows))

    def test_rejects_duplicates_unknown_classes_and_wrong_extents(self) -> None:
        row = dict(self.rows[0])
        with self.assertRaisesRegex(ValueError, "listed twice"):
            h.summary(self.rows + [row])
        with self.assertRaisesRegex(ValueError, "unknown class"):
            h.summary([dict(row, **{"class": "sync"})])
        with self.assertRaisesRegex(ValueError, "not the boot interval"):
            h.summary([dict(row, bytes=str(int(row["bytes"]) + 4))])
        level = next(item for item in self.rows if item["scope"] != "boot")
        with self.assertRaisesRegex(ValueError, "not a level function shape unit"):
            h.summary([dict(level, start="0x000004")])

    def test_rejects_an_interval_that_accepted_c_owns(self) -> None:
        from boot_zero_padding import read as boot_zero_padding
        size = 32 - boot_zero_padding().get(0x01E627A0, 0)
        accepted = {"scope": "boot", "name": "MEMCARD_Idle__Fv", "start": "0x01E627A0",
                    "bytes": str(size), "class": "cop0", "evidence": "x"}
        with self.assertRaisesRegex(ValueError, "accepted C already owns"):
            h.summary([accepted])

    def test_evidence_classes(self) -> None:
        self.assertTrue(h.evidence_holds("cop0", (0x40026000,)))            # mfc0 $v0, Status
        self.assertTrue(h.evidence_holds("cop0", (0x42000038,)))            # ei
        self.assertFalse(h.evidence_holds("cop0", (0x03E00008, 0)))
        self.assertTrue(h.evidence_holds("vu0", (0x4BE6318B,)))             # a COP2 macro word
        self.assertTrue(h.evidence_holds("vu0", (0xD8A40000,)))             # lqc2
        self.assertTrue(h.evidence_holds("mmi", (0x70A21489,)))             # pand
        self.assertFalse(h.evidence_holds("mmi", (0x70A014A9, 0x70A21389)))  # por move, pcpyld
        self.assertTrue(h.evidence_holds("gp-store", (0xAE1C002C,)))        # sw $gp, 0x2C($s0)
        self.assertFalse(h.evidence_holds("gp-store", (0xAE1D002C,)))
        self.assertTrue(h.evidence_holds("syscall", TRAMPOLINE * 3))
        self.assertFalse(h.evidence_holds("syscall", TRAMPOLINE + (0x27BDFFF0,)))
        self.assertFalse(h.evidence_holds("syscall", ()))

    def test_classes_need_their_instruction_not_a_barrier(self) -> None:
        # `sync` alone is reachable from C through __builtin_rac5_sync.
        sync = (0x0000000F, 0x03E00008, 0)
        for cls in h.CLASSES:
            self.assertFalse(h.evidence_holds(cls, sync), cls)


if __name__ == "__main__":
    unittest.main()
