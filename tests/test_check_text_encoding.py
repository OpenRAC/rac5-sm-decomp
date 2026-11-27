"""The encoding check finds double-encoded UTF-8 without flagging real text."""

import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import check_text_encoding as checker  # noqa: E402


def mangle(text: str) -> str:
    """Reproduce the fault: UTF-8 bytes read as Windows-1252."""
    return text.encode("utf-8").decode("cp1252", errors="replace")


class TextEncodingTests(unittest.TestCase):
    def test_common_punctuation_is_detected_and_repaired(self):
        for char in ("–", "—", "…", "−", "ł", "é", "→"):
            with self.subTest(char=char):
                bad = f"a {mangle(char)} b"
                self.assertNotEqual(bad, f"a {char} b")
                self.assertEqual(checker.findings(bad), [(1, mangle(char), char)])
                self.assertEqual(checker.repair(bad), f"a {char} b")

    def test_undefined_windows_1252_slots_read_as_latin1(self):
        # U+00C1 encodes as C3 81; 0x81 has no Windows-1252 character.
        bad = "Ã\u0081"
        self.assertEqual(checker.findings(bad), [(1, bad, "Á")])

    def test_correct_text_is_not_flagged(self):
        for text in ("68–76 bytes", "Mateusz Kłysz", "café à © Ãté",
                     "Â lone", "plain ASCII", "â €"):
            with self.subTest(text=text):
                self.assertEqual(checker.findings(text), [])
                self.assertEqual(checker.repair(text), text)

    def test_line_numbers(self):
        text = "ok\nok\n" + mangle("—") + "\n"
        self.assertEqual(checker.findings(text)[0][0], 3)

    def test_audit_reports_fixes_and_invalid_bytes(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            subprocess.run(["git", "init", "-q"], cwd=root, check=True)
            (root / "a.md").write_text("x " + mangle("–") + " y\n", encoding="utf-8")
            (root / "b.py").write_bytes(b"ok\n\xff\n")
            (root / "c.bin").write_bytes(b"\xff")
            subprocess.run(["git", "add", "a.md", "b.py"], cwd=root, check=True)
            problems = checker.audit(root)
            self.assertEqual(len(problems), 2)
            self.assertIn("a.md:1: double-encoded", problems[0])
            self.assertEqual(problems[1], "b.py:2: invalid UTF-8")
            checker.audit(root, fix=True)
            self.assertEqual((root / "a.md").read_text(encoding="utf-8"), "x – y\n")
            self.assertEqual(checker.audit(root), ["b.py:2: invalid UTF-8"])


if __name__ == "__main__":
    unittest.main()
