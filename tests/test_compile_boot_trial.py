"""Keep compiler outputs outside tracked source directories."""

from __future__ import annotations

import sys
import unittest
import json
import tempfile
from dataclasses import replace
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from compile_boot_trial import ROOT, require_private_output  # noqa: E402
import boot_trial_gate  # noqa: E402
import compile_boot_trial  # noqa: E402
from boot_c_campaign import source_path  # noqa: E402


class CompileBootTrialTests(unittest.TestCase):
    def test_assembly_fallback_or_partial_owner_cannot_keep_c_acceptance(self) -> None:
        rows = boot_trial_gate.REPLACEMENTS
        for changed in (
            tuple(row for row in rows if row.name != "memcard_busy"),
            tuple(replace(row, end=row.end - 8) if row.name == "memcard_busy" else row for row in rows),
        ):
            with self.subTest(changed=len(changed)), patch.object(boot_trial_gate, "REPLACEMENTS", changed):
                with self.assertRaisesRegex(ValueError, "complete C substitution"):
                    boot_trial_gate.accepted_body_bytes()

    def test_failed_recompile_clears_a_previous_accepted_report(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            report = Path(directory) / "report.json"
            report.write_text(json.dumps({"status": "passed_boot_only", "counted_matches": 1}))
            argv = ["gate", "boot", "--cpp", "cpp", "--cc1", "cc1", "--as", "as",
                    "--assembler", "sn-as", "--linker", "sn-ld", "--output-dir", directory]
            with patch.object(boot_trial_gate, "REPORT", report), patch.object(sys, "argv", argv), \
                 patch.object(boot_trial_gate, "compile_objects", side_effect=ValueError("control failed")):
                with self.assertRaisesRegex(ValueError, "control failed"):
                    boot_trial_gate.main()
            self.assertEqual(json.loads(report.read_text())["counted_matches"], 0)
            self.assertEqual(json.loads(report.read_text())["status"], "incomplete")

    def test_changed_compiler_patch_or_flags_cannot_reuse_qualification(self) -> None:
        original = json.loads(compile_boot_trial.PROFILE.read_text())
        paths = [Path(name) for name in ("cpp", "cc1", "as")]
        def pinned(path):
            return original["tools"][f"{path.name}_sha256"]
        for case in ("compiler", "patch", "flags"):
            with self.subTest(case=case), tempfile.TemporaryDirectory() as directory:
                profile = json.loads(json.dumps(original))
                if case == "flags":
                    profile["flags"]["cc1"].append("-O0")
                file = Path(directory) / "profile.json"
                file.write_text(json.dumps(profile))
                def digest(path):
                    return "0" * 64 if case == "compiler" and path.name == "cc1" else pinned(path)
                patch_hash = "0" * 64 if case == "patch" else original["source"]["patch_sha256_lf"]
                with patch.object(compile_boot_trial, "PROFILE", file), \
                     patch.object(compile_boot_trial, "digest", side_effect=digest), \
                     patch.object(compile_boot_trial, "normalized_digest", return_value=patch_hash):
                    with self.assertRaises(ValueError):
                        compile_boot_trial.check_profile(*paths)

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
