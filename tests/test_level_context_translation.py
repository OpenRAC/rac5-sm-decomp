"""Context pairs require independent and unambiguous data correspondence."""

from __future__ import annotations

import json
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_context_translation import (OUTPUT, anchored_target, check_summary,
                                       close_context_dependencies,
                                       context_key)  # noqa: E402


class LevelContextTranslationTests(unittest.TestCase):
    def test_context_callgraph_needs_closed_callee_pair(self) -> None:
        callee = ("callee", "LEVEL_02.REL")
        caller = ("caller", "LEVEL_02.REL")
        missing = ("missing", "LEVEL_02.REL")
        self.assertEqual(close_context_dependencies({
            callee: set(), caller: {callee}}), {callee, caller})
        self.assertEqual(close_context_dependencies({
            callee: set(), caller: {missing}}), {callee})
        self.assertEqual(close_context_dependencies({caller: {caller}}), {caller})

    def test_unique_code_context_changes_with_neighbors(self) -> None:
        static = [{"body_bytes": "8", "masked_lead_sha256": str(index)}
                  for index in range(3)]
        original = context_key(static, 1)
        self.assertEqual(original, context_key(static, 1))
        static[0]["masked_lead_sha256"] = "changed"
        self.assertNotEqual(original, context_key(static, 1))

    def test_target_needs_unique_window_or_unambiguous_anchors(self) -> None:
        source, dest = bytearray(512), bytearray(512)
        source[100:164] = bytes(range(64))
        dest[200:264] = bytes(range(64))
        args = (bytes(source), bytes(dest), 64, 64, 512, 512, {})
        self.assertTrue(anchored_target(100, 200, {}, {}, [], *args))
        self.assertTrue(anchored_target(
            300, 400, {300: {400: {"one"}}}, {400: {300}}, [300], *args))
        self.assertFalse(anchored_target(
            500, 400, {500: {400: {"one"}}}, {400: {500}}, [500], *args))
        self.assertFalse(anchored_target(
            300, 400, {300: {400: {"one"}, 404: {"two"}}},
            {400: {300}}, [300], *args))
        anchors = {280: {380: {"one"}}, 320: {420: {"two"}}}
        reverse = {380: {280}, 420: {320}}
        self.assertTrue(anchored_target(
            300, 400, anchors, reverse, [280, 320], *args))
        self.assertFalse(anchored_target(
            300, 404, anchors, reverse, [280, 320], *args))
        anchors[320][420] = {"one"}
        self.assertFalse(anchored_target(
            300, 400, anchors, reverse, [280, 320], *args))

    def test_committed_context_report_remains_unqualified(self) -> None:
        report = json.loads(OUTPUT.read_text(encoding="utf-8"))
        check_summary(report)
        self.assertIsNone(report["overall_percent"])
        self.assertFalse(report["bytematch_ready"])
        changed = {**report, "conditional_candidate_bytes": 0}
        with self.assertRaisesRegex(ValueError, "stale or overclaims"):
            check_summary(changed)


if __name__ == "__main__":
    unittest.main()
