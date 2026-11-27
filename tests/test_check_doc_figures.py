"""Documentation figure and vocabulary checks use only committed metadata."""

import json
import re
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import check_doc_figures as checker

STATUS = {
    "boot": {"accepted_functions": ["a", "b", "c"], "accepted_c_bytes": 1234,
             "scoped_code_percent": 12.345678},
    "levels": {"accepted_level_body_placements": 98765,
               "accepted_level_body_unique_sources": 4321,
               "accepted_level_body_placement_bytes": 1234567,
               "accepted_level_body_unique_source_bytes": 765432},
}
ROWS = [{"body_bytes": "100", "zero_padding_bytes": "4"},
        {"body_bytes": "28", "zero_padding_bytes": "0"}]


class FigureTests(unittest.TestCase):
    def setUp(self):
        self.values = checker.figures(STATUS, ROWS)

    def test_figures_come_from_status_and_boundaries(self):
        self.assertEqual(self.values["boot_functions"], 3)
        self.assertEqual(self.values["boot_objects"], 2)
        self.assertEqual(self.values["boot_body_bytes"], 128)
        self.assertEqual(self.values["boot_padding_bytes"], 4)
        self.assertEqual(self.values["boot_linked_bytes"], 132)
        self.assertEqual(self.values["level_sources"], 4321)

    def test_render_styles(self):
        self.assertEqual(checker.render(1234567, "comma"), "1,234,567")
        self.assertEqual(checker.render(1234567, "plain"), "1234567")
        self.assertEqual(checker.render(12.345678, "percent"), "12.35")

    def test_stale_number_is_reported_and_fixed_across_a_line_wrap(self):
        claims = (checker.Claim("a.md", r"keeps \*\*([0-9,]+) accepted\s?functions", "level_placements"),)
        text = "The boot keeps **12,000\naccepted functions** today.\n"
        problems, fixed = checker.check_claims({"a.md": text}, self.values, claims)
        self.assertEqual(problems, ["a.md: shows 12,000 where level_placements is 98,765"])
        self.assertEqual(fixed["a.md"], "The boot keeps **98,765\naccepted functions** today.\n")
        again, unchanged = checker.check_claims(fixed, self.values, claims)
        self.assertEqual(again, [])
        self.assertEqual(unchanged, fixed)

    def test_wrapped_pattern_whitespace_is_folded(self):
        claims = (checker.Claim("a.md", r"carried by ([0-9,]+) sources", "level_sources"),)
        problems, _ = checker.check_claims({"a.md": "carried\n   by 4,321\tsources"},
                                           self.values, claims)
        self.assertEqual(problems, [])

    def test_every_occurrence_is_checked(self):
        claims = (checker.Claim("a.md", r"`counted_bytes: ([0-9]+)`", "boot_bytes", "plain"),)
        text = "`counted_bytes: 1234` and later `counted_bytes: 999`"
        problems, fixed = checker.check_claims({"a.md": text}, self.values, claims)
        self.assertEqual(len(problems), 1)
        self.assertEqual(fixed["a.md"], "`counted_bytes: 1234` and later `counted_bytes: 1234`")

    def test_reworded_or_missing_documents_are_reported(self):
        claims = (checker.Claim("a.md", r"keeps ([0-9,]+) functions", "boot_functions"),
                  checker.Claim("gone.md", r"x ([0-9]+)", "boot_bytes"))
        problems, _ = checker.check_claims({"a.md": "nothing here"}, self.values, claims)
        self.assertIn("no text matches", problems[0])
        self.assertEqual(problems[1], "gone.md: file is missing")


class VocabularyTests(unittest.TestCase):
    def test_private_terms_are_reported_with_line_numbers(self):
        text = "fine line\nThe wave-17 lots ran.\nA kit and two Waves.\n"
        found = checker.vocabulary_problems("x.md", text)
        self.assertEqual([p.split(" '")[1].split("'")[0] for p in found],
                         ["wave-17", "lots", "kit", "Waves"])
        self.assertTrue(found[0].startswith("x.md:2:"))

    def test_italic_quotation_and_longer_words_are_allowed(self):
        text = "Terms such as *wave*, *lot* and *kit* are private.\nA waveform, lotus, kitchen.\n"
        self.assertEqual(checker.vocabulary_problems("x.md", text), [])


class RepositoryClaimTests(unittest.TestCase):
    """The claim list must stay usable on the committed documents."""

    def test_claims_are_well_formed_and_match_current_wording(self):
        root = checker.ROOT
        values = checker.figures(json.loads(checker.STATUS.read_text(encoding="utf-8")),
                                 checker._boot_tsv(checker.BOUNDARIES))
        for claim in checker.CLAIMS:
            with self.subTest(claim=claim):
                self.assertEqual(re.compile(claim.pattern).groups, 1)
                self.assertIn(claim.key, values)
                self.assertIn(claim.style, {"comma", "plain", "percent"})
                folded, _ = checker._folded((root / claim.path).read_text(encoding="utf-8"))
                self.assertRegex(folded, claim.pattern)


if __name__ == "__main__":
    unittest.main()
