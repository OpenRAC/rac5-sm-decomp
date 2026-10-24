"""Tests for ByteMatch multi-version progress report generation and validation."""

from __future__ import annotations

import json
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))

import gen_progress_report  # noqa: E402
import versions  # noqa: E402


class GenProgressReportTests(unittest.TestCase):
    def test_generate_report_us(self) -> None:
        us_v = versions.get("us")
        report = gen_progress_report.generate_report(us_v)
        self.assertEqual(report["version"], 2)
        m = report["measures"]
        self.assertEqual(m["total_code"], "6418204")
        self.assertEqual(m["matched_code"], "87784")
        self.assertAlmostEqual(m["matched_code_percent"], 1.36773, places=4)
        self.assertEqual(m["total_units"], 22)

        # Verify unit names and level slugs
        unit_names = [u["name"] for u in report["units"]]
        self.assertIn("boot/executable", unit_names)
        self.assertIn("levels/frontend", unit_names)
        self.assertIn("levels/level01_pokitaru", unit_names)
        self.assertIn("levels/level08_dayni_moon", unit_names)
        self.assertIn("levels/level24_treehouse", unit_names)

        # Verify categories
        cat_ids = [c["id"] for c in report["categories"]]
        self.assertIn("boot", cat_ids)
        self.assertIn("level_code", cat_ids)
        self.assertIn("level01_pokitaru", cat_ids)

    def test_generate_report_pal(self) -> None:
        pal_v = versions.get("pal")
        report = gen_progress_report.generate_report(pal_v)
        self.assertEqual(report["version"], 2)
        m = report["measures"]
        self.assertEqual(m["total_code"], "6418460")
        self.assertEqual(m["matched_code"], "87784")
        self.assertAlmostEqual(m["matched_code_percent"], 1.36768, places=4)
        self.assertEqual(m["total_units"], 22)

    def test_check_reports_passes(self) -> None:
        self.assertTrue(gen_progress_report.check_reports())


if __name__ == "__main__":
    unittest.main()
