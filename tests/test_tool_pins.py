"""Gates refuse tools that differ from their pins unless --unpinned-tools records them."""

from __future__ import annotations

import hashlib
import re
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import compile_boot_trial  # noqa: E402
import tool_pins  # noqa: E402


class ToolPinsTests(unittest.TestCase):
    def tearDown(self) -> None:
        tool_pins.allow(False)

    def test_a_differing_tool_is_refused_or_recorded(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            tool = Path(directory) / "cc1"
            tool.write_bytes(b"rebuilt cc1")
            pinned = hashlib.sha256(b"pinned cc1").hexdigest()
            actual = hashlib.sha256(b"rebuilt cc1").hexdigest()
            tool_pins.allow(False)
            with self.assertRaisesRegex(ValueError, "differs"):
                tool_pins.check("cc1", tool, actual, pinned, "cc1 differs from the pin")
            self.assertEqual(tool_pins.report_fields(),
                             {"qualifying_tools": True, "unpinned_tools": []})
            self.assertEqual(tool_pins.summary(), "")
            tool_pins.allow(True)
            tool_pins.check("cc1", tool, actual, pinned, "cc1 differs from the pin")
            tool_pins.check("cc1", tool, actual, pinned, "cc1 differs from the pin")
            tool_pins.check("cc1", tool, actual, actual, "an equal tool is never recorded")
            fields = tool_pins.report_fields()
            self.assertFalse(fields["qualifying_tools"])
            self.assertEqual(fields["unpinned_tools"], [
                {"tool": "cc1", "path": str(tool), "sha256": actual, "pinned_sha256": pinned}])
            self.assertIn("does not qualify", tool_pins.summary())
            tool_pins.allow(False)
            self.assertEqual(tool_pins.report_fields()["unpinned_tools"], [])

    def test_extra_assembler_check_follows_the_option(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            folder = Path(directory)
            (folder / "as-rac5span5").write_bytes(b"rebuilt span5")
            profile = {"extra_assemblers": {"span5": {
                "id": "span5-test", "host": "linux", "flags": {"as": ["-G0"]},
                "tools": {"assembler": "as-rac5span5",
                          "assembler_sha256": hashlib.sha256(b"pinned span5").hexdigest()}}}}
            tool_pins.allow(False)
            with self.assertRaisesRegex(ValueError, "span5 assembler differs"):
                compile_boot_trial.check_extra_assembler(profile, "span5", folder)
            tool_pins.allow(True)
            compile_boot_trial.check_extra_assembler(profile, "span5", folder)
            self.assertEqual([item["tool"] for item in tool_pins.RECORDED],
                             ["span5 assembler"])

    def test_build_script_pins_the_published_sources(self) -> None:
        script = (ROOT / "tools/compiler/build_gnu_ee.sh").read_text(encoding="utf-8")
        for patch in ("0000-rac5-pinned-base.patch", "0001-rac5-short-loop-six.patch",
                      "0002-rac5-div-pad.patch", "0003-rac5-upstream-saves-divpad.patch",
                      "0004-rac5-blockmove-loopcount.patch",
                      "0005-rac5-gas-span5.patch", "0006-rac5-gas-span5b.patch",
                      "0007-rac5-gnu-ee-trial.patch", "0008-rac5-gas-r5900-mfc1.patch",
                      "sdk/bison-grammar.patch",
                      "lombyte/0020-gas-absolute-unknown-symbol.patch",
                      "lombyte/0027-gas-inline-float-literals.patch"):
            self.assertIn(patch, script)
            self.assertTrue((ROOT / "tools/compiler/patches" / patch).is_file(), patch)
        # The base source the pinned chain was built from (config/boot/compiler_trial.json).
        profile = compile_boot_trial.json.loads(
            (ROOT / "config/boot/compiler_trial.json").read_text(encoding="utf-8"))
        self.assertIn(profile["source"]["mips_c_before_patch_sha256"], script)
        self.assertIn(profile["source"]["mips_h_sha256"], script)

    def test_every_selector_names_a_pinned_tool(self) -> None:
        script = (ROOT / "tools/compiler/build_gnu_ee.sh").read_text(encoding="utf-8")
        selectors = re.search(r'^ALL="([^"]*)"', script, re.MULTILINE).group(1).split()
        boot = compile_boot_trial.json.loads(
            (ROOT / "config/boot/compiler_trial.json").read_text(encoding="utf-8"))
        level = compile_boot_trial.json.loads(
            (ROOT / "config/levels/compiler_trial.json").read_text(encoding="utf-8"))
        names = {"pinned", *boot["extra_compilers"], *boot["extra_assemblers"],
                 *level["extra_assemblers"]}
        for selector in ("gnu-ee-trial", "r5900-mfc1", "sdk991111", "sdk-divpad"):
            self.assertIn(selector, selectors)
        for selector in selectors:
            self.assertIn(selector, names)
            self.assertIn(f"  {selector})", script.replace("|", ")\n  "))


if __name__ == "__main__":
    unittest.main()
