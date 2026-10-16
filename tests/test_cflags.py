"""Per-source cc1 flags: format, validation and application."""

from __future__ import annotations

import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import cflags  # noqa: E402
import compile_boot_trial  # noqa: E402

MEASURED = "nonmatching/boot/dlib_displist_direct_end__FP13DLIB_DISPLIST.c"


class CFlagsTests(unittest.TestCase):
    def test_committed_file_lists_campaign_sources_with_measured_flags(self) -> None:
        entries = cflags.load()
        for name, flags in entries.items():
            with self.subTest(name=name):
                self.assertIn(name, cflags.campaign_sources())
                self.assertTrue((cflags.ROOT / name).is_file())
                self.assertTrue(all(flag.startswith("-") for flag in flags))
        self.assertEqual(entries.get(MEASURED), ("-mno-check-zero-division",))

    def test_parses_comments_blanks_and_rejects_duplicates(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "nonmatching/boot").mkdir(parents=True)
            (root / "nonmatching/boot/unit.c").write_text("int f;\n")
            file = root / "cflags.txt"
            known = frozenset({"nonmatching/boot/unit.c"})
            with patch.object(cflags, "ROOT", root), \
                 patch.object(cflags, "campaign_sources", return_value=known):
                file.write_text("# header\n\nnonmatching/boot/unit.c  -O0  # trailing\n")
                self.assertEqual(cflags.load(file), {"nonmatching/boot/unit.c": ("-O0",)})
                file.write_text("nonmatching/boot/unit.c  -O0\nnonmatching/boot/unit.c  -O1\n")
                with self.assertRaisesRegex(ValueError, "duplicate entry"):
                    cflags.load(file)
                file.write_text("nonmatching/boot/unit.c\n")
                with self.assertRaisesRegex(ValueError, "no cc1 flags"):
                    cflags.load(file)

    def test_rejects_missing_foreign_and_unnormalised_paths(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "nonmatching/boot").mkdir(parents=True)
            (root / "nonmatching/boot/unit.c").write_text("int f;\n")
            (root / "src/levels").mkdir(parents=True)
            (root / "src/levels/other.c").write_text("int g;\n")
            file = root / "cflags.txt"
            known = frozenset({"nonmatching/boot/unit.c"})
            for line, message in (
                ("nonmatching/boot/absent.c  -O0\n", "source file does not exist"),
                ("src/levels/other.c  -O0\n", "not a campaign C source"),
                ("/abs/unit.c  -O0\n", "not a repository-relative C source"),
                ("../nonmatching/boot/unit.c  -O0\n", "not a repository-relative C source"),
                ("nonmatching/boot/unit.cc  -O0\n", "not a repository-relative C source"),
            ):
                with self.subTest(line=line), patch.object(cflags, "ROOT", root), \
                     patch.object(cflags, "campaign_sources", return_value=known):
                    file.write_text(line)
                    with self.assertRaisesRegex(ValueError, message):
                        cflags.load(file)

    def test_for_source_matches_only_listed_repository_sources(self) -> None:
        entries = {"nonmatching/boot/unit.c": ("-O0",)}
        self.assertEqual(cflags.for_source(entries, cflags.ROOT / "nonmatching/boot/unit.c"),
                         ("-O0",))
        self.assertEqual(cflags.for_source(entries, Path("/tmp/elsewhere/unit.c")), ())
        self.assertEqual(cflags.for_source(entries, cflags.ROOT / "tools/cflags.py"), ())

    def test_profile_flags_are_extended_per_source(self) -> None:
        profile = {"flags": {"cc1": ["-quiet", "-O2", "-G0"]}}
        source = cflags.ROOT / MEASURED
        self.assertEqual(compile_boot_trial.cc1_flags(profile, {}, source),
                         ["-quiet", "-O2", "-G0"])
        self.assertEqual(compile_boot_trial.cc1_flags(profile, cflags.load(), source),
                         ["-quiet", "-O2", "-G0", "-mno-check-zero-division"])
        self.assertEqual(compile_boot_trial.cc1_flags(profile, cflags.load(),
                                                      cflags.ROOT / "src/boot/memcard_busy.c"),
                         ["-quiet", "-O2", "-G0"])

    def test_campaign_sources_cover_owned_and_staged_sources(self) -> None:
        known = cflags.campaign_sources()
        self.assertIn(MEASURED, known)
        self.assertIn("src/boot/memcard_busy.c", known)
        self.assertIn("src/levels/shared/func_00000100.c", known)
        self.assertNotIn("tools/cflags.py", known)


if __name__ == "__main__":
    unittest.main()
