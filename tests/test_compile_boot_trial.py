"""Keep compiler outputs outside tracked source directories."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from compile_boot_trial import ROOT, require_private_output  # noqa: E402


class CompileBootTrialTests(unittest.TestCase):
    def test_rejects_tracked_output_and_accepts_ignored_build(self) -> None:
        with self.assertRaisesRegex(ValueError, "ignored build"):
            require_private_output(ROOT / "nonmatching/boot")
        self.assertEqual(require_private_output(ROOT / "build/boot-objects"),
                         (ROOT / "build/boot-objects").resolve())


if __name__ == "__main__":
    unittest.main()
