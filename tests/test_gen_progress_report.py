"""Tests for ByteMatch multi-version progress report generation and validation."""

from __future__ import annotations

import json
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))

import boot_trial_gate  # noqa: E402
import gen_progress_report  # noqa: E402
import versions  # noqa: E402
from level_source_layout import MODULE_DIRS  # noqa: E402


def code(item: dict) -> tuple[int, int]:
    return int(item["measures"]["total_code"]), int(item["measures"]["matched_code"])


class GenProgressReportTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls) -> None:
        cls.us = gen_progress_report.generate_report(versions.get("us"))
        cls.summary = json.loads(gen_progress_report.ACCEPTED_SHAPES.read_text(encoding="utf-8"))
        cls.shape = json.loads(gen_progress_report.SHAPE.read_text(encoding="utf-8"))

    def test_generate_report_us(self) -> None:
        report = self.us
        self.assertEqual(report["version"], 2)
        m = report["measures"]
        self.assertEqual(m["total_code"], "5376420")
        self.assertEqual(m["matched_code"], "789332")
        self.assertAlmostEqual(m["matched_code_percent"], 14.6814, places=4)
        self.assertEqual((m["matched_functions"], m["total_functions"]), (5809, 14409))
        self.assertEqual(m["total_units"], len(report["units"]))

        # The headline is the boot .text plus the level code map, which
        # already holds FRONTEND.REL, and the accepted C they cover. The map
        # splits every retained candidate interval byte and can only shrink the
        # optimistic shape scenario.
        boot = boot_trial_gate.accepted_body_bytes()
        self.assertEqual(int(m["total_code"]), 498900 + self.summary["map_bytes"])
        self.assertEqual(self.summary["map_raw_bytes"],
                         self.shape["retained_candidate_interval_bytes"])
        self.assertLessEqual(self.summary["map_bytes"],
                             self.shape["masked_max_per_module_scenario_bytes"])
        self.assertEqual(int(m["matched_code"]), boot + self.summary["map_matched_bytes"])

        # The accepted tables still agree with the scoped snapshot.
        _by_module, unique_bytes, unique_sources = gen_progress_report.accepted_us_level_bodies(
            json.loads(gen_progress_report.STATUS.read_text(encoding="utf-8"))
        )
        self.assertEqual(unique_bytes, 5786384)
        self.assertEqual(unique_sources, 42468)

    def test_map_tiles_follow_the_source_tree_and_sum_to_the_headline(self) -> None:
        units = self.us["units"]
        names = [item["name"] for item in units]
        self.assertEqual(len(set(names)), len(names))
        folders = {"boot"} | {f"levels/{d}" for d in MODULE_DIRS.values()} | {"levels/shared"}
        self.assertTrue(all(name.rsplit("/", 1)[0] in folders for name in names))
        self.assertEqual(sum(code(item)[0] for item in units),
                         int(self.us["measures"]["total_code"]))
        self.assertEqual(sum(code(item)[1] for item in units),
                         int(self.us["measures"]["matched_code"]))
        # Matched tiles are whole functions with their source; the map has
        # matched, unmatched and only a few partly matched tiles.
        whole = [item for item in units if code(item)[0] == code(item)[1] > 0]
        self.assertGreater(len(whole), 4000)
        partial = [item for item in units if 0 < code(item)[1] < code(item)[0]]
        self.assertLess(len(partial), 100)
        for item in whole:
            if item["measures"]["total_functions"]:
                source = item["metadata"]["source_path"]
                self.assertTrue((ROOT / source).is_file(), source)
                self.assertTrue(item["functions"][0]["name"])

    def test_categories_partition_the_map(self) -> None:
        categories = {c["id"]: c for c in self.us["categories"]}
        self.assertEqual(code(categories["boot"])[0] + code(categories["levels"])[0],
                         int(self.us["measures"]["total_code"]))
        parts = [c for key, c in categories.items() if key not in ("boot", "levels")]
        self.assertEqual(len(parts), len(MODULE_DIRS) + 1)
        self.assertEqual(sum(code(c)[0] for c in parts), code(categories["levels"])[0])
        self.assertEqual(sum(code(c)[1] for c in parts), code(categories["levels"])[1])
        self.assertIn("LEVEL_21.REL", categories["level15_giant_clank_metalis"]["name"])
        self.assertNotIn("level21_giant_clank_space", categories)

    def test_function_names_come_from_definitions(self) -> None:
        self.assertEqual(gen_progress_report.definition_start("int f(int (*g)(int))"), 4)
        self.assertIsNone(gen_progress_report.definition_start("int x[] ="))
        self.assertIsNone(gen_progress_report.definition_start("struct s"))

    def test_generate_report_pal(self) -> None:
        pal_v = versions.get("pal")
        report = gen_progress_report.generate_report(pal_v)
        self.assertEqual(report["version"], 2)
        m = report["measures"]
        self.assertEqual(m["total_code"], str(499156 + self.summary["map_bytes"]))
        self.assertEqual(m["matched_code"], "0")
        self.assertEqual(m["matched_code_percent"], 0)
        self.assertEqual((m["matched_functions"], m["total_functions"]), (0, 0))
        self.assertTrue(all(u["measures"]["matched_code"] == "0" for u in report["units"]))

    def test_committed_reports_are_json_and_current(self) -> None:
        for path in gen_progress_report.REPORTS.values():
            json.loads(path.read_text(encoding="utf-8"))
        self.assertTrue(gen_progress_report.check_reports())


if __name__ == "__main__":
    unittest.main()
