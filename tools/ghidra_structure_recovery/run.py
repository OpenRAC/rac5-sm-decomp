#!/usr/bin/env python3
"""Run pinned Ghidra structure recovery in a new private project.

Only authored adapter/driver code is distributed. The three Apache-2.0 tasks are
read from the user's Ghidra installation, checked, and adapted in private output.
"""
from __future__ import annotations

import argparse
import difflib
import hashlib
import json
import os
from pathlib import Path, PureWindowsPath
import re
import shutil
import subprocess
import sys
import time
import uuid
import zipfile

HERE = Path(__file__).resolve().parent
REPOSITORY = HERE.parents[1]
GHIDRA_VERSION = "12.2"
GHIDRA_REVISION = "8ca9077040cc43cd790babcfccf19475622a3e9a"
SOURCE_ARCHIVE_SHA256 = "bf45ed48df00162a86e76966308bf3eaede6399859a85b400fe1a4be0b664f04"
GUI_PLUGIN_SOURCE_SHA256_LF = "c8206816d086e63948184b4cd5ba0ddca0edf145fa773ac120769b0e861589a8"
TASK_SOURCE_SHA256_LF = {
    "RetrieveUsesTask": "7200cb627956286b59198f4711273ff8270c11d6fdf0241a97cd4fe3dc729513",
    "MatchFunctionsTask": "69a4569d9975aebb9cf5491f5802d55e75119a97271da9fc208eef0e7f6b1bb6",
    "ComparePinningsTask": "6176776c2bac038f724493c9ecc22e9a9e4b556d7847a4bb35ab7e92e86c61c6",
}
SOURCE_PACKAGE = "ghidra/features/bsim/gui/structs/"
IDENTIFIER = re.compile(r"[A-Za-z][A-Za-z0-9_]{0,63}\Z")
CASE_ID = re.compile(r"[A-Za-z][A-Za-z0-9_-]{0,63}\Z")
HEX_SHA = re.compile(r"[0-9a-f]{64}\Z")
PRIMITIVE_SIZES = {
    "int8": 1, "uint8": 1, "int16": 2, "uint16": 2,
    "int32": 4, "uint32": 4, "int64": 8, "uint64": 8,
    "float32": 4, "float64": 8,
}


class SpecError(ValueError):
    """An input, installation, or output contract was not met."""


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def integer(value: object, label: str, minimum: int, maximum: int) -> int:
    if type(value) is int:
        parsed = value
    elif isinstance(value, str) and re.fullmatch(r"(?:0x[0-9a-fA-F]+|[0-9]+)", value):
        parsed = int(value, 16 if value.startswith("0x") else 10)
    else:
        raise SpecError(f"{label}: expected a nonnegative integer or hexadecimal string")
    if not minimum <= parsed <= maximum:
        raise SpecError(f"{label}: outside [{minimum}, {maximum}]")
    return parsed


def require_text(value: object, label: str) -> str:
    if not isinstance(value, str) or not value.strip():
        raise SpecError(f"{label}: explicit nonempty text is required")
    return value


def reject_unknown(record: dict, allowed: set[str], label: str) -> None:
    unknown = set(record) - allowed
    if unknown:
        raise SpecError(f"{label}: unknown keys {sorted(unknown)}")


def checked_output(root: Path, relative: str) -> Path:
    """Resolve one generated path; reject absolute, parent, and symlink escapes."""
    part = Path(relative)
    windows = PureWindowsPath(relative)
    if part.is_absolute() or windows.drive or ".." in part.parts or ".." in windows.parts:
        raise SpecError(f"generated path must stay below output: {relative}")
    base = root.resolve()
    target = (base / part).resolve()
    if target == base or not target.is_relative_to(base):
        raise SpecError(f"generated path escapes output: {relative}")
    return target


def create_output(path: Path, repository: Path = REPOSITORY) -> Path:
    root = path.expanduser().resolve()
    if root == repository.resolve() or root.is_relative_to(repository.resolve()):
        raise SpecError("output must be outside the source checkout")
    if path.exists() or path.is_symlink() or root.exists():
        raise SpecError("output already exists; choose a new private directory")
    root.mkdir(parents=True, exist_ok=False)
    return root


