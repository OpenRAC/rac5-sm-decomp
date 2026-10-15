#!/usr/bin/env python3
"""Link one provisional C object into the complete pinned boot baseline.

This is an object-level witness, not an accepted C match or progress report.
The caller builds the hash-pinned object from nonmatching/boot/memcard_busy.c;
all game-derived assembly and linked output stay under ignored build/.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import shutil
from pathlib import Path

from boot_assembly import (DATA_SECTIONS, ROOT, TEXT_SIZE, TEXT_START,
                           render_data, text_words, verify_load_image)
from compare_boot_slice import compare
from elf import inspect_elf
from r5900_assembly import (ASSEMBLER_SHA256, LINKER_SHA256, check_tool,
                            render_assembly, run_tool)

OUTPUT = ROOT / "build/boot-c-witness"
SOURCE = ROOT / "nonmatching/boot/memcard_busy.c"
SOURCE_SHA256 = "a9eb80c64d794873ec06689b36c7fa204263c295e5a33077659cbb1c10e02194"
OBJECT_SHA256 = "415800c82c13e302c09de6aa773a68f82414410e28375e6b726db591fbdeb674"
C_START = 0x01E627C0
C_END = 0x01E627D0
BUSY_STATE = 0x01F4A654
BSS_START = 0x01F28100
BSS_SIZE = 817644
LOAD_MEMORY_SIZE = 1627648


def check_source() -> None:
    normalized = SOURCE.read_text(encoding="utf-8").replace("\r\n", "\n")
    if hashlib.sha256(normalized.encode("utf-8")).hexdigest() != SOURCE_SHA256:
        raise ValueError("MEMCARD_Busy C source differs from measured trial")


def linker_script() -> str:
    lines = [f"busy_state = 0x{BUSY_STATE:08X};", "SECTIONS {",
             f"  . = 0x{TEXT_START:08X};",
             "  .text : { boot_split.o(.text.before) memcard_busy.o(.text) "
             "boot_split.o(.text.after) }"]
    for name, address, _size in DATA_SECTIONS:
        lines.append(f"  . = 0x{address:08X}; {name} : {{ boot_data.o({name}) }}")
    lines.append(f"  . = 0x{BSS_START:08X}; .bss : {{ boot_bss.o(.bss) }}")
    lines.append("}")
    return "\n".join(lines) + "\n"


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("boot", type=Path)
    parser.add_argument("--c-object", type=Path, required=True)
    parser.add_argument("--assembler", type=Path, required=True)
    parser.add_argument("--linker", type=Path, required=True)
    args = parser.parse_args()
    check_source()
    check_tool(args.assembler, ASSEMBLER_SHA256)
    check_tool(args.linker, LINKER_SHA256)
    if hashlib.sha256(args.c_object.read_bytes()).hexdigest() != OBJECT_SHA256:
        raise ValueError("MEMCARD_Busy object differs from measured GNU EE trial")
    target = json.loads((ROOT / "config/target.json").read_text(encoding="utf-8"))
    words = text_words(args.boot, target["boot_sha256"])
    assembly, stats = render_assembly(words, TEXT_START, symbol="boot_text_start",
                                      raw_cop1_branches=True, exclude=(C_START, C_END))
    if (stats["excluded_words"] != 4 or stats["sqrt_s"] != 50
            or stats["cop1_branch_words"] != 6):
        raise ValueError("split assembly differs from measured boot layout")
    data_source, _baseline_script = render_data(args.boot)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    (OUTPUT / "boot_split.s").write_text(assembly, encoding="ascii", newline="\n")
    (OUTPUT / "boot_data.s").write_text(data_source, encoding="ascii", newline="\n")
    (OUTPUT / "boot_bss.s").write_text(
        f".section .bss\n.space {BSS_SIZE}\n", encoding="ascii", newline="\n")
    (OUTPUT / "boot_c.ld").write_text(linker_script(), encoding="ascii", newline="\n")
    shutil.copyfile(args.c_object, OUTPUT / "memcard_busy.o")
    run_tool([str(args.assembler.resolve()), "-o", "boot_split.o", "boot_split.s"],
             OUTPUT, OUTPUT / "text_assembler.log")
    run_tool([str(args.assembler.resolve()), "-o", "boot_data.o", "boot_data.s"],
             OUTPUT, OUTPUT / "data_assembler.log")
    run_tool([str(args.assembler.resolve()), "-o", "boot_bss.o", "boot_bss.s"],
             OUTPUT, OUTPUT / "bss_assembler.log")
    run_tool([str(args.linker.resolve()), "-T", "boot_c.ld", "-o", "boot_c.elf",
              "boot_split.o", "memcard_busy.o", "boot_data.o", "boot_bss.o"],
             OUTPUT, OUTPUT / "linker.log")
    candidate = OUTPUT / "boot_c.elf"
    candidate_report = inspect_elf(candidate)
    section = next(item for item in candidate_report["sections"] if item["name"] == ".text")
    if section["size"] != TEXT_SIZE:
        raise ValueError("C-linked boot text size differs from retail")
    exact, count, digest = compare(args.boot, candidate, TEXT_START, TEXT_SIZE,
                                   target["boot_sha256"])
    if not exact:
        raise ValueError(f"C-linked boot text differs: {count}/{TEXT_SIZE} bytes equal")
    load_digest = verify_load_image(args.boot, candidate)
    reference_report = inspect_elf(args.boot)
    reference_program = next(item for item in reference_report["programs"] if item["type"] == 1)
    reference_bss = next(item for item in reference_report["sections"] if item["name"] == ".bss")
    candidate_bss = next(item for item in candidate_report["sections"] if item["name"] == ".bss")
    if (reference_program["memory_size"] != LOAD_MEMORY_SIZE
            or reference_bss["virtual_address"] != candidate_bss["virtual_address"]
            or candidate_bss["virtual_address"] != f"0x{BSS_START:08X}"
            or reference_bss["size"] != candidate_bss["size"]
            or candidate_bss["size"] != BSS_SIZE or candidate_bss["type"] != 8):
        raise ValueError("C-linked BSS section differs from measured boot layout")
    print(f"C-linked boot .text: {count}/{TEXT_SIZE} bytes exact; SHA-256 {digest}")
    print(f"C-linked file-backed load: 809872/809872 bytes exact; SHA-256 {load_digest}")
    print(f"C-linked BSS section: 0x{BSS_START:08X}, {BSS_SIZE} zero-fill bytes")
    print("Provisional witness only: retail PT_LOAD header, runtime and compiler catalogue gates remain open")


if __name__ == "__main__":
    main()
