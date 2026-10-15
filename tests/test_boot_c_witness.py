"""Keep the public C source tied to the measured whole-boot witness."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from boot_c_witness import check_source  # noqa: E402


class BootCWitnessTests(unittest.TestCase):
    def test_candidate_source_has_measured_identity(self) -> None:
        check_source()


if __name__ == "__main__":
    unittest.main()
