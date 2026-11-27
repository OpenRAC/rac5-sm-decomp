import copy
import hashlib
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from candidate_regression_guard import compare_evaluations, restore_baseline


def hashed(value):
    return hashlib.sha256(value).hexdigest()


class CandidateRegressionTests(unittest.TestCase):
    def evaluation(self, source=b"baseline"):
        return {"target_id": "test:0:16", "reference_sha256": hashed(b"reference"),
                "contract_sha256": hashed(b"contract"), "source_sha256": hashed(source),
                "byte_diff_words": 7,
                "checks": {"source_policy": "pass", "toolchain_pins": "pass",
                           "entry_identity": "pass", "named_imports": "pass",
                           "maximum_in_selected_row": "pass", "vector_copy": "fail"}}

    def test_better_byte_score_does_not_hide_regression(self):
        baseline = self.evaluation()
        candidate = copy.deepcopy(baseline)
        candidate["byte_diff_words"] = 0
        candidate["checks"].update(maximum_in_selected_row="fail", vector_copy="pass")
        result = compare_evaluations(baseline, candidate)
        self.assertEqual(result["decision"], "retain_baseline")
        self.assertEqual(result["regressions"], ["maximum_in_selected_row"])
        self.assertEqual(result["improvements"], ["vector_copy"])
        self.assertEqual(result["automatic_matching_credit"], 0)

    def test_new_passing_property_can_outweigh_byte_distance(self):
        baseline = self.evaluation()
        candidate = copy.deepcopy(baseline)
        candidate["byte_diff_words"] = 12
        candidate["checks"]["vector_copy"] = "pass"
        self.assertEqual(compare_evaluations(baseline, candidate)["decision"], "use_candidate_for_next_trial")

    def test_unknown_is_not_a_passing_result(self):
        baseline = self.evaluation()
        candidate = copy.deepcopy(baseline)
        candidate["checks"]["maximum_in_selected_row"] = "unknown"
        self.assertEqual(compare_evaluations(baseline, candidate)["decision"], "retain_baseline")

    def test_changed_contract_or_check_set_requires_review(self):
        baseline = self.evaluation()
        candidate = copy.deepcopy(baseline)
        candidate["contract_sha256"] = hashed(b"different tests")
        self.assertEqual(compare_evaluations(baseline, candidate)["decision"], "hold")
        candidate = copy.deepcopy(baseline)
        del candidate["checks"]["vector_copy"]
        self.assertEqual(compare_evaluations(baseline, candidate)["decision"], "hold")

    def test_required_checks_cannot_be_omitted_or_failed(self):
        baseline = self.evaluation()
        candidate = copy.deepcopy(baseline)
        candidate["checks"]["named_imports"] = "fail"
        self.assertEqual(compare_evaluations(baseline, candidate)["decision"], "retain_baseline")
        del candidate["checks"]["named_imports"]
        with self.assertRaises(ValueError):
            compare_evaluations(baseline, candidate)

    def test_rollback_retains_rejected_source_and_checks_identity(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            old, bad = b"void f(void) {}\n", b"void f(void) { broken(); }\n"
            baseline, candidate = self.evaluation(old), self.evaluation(bad)
            candidate["checks"]["maximum_in_selected_row"] = "fail"
            baseline_file, working = root / "baseline.c", root / "working.c"
            baseline_file.write_bytes(old)
            working.write_bytes(bad)
            result = restore_baseline(compare_evaluations(baseline, candidate), baseline, candidate,
                                      baseline_file, working, root / "rejected")
            self.assertEqual(working.read_bytes(), old)
            self.assertEqual(Path(result["rejected_source"]).read_bytes(), bad)
            self.assertEqual(result["restored_source_sha256"], hashed(old))

    def test_rollback_refuses_source_changed_since_measurement(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            baseline, candidate = self.evaluation(b"old"), self.evaluation(b"bad")
            candidate["checks"]["maximum_in_selected_row"] = "fail"
            old_file, working = root / "old.c", root / "working.c"
            old_file.write_bytes(b"old")
            working.write_bytes(b"new concurrent work")
            with self.assertRaises(ValueError):
                restore_baseline(compare_evaluations(baseline, candidate), baseline, candidate,
                                 old_file, working, root / "rejected")
            self.assertEqual(working.read_bytes(), b"new concurrent work")


if __name__ == "__main__":
    unittest.main()
