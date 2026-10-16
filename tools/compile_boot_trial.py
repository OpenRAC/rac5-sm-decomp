#!/usr/bin/env python3
"""Rebuild pinned RAC5 boot C witness objects with a private trial toolchain.

Run on a native Linux filesystem (including WSL's Linux filesystem) with
lawfully obtained tools. All compiler outputs stay local; this command does
not qualify matches or publish a progress report.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import shutil
import subprocess
from pathlib import Path

import cflags
from boot_c_campaign import ACCEPTED_SOURCES, REPLACEMENTS, source_path, validate_replacements
from r5900_assembly import ASSEMBLER_SHA256, LINKER_SHA256
from c_source_policy import require_c_source

ROOT = Path(__file__).resolve().parent.parent
PROFILE = ROOT / "config/boot/compiler_trial.json"


def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def normalized_digest(path: Path) -> str:
    return hashlib.sha256(path.read_text(encoding="utf-8")
                          .replace("\r\n", "\n").encode("utf-8")).hexdigest()


def require_private_output(path: Path) -> Path:
    resolved = path.resolve()
    if resolved.is_relative_to(ROOT) and not resolved.is_relative_to(ROOT / "build"):
        raise ValueError(f"compiler output must stay under ignored build/: {resolved}")
    return resolved


def check_profile(cpp: Path, cc1: Path, assembler: Path) -> dict[str, object]:
    validate_replacements()
    profile = json.loads(PROFILE.read_text(encoding="utf-8"))
    if (profile["status"] != "qualified_boot_only"
            or profile["expected_objects"] != len(REPLACEMENTS)
            or profile["accepted_function"] != "MEMCARD_Busy__Fv"
            or profile["accepted_source"] != "src/boot/memcard_busy.c"
            or ACCEPTED_SOURCES != frozenset({"memcard_busy"})):
        raise ValueError("compiler trial catalogue no longer matches the measured scope")
    if "expected_function_witnesses" in profile:
        raise ValueError("witness counts come from the verified boundary catalogue, not the compiler profile")
    patch = ROOT / profile["source"]["patch"]
    if normalized_digest(patch) != profile["source"]["patch_sha256_lf"]:
        raise ValueError("RAC5 compiler trial patch differs from pinned source")
    for label, path in (("cpp", cpp), ("cc1", cc1), ("as", assembler)):
        if digest(path) != profile["tools"][f"{label}_sha256"]:
            raise ValueError(f"{label} differs from measured RAC5 trial")
    if (profile["tools"]["sn_assembler_sha256"] != ASSEMBLER_SHA256
            or profile["tools"]["sn_linker_sha256"] != LINKER_SHA256):
        raise ValueError("SN tool pins disagree with the boot linker witness")
    if profile["flags"] != {"cpp": [], "cc1": ["-quiet", "-O2", "-G0"], "as": []}:
        raise ValueError("compiler trial flags differ from measured build")
    return profile


def cc1_flags(profile: dict, per_source: dict[str, tuple[str, ...]],
              source: Path) -> list[str]:
    """Profile cc1 flags for one source, plus the flags measured for that file."""
    return [*profile["flags"]["cc1"], *cflags.for_source(per_source, source)]


def run(command: list[str], cwd: Path, log: Path, stdout: Path | None = None) -> None:
    if stdout is None:
        result = subprocess.run(command, cwd=cwd, capture_output=True, text=True,
                                timeout=120, check=False)
        log.write_text(result.stdout + result.stderr, encoding="utf-8")
    else:
        with stdout.open("wb") as output:
            result = subprocess.run(command, cwd=cwd, stdout=output,
                                    stderr=subprocess.PIPE, timeout=120, check=False)
        log.write_bytes(result.stderr)
    if result.returncode:
        raise ValueError(f"{Path(command[0]).name} failed; see {log}")


def compile_objects(cpp: Path, cc1: Path, assembler: Path,
                    output_dir: Path, export_dir: Path | None) -> None:
    profile = check_profile(cpp, cc1, assembler)
    output = require_private_output(output_dir)
    export = require_private_output(export_dir) if export_dir is not None else None
    if output == export:
        raise ValueError("output and export directories must differ")
    output.mkdir(parents=True, exist_ok=True)
    per_source = cflags.load()
    manifest = {"profile": profile["id"], "status": "qualified_boot_only",
                "objects": []}
    for item in REPLACEMENTS:
        source = source_path(item.name)
        require_c_source(source.read_text(encoding="utf-8"), item.name)
        if normalized_digest(source) != item.source_sha256:
            raise ValueError(f"C source differs from measured trial: {item.name}")
        (output / source.name).write_bytes(source.read_bytes())
        preprocessed = output / f"{item.name}.i"
        assembly = output / f"{item.name}.s"
        obj = output / f"{item.name}.o"
        flags = cc1_flags(profile, per_source, source)
        run([str(cpp.resolve()), *profile["flags"]["cpp"], source.name], output,
            output / f"{item.name}.cpp.log", preprocessed)
        require_c_source(preprocessed.read_text(encoding="utf-8"), f"{item.name} preprocessed input")
        run([str(cc1.resolve()), *flags, preprocessed.name,
             "-o", assembly.name], output, output / f"{item.name}.cc1.log")
        run([str(assembler.resolve()), "-o", obj.name, assembly.name], output,
            output / f"{item.name}.as.log")
        if digest(obj) != item.object_sha256:
            raise ValueError(f"compiled object differs from measured trial: {item.name}")
        manifest["objects"].append({"name": item.name, "cc1_flags": flags,
                                    "source_sha256_lf": item.source_sha256,
                                    "object_sha256": item.object_sha256})
    (output / "trial_manifest.json").write_text(
        json.dumps(manifest, indent=2) + "\n", encoding="utf-8", newline="\n")
    if export is not None:
        export.mkdir(parents=True, exist_ok=True)
        for item in REPLACEMENTS:
            shutil.copyfile(output / f"{item.name}.o", export / f"{item.name}.o")
        shutil.copyfile(output / "trial_manifest.json", export / "trial_manifest.json")
    print(f"{len(REPLACEMENTS)} byte-identical objects for the pinned boot C "
          "campaign, one accepted under the boot-only profile", flush=True)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--cpp", type=Path, required=True)
    parser.add_argument("--cc1", type=Path, required=True)
    parser.add_argument("--as", dest="assembler", type=Path, required=True)
    parser.add_argument("--output-dir", type=Path, required=True)
    parser.add_argument("--export-dir", type=Path)
    args = parser.parse_args()
    compile_objects(args.cpp, args.cc1, args.assembler,
                    args.output_dir, args.export_dir)


if __name__ == "__main__":
    main()
