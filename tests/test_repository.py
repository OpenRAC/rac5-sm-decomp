"""The index gate catches accidentally tracked game inputs."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from check_repository import forbidden_reason  # noqa: E402


class RepositoryTests(unittest.TestCase):
    def test_private_paths(self) -> None:
        self.assertIsNotNone(forbidden_reason("baserom/SCUS_976.15"))
        self.assertIsNotNone(forbidden_reason("src/retail.elf"))
        self.assertIsNotNone(forbidden_reason(".env.local"))
        self.assertIsNone(forbidden_reason("src/boot/func_00100000.c"))