def validate_manifest(document: object, manifest_dir: Path) -> dict:
    if not isinstance(document, dict):
        raise SpecError("manifest must be an object")
    reject_unknown(document, {"schema_version", "language", "compiler_spec", "pointer_size", "cases"}, "manifest")
    if document.get("schema_version") != 1 or type(document.get("schema_version")) is not int:
        raise SpecError("schema_version must be 1")
    language = require_text(document.get("language"), "language")
    compiler = require_text(document.get("compiler_spec"), "compiler_spec")
    if not re.fullmatch(r"[A-Za-z][A-Za-z0-9_:.-]*", language) or not CASE_ID.fullmatch(compiler):
        raise SpecError("invalid language or compiler_spec identifier")
    pointer_size = integer(document.get("pointer_size"), "pointer_size", 4, 8)
    if pointer_size not in (4, 8):
        raise SpecError("pointer_size must be 4 or 8")
    cases = document.get("cases")
    if not isinstance(cases, list) or not 1 <= len(cases) <= 32:
        raise SpecError("cases must contain 1..32 comparisons")
    normalized = dict(schema_version=1, language=language, compiler_spec=compiler, pointer_size=pointer_size, cases=[])
    ids: set[str] = set()
    for case in cases:
        if not isinstance(case, dict):
            raise SpecError("each case must be an object")
        reject_unknown(case, {"id", "source", "target", "types", "source_structure", "preview_apply"}, "case")
        name = require_text(case.get("id"), "case.id")
        if not CASE_ID.fullmatch(name) or name in ids:
            raise SpecError("case ids must be unique safe identifiers")
        ids.add(name)
        types = case.get("types")
        if not isinstance(types, list) or not 1 <= len(types) <= 32:
            raise SpecError(f"{name}: types must contain 1..32 declarations")
        sizes = dict(PRIMITIVE_SIZES, pointer=pointer_size)
        declarations = []
        for declaration in types:
            if not isinstance(declaration, dict):
                raise SpecError("a type declaration must be an object")
            reject_unknown(declaration, {"name", "size", "provenance", "fields"}, "type")
            type_name = require_text(declaration.get("name"), "type.name")
            if not IDENTIFIER.fullmatch(type_name) or type_name in sizes:
                raise SpecError("type names must be unique identifiers distinct from primitive types")
            size = integer(declaration.get("size"), "type.size", 1, 1048576)
            provenance = require_text(declaration.get("provenance"), "type.provenance")
            fields = declaration.get("fields")
            if not isinstance(fields, list) or not 1 <= len(fields) <= 256:
                raise SpecError("type.fields must contain 1..256 fields")
            seen: set[str] = set()
            occupied: set[int] = set()
            normalized_fields = []
            for field in fields:
                if not isinstance(field, dict):
                    raise SpecError("a field must be an object")
                reject_unknown(field, {"name", "offset", "type", "count"}, "field")
                field_name = require_text(field.get("name"), "field.name")
                if not IDENTIFIER.fullmatch(field_name) or field_name in seen:
                    raise SpecError("field names must be unique identifiers within a structure")
                seen.add(field_name)
                field_type = require_text(field.get("type"), "field.type")
                if field_type not in sizes:
                    raise SpecError("field.type must be a primitive or an earlier declared structure")
                count = integer(field.get("count", 1), "field.count", 1, 4096)
                offset = integer(field.get("offset"), "field.offset", 0, size - 1)
                end = offset + sizes[field_type] * count
                if end > size or any(i in occupied for i in range(offset, end)):
                    raise SpecError("overlapping field or field outside structure extent")
                occupied.update(range(offset, end))
                normalized_fields.append(dict(name=field_name, offset=offset, type=field_type, count=count))
            sizes[type_name] = size
            declarations.append(dict(name=type_name, size=size, provenance=provenance, fields=normalized_fields))
        source_structure = require_text(case.get("source_structure"), "source_structure")
        if source_structure not in {t["name"] for t in declarations}:
            raise SpecError("source_structure must name a supplied structure declaration")
        preview = case.get("preview_apply", False)
        if type(preview) is not bool:
            raise SpecError("preview_apply must be a boolean")
        item = dict(id=name, types=declarations, source_structure=source_structure, preview_apply=preview)
        for side in ("source", "target"):
            spec = case.get(side)
            if not isinstance(spec, dict):
                raise SpecError(f"{side} must be an object")
            reject_unknown(spec, {"path", "sha256", "address", "arguments", "return_type", "provenance"}, side)
            path_text = require_text(spec.get("path"), f"{side}.path")
            path = Path(path_text).expanduser()
            path = (manifest_dir / path).resolve() if not path.is_absolute() else path.resolve()
            if not path.is_file() or not 1 <= path.stat().st_size <= 65536:
                raise SpecError(f"{side}.path must name a 1..65536-byte fragment")
            expected = require_text(spec.get("sha256"), f"{side}.sha256")
            if not HEX_SHA.fullmatch(expected) or digest(path.read_bytes()) != expected:
                raise SpecError(f"{side} SHA-256 mismatch")
            address = integer(spec.get("address"), f"{side}.address", 0, (1 << 63) - 1)
            if address + path.stat().st_size - 1 >= (1 << (pointer_size * 8)):
                raise SpecError(f"{side} fragment exceeds the address space")
            arguments = spec.get("arguments")
            if not isinstance(arguments, list) or not 1 <= len(arguments) <= 8 or arguments[0] != "pointer":
                raise SpecError("arguments must have 1..8 types and start with pointer")
            if any(not isinstance(t, str) or t not in set(PRIMITIVE_SIZES) | {"pointer"} for t in arguments):
                raise SpecError("arguments support primitive types and pointer only")
            return_type = spec.get("return_type", "int32")
            if not isinstance(return_type, str) or return_type not in set(PRIMITIVE_SIZES) | {"pointer", "void"}:
                raise SpecError("unsupported return_type")
            item[side] = dict(path=str(path), sha256=expected, address=address, size=path.stat().st_size,
                              arguments=arguments, return_type=return_type,
                              provenance=require_text(spec.get("provenance"), f"{side}.provenance"))
        normalized["cases"].append(item)
    return normalized


