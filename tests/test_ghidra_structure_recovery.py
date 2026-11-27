"""Input and provenance guards run without Java, Ghidra, or game data."""
from __future__ import annotations

import copy
import hashlib
import json
import os
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch
import zipfile

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from ghidra_structure_recovery import run as recovery  # noqa: E402


class StructureRecoveryTests(unittest.TestCase):
    def setUp(self) -> None:
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.base = Path(self.temp.name)
        # Opaque synthetic input for validation only; never disassembled by tests.
        self.payload = b"synthetic-input"
        (self.base / "source.dat").write_bytes(self.payload)
        (self.base / "target.dat").write_bytes(self.payload)
        fragment = dict(path="source.dat", sha256=hashlib.sha256(self.payload).hexdigest(),
                        address="0x1000", arguments=["pointer"], return_type="int32",
                        provenance="Independently authored synthetic validation input")
        target = dict(fragment, path="target.dat")
        self.spec = dict(schema_version=1, language="r5900:LE:32:default", compiler_spec="default",
                         pointer_size=4, cases=[dict(id="shifted", source=fragment, target=target,
                         types=[dict(name="Record", size=12, provenance="Authored synthetic schema",
                         fields=[dict(name="value", offset=4, type="int32")])], source_structure="Record")])

    def validate(self, spec: dict | None = None) -> dict:
        return recovery.validate_manifest(self.spec if spec is None else spec, self.base)

    def test_valid_manifest_resolves_inputs_and_keeps_provenance(self) -> None:
        normalized = self.validate()
        case = normalized["cases"][0]
        self.assertEqual(case["source"]["path"], str((self.base / "source.dat").resolve()))
        self.assertEqual(case["source"]["address"], 0x1000)
        self.assertEqual(case["source"]["size"], len(self.payload))
        self.assertFalse(case["preview_apply"])
        self.assertEqual(case["types"][0]["fields"][0]["count"], 1)

    def test_type_provenance_is_mandatory(self) -> None:
        self.spec["cases"][0]["types"][0].pop("provenance")
        with self.assertRaisesRegex(recovery.SpecError, "provenance"):
            self.validate()

    def test_fragment_hash_is_checked(self) -> None:
        (self.base / "target.dat").write_bytes(b"different input")
        with self.assertRaisesRegex(recovery.SpecError, "SHA-256 mismatch"):
            self.validate()

    def test_unknown_spec_keys_and_duplicate_ids_are_rejected(self) -> None:
        unknown = copy.deepcopy(self.spec)
        unknown["cases"][0]["execute_game"] = True
        with self.assertRaisesRegex(recovery.SpecError, "unknown keys"):
            self.validate(unknown)
        self.spec["cases"].append(copy.deepcopy(self.spec["cases"][0]))
        with self.assertRaisesRegex(recovery.SpecError, "unique"):
            self.validate()

    def test_field_overlap_and_out_of_extent_are_rejected(self) -> None:
        fields = self.spec["cases"][0]["types"][0]["fields"]
        fields.append(dict(name="overlap", offset=6, type="int32"))
        with self.assertRaisesRegex(recovery.SpecError, "overlapping"):
            self.validate()
        fields[-1]["offset"] = 10
        with self.assertRaisesRegex(recovery.SpecError, "outside"):
            self.validate()

    def test_forward_reference_and_callback_types_are_not_guessed(self) -> None:
        field = self.spec["cases"][0]["types"][0]["fields"][0]
        for invalid in ("NotDeclared", "function_pointer"):
            field["type"] = invalid
            with self.assertRaisesRegex(recovery.SpecError, "earlier declared"):
                self.validate()

    def test_nested_array_uses_declared_size(self) -> None:
        case = self.spec["cases"][0]
        case["types"].append(dict(name="Container", size=28, provenance="Synthetic container declaration",
                                  fields=[dict(name="records", offset=0, type="Record", count=2),
                                          dict(name="count", offset=24, type="int32")]))
        case["source_structure"] = "Container"
        self.assertEqual(self.validate()["cases"][0]["types"][1]["fields"][0]["count"], 2)
        case["types"][1]["fields"][0]["count"] = 3
        with self.assertRaises(recovery.SpecError):
            self.validate()

    def test_boolean_address_and_address_space_overflow_are_rejected(self) -> None:
        for invalid in (True, "0xFFFFFFFF"):
            self.spec["cases"][0]["source"]["address"] = invalid
            with self.assertRaises(recovery.SpecError):
                self.validate()

    def test_malformed_argument_is_a_spec_error(self) -> None:
        self.spec["cases"][0]["source"]["arguments"] = ["pointer", {"type": "int32"}]
        with self.assertRaises(recovery.SpecError):
            self.validate()

    def test_language_cannot_be_a_launcher_option(self) -> None:
        self.spec["language"] = "-postScript"
        with self.assertRaises(recovery.SpecError):
            self.validate()

    def test_jvm_options_cannot_override_private_launch_directories(self) -> None:
        with patch.dict(os.environ, {"JAVA_TOOL_OPTIONS": "-Dapplication.settingsdir=elsewhere",
                                    "GHIDRA_HEADLESS_JAVA_OPTIONS": "-javaagent:other"}):
            environment = recovery.runtime_environment(self.base / "private", self.base / "jdk")
            self.assertNotIn("JAVA_TOOL_OPTIONS", environment)
            self.assertNotIn("GHIDRA_HEADLESS_JAVA_OPTIONS", environment)
            self.assertEqual(environment["APPDATA"], str(self.base / "private/settings"))
            self.assertIn("JAVA_TOOL_OPTIONS", os.environ)

    def test_generated_paths_cannot_escape_output(self) -> None:
        output = self.base / "private"
        for invalid in ("../outside.json", str(self.base / "outside.json"), "C:\\outside.json", "nested/../../outside.json"):
            with self.assertRaises(recovery.SpecError):
                recovery.checked_output(output, invalid)
        self.assertEqual(recovery.checked_output(output, "nested/proposals.json"), output / "nested/proposals.json")

    def test_symlink_escape_is_rejected_when_supported(self) -> None:
        output = self.base / "private"
        output.mkdir()
        outside = self.base / "outside"
        outside.mkdir()
        try:
            (output / "linked").symlink_to(outside, target_is_directory=True)
        except OSError:
            self.skipTest("directory symlinks unavailable")
        with self.assertRaises(recovery.SpecError):
            recovery.checked_output(output, "linked/proposals.json")

    def test_existing_output_and_checkout_output_are_rejected(self) -> None:
        source = self.base / "checkout"
        source.mkdir()
        with self.assertRaisesRegex(recovery.SpecError, "source checkout"):
            recovery.create_output(source / "generated", source)
        private = recovery.create_output(self.base / "new-private", source)
        with self.assertRaisesRegex(recovery.SpecError, "already exists"):
            recovery.create_output(private, source)

    def test_output_inside_runtime_is_rejected_before_copy(self) -> None:
        home = self.base / "ghidra"
        java = self.base / "jdk"
        with self.assertRaisesRegex(recovery.SpecError, "inside a runtime"):
            recovery.prepare(self.validate(), home, java, home / "recursive-output", "trial")

    def fake_sources(self) -> dict[str, str]:
        return {name: "// Licensed under the Apache License, Version 2.0\n"
                "package ghidra.features.bsim.gui.structs;\n"
                + ("import ghidra.features.bsim.gui.structs.StructureRecoveryPlugin.FunctionMatchOption;\n"
                   if name == "MatchFunctionsTask" else "")
                + f"public class {name} {{ StructureRecoveryPlugin context; }}\n"
                for name in recovery.TASK_SOURCE_SHA256_LF}

    def test_unknown_algorithm_revision_is_rejected(self) -> None:
        sources = self.fake_sources()
        pins = {name: recovery.digest(text.encode()) for name, text in sources.items()}
        with patch.dict(recovery.TASK_SOURCE_SHA256_LF, pins, clear=True):
            original = sources["ComparePinningsTask"]
            self.assertIn("HeadlessStructureContext", recovery.adapt_task("ComparePinningsTask", original))
            with self.assertRaisesRegex(recovery.SpecError, "unreviewed upstream"):
                recovery.adapt_task("ComparePinningsTask", original + "// unreviewed change\n")

    def test_adapter_archive_digest_and_licenses_are_checked(self) -> None:
        home = self.base / "ghidra"
        archive_path = home / "Ghidra/Features/BSim/lib/BSim-src.zip"
        archive_path.parent.mkdir(parents=True)
        sources = self.fake_sources()
        with zipfile.ZipFile(archive_path, "w") as archive:
            for name, source in sources.items():
                archive.writestr(recovery.SOURCE_PACKAGE + name + ".java", source)
            archive.writestr(recovery.SOURCE_PACKAGE + "StructureRecoveryPlugin.java", "// synthetic GUI context fixture\n")
        properties = home / "Ghidra/application.properties"
        properties.write_text(f"application.version={recovery.GHIDRA_VERSION}\napplication.revision.ghidra={recovery.GHIDRA_REVISION}\n", encoding="utf-8")
        with self.assertRaisesRegex(recovery.SpecError, "unreviewed BSim"):
            recovery.installation_properties(home)
        pins = {name: recovery.digest(text.encode()) for name, text in sources.items()}
        output = self.base / "private"
        output.mkdir()
        with patch.object(recovery, "SOURCE_ARCHIVE_SHA256", recovery.digest(archive_path.read_bytes())):
            with self.assertRaisesRegex(recovery.SpecError, "source defaults"):
                recovery.installation_properties(home)
        with patch.object(recovery, "SOURCE_ARCHIVE_SHA256", recovery.digest(archive_path.read_bytes())), patch.object(recovery, "GUI_PLUGIN_SOURCE_SHA256_LF", recovery.digest(b"// synthetic GUI context fixture\n")), patch.dict(recovery.TASK_SOURCE_SHA256_LF, pins, clear=True):
            audit = recovery.prepare_adapter(home, output)
        self.assertEqual(len(audit), 3)
        self.assertTrue((output / "adapter-audit.json").is_file())
        adapted = (output / "scripts/MatchFunctionsTask.java").read_text(encoding="utf-8")
        self.assertIn("Licensed under the Apache License", adapted)
        self.assertNotIn("StructureRecoveryPlugin", adapted)
        self.assertEqual(len(json.loads((output / "adapter-audit.json").read_text())), 3)


if __name__ == "__main__":
    unittest.main()
