"""Source-role identity rules must reject masked-code collisions."""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from level_family_identity import (common_unique_contexts, data_policy,  # noqa: E402
                                   normalized_control)


class FamilyIdentityTests(unittest.TestCase):
    def test_control_normalization_preserves_data_roles(self) -> None:
        first = "extern int D_1111, D_2222; int func_3333(void) { return D_1111 - D_2222; }"
        renamed = "extern int D_AAAA, D_BBBB; int func_CCCC(void) { return D_AAAA - D_BBBB; }"
        swapped = "extern int D_AAAA, D_BBBB; int func_CCCC(void) { return D_BBBB - D_AAAA; }"
        self.assertEqual(normalized_control(first), normalized_control(renamed))
        self.assertNotEqual(normalized_control(first), normalized_control(swapped))

    def test_data_policy_requires_independent_target_identity(self) -> None:
        single = [{0: ("same", True, 12)}, {0: ("same", True, 28)}]
        self.assertTrue(data_policy("unique_data_window", single))
        self.assertFalse(data_policy("unique_data_window",
                                     [{0: ("same", False, 12)}, single[1]]))
        paired = [{0: ("a", False, -3200), 8: ("b", True, -3600)},
                  {0: ("a", False, -3200), 8: ("b", True, -3600)}]
        self.assertTrue(data_policy("paired_target_offsets", paired))
        self.assertFalse(data_policy("paired_target_offsets",
                                     [paired[0], {0: ("a", False, -3196),
                                                  8: ("b", True, -3600)}]))

    def test_every_module_needs_a_common_unique_caller_context(self) -> None:
        self.assertEqual(common_unique_contexts([{"x", "y"}, {"x"}, {"x", "z"}]),
                         {"x"})
        self.assertEqual(common_unique_contexts([{"x"}, {"y"}]), set())


if __name__ == "__main__":
    unittest.main()