def adapt_task(name: str, source: str) -> str:
    """The pinned full source must match before any GUI-context substitution."""
    source = source.replace("\r\n", "\n")
    if name not in TASK_SOURCE_SHA256_LF or digest(source.encode()) != TASK_SOURCE_SHA256_LF[name]:
        raise SpecError(f"unreviewed upstream task source: {name}")
    if "Licensed under the Apache License, Version 2.0" not in source:
        raise SpecError("upstream Apache license header is missing")
    package = "package ghidra.features.bsim.gui.structs;"
    if source.count(package) != 1:
        raise SpecError("unexpected upstream package declaration")
    result = source.replace(package, "// Headless adapter: GUI context only; official algorithm retained.")
    result = result.replace("import ghidra.features.bsim.gui.structs.StructureRecoveryPlugin.FunctionMatchOption;", "")
    result = result.replace("StructureRecoveryPlugin", "HeadlessStructureContext")
    if name == "MatchFunctionsTask":
        result = result.replace("FunctionMatchOption", "HeadlessStructureContext.FunctionMatchOption")
    return result


def installation_properties(home: Path) -> dict[str, str]:
    path = home / "Ghidra/application.properties"
    try:
        props = dict(line.split("=", 1) for line in path.read_text(encoding="utf-8").splitlines() if "=" in line and not line.startswith("#"))
    except OSError as exc:
        raise SpecError("missing Ghidra application.properties") from exc
    if props.get("application.version") != GHIDRA_VERSION or props.get("application.revision.ghidra") != GHIDRA_REVISION:
        raise SpecError("only the reviewed Ghidra 12.2 revision is supported")
    archive = home / "Ghidra/Features/BSim/lib/BSim-src.zip"
    if not archive.is_file() or digest(archive.read_bytes()) != SOURCE_ARCHIVE_SHA256:
        raise SpecError("unreviewed BSim-src.zip; do not bypass the pin")
    with zipfile.ZipFile(archive) as source_archive:
        gui_source = source_archive.read(SOURCE_PACKAGE + "StructureRecoveryPlugin.java").decode("utf-8").replace("\r\n", "\n")
    if digest(gui_source.encode()) != GUI_PLUGIN_SOURCE_SHA256_LF:
        raise SpecError("unreviewed StructureRecoveryPlugin source defaults")
    return props


