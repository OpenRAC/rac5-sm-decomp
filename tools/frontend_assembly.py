#!/usr/bin/env python3
"""Rebuild the pinned FRONTEND.REL candidate code interval privately.

Requires optional rabbitizer 1.16.2 and privately supplied measured SN tools.
Game-derived assembly and linked output stay under ignored build/.
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import struct
from pathlib import Path

from disc import IsoDisc, verify_disc
from elf import inspect_elf
from r5900_assembly import (ASSEMBLER_SHA256, LINKER_SHA256, check_tool,
                            render_assembly, run_tool)
from rel import HEADER, MAGIC, RELOCATION, iter_packed_relocations, unpack_relocation

ROOT = Path(__file__).resolve().parent.parent
OUTPUT = ROOT / "build/frontend-assembly"
MODULE = "LVL/FRONTEND.REL"
CODE_START = 0x80
CODE_END = 0x27D00
CODE_SIZE = CODE_END - CODE_START


def pinned_module_sha256() -> str:
    rows = (ROOT / "config/levels/modules.tsv").read_text(encoding="utf-8").splitlines()[1:]
    catalog = {row["path"]: row for row in csv.DictReader(rows, delimiter="\t")}
    return catalog[MODULE]["sha256"]


def code_words(data: bytes) -> tuple[int, ...]:
    if hashlib.sha256(data).hexdigest() != pinned_module_sha256():
        raise ValueError("FRONTEND.REL differs from the pinned USA module")
    header = HEADER.unpack_from(data)
    if (header[0] != MAGIC or header[11] != len(data)
            or header[10] != 0x80 or CODE_END >= header[1]):
        raise ValueError("frontend SNR2 header differs from measured target")
    # The last actual instructions end at 0x27CB8; padding then reaches data.
    if data[CODE_END - 0x48:CODE_END] != bytes(0x48):
        raise ValueError("frontend code-end padding differs from measured target")
    return struct.unpack_from("<" + "I" * (CODE_SIZE // 4), data, CODE_START)


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
        raise ValueError("frontend jump sites disagree with SNR2 relocation tables")
    return len(zero_jumps), len(local_jumps)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("image", type=Path)
    parser.add_argument("--assembler", type=Path, required=True)
    parser.add_argument("--linker", type=Path, required=True)
    args = parser.parse_args()
    check_tool(args.assembler, ASSEMBLER_SHA256)
    check_tool(args.linker, LINKER_SHA256)
    target = json.loads((ROOT / "config/target.json").read_text(encoding="utf-8"))
    with IsoDisc(args.image) as disc:
        verify_disc(disc, target)
        data = disc.file_bytes(MODULE)
    words = code_words(data)
    named_count, packed_count = check_jump_relocations(data, words)
    assembly, stats = render_assembly(words, CODE_START, symbol="frontend_text_start",
                                      allow_zero_jump=True)
    import rabbitizer
    first_data_word = struct.unpack_from("<I", data, CODE_END)[0]
    if rabbitizer.Instruction(first_data_word, CODE_END,
                              rabbitizer.InstrCategory.R5900).isValid():
        raise ValueError("frontend first post-code word no longer marks a data boundary")
    if (stats["zero_target_jumps"] != named_count or stats["sqrt_s"] != 3
            or stats["cop1_branch_words"] != 0):
        raise ValueError("frontend instruction counts differ from measured target")
    OUTPUT.mkdir(parents=True, exist_ok=True)
    (OUTPUT / "frontend.s").write_text(assembly, encoding="ascii", newline="\n")
    (OUTPUT / "frontend.ld").write_text(
        f"T_ZERO = 0;\nSECTIONS {{ . = 0x{CODE_START:08X}; .text : {{ *(.text) }} }}\n",
        encoding="ascii", newline="\n")
    run_tool([str(args.assembler.resolve()), "-o", "frontend.o", "frontend.s"],
             OUTPUT, OUTPUT / "assembler.log")
    run_tool([str(args.linker.resolve()), "-T", "frontend.ld", "-o",
              "frontend.elf", "frontend.o"], OUTPUT, OUTPUT / "linker.log")
    candidate = OUTPUT / "frontend.elf"
    linked = candidate.read_bytes()
    section = next(item for item in inspect_elf(candidate)["sections"] if item["name"] == ".text")
    if int(str(section["virtual_address"]), 16) != CODE_START or section["size"] != CODE_SIZE:
        raise ValueError("linked frontend code placement differs from measured interval")
    actual = linked[section["file_offset"]:section["file_offset"] + CODE_SIZE]
    reference = data[CODE_START:CODE_END]
    if actual != reference:
        count = sum(left == right for left, right in zip(actual, reference))
        raise ValueError(f"frontend code interval differs: {count}/{CODE_SIZE} bytes equal")
    print(f"frontend candidate code: {CODE_SIZE}/{CODE_SIZE} bytes exact; "
          f"SHA-256 {hashlib.sha256(actual).hexdigest()}")
    print(f"jump relocations: {packed_count} packed local and {named_count} named import sites agree")
    print("private assembly: " + ", ".join(f"{key}={value}" for key, value in stats.items()))


if __name__ == "__main__":
    main()
