"""Synthetic tests for the opt-in, pinned module-local __muldi3 mapping."""
from __future__ import annotations

import copy
import csv
import hashlib
import io
import sys
import tempfile
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from level_body_link import BodyLinkError, resolve_symbols  # noqa: E402
from level_c_gate import (LOCAL_LIBCALL_FORMAT, LOCAL_LIBCALL_HEADER,
                          module_relocation_sites, qualify_local_libcall, read_local_libcalls,
                          resolved_body_mapping)  # noqa: E402
from rel import HEADER, RELOCATION  # noqa: E402


class QualifiedLibcallTests(unittest.TestCase):
    def setUp(self) -> None:
        self.helper = bytes(range(96))
        self.module = bytearray(0x1000)
        self.module[0x100:0x160] = self.helper
        self.row = {
            "module": "FRONTEND.REL",
            "source": "src/levels/bodies/FRONTEND_0238C8.c",
            "offset": 0x500, "size": 680,
            "object_sha256": "a" * 64, "profile": "sdk991111",
        }
        self.entry = {
            "module": self.row["module"], "source": self.row["source"],
            "object_sha256": self.row["object_sha256"],
            "symbol": "__muldi3", "target": 0x100, "helper_size": 96,
            "helper_sha256": hashlib.sha256(self.helper).hexdigest(),
            "reloc_offsets": (0x110, 0x120, 0x130, 0x140),
        }
        self.obj = {
            "symbols": [
                {"name": "", "shndx": 0, "bind": 0, "type": 0},
                {"name": "__muldi3", "shndx": 0, "bind": 1, "type": 0},
                {"name": "func_000200", "shndx": 0, "bind": 1, "type": 0},
            ],
            "relocs": [{"offset": delta, "type": 4, "sym": 1, "addend": 0}
                       for delta in self.entry["reloc_offsets"]],
        }

    def qualify(self, *, entry=None, row=None, obj=None, module=None,
                imports=None, exports=None, named=None, local=None,
                object_sha=None):
        return qualify_local_libcall(
            self.entry if entry is None else entry,
            self.row if row is None else row,
            self.obj if obj is None else obj,
            self.row["object_sha256"] if object_sha is None else object_sha,
            bytes(self.module if module is None else module), 0x1000,
            {} if imports is None else imports,
            {} if exports is None else exports,
            set() if named is None else named,
            set() if local is None else local,
        )

    def table_text(self, rows: list[dict], version: str = LOCAL_LIBCALL_FORMAT) -> str:
        out = io.StringIO()
        out.write(version + "\n")
        writer = csv.DictWriter(out, fieldnames=LOCAL_LIBCALL_HEADER,
                                delimiter="\t", lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)
        return out.getvalue()

    def table_row(self) -> dict:
        return {
            "module": self.row["module"], "source": self.row["source"],
            "object_sha256": self.row["object_sha256"],
            "symbol": "__muldi3", "target": "0x000100",
            "helper_size": "96",
            "helper_sha256": self.entry["helper_sha256"],
            "reloc_offsets": "0x110,0x120,0x130,0x140",
        }

    def read_table(self, rows: list[dict], *, version=LOCAL_LIBCALL_FORMAT,
                   accepted=None):
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / "local_link_symbols.tsv"
            path.write_text(self.table_text(rows, version), encoding="utf-8")
            return read_local_libcalls(
                path, [self.row] if accepted is None else accepted)

    def test_named_and_packed_fixup_sites_are_collected(self) -> None:
        module = bytearray(128)
        header = [0] * 15
        header[1], header[2], header[13] = 64, 1, 128
        HEADER.pack_into(module, 0, *header)
        RELOCATION.pack_into(module, 64, 0x104, 4, 0)
        fixup = SimpleNamespace(site=0x108, low_site=0x10C)
        with patch("level_c_gate.iter_packed_relocations", return_value=[fixup]):
            named, local = module_relocation_sites(bytes(module))
        self.assertEqual(named, {0x104})
        self.assertEqual(local, {0x108, 0x10C})

    def test_mapping_requires_undefined_symbol_in_object(self) -> None:
        no_libcall = copy.deepcopy(self.obj)
        no_libcall["relocs"] = []
        no_libcall["symbols"][1]["shndx"] = 1
        with self.assertRaisesRegex(BodyLinkError, "not referenced"):
            resolve_symbols(no_libcall, {}, {}, {"__muldi3": 0x100})
        qualified = {(self.row["module"], self.row["source"]): self.entry}
        with self.assertRaisesRegex(ValueError, "not referenced"):
            resolved_body_mapping(self.row, no_libcall,
                                  self.row["object_sha256"], b"", 0,
                                  {}, {}, qualified)
        values, _origins = resolved_body_mapping(
            self.row, no_libcall, self.row["object_sha256"], b"", 0,
            {}, {}, {})
        self.assertEqual(values, {"func_000200": 0x200})

    def test_default_remains_strict(self) -> None:
        with self.assertRaisesRegex(BodyLinkError, "__muldi3"):
            resolve_symbols(self.obj, {}, {})
        with self.assertRaisesRegex(BodyLinkError, "__muldi3"):
            resolved_body_mapping(
                self.row, self.obj, self.row["object_sha256"],
                bytes(self.module), 0x1000, {}, {}, {})

    def test_qualified_mapping_has_distinct_origin_and_does_not_read_caller(self) -> None:
        self.assertEqual(self.module[self.row["offset"]], 0)
        local = self.qualify()
        values, origins = resolve_symbols(self.obj, {}, {}, local)
        self.assertEqual(values["__muldi3"], 0x100)
        self.assertEqual(origins["__muldi3"], "qualified-local-libcall")
        self.assertEqual(values["func_000200"], 0x200)

    def test_only_muldi3_and_no_import_export_collision(self) -> None:
        with self.assertRaisesRegex(BodyLinkError, "unqualified"):
            resolve_symbols(self.obj, {}, {}, {"func_000000": 0})
        with self.assertRaisesRegex(BodyLinkError, "collides"):
            resolve_symbols(self.obj, {"__muldi3": 0}, {}, {"__muldi3": 0x100})
        with self.assertRaisesRegex(ValueError, "collides"):
            self.qualify(imports={"__muldi3": 0})
        with self.assertRaisesRegex(ValueError, "collides"):
            self.qualify(exports={"__muldi3": 0x100})

    def test_reject_wrong_module_source_object_profile(self) -> None:
        for field, value in (("module", "LEVEL_01.REL"),
                             ("source", "src/levels/bodies/other.c"),
                             ("object_sha256", "b" * 64)):
            entry = dict(self.entry, **{field: value})
            with self.subTest(field=field), self.assertRaisesRegex(ValueError, "differs"):
                self.qualify(entry=entry)
        with self.assertRaisesRegex(ValueError, "differs"):
            self.qualify(object_sha="b" * 64)
        with self.assertRaisesRegex(ValueError, "differs"):
            self.qualify(row=dict(self.row, profile="pinned"))

    def test_reject_helper_sha_target_extent_uniqueness_and_relocations(self) -> None:
        with self.assertRaisesRegex(ValueError, "SHA"):
            self.qualify(entry=dict(self.entry, helper_sha256="0" * 64))
        with self.assertRaisesRegex(ValueError, "SHA"):
            self.qualify(entry=dict(self.entry, target=0x104))
        with self.assertRaisesRegex(ValueError, "extent"):
            self.qualify(entry=dict(self.entry, helper_size=92))
        with self.assertRaisesRegex(ValueError, "relocation"):
            self.qualify(named={0x100})
        with self.assertRaisesRegex(ValueError, "relocation"):
            self.qualify(local={0x15C})
        duplicate = bytearray(self.module)
        duplicate[0x200:0x260] = self.helper
        with self.assertRaisesRegex(ValueError, "uniqueness"):
            self.qualify(module=duplicate)

    def test_reject_missing_extra_or_noncall_libcall_relocation(self) -> None:
        missing = copy.deepcopy(self.obj)
        missing["relocs"].pop()
        with self.assertRaisesRegex(ValueError, "relocations differ"):
            self.qualify(obj=missing)
        extra = copy.deepcopy(self.obj)
        extra["relocs"].append({"offset": 0x124, "type": 4, "sym": 1, "addend": 0})
        with self.assertRaisesRegex(ValueError, "relocations differ"):
            self.qualify(obj=extra)
        noncall = copy.deepcopy(self.obj)
        noncall["relocs"][0]["type"] = 5
        with self.assertRaisesRegex(ValueError, "relocations differ"):
            self.qualify(obj=noncall)

    def test_versioned_table_empty_and_qualified_row(self) -> None:
        self.assertEqual(self.read_table([]), {})
        self.assertIn((self.row["module"], self.row["source"]),
                      self.read_table([self.table_row()]))

    def test_table_rejects_wrong_version_module_source_sha_and_duplicates(self) -> None:
        with self.assertRaisesRegex(ValueError, "format"):
            self.read_table([], version="# format: old")
        for field, value in (("module", "LEVEL_01.REL"),
                             ("source", "src/levels/bodies/other.c"),
                             ("object_sha256", "b" * 64),
                             ("symbol", "func_000000"),
                             ("helper_sha256", "bad"),
                             ("reloc_offsets", "0x110"),
                             ("helper_size", "92"),
                             ("target", "0x000101")):
            row = dict(self.table_row(), **{field: value})
            with self.subTest(field=field), self.assertRaises(ValueError):
                self.read_table([row])
        with self.assertRaisesRegex(ValueError, "duplicate"):
            self.read_table([self.table_row(), self.table_row()])


if __name__ == "__main__":
    unittest.main()
