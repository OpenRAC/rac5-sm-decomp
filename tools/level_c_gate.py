#!/usr/bin/env python3
"""Rebuild one shared level C function at all twenty exact SNR2 placements.

The two additional C sources are compiler controls only. All objects, linker
outputs and reconstructed modules remain private under ignored build/.
"""

from __future__ import annotations

import argparse
import csv
import json
import shutil
import struct
from pathlib import Path

from boot_symbols import read_boot
from compile_boot_trial import digest, normalized_digest, require_private_output, run
from disc import IsoDisc, verify_disc
from elf import inspect_elf
from level_program_gate import MEASURED_LOADS, replace_range, sha
from r5900_assembly import LINKER_SHA256, check_tool, run_tool
from rel import HEADER, RELOCATION, iter_packed_relocations, unpack_relocation
from relocate import relocate_module
from snr2_assembly import CODE_START, pinned_modules

ROOT = Path(__file__).resolve().parent.parent
PROFILE = ROOT / "config/levels/compiler_trial.json"
BASE_PROFILE = ROOT / "config/boot/compiler_trial.json"
OUTPUT = ROOT / "build/level-c-gate"
REPORT = OUTPUT / "report.json"
WORD = struct.Struct("<I")


def profile_and_sources(cpp: Path, cc1: Path, gnu_as: Path) -> tuple[dict, list[dict]]:
    profile = json.loads(PROFILE.read_text(encoding="utf-8"))
    base = json.loads(BASE_PROFILE.read_text(encoding="utf-8"))
    accepted = profile["accepted"]
    controls = profile["provisional_controls"]
    if (profile["status"] != "qualified_shared_constant_only"
            or profile["base_profile"] != "config/boot/compiler_trial.json"
            or base["status"] != "qualified_boot_only"
            or accepted["source"] != "src/levels/shared/func_00000100.c"
            or accepted["offset"] != 0x100 or accepted["body_bytes"] != 8
            or [row["source"] for row in controls] != [
                "nonmatching/levels/func_00000190.c",
                "nonmatching/levels/func_00002CD8.c"]
            or base["flags"] != {"cpp": [], "cc1": ["-quiet", "-O2", "-G0"],
                                   "as": []}):
        raise ValueError("level C trial scope or compiler flags changed")
    for label, path in (("cpp", cpp), ("cc1", cc1), ("as", gnu_as)):
        if digest(path) != base["tools"][f"{label}_sha256"]:
            raise ValueError(f"{label} differs from pinned RAC5 compiler trial")
    for row in (accepted, *controls):
        source = ROOT / row["source"]
        if normalized_digest(source) != row["source_sha256_lf"]:
            raise ValueError(f"level C source differs from measured trial: {source.name}")
    return profile, [accepted, *controls]


def compile_sources(profile: dict, sources: list[dict], cpp: Path, cc1: Path,
                    gnu_as: Path, output_dir: Path) -> None:
    output = require_private_output(output_dir)
    output.mkdir(parents=True, exist_ok=True)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    flags = json.loads(BASE_PROFILE.read_text(encoding="utf-8"))["flags"]
    for row in sources:
        source = ROOT / row["source"]
        stem = source.stem
        (output / source.name).write_bytes(source.read_bytes())
        run([str(cpp.resolve()), source.name], output, output / f"{stem}.cpp.log",
            output / f"{stem}.i")
        run([str(cc1.resolve()), *flags["cc1"], f"{stem}.i", "-o", f"{stem}.s"],
            output, output / f"{stem}.cc1.log")
        run([str(gnu_as.resolve()), "-o", f"{stem}.o", f"{stem}.s"],
            output, output / f"{stem}.as.log")
        obj = output / f"{stem}.o"
        if digest(obj) != row["object_sha256"]:
            raise ValueError(f"level C object differs from measured trial: {stem}")
        shutil.copyfile(obj, OUTPUT / obj.name)