def prepare_adapter(ghidra_home: Path, output: Path) -> list[dict]:
    installation_properties(ghidra_home)
    audit = []
    diff = []
    with zipfile.ZipFile(ghidra_home / "Ghidra/Features/BSim/lib/BSim-src.zip") as archive:
        for name in TASK_SOURCE_SHA256_LF:
            source = archive.read(SOURCE_PACKAGE + name + ".java").decode("utf-8").replace("\r\n", "\n")
            adapted = adapt_task(name, source)
            path = checked_output(output, "scripts/" + name + ".java")
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text(adapted, encoding="utf-8", newline="\n")
            audit.append(dict(name=name, source_sha256_lf=digest(source.encode()), adapted_sha256_lf=digest(adapted.encode()), algorithm_changes="GUI context type/package/import only"))
            diff.extend(difflib.unified_diff(source.splitlines(True), adapted.splitlines(True), fromfile="official/" + name, tofile="headless/" + name))
    checked_output(output, "adapter.diff").write_text("".join(diff), encoding="utf-8")
    checked_output(output, "adapter-audit.json").write_text(json.dumps(audit, indent=2) + "\n", encoding="utf-8")
    return audit


def prepare(manifest: dict, ghidra_home: Path, java_home: Path, output: Path, project_name: str) -> dict:
    if not CASE_ID.fullmatch(project_name):
        raise SpecError("project_name must be a safe identifier")
    destination = output.expanduser().resolve()
    if destination.is_relative_to(ghidra_home.resolve()) or destination.is_relative_to(java_home.resolve()):
        raise SpecError("output must not be inside a runtime installation")
    if os.name == "nt" and any(c in str(destination) + str(java_home) for c in '&|<>^%!;\r\n"'):
        raise SpecError("Windows launcher paths cannot contain command-shell metacharacters")
    installation_properties(ghidra_home)
    java = java_home / "bin" / ("java.exe" if os.name == "nt" else "java")
    release = java_home / "release"
    if not java.is_file() or not release.is_file() or not re.search(r'JAVA_VERSION="25(?:\.|\")', release.read_text(encoding="utf-8")):
        raise SpecError("an explicit JDK 25 installation is required")
    root = create_output(output)
    for directory in ("inputs", "scripts", "projects", "logs", "home", "settings", "cache", "tmp"):
        checked_output(root, directory).mkdir()
    audit = prepare_adapter(ghidra_home, root)
    for name in ("HeadlessStructureContext.java", "RunStructureRecovery.java"):
        shutil.copyfile(HERE / name, checked_output(root, "scripts/" + name))
    private = json.loads(json.dumps(manifest))
    for case in private["cases"]:
        for side in ("source", "target"):
            spec = case[side]
            payload = Path(spec["path"]).read_bytes()
            if digest(payload) != spec["sha256"]:
                raise SpecError("input changed after manifest validation")
            name = case["id"] + "_" + side + ".bin"
            checked_output(root, "inputs/" + name).write_bytes(payload)
            spec["file"] = name
    run_id = uuid.uuid4().hex
    private["run_id"] = run_id
    checked_output(root, "manifest.json").write_text(json.dumps(private, indent=2) + "\n", encoding="utf-8")
    runtime = checked_output(root, "runtime")
    shutil.copytree(ghidra_home, runtime)
    properties = checked_output(root, "runtime/support/launch.properties")
    launch_properties = properties.read_text(encoding="utf-8")
    launch_properties = re.sub(r"(?m)^JAVA_HOME_OVERRIDE=.*$", "JAVA_HOME_OVERRIDE=" + java_home.as_posix(), launch_properties)
    properties.write_text(launch_properties, encoding="utf-8", newline="\n")
    with properties.open("a", encoding="utf-8") as stream:
        for key, value in (("application.settingsdir", root / "settings"), ("application.cachedir", root / "cache"), ("java.io.tmpdir", root / "tmp"), ("user.home", root / "home")):
            stream.write(f'\nVMARGS=-D{key}="{value.as_posix()}"\n')
    pins = dict(ghidra_version=GHIDRA_VERSION, ghidra_revision=GHIDRA_REVISION, source_archive_sha256=SOURCE_ARCHIVE_SHA256,
                gui_plugin_source_sha256_lf=GUI_PLUGIN_SOURCE_SHA256_LF,
                source_url=f"https://github.com/NationalSecurityAgency/ghidra/tree/{GHIDRA_REVISION}/Ghidra/Features/BSim/src/main/java/ghidra/features/bsim/gui/structs",
                license="Apache-2.0 for generated upstream tasks; original headers retained", tasks=audit,
                java_binary_sha256=digest(java.read_bytes()), java_release=release.read_text(encoding="utf-8"), run_id=run_id,
                runtime_files=[dict(path=tail, sha256=digest((runtime / tail).read_bytes())) for tail in (
                    "Ghidra/application.properties", "Ghidra/Features/BSim/lib/BSim.jar",
                    "Ghidra/Features/CodeCompare/lib/CodeCompare.jar")])
    checked_output(root, "pins.json").write_text(json.dumps(pins, indent=2) + "\n", encoding="utf-8")
    return dict(root=root, runtime=runtime, java_home=java_home, project_name=project_name, run_id=run_id, manifest=private)


