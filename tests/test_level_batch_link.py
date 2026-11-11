"""Grouping and stale-object checks for opt-in level body batch linking."""
import hashlib
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import level_c_gate as gate


def item(number, defined, mapping=None, batchable=True):
    return {"row": {"module": "LEVEL_01.REL", "offset": number * 8,
                    "size": 8, "source": f"src/levels/01_pokitaru/u{number}.c"},
            "obj_path": Path(f"body_u{number}.o"),
            "object_sha": "0" * 64,
            "defined": set(defined), "mapping": mapping or {},
            "batchable": batchable}


class BatchPlannerTests(unittest.TestCase):
    def test_duplicate_global_and_source_object_are_partitioned(self):
        rows = [item(1, {"f"}), item(2, {"f"}), item(3, {"other"})]
        groups = gate.plan_body_link_batches(rows, 25)
        self.assertEqual(sorted(map(len, groups)), [1, 2])
        self.assertTrue(all(len({name for x in group for name in x["defined"]})
                            == sum(len(x["defined"]) for x in group)
                            for group in groups))

    def test_same_object_section_is_not_linked_twice_in_one_batch(self):
        rows = [item(1, {"a"}), item(2, {"b"})]
        rows[1]["obj_path"] = rows[0]["obj_path"]
        self.assertEqual(len(gate.plan_body_link_batches(rows, 25)), 2)

    def test_mapping_and_definition_conflicts_are_partitioned(self):
        rows = [item(1, {"a"}, {"data": 1}),
                item(2, {"b"}, {"data": 2}),
                item(3, {"data"}, {})]
        groups = gate.plan_body_link_batches(rows, 25)
        self.assertEqual(len(groups), 3)

    def test_limit_and_unsafe_name_fallback(self):
        rows = [item(n, {f"f{n}"}) for n in range(5)]
        rows.append(item(9, {"unsafe"}, batchable=False))
        groups = gate.plan_body_link_batches(rows, 2)
        self.assertEqual(sorted(map(len, groups)), [1, 1, 2, 2])
        self.assertEqual(groups[-1][0]["batchable"], False)

    def test_defined_global_filter(self):
        obj = {"symbols": [
            {"name": "owned", "bind": 1, "shndx": 2},
            {"name": "local", "bind": 0, "shndx": 2},
            {"name": "imported", "bind": 1, "shndx": 0},
            {"name": "common", "bind": 1, "shndx": 0xFFF1}]}
        self.assertEqual(gate.defined_global_names(obj), {"owned"})

    def test_batch_uses_qualified_mapping_for_each_row(self):
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory)
            obj_path = output / "body_qualified.o"
            blob = b"object"
            obj_path.write_bytes(blob)
            row = {"module": "LEVEL_01.REL", "offset": 0x200,
                   "size": 4, "source": "src/levels/01_pokitaru/qualified.c"}
            objects = {row["source"]: (obj_path, {"symbols": [], "relocs": []},
                                       hashlib.sha256(blob).hexdigest())}
            qualified = {(row["module"], row["source"]): {"symbol": "__muldi3"}}
            with (patch.object(gate, "OUTPUT", output),
                  patch.object(gate, "resolved_body_mapping",
                               return_value=({"__muldi3": 0x100},
                                             {"__muldi3": "qualified-local-libcall"})) as resolver,
                  patch.object(gate, "link_level_body", return_value=b"body"),
                  patch.object(gate, "resolve_symbols",
                               side_effect=AssertionError("generic resolver bypass"))):
                linked, count = gate.batch_link_level_bodies(
                    row["module"], [row], objects, {}, {}, b"module", 0x1000,
                    qualified, Path("ld.exe"), 25, 1)
            self.assertEqual(count, 1)
            self.assertEqual(linked[0][2]["__muldi3"], 0x100)
            self.assertEqual(resolver.call_args.args[-1], qualified)

    def test_tampered_object_rejected_before_linker(self):
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory)
            obj = output / "body_unit.o"
            obj.write_bytes(b"altered")
            expected = hashlib.sha256(b"original").hexdigest()
            row = {"module": "LEVEL_01.REL", "offset": 0x100,
                   "size": 8, "source": "src/levels/01_pokitaru/unit.c"}
            objects = {row["source"]: (obj, {"symbols": []}, expected)}
            with patch.object(gate, "OUTPUT", output):
                with self.assertRaisesRegex(ValueError, "stale level body object"):
                    gate.batch_link_level_bodies("LEVEL_01.REL", [row], objects,
                                                 {}, {}, b"", 0, {},
                                                 Path("ld.exe"), 25, 1)


if __name__ == "__main__":
    unittest.main(verbosity=2)
