"""The boot zero padding table belongs to the current interval catalogue."""

from __future__ import annotations

import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import boot_zero_padding  # noqa: E402


class BootZeroPaddingTests(unittest.TestCase):
    def test_committed_table_agrees_with_the_catalogues(self) -> None:
        padding = boot_zero_padding.read()
        self.assertEqual(sum(padding.values()), 2760)
        self.assertEqual(padding[boot_zero_padding.TEXT_START], 8)
        self.assertTrue(all(size % 4 == 0 for size in padding.values()))

    def test_a_stale_or_inconsistent_table_is_rejected(self) -> None:
        text = boot_zero_padding.OUTPUT.read_text(encoding="utf-8")
        with tempfile.TemporaryDirectory() as directory:
            stale = Path(directory) / "stale.tsv"
            stale.write_text(text.replace(text.split(": ")[-1].split()[0], "0" * 64, 1),
                             encoding="utf-8", newline="\n")
            with patch.object(boot_zero_padding, "OUTPUT", stale):
                with self.assertRaisesRegex(ValueError, "stale"):
                    boot_zero_padding.read()
            wrong = Path(directory) / "wrong.tsv"
            wrong.write_text(text.replace("0x01E62500\t8", "0x01E62500\t12"),
                             encoding="utf-8", newline="\n")
            with patch.object(boot_zero_padding, "OUTPUT", wrong):
                with self.assertRaisesRegex(ValueError, "invalid"):
                    boot_zero_padding.read()


if __name__ == "__main__":
    unittest.main()
