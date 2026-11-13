"""Measured complete-object alternatives stay bound to one unchanged SN source."""

from __future__ import annotations

import copy
import hashlib
import sys
import tempfile
import types
import unittest
from pathlib import Path
from unittest import mock

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import level_c_gate as gate  # noqa: E402


class LevelObjectAlternateTests(unittest.TestCase):
    def setUp(self) -> None:
        self.directory = tempfile.TemporaryDirectory()
        self.addCleanup(self.directory.cleanup)
        self.root = Path(self.directory.name)
        self.source = "src/levels/shared/alternate_test.c"
        self.path = self.root / self.source
        self.path.parent.mkdir(parents=True)
        self.path.write_text("int alternate_test(void) { return 1; }\n", encoding="utf-8")
        self.canonical = hashlib.sha256(b"canonical object").hexdigest()
        self.alternate = hashlib.sha256(b"measured Wine object").hexdigest()
        self.row = {"source": self.source,
                    "source_sha256_lf": gate.normalized_digest(self.path),
                    "object_sha256": self.canonical,
                    "profile": "pinned", "as": "ps2eeas"}
        self.entry = {"source_sha256_lf": self.row["source_sha256_lf"],
                      "profile": "pinned", "as": "ps2eeas",
                      "canonical_object_sha256": self.canonical,
                      "alternates": [self.alternate]}
        self.profile = {"object_sha256_alternates": {self.source: self.entry},
                        "extra_assemblers": {"ps2eeas": {"flags": {"as": []}}}}
        self.args = types.SimpleNamespace(output_dir=self.root / "build/objects",
                                          cpp=self.root / "cpp", cc1=self.root / "cc1",
                                          gnu_as=self.root / "as", jobs=1,
                                          refresh_bodies=False)
        self.observed = b"measured Wine object"

    def compile(self, profile=None):
        def run(command, cwd, log, stdout=None):
            if stdout is not None:
                stdout.write_text(self.path.read_text(encoding="utf-8"), encoding="utf-8")
            elif "-o" in command:
                path = cwd / command[command.index("-o") + 1]
                path.write_bytes(self.observed if path.suffix == ".o" else b"compiler output")
        entry = types.SimpleNamespace(pinned=True, assembler_pinned=True, flags=[])
        with (mock.patch.object(gate, "ROOT", self.root),
              mock.patch.object(gate, "OUTPUT", self.root / "build/published"),
              mock.patch.object(gate.cflags, "load", return_value={}),
              mock.patch.object(gate.cflags, "for_source", return_value=entry),
              mock.patch.object(gate, "run", side_effect=run),
              mock.patch.object(gate, "read_object", return_value={}),
              mock.patch.object(gate, "defined_functions", return_value={"f": (0, 4)})):
            return gate.compile_body_sources(
                [self.row], self.args, {}, {"ps2eeas": self.root / "Ps2EeAs.exe"},
                {"flags": {"cc1": []}}, self.profile if profile is None else profile)

    def write(self, profile=None):
        table = self.root / "body_sources.tsv"
        table.write_text("\t".join(gate.SOURCE_HEADER) + "\n" +
                         "\t".join(self.row[key] for key in gate.SOURCE_HEADER) + "\n",
                         encoding="utf-8")
        objects = {self.source: (Path("actual.o"), {},
                                  hashlib.sha256(self.observed).hexdigest())}
        with mock.patch.object(gate, "ROOT", self.root), \
                mock.patch.object(gate, "BODY_SOURCES", table):
            gate.write_bodies([self.row], objects,
                              self.profile if profile is None else profile)
        return table.read_text(encoding="utf-8").splitlines()[1].split("\t")

    def test_known_whole_hash_is_source_bound(self):
        self.assertEqual(gate.body_object_alternates([self.row], self.profile),
                         {self.source: (self.alternate,)})

    def test_absent_registry_keeps_empty_strict_allowlist(self):
        self.assertEqual(gate.body_object_alternates([self.row], {}), {})
        self.assertEqual(gate.body_object_alternates(
            [self.row], {"object_sha256_alternates": {}}), {})
        for value in (None, [], "bad"):
            with self.subTest(value=value), self.assertRaisesRegex(ValueError, "source map"):
                gate.body_object_alternates(
                    [self.row], {"object_sha256_alternates": value})

    def test_unknown_source_is_rejected(self):
        for name in ("src/levels/shared/other.c", "../source.c", 12):
            with self.subTest(name=name), self.assertRaisesRegex(ValueError, "unknown"):
                gate.body_object_alternates(
                    [self.row], {"object_sha256_alternates": {name: self.entry}})

    def test_each_stale_binding_is_rejected(self):
        changes = {"source_sha256_lf": "a" * 64, "profile": "gnu-ee-trial",
                   "as": "r5900-mfc1", "canonical_object_sha256": "b" * 64}
        for key, value in changes.items():
            p = copy.deepcopy(self.profile)
            p["object_sha256_alternates"][self.source][key] = value
            with self.subTest(key=key), self.assertRaisesRegex(ValueError, "stale"):
                gate.body_object_alternates([self.row], p)

    def test_alternates_are_only_for_the_pinned_sn_route(self):
        self.row["as"] = self.entry["as"] = "gnu-ee-trial"
        with self.assertRaisesRegex(ValueError, "stale"):
            gate.body_object_alternates([self.row], self.profile)

    def test_malformed_or_redundant_whole_hashes_are_rejected(self):
        values = ([], [self.alternate.upper()], ["abcd"], [None], [{}],
                  [self.alternate, self.alternate], [self.canonical])
        for value in values:
            p = copy.deepcopy(self.profile)
            p["object_sha256_alternates"][self.source]["alternates"] = value
            with self.subTest(value=value), self.assertRaisesRegex(ValueError, "hashes"):
                gate.body_object_alternates([self.row], p)
        for key in ("source_sha256_lf", "canonical_object_sha256"):
            p = copy.deepcopy(self.profile)
            p["object_sha256_alternates"][self.source][key] = "invalid"
            with self.subTest(key=key), self.assertRaisesRegex(ValueError, "hashes"):
                gate.body_object_alternates([self.row], p)

    def test_schema_cannot_hide_additional_acceptance_rules(self):
        for change in (lambda p: p.update(mask="debug"),
                       lambda p: p.pop("canonical_object_sha256")):
            p = copy.deepcopy(self.profile)
            change(p["object_sha256_alternates"][self.source])
            with self.assertRaisesRegex(ValueError, "schema"):
                gate.body_object_alternates([self.row], p)

    def test_normal_compile_accepts_variant_and_preserves_actual_digest(self):
        value = self.compile()[self.source]
        self.assertEqual(value[2], self.alternate)
        self.assertEqual(value[0].read_bytes(), self.observed)

    def test_normal_compile_accepts_canonical_on_windows(self):
        self.observed = b"canonical object"
        self.assertEqual(self.compile()[self.source][2], self.canonical)

    def test_unknown_object_is_rejected_even_during_refresh(self):
        self.observed = b"unknown object"
        for refresh in (False, True):
            self.args.refresh_bodies = refresh
            with self.subTest(refresh=refresh), self.assertRaisesRegex(ValueError, "object differs"):
                self.compile()

    def test_no_registry_keeps_normal_compile_strict(self):
        profile = copy.deepcopy(self.profile)
        del profile["object_sha256_alternates"]
        with self.assertRaisesRegex(ValueError, "object differs"):
            self.compile(profile)
        self.observed = b"canonical object"
        self.assertEqual(self.compile(profile)[self.source][2], self.canonical)

    def test_stale_source_cannot_use_alternate_during_refresh(self):
        self.args.refresh_bodies = True
        self.path.write_text("int alternate_test(void) { return 2; }\n", encoding="utf-8")
        with self.assertRaisesRegex(ValueError, "stale"):
            self.compile()

    def test_updated_source_table_still_requires_registry_maintenance(self):
        self.row["source_sha256_lf"] = "a" * 64
        self.args.refresh_bodies = True
        with self.assertRaisesRegex(ValueError, "stale"):
            self.compile()

    def test_refresh_preserves_canonical_for_known_variant(self):
        fields = self.write()
        self.assertEqual(fields[1], self.row["source_sha256_lf"])
        self.assertEqual(fields[2], self.canonical)

    def test_refresh_preserves_canonical_for_windows_object(self):
        self.observed = b"canonical object"
        self.assertEqual(self.write()[2], self.canonical)

    def test_refresh_rejects_stale_source_or_unknown_variant(self):
        self.observed = b"unknown object"
        with self.assertRaisesRegex(ValueError, "stale"):
            self.write()
        self.observed = b"measured Wine object"
        self.path.write_text("int alternate_test(void) { return 2; }\n", encoding="utf-8")
        with self.assertRaisesRegex(ValueError, "stale"):
            self.write()

    def test_unregistered_refresh_retains_existing_measurement_behavior(self):
        profile = copy.deepcopy(self.profile)
        del profile["object_sha256_alternates"]
        self.args.refresh_bodies = True
        self.path.write_text("int alternate_test(void) { return 2; }\n", encoding="utf-8")
        self.observed = b"newly measured object"
        observed = hashlib.sha256(self.observed).hexdigest()
        self.assertEqual(self.compile(profile)[self.source][2], observed)
        fields = self.write(profile)
        self.assertEqual(fields[1], gate.normalized_digest(self.path))
        self.assertEqual(fields[2], observed)


if __name__ == "__main__":
    unittest.main()
