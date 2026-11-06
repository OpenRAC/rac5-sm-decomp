"""A level body uses an alternate assembler only through its pinned selector."""

from __future__ import annotations

import hashlib
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_c_gate import (BODY_ASSEMBLER, check_extra_as, extra_as_paths,
                          select_body_assembler)  # noqa: E402


class LevelBodyAssemblerTests(unittest.TestCase):
    def test_selector_requires_an_explicit_route(self) -> None:
        default = Path("default-as")
        profile = {"extra_assemblers": {
            "trial": {"flags": {"as": ["-G0"]}, "tools": {"as_sha256": "0" * 64}}
        }}
        self.assertEqual(select_body_assembler(BODY_ASSEMBLER, default, {}, profile),
                         (default, []))
        with self.assertRaisesRegex(ValueError, "needs --extra-as"):
            select_body_assembler("trial", default, {}, profile)
        with self.assertRaisesRegex(ValueError, "unknown level body assembler"):
            select_body_assembler("unknown", default, {}, profile)
        self.assertEqual(select_body_assembler("trial", default,
                                               {"trial": Path("trial-as")}, profile),
                         (Path("trial-as"), ["-G0"]))

    def test_extra_assembler_hash_and_name_are_checked(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            good = Path(directory) / "good-as"
            bad = Path(directory) / "bad-as"
            good.write_bytes(b"qualified assembler")
            bad.write_bytes(b"different assembler")
            profile = {"extra_assemblers": {
                "trial": {"tools": {"as_sha256": hashlib.sha256(good.read_bytes()).hexdigest()}}
            }}
            check_extra_as({"trial": good}, profile)
            with self.assertRaisesRegex(ValueError, "differs from the pinned"):
                check_extra_as({"trial": bad}, profile)
            with self.assertRaisesRegex(ValueError, "unknown --extra-as"):
                check_extra_as({"unknown": good}, profile)

    def test_duplicate_selector_is_rejected(self) -> None:
        with self.assertRaisesRegex(ValueError, "duplicate --extra-as"):
            extra_as_paths(["trial=one", "trial=two"])
        with self.assertRaisesRegex(ValueError, "expects NAME=PATH"):
            extra_as_paths(["trial"])


if __name__ == "__main__":
    unittest.main()
