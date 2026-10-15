"""Keep compiler outputs outside tracked source directories."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from compile_boot_trial import ROOT, require_private_output  # noqa: E402
import boot_trial_gate  # noqa: E402
from boot_c_campaign import source_path  # noqa: E402


class CompileBootTrialTests(unittest.TestCase):
    def test_accepted_boot_source_and_extent_are_explicit(self) -> None:
        self.assertEqual(source_path("memcard_busy"),
                         ROOT / "src/boot/memcard_busy.c")
        self.assertEqual(source_path("fog_preupdate"),
                         ROOT / "nonmatching/boot/fog_preupdate.c")
        self.assertEqual(boot_trial_gate.accepted_body_bytes(), 16)
        with patch.object(boot_trial_gate, "ACCEPTED_SOURCES", frozenset()):
            with self.assertRaisesRegex(ValueError, "scope changed"):
                boot_trial_gate.accepted_body_bytes()

    def test_rejects_tracked_output_and_accepts_ignored_build(self) -> None:
        with self.assertRaisesRegex(ValueError, "ignored build"):
            require_private_output(ROOT / "nonmatching/boot")
        self.assertEqual(require_private_output(ROOT / "build/boot-objects"),
                         (ROOT / "build/boot-objects").resolve())


if __name__ == "__main__":
    unittest.main()
