#!/usr/bin/env python3
"""Rebuild pinned RAC5 boot C witness objects with a private trial toolchain.

Run on a native Linux filesystem (including WSL's Linux filesystem) with
lawfully obtained tools. All compiler outputs stay local; this command does
not qualify matches or publish a progress report.

Most sources compile with the profile's own GNU EE chain (``cpp``, ``cc1``,
GNU ``as``). A source whose ``config/cflags.txt`` entry names another pinned
compiler is built by that compiler instead. The one pinned extra compiler so
far is SN ProDG 3.01 ``ee-gcc2953`` (GCC 2.95.3), a Windows driver: it runs
through WSL's Windows interop from a staging directory the Windows side can
open, and its assembly is then assembled by the same pinned GNU ``as``, so
every object keeps one assembler and one object format.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import shutil
import subprocess
from pathlib import Path

import cflags
from boot_c_campaign import (ACCEPTED_SOURCES, REPLACEMENTS, accepted_replacements,
                             source_path, validate_replacements)
from r5900_assembly import ASSEMBLER_SHA256, LINKER_SHA256
from c_source_policy import require_c_source

ROOT = Path(__file__).resolve().parent.parent
PROFILE = ROOT / "config/boot/compiler_trial.json"
STAGE = ROOT / "build/boot-prodg-stage"


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


def windows_path(path: Path) -> str:
    """Windows form of a path, for the argument list of a Windows-side driver.

    Under WSL the pinned extra compiler is a Windows executable reached through
    interop; it cannot open a Linux path, so the ``-B`` directory it is given
    must be spelled the way Windows sees it. A native host returns the path
    unchanged, which is what a Windows run wants.
    """
    if os.name == "nt":
        return str(path)
    try:
        done = subprocess.run(["wslpath", "-w", str(path)], capture_output=True,
                              text=True, timeout=30, check=False)
    except (OSError, subprocess.SubprocessError):
        return str(path)
    converted = done.stdout.strip()
    return converted if done.returncode == 0 and converted else str(path)


def check_profile(cpp: Path, cc1: Path, assembler: Path) -> dict[str, object]:
    validate_replacements()
    accepted_replacements()
    profile = json.loads(PROFILE.read_text(encoding="utf-8"))
    accepted_paths = sorted(source_path(name).relative_to(ROOT).as_posix()
                            for name in ACCEPTED_SOURCES)
    if (profile["status"] != "qualified_boot_only"
            or profile["expected_objects"] != len(REPLACEMENTS)
            or profile["accepted_sources"] != accepted_paths):
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


def check_extra_compiler(profile: dict, selector: str,
                         bin_dir: Path | None) -> dict[str, object]:
    """Verify one pinned extra compiler and resolve the paths it is run from."""
    pinned = profile.get("extra_compilers", {}).get(selector)
    if pinned is None:
        raise ValueError(f"config/boot/compiler_trial.json pins no compiler "
                         f"named {selector}")
    if bin_dir is None:
        raise ValueError(f"source routed to {selector}; pass that compiler's "
                         "directory with --prodg-bin")
    tools = pinned["tools"]
    driver = bin_dir / tools["driver"]
    libexec = (bin_dir / tools["libexec"]).resolve()
    for label, path in (("driver", driver),
                        ("cpp", libexec / tools["cpp"]),
                        ("cc1", libexec / tools["cc1"])):
        if not path.is_file():
            raise ValueError(f"{selector} {label} is missing: {path}")
        if digest(path) != tools[f"{label}_sha256"]:
            raise ValueError(f"{selector} {label} differs from measured RAC5 trial")
    flags = pinned["flags"]
    if set(flags) != {"driver", "as"} or list(flags["driver"]) != ["-S"]:
        raise ValueError(f"{selector} flags differ from measured build")
    # The driver resolves cpp/cc1 itself through -B; they are checked above so a
    # swapped front end cannot hide behind a correct driver hash.
    return {"id": pinned["id"], "driver": driver, "libexec": libexec,
            "flags": flags}


def cc1_flags(profile: dict, per_source: dict[str, cflags.Entry],
              source: Path) -> list[str]:
    """Pinned-chain cc1 flags for one source, plus the flags measured for that file.

    An entry that selects another compiler carries that compiler's flag set, so
    it contributes nothing here; its object is not built by the pinned chain.
    """
    entry = cflags.for_source(per_source, source)
    return [*profile["flags"]["cc1"], *(entry.flags if entry.pinned else ())]


def compiler_flags(extra: dict, per_source: dict[str, cflags.Entry],
                   source: Path) -> list[str]:
    """Flags an extra compiler is run with for one source, in command order."""
    return [*extra["flags"]["driver"], *cflags.for_source(per_source, source).flags]


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


def compile_pinned(profile: dict, per_source: dict[str, cflags.Entry], source: Path,
                   output: Path, cpp: Path, cc1: Path, item) -> list[str]:
    """The profile's own chain: cpp, cc1, then the pinned GNU assembler."""
    preprocessed = output / f"{item.name}.i"
    assembly = output / f"{item.name}.s"
    flags = cc1_flags(profile, per_source, source)
    run([str(cpp.resolve()), *profile["flags"]["cpp"], source.name], output,
        output / f"{item.name}.cpp.log", preprocessed)
    require_c_source(preprocessed.read_text(encoding="utf-8"), f"{item.name} preprocessed input")
    run([str(cc1.resolve()), *flags, preprocessed.name,
         "-o", assembly.name], output, output / f"{item.name}.cc1.log")
    return flags


