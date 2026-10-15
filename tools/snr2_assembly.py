#!/usr/bin/env python3
"""Rebuild measured SNR2 code intervals as private R5900 assembly.

Requires optional rabbitizer 1.16.2 and privately supplied measured SN tools.
Game-derived output stays under ignored build/snr2-assembly/.
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import struct
from dataclasses import dataclass
from pathlib import Path

from disc import IsoDisc, verify_disc
from elf import inspect_elf
from r5900_assembly import (ASSEMBLER_SHA256, LINKER_SHA256, check_tool,
                            render_assembly, run_tool)
from rel import HEADER, MAGIC, RELOCATION, iter_packed_relocations, unpack_relocation

ROOT = Path(__file__).resolve().parent.parent
OUTPUT = ROOT / "build/snr2-assembly"


@dataclass(frozen=True)
class CodeProfile:
    module: str
    slug: str
    end: int
    trailing_zero_bytes: int
    first_invalid_at: int
    sqrt_count: int
    named_jump_count: int
    local_jump_count: int


PROFILES = {
    "FRONTEND.REL": CodeProfile("FRONTEND.REL", "frontend", 0x27D00, 0x48,
                                0x27D00, 3, 434, 2470),
    "LEVEL_01.REL": CodeProfile("LEVEL_01.REL", "level_01", 0x1EF180, 0x78,
                                0x1EF1A8, 1188, 4226, 16166),
}
CODE_START = 0x80


def pinned_module_sha256(module: str) -> str:
    rows = (ROOT / "config/levels/modules.tsv").read_text(encoding="utf-8").splitlines()[1:]
    catalog = {row["path"]: row for row in csv.DictReader(rows, delimiter="\t")}
    return catalog[f"LVL/{module}"]["sha256"]


def code_words(data: bytes, profile: CodeProfile) -> tuple[int, ...]:
    if hashlib.sha256(data).hexdigest() != pinned_module_sha256(profile.module):
        raise ValueError(f"{profile.module} differs from the pinned USA module")
    header = HEADER.unpack_from(data)
    if (header[0] != MAGIC or header[11] != len(data)
            or header[10] != CODE_START or profile.end >= header[1]):
        raise ValueError(f"{profile.module} SNR2 header differs from measured target")
    if data[profile.end - profile.trailing_zero_bytes:profile.end] != bytes(
            profile.trailing_zero_bytes):
        raise ValueError(f"{profile.module} code-end padding differs from measured target")
    size = profile.end - CODE_START
    return struct.unpack_from("<" + "I" * (size // 4), data, CODE_START)


def check_jump_relocations(data: bytes, words: tuple[int, ...]) -> tuple[int, int]:
    header = HEADER.unpack_from(data)
    named: set[int] = set()
    for index in range(header[2]):
        site, kind, _symbol, _addend = unpack_relocation(
            data, header[1] + index * RELOCATION.size)
        if kind == 4:
            named.add(site)
    local = {item.site for item in iter_packed_relocations(data, header[13], header[1])
             if item.kind == 2}
    zero_jumps: set[int] = set()
    local_jumps: set[int] = set()
    for index, word in enumerate(words):
        if word >> 26 not in (2, 3):
            continue
        site = CODE_START + index * 4
        if (word & 0x03FFFFFF) == 0:
            zero_jumps.add(site)
        else:
            local_jumps.add(site)
    if zero_jumps != named or local_jumps != local:
        raise ValueError("SNR2 jump sites disagree with relocation tables")
    return len(zero_jumps), len(local_jumps)


def main(default_module: str | None = None) -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("image", type=Path)
    parser.add_argument("module", nargs="?", choices=PROFILES, default=default_module)
    parser.add_argument("--assembler", type=Path, required=True)
    parser.add_argument("--linker", type=Path, required=True)
    args = parser.parse_args()
    if args.module is None:
        parser.error("choose a measured module: " + ", ".join(PROFILES))
    profile = PROFILES[args.module]
    check_tool(args.assembler, ASSEMBLER_SHA256)
    check_tool(args.linker, LINKER_SHA256)
    target = json.loads((ROOT / "config/target.json").read_text(encoding="utf-8"))
    with IsoDisc(args.image) as disc:
        verify_disc(disc, target)
        data = disc.file_bytes(f"LVL/{profile.module}")
    words = code_words(data, profile)
    named_count, local_count = check_jump_relocations(data, words)
    assembly, stats = render_assembly(words, CODE_START,
                                      symbol=f"{profile.slug}_text_start",
                                      allow_zero_jump=True)
    import rabbitizer
    boundary_word = struct.unpack_from("<I", data, profile.first_invalid_at)[0]
    if rabbitizer.Instruction(boundary_word, profile.first_invalid_at,
                              rabbitizer.InstrCategory.R5900).isValid():
        raise ValueError(f"{profile.module} measured data-boundary probe changed")
    if (named_count != profile.named_jump_count or local_count != profile.local_jump_count
            or stats["zero_target_jumps"] != named_count
            or stats["sqrt_s"] != profile.sqrt_count
            or stats["cop1_branch_words"] != 0):
        raise ValueError(f"{profile.module} instruction counts differ from measured target")

    output = OUTPUT / profile.slug
    output.mkdir(parents=True, exist_ok=True)
    (output / "module.s").write_text(assembly, encoding="ascii", newline="\n")
    (output / "module.ld").write_text(
        f"T_ZERO = 0;\nSECTIONS {{ . = 0x{CODE_START:08X}; .text : {{ *(.text) }} }}\n",
        encoding="ascii", newline="\n")
    run_tool([str(args.assembler.resolve()), "-o", "module.o", "module.s"],
             output, output / "assembler.log")
    run_tool([str(args.linker.resolve()), "-T", "module.ld", "-o",
              "module.elf", "module.o"], output, output / "linker.log")
    candidate = output / "module.elf"
    linked = candidate.read_bytes()
    section = next(item for item in inspect_elf(candidate)["sections"] if item["name"] == ".text")
    code_size = profile.end - CODE_START
    if int(str(section["virtual_address"]), 16) != CODE_START or section["size"] != code_size:
        raise ValueError(f"{profile.module} linked code placement differs from measured interval")
    actual = linked[section["file_offset"]:section["file_offset"] + code_size]
    reference = data[CODE_START:profile.end]
    if actual != reference:
        count = sum(left == right for left, right in zip(actual, reference))
        raise ValueError(f"{profile.module} code differs: {count}/{code_size} bytes equal")
    print(f"{profile.module} candidate code: {code_size}/{code_size} bytes exact; "
          f"SHA-256 {hashlib.sha256(actual).hexdigest()}")
    print(f"jump relocations: {local_count} packed local and {named_count} named import sites agree")
    print("private assembly: " + ", ".join(f"{key}={value}" for key, value in stats.items()))


if __name__ == "__main__":
    main()