def linked_body(row: dict, linker: Path) -> bytes:
    stem = Path(row["source"]).stem
    symbols = row.get("linker_symbols", {})
    script = "\n".join([*(f"{name} = 0x{address:08X};"
                           for name, address in symbols.items()),
                        f"SECTIONS {{ . = 0x{row['offset']:08X}; "
                        f".text : {{ {stem}.o(.text) }} }}", ""])
    (OUTPUT / f"{stem}.ld").write_text(script, encoding="ascii", newline="\n")
    run_tool([str(linker.resolve()), "-T", f"{stem}.ld", "-o", f"{stem}.elf",
              f"{stem}.o"], OUTPUT, OUTPUT / f"{stem}.link.log")
    elf = OUTPUT / f"{stem}.elf"
    section = next(item for item in inspect_elf(elf)["sections"]
                   if item["name"] == ".text")
    if (int(section["virtual_address"], 16) != row["offset"]
            or section["size"] != row["body_bytes"]):
        raise ValueError(f"linked C body has wrong offset or size: {stem}")
    data = elf.read_bytes()
    return data[section["file_offset"]:section["file_offset"] + section["size"]]


def code_ends() -> dict[str, int]:
    path = ROOT / "config/levels/code_intervals.tsv"
    with path.open(encoding="utf-8", newline="") as file:
        rows = csv.DictReader((line for line in file if not line.startswith("#")),
                              delimiter="\t")
        return {row["module"]: int(row["end_exclusive"], 16) for row in rows}