def compile_extra(extra: dict, per_source: dict[str, cflags.Entry], source: Path,
                  output: Path, item, stage: Path) -> list[str]:
    """A pinned extra compiler driver, staged where the Windows side can read it.

    The preprocessed input is kept and checked exactly as the pinned chain's is,
    so a macro from the driver's own include path cannot smuggle assembly into
    a routed body either.
    """
    staged = stage / item.name
    staged.mkdir(parents=True, exist_ok=True)
    (staged / source.name).write_bytes(source.read_bytes())
    assembly = staged / f"{item.name}.s"
    prefix = [str(extra["driver"].resolve()), f"-B{windows_path(extra['libexec'])}/"]
    run([*prefix, "-E", source.name], staged, output / f"{item.name}.cpp.log",
        output / f"{item.name}.i")
    require_c_source((output / f"{item.name}.i").read_text(encoding="utf-8"),
                     f"{item.name} preprocessed input")
    flags = compiler_flags(extra, per_source, source)
    run([*prefix, *flags, source.name, "-o", assembly.name], staged,
        output / f"{item.name}.driver.log")
    if not assembly.is_file():
        raise ValueError(f"{item.name}: {extra['id']} produced no assembly")
    shutil.copyfile(assembly, output / f"{item.name}.s")
    return flags


def compile_objects(cpp: Path, cc1: Path, assembler: Path,
                    output_dir: Path, export_dir: Path | None,
                    prodg_bin: Path | None = None,
                    stage_dir: Path | None = None) -> None:
    profile = check_profile(cpp, cc1, assembler)
    output = require_private_output(output_dir)
    export = require_private_output(export_dir) if export_dir is not None else None
    if output == export:
        raise ValueError("output and export directories must differ")
    output.mkdir(parents=True, exist_ok=True)
    per_source = cflags.load()
    selected = {entry.compiler for entry in per_source.values() if not entry.pinned}
    extras = {name: check_extra_compiler(profile, name, prodg_bin)
              for name in sorted(selected)}
    stage = require_private_output(stage_dir if stage_dir is not None else STAGE)
    if selected:
        stage.mkdir(parents=True, exist_ok=True)
    manifest = {"profile": profile["id"], "status": "qualified_boot_only",
                "compilers": {name: extra["id"] for name, extra in extras.items()},
                "objects": []}
    for item in REPLACEMENTS:
        source = source_path(item.name)
        require_c_source(source.read_text(encoding="utf-8"), item.name)
        if normalized_digest(source) != item.source_sha256:
            raise ValueError(f"C source differs from measured trial: {item.name}")
        (output / source.name).write_bytes(source.read_bytes())
        obj = output / f"{item.name}.o"
        entry = cflags.for_source(per_source, source)
        if entry.pinned:
            flags = compile_pinned(profile, per_source, source, output,
                                   cpp, cc1, item)
        else:
            flags = compile_extra(extras[entry.compiler], per_source, source,
                                  output, item, stage)
        run([str(assembler.resolve()), "-o", obj.name, f"{item.name}.s"], output,
            output / f"{item.name}.as.log")
        if digest(obj) != item.object_sha256:
            raise ValueError(f"compiled object differs from measured trial: {item.name}")
        manifest["objects"].append({"name": item.name, "compiler": entry.compiler,
                                    "compiler_flags": flags,
                                    "source_sha256_lf": item.source_sha256,
                                    "object_sha256": item.object_sha256})
    (output / "trial_manifest.json").write_text(
        json.dumps(manifest, indent=2) + "\n", encoding="utf-8", newline="\n")
    if export is not None:
        export.mkdir(parents=True, exist_ok=True)
        for item in REPLACEMENTS:
            shutil.copyfile(output / f"{item.name}.o", export / f"{item.name}.o")
        shutil.copyfile(output / "trial_manifest.json", export / "trial_manifest.json")
    extra_count = len(selected)
    print(f"{len(REPLACEMENTS)} byte-identical objects for the pinned boot C "
          f"campaign, {len(ACCEPTED_SOURCES)} accepted under the boot-only "
          f"profile, {extra_count} object(s) from a second pinned compiler",
          flush=True)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--cpp", type=Path, required=True)
    parser.add_argument("--cc1", type=Path, required=True)
    parser.add_argument("--as", dest="assembler", type=Path, required=True)
    parser.add_argument("--output-dir", type=Path, required=True)
    parser.add_argument("--export-dir", type=Path)
    parser.add_argument("--prodg-bin", type=Path,
                        help="directory holding the pinned ee-gcc2953.exe driver")
    parser.add_argument("--prodg-stage", type=Path, default=STAGE,
                        help="Windows-visible staging directory for that driver")
    args = parser.parse_args()
    compile_objects(args.cpp, args.cc1, args.assembler,
                    args.output_dir, args.export_dir,
                    args.prodg_bin, args.prodg_stage)


if __name__ == "__main__":
    main()
