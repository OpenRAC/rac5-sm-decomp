"""Per-source compiler selection and cc1 flags: format, validation and application."""

from __future__ import annotations

import json
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import cflags  # noqa: E402
import compile_boot_trial  # noqa: E402

MEASURED = "nonmatching/boot/dlib_displist_direct_end__FP13DLIB_DISPLIST.c"
ROUTE_P = "nonmatching/boot/ps2fioClose.c"
ROUTE_Q = "nonmatching/boot/sceCdSyncS.c"
SECOND = "prodg2953"
SONY = "sdk991111"


class CFlagsTests(unittest.TestCase):
    def test_committed_file_lists_campaign_sources_with_measured_flags(self) -> None:
        entries = cflags.load()
        for name, entry in entries.items():
            with self.subTest(name=name):
                self.assertIn(name, cflags.campaign_sources())
                self.assertTrue((cflags.ROOT / name).is_file())
                self.assertTrue(all(flag.startswith("-") for flag in entry.flags))
                self.assertIn(entry.compiler, cflags.pinned_compilers())
        self.assertEqual(entries.get(MEASURED),
                         cflags.Entry(cflags.DEFAULT_COMPILER,
                                      ("-mno-check-zero-division",)))
        self.assertEqual(entries.get(ROUTE_P),
                         cflags.Entry(SECOND, ("-O2", "-G0")))
        self.assertEqual(entries.get(ROUTE_Q),
                         cflags.Entry(SONY, ("-O2", "-G0")))

    def test_selector_names_a_pinned_second_compiler(self) -> None:
        profile = json.loads(cflags.PROFILE.read_text(encoding="utf-8"))
        self.assertIn(SECOND, profile["extra_compilers"])
        pinned = profile["extra_compilers"][SECOND]
        for key in ("driver_sha256", "cpp_sha256", "cc1_sha256"):
            self.assertEqual(len(pinned["tools"][key]), 64)
        self.assertEqual(cflags.pinned_compilers(),
                         (cflags.DEFAULT_COMPILER, SECOND, SONY))
        self.assertTrue(cflags.Entry(SECOND, ("-O2",)).compiler != cflags.DEFAULT_COMPILER)
        self.assertTrue(cflags.DEFAULT_ENTRY.pinned)

    def test_every_pinned_compiler_states_its_host_and_provenance(self) -> None:
        profile = json.loads(cflags.PROFILE.read_text(encoding="utf-8"))
        for selector, pinned in profile["extra_compilers"].items():
            with self.subTest(selector=selector):
                # A routed object is built by a driver that must be found on the
                # host the pin names, so an unstated host may not pass silently.
                self.assertIn(pinned["host"], compile_boot_trial.HOSTS)
                self.assertEqual(pinned["flags"], {"driver": ["-S"], "as": []})
                self.assertTrue(pinned["id"].startswith("rac5-boot-"))
                for key in ("driver_sha256", "cpp_sha256", "cc1_sha256"):
                    int(pinned["tools"][key], 16)
                self.assertGreater(len(pinned["provenance"]), 80)
        self.assertEqual(profile["extra_compilers"][SECOND]["host"], "windows")
        self.assertEqual(profile["extra_compilers"][SONY]["host"], "linux")

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
                self.assertEqual(cflags.load(file),
                                 {"nonmatching/boot/unit.c":
                                  cflags.Entry(cflags.DEFAULT_COMPILER, ("-O0",))})
                file.write_text(f"nonmatching/boot/unit.c  {SECOND} -O2 -G0\n")
                self.assertEqual(cflags.load(file),
                                 {"nonmatching/boot/unit.c": cflags.Entry(SECOND, ("-O2", "-G0"))})
                file.write_text("nonmatching/boot/unit.c  -O0\nnonmatching/boot/unit.c  -O1\n")
                with self.assertRaisesRegex(ValueError, "duplicate entry"):
                    cflags.load(file)
                file.write_text("nonmatching/boot/unit.c\n")
                with self.assertRaisesRegex(ValueError, "no cc1 flags"):
                    cflags.load(file)
                file.write_text(f"nonmatching/boot/unit.c  {SECOND}\n")
                with self.assertRaisesRegex(ValueError, "no cc1 flags"):
                    cflags.load(file)

    def test_rejects_an_unpinned_selector(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "nonmatching/boot").mkdir(parents=True)
            (root / "nonmatching/boot/unit.c").write_text("int f;\n")
            file = root / "cflags.txt"
            known = frozenset({"nonmatching/boot/unit.c"})
            for line in ("nonmatching/boot/unit.c  sdk -O2 -G0\n",
                         "nonmatching/boot/unit.c  gcc2953 -O2\n",
                         "nonmatching/boot/unit.c  prodg -O2\n"):
                with self.subTest(line=line), patch.object(cflags, "ROOT", root), \
                     patch.object(cflags, "campaign_sources", return_value=known):
                    file.write_text(line)
                    with self.assertRaisesRegex(ValueError, "unknown compiler selector"):
                        cflags.load(file)

    def test_rejects_a_bare_word_after_the_selector(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "nonmatching/boot").mkdir(parents=True)
            (root / "nonmatching/boot/unit.c").write_text("int f;\n")
            file = root / "cflags.txt"
            known = frozenset({"nonmatching/boot/unit.c"})
            with patch.object(cflags, "ROOT", root), \
                 patch.object(cflags, "campaign_sources", return_value=known):
                file.write_text(f"nonmatching/boot/unit.c  {SECOND} -O2 quiet\n")
                with self.assertRaisesRegex(ValueError, "not a flag"):
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
                ("nonmatching/boot/absent.c  prodg2953 -O0\n", "source file does not exist"),
                ("src/levels/other.c  -O0\n", "not a campaign C source"),
                ("src/levels/other.c  prodg2953 -O2\n", "not a campaign C source"),
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
        entries = {"nonmatching/boot/unit.c": cflags.Entry(SECOND, ("-O0",))}
        source = cflags.ROOT / "nonmatching/boot/unit.c"
        self.assertEqual(cflags.for_source(entries, source), entries[
            "nonmatching/boot/unit.c"])
        self.assertEqual(cflags.for_source(entries, Path("/tmp/elsewhere/unit.c")),
                         cflags.DEFAULT_ENTRY)
        self.assertEqual(cflags.for_source(entries, cflags.ROOT / "tools/cflags.py"),
                         cflags.DEFAULT_ENTRY)

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

    def test_selector_flags_belong_to_that_compiler_alone(self) -> None:
        entries = cflags.load()
        source = cflags.ROOT / ROUTE_P
        profile = {"flags": {"cc1": ["-quiet", "-O2", "-G0"]}}
        # The pinned chain keeps its own global flags and never inherits them.
        self.assertEqual(compile_boot_trial.cc1_flags(profile, entries, source),
                         ["-quiet", "-O2", "-G0"])
        extra = {"flags": {"driver": ["-S"], "as": []}}
        self.assertEqual(compile_boot_trial.compiler_flags(extra, entries, source),
                         ["-S", "-O2", "-G0"])

    def test_an_unpinned_or_unprovided_second_compiler_is_rejected(self) -> None:
        profile = json.loads(compile_boot_trial.PROFILE.read_text(encoding="utf-8"))
        with self.assertRaisesRegex(ValueError, "pins no compiler"):
            compile_boot_trial.check_extra_compiler(profile, "not-pinned", Path("/nope"))
        for selector in (SECOND, SONY):
            with self.subTest(selector=selector), \
                 self.assertRaisesRegex(ValueError, f"--extra-bin {selector}="):
                compile_boot_trial.check_extra_compiler(profile, selector, None)

    def test_extra_compiler_stage_comes_from_the_pin_or_the_output_dir(self) -> None:
        def pin(host, **extra):
            return {"id": "rac5-boot-unit", "host": host, "provenance": "u" * 81,
                    "flags": {"driver": ["-S"], "as": []},
                    "tools": {"driver": "d", "libexec": ".", "cpp": "c", "cc1": "x",
                              "driver_sha256": "0" * 64, "cpp_sha256": "0" * 64,
                              "cc1_sha256": "0" * 64}, **extra}

        profile = {"extra_compilers": {"win": pin("windows", stage="build/stage-win"),
                                       "lin": pin("linux"),
                                       "bad": pin("plan9")}}
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory) / "repo"
            root.mkdir()
            (root / "bin").mkdir()
            for name in ("d", "c", "x"):
                (root / "bin" / name).write_text("tool\n")
            output = Path(directory) / "out"
            with patch.object(compile_boot_trial, "ROOT", root), \
                 patch.object(compile_boot_trial, "digest", return_value="0" * 64):
                # A pin that names a stage keeps it; one that does not stages
                # under --output-dir, the native Linux directory in a real run.
                win = compile_boot_trial.check_extra_compiler(
                    profile, "win", root / "bin", None, output)
                lin = compile_boot_trial.check_extra_compiler(
                    profile, "lin", root / "bin", None, output)
                override = compile_boot_trial.check_extra_compiler(
                    profile, "lin", root / "bin", root / "build/elsewhere", output)
                self.assertEqual(win["stage"], root / "build/stage-win")
                self.assertEqual(lin["stage"], output / "lin-stage")
                self.assertEqual(override["stage"], root / "build/elsewhere")
                with self.assertRaisesRegex(ValueError, "under ignored build/"):
                    compile_boot_trial.check_extra_compiler(
                        profile, "lin", root / "bin", root / "elsewhere", output)
                self.assertEqual(lin["host"], "linux")
                with self.assertRaisesRegex(ValueError, "is not one of"):
                    compile_boot_trial.check_extra_compiler(
                        profile, "bad", root / "bin", None, output)

    def test_extra_bin_option_splits_a_selector_from_its_directory(self) -> None:
        self.assertEqual(compile_boot_trial.extra_option("sdk991111=/opt/sdk"),
                         ("sdk991111", Path("/opt/sdk")))
        for value in ("sdk991111", "=/opt/sdk", "sdk991111="):
            with self.subTest(value=value), \
                 self.assertRaisesRegex(Exception, "SELECTOR=DIRECTORY"):
                compile_boot_trial.extra_option(value)

    def test_campaign_sources_cover_owned_and_staged_sources(self) -> None:
        known = cflags.campaign_sources()
        self.assertIn(MEASURED, known)
        self.assertIn(ROUTE_P, known)
        self.assertIn("src/boot/memcard_busy.c", known)
        self.assertIn("src/levels/shared/func_00000100.c", known)
        self.assertNotIn("tools/cflags.py", known)


if __name__ == "__main__":
    unittest.main()