def shared_boundary(module: str, source: bytes, end: int) -> tuple[int, int]:
    """Guard the reviewed 0x100..0x108 body against direct interior targets."""
    import rabbitizer
    if rabbitizer.__version__ != "1.16.2":
        raise ValueError("level C boundary review requires rabbitizer 1.16.2")
    if source[0x100:0x104] != WORD.pack(0x03E00008):
        raise ValueError(f"{module} does not start with jr $ra")
    head = HEADER.unpack_from(source)
    named = (unpack_relocation(source, head[1] + i * RELOCATION.size)[0]
             for i in range(head[2]))
    local = (row.site for row in iter_packed_relocations(source, head[13], head[1]))
    if any(0x100 <= site < 0x108 for site in named):
        raise ValueError(f"{module} named relocation enters shared C body")
    if any(0x100 <= site < 0x108 for site in local):
        raise ValueError(f"{module} local relocation enters shared C body")
    calls_100 = calls_108 = 0
    for (word,) in struct.iter_unpack("<I", source[CODE_START:end]):
        if word >> 26 in (2, 3) and ((word & 0x03FFFFFF) << 2) == 0x104:
            raise ValueError(f"{module} direct jump enters shared C body")
        if word >> 26 == 3:
            calls_100 += ((word & 0x03FFFFFF) << 2) == 0x100
            calls_108 += ((word & 0x03FFFFFF) << 2) == 0x108
    # MIPS relative branches have a signed 16-bit word displacement; a
    # target at 0x104 can only be reached from the first ~128 KiB.
    for site in range(CODE_START, min(end, 0x20108), 4):
        insn = rabbitizer.Instruction(WORD.unpack_from(source, site)[0], site,
                                      rabbitizer.InstrCategory.R5900)
        if insn.isBranch() and insn.getBranchVramGeneric() == 0x104:
            raise ValueError(f"{module} relative branch enters shared C body")
    if calls_100 != 1 or calls_108 != 5:
        raise ValueError(f"{module} shared C call/next-label anchors changed")
    return calls_100, calls_108


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("image", type=Path)
    parser.add_argument("--boot", type=Path, default=ROOT / "baserom/SCUS_976.15")
    parser.add_argument("--cpp", type=Path, required=True)
    parser.add_argument("--cc1", type=Path, required=True)
    parser.add_argument("--as", dest="gnu_as", type=Path, required=True)
    parser.add_argument("--linker", type=Path, required=True)
    parser.add_argument("--output-dir", type=Path, required=True,
                        help="native Linux directory for compiler intermediates")
    args = parser.parse_args()
    OUTPUT.mkdir(parents=True, exist_ok=True)
    REPORT.write_text(json.dumps({"status": "incomplete", "counted_matches": 0},
                                 indent=2) + "\n", encoding="utf-8", newline="\n")
    check_tool(args.linker, LINKER_SHA256)
    profile, sources = profile_and_sources(args.cpp, args.cc1, args.gnu_as)
    compile_sources(profile, sources, args.cpp, args.cc1, args.gnu_as,
                    args.output_dir)
    bodies = {Path(row["source"]).stem: linked_body(row, args.linker)
              for row in sources}
    target = json.loads((ROOT / "config/target.json").read_text(encoding="utf-8"))
    boot, boot_symbols = read_boot(args.boot)
    if boot["sha256"] != target["boot_sha256"]:
        raise ValueError("boot differs from pinned USA target")
    addresses = {symbol.name: symbol.address for symbol in boot_symbols}
    known, ends = pinned_modules(), code_ends()
    names = [name for name in sorted(known) if name.startswith("LEVEL_")]
    if len(names) != 20:
        raise ValueError("expected twenty pinned numbered level modules")
    matched = []
    with IsoDisc(args.image) as disc:
        verify_disc(disc, target)
        for name in names:
            source = disc.file_bytes("LVL/" + name)
            if sha(source) != known[name]:
                raise ValueError(f"{name} differs from pinned USA module")
            shared_boundary(name, source, ends[name])
            body = bodies["func_00000100"]
            if body != source[0x100:0x108]:
                raise ValueError(f"shared C function differs in {name}")
            rebuilt = replace_range(source, body, 0x100, 0x108)
            if name == "LEVEL_01.REL":
                control = bodies["func_00000190"]
                if control != source[0x190:0x190 + len(control)]:
                    raise ValueError("LEVEL_01 C array-get control differs")
                rebuilt = replace_range(rebuilt, control, 0x190, 0x190 + len(control))
            if sha(rebuilt) != known[name]:
                raise ValueError(f"{name} complete C-linked module differs")
            if name == "LEVEL_01.REL":
                base, load_sha, missing = MEASURED_LOADS[name]
                relocated, unresolved = relocate_module("LVL/" + name, rebuilt,
                                                         base, addresses)
                if sha(relocated) != load_sha or unresolved != missing:
                    raise ValueError("LEVEL_01 C-linked relocated image differs")
            matched.append({"module": name, "size": len(source),
                            "sha256": known[name], "body_offset": 0x100,
                            "body_bytes": len(body)})
        frontend = disc.file_bytes("LVL/FRONTEND.REL")
        control = bodies["func_00002CD8"]
        if control != frontend[0x2CD8:0x2CD8 + len(control)]:
            raise ValueError("FRONTEND C store control differs")
        candidate = replace_range(frontend, control, 0x2CD8, 0x2CD8 + len(control))
        if sha(candidate) != known["FRONTEND.REL"]:
            raise ValueError("FRONTEND complete control module differs")
        base, load_sha, missing = MEASURED_LOADS["FRONTEND.REL"]
        relocated, unresolved = relocate_module("LVL/FRONTEND.REL", candidate,
                                                 base, addresses)
        if sha(relocated) != load_sha or unresolved != missing:
            raise ValueError("FRONTEND C-linked relocated image differs")
    report = {"status": "passed_shared_constant_only", "profile": profile["id"],
              "accepted_function": "func_00000100", "counted_matches": 1,
              "unique_body_bytes": 8, "matched_placement_bytes": 160,
              "placements": matched,
              "provisional_controls": ["LEVEL_01.REL:0x190:24",
                                       "FRONTEND.REL:0x2CD8:12"],
              "runtime_measured_placements": ["FRONTEND.REL", "LEVEL_01.REL"]}
    REPORT.write_text(json.dumps(report, indent=2) + "\n",
                      encoding="utf-8", newline="\n")
    print("shared C function: 8/8 bytes at all 20 level placements; "
          "20/20 complete modules exact, two provisional controls exact")


if __name__ == "__main__":
    main()