def runtime_environment(root: Path, java_home: Path) -> dict[str, str]:
    env = os.environ.copy()
    # Inherited JVM options must not redirect this isolated launch or attach agents.
    for name in ("JAVA_TOOL_OPTIONS", "_JAVA_OPTIONS", "JDK_JAVA_OPTIONS", "GHIDRA_JAVA_OPTIONS", "GHIDRA_HEADLESS_JAVA_OPTIONS"):
        env.pop(name, None)
    env.update(JAVA_HOME=str(java_home), USERPROFILE=str(root / "home"), APPDATA=str(root / "settings"),
               LOCALAPPDATA=str(root / "cache"), HOME=str(root / "home"), TEMP=str(root / "tmp"), TMP=str(root / "tmp"),
               TMPDIR=str(root / "tmp"), XDG_CONFIG_HOME=str(root / "settings"), XDG_CACHE_HOME=str(root / "cache"))
    return env


def launch(prepared: dict) -> dict:
    root = prepared["root"]
    manifest = prepared["manifest"]
    suffix = ".bat" if os.name == "nt" else ""
    command = [str(prepared["runtime"] / ("support/analyzeHeadless" + suffix)), str(root / "projects"), prepared["project_name"],
               "-import", str(root / "inputs" / manifest["cases"][0]["source"]["file"]), "-loader", "BinaryLoader",
               "-processor", manifest["language"], "-cspec", manifest["compiler_spec"], "-noanalysis", "-scriptPath", str(root / "scripts"),
               "-postScript", "RunStructureRecovery.java", str(root), "-log", str(root / "logs/headless.log"),
               "-scriptlog", str(root / "logs/script.log"), "-max-cpu", "2"]
    env = runtime_environment(root, prepared["java_home"])
    checked_output(root, "command.json").write_text(json.dumps(command, indent=2) + "\n", encoding="utf-8")
    started = time.monotonic()
    with checked_output(root, "logs/console.log").open("w", encoding="utf-8") as console:
        completed = subprocess.run(command, env=env, cwd=root, stdout=console, stderr=subprocess.STDOUT, check=False)
    elapsed = time.monotonic() - started
    result_file = checked_output(root, "proposals.json")
    if completed.returncode or not result_file.is_file():
        raise SpecError("Ghidra failed; inspect the new private logs")
    result = json.loads(result_file.read_text(encoding="utf-8"))
    if result.get("run_id") != prepared["run_id"] or len(result.get("cases", [])) != len(manifest["cases"]):
        raise SpecError("stale, unrelated, or incomplete Ghidra result")
    for case in result["cases"]:
        if case.get("status") != "OBSERVED" or any("addException" in s or "addErrorMessage" in s for s in case.get("task_log", [])):
            raise SpecError("a recovery task failed; proposals are incomplete")
    summary = dict(status="executed_with_limits", run_id=prepared["run_id"], seconds=elapsed,
                   evidence_level="structure-layout hypotheses only", automatic_promotion=False,
                   establishes_function_identity=False, establishes_C_match=False,
                   cases=[dict(id=c["id"], matches=len(c["bsim_matches"]), proposed_fields=len(c["proposed_fields"])) for c in result["cases"]])
    checked_output(root, "result.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    return summary


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--ghidra-home", required=True, type=Path)
    parser.add_argument("--java-home", required=True, type=Path)
    parser.add_argument("--manifest", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--project-name", default="structure-recovery")
    parser.add_argument("--prepare-only", action="store_true")
    args = parser.parse_args(argv)
    try:
        manifest = validate_manifest(json.loads(args.manifest.read_text(encoding="utf-8-sig")), args.manifest.resolve().parent)
        prepared = prepare(manifest, args.ghidra_home.expanduser().resolve(), args.java_home.expanduser().resolve(), args.output, args.project_name)
        summary = dict(status="prepared_not_executed", run_id=prepared["run_id"]) if args.prepare_only else launch(prepared)
        print(json.dumps(summary, indent=2))
        return 0
    except (SpecError, OSError, ValueError, KeyError, zipfile.BadZipFile) as exc:
        print(f"structure recovery: {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
