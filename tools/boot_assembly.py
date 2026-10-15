#!/usr/bin/env python3
"""Rebuild the pinned USA boot text and file-backed load image privately.

Requires optional rabbitizer 1.16.2 and privately supplied SN assembler/linker.
All game-derived output stays under ignored build/boot-assembly/.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import struct
import subprocess
from pathlib import Path

from compare_boot_slice import compare
from elf import inspect_elf

ROOT = Path(__file__).resolve().parent.parent
OUTPUT = ROOT / "build/boot-assembly"
TEXT_START = 0x01E62500
TEXT_SIZE = 0x79CD4
LOAD_FILE_SIZE = 809872
DATA_SECTIONS = (
    (".data", 0x01EDC200, 191184),
    (".sndata", 0x01F0AD00, 70000),
    (".rodata", 0x01F1BE80, 49368),
    (".gcc_except_table", 0x01F27F80, 272),
)
ASSEMBLER_SHA256 = "c839dd63facabe7b76573c114056be61eaa7b3aa2329dd546930ab8f98898c76"
LINKER_SHA256 = "80f3724a63ce3c77c8b00d075f5c49448636518700ae251e5d6a6c809bbf5f48"


def check_tool(path: Path, expected: str) -> None:
    if hashlib.sha256(path.read_bytes()).hexdigest() != expected:
        raise ValueError(f"tool hash does not match the measured profile: {path.name}")


def text_words(boot: Path, expected_hash: str) -> tuple[int, ...]:
    image = boot.read_bytes()
    if hashlib.sha256(image).hexdigest() != expected_hash:
        raise ValueError("boot ELF differs from pinned USA target")
    report = inspect_elf(boot)
    section = next((item for item in report["sections"] if item["name"] == ".text"), None)
    if (section is None or int(str(section["virtual_address"]), 16) != TEXT_START
            or section["size"] != TEXT_SIZE or not section["flags"] & 4):
        raise ValueError("pinned boot .text metadata differs from measured target")
    offset = int(section["file_offset"])
    return struct.unpack_from("<" + "I" * (TEXT_SIZE // 4), image, offset)


def render_assembly(words: tuple[int, ...]) -> tuple[str, str, dict[str, int]]:
    try:
        import rabbitizer
    except ImportError as error:
        raise ValueError("optional rabbitizer 1.16.2 is required") from error
    if rabbitizer.__version__ != "1.16.2":
        raise ValueError("this assembly witness requires rabbitizer 1.16.2")

    rabbitizer.config.pseudos_enablePseudos = False
    rabbitizer.config.regNames_vr4300Cop0NamedRegisters = False
    rabbitizer.config.regNames_userFpcCsr = False
    instructions = [rabbitizer.Instruction(word, TEXT_START + index * 4,
                                           rabbitizer.InstrCategory.R5900)
                    for index, word in enumerate(words)]
    if any(not instruction.isValid() for instruction in instructions):
        raise ValueError("pinned boot .text contains an invalid R5900 instruction")

    end = TEXT_START + TEXT_SIZE
    branches = {item.getBranchVramGeneric() for item in instructions if item.isBranch()}
    jumps = {item.getInstrIndexAsVram() for item in instructions if item.isJumpWithAddress()}
    if any(not TEXT_START <= target < end for target in branches | jumps):
        raise ValueError("boot .text has a control target outside its measured section")

    lines = [".set noat", ".set noreorder", ".section .text",
             ".globl boot_text_start", "boot_text_start:"]
    sqrt_count = raw_branch_count = 0
    for index, (word, instruction) in enumerate(zip(words, instructions)):
        address = TEXT_START + index * 4
        if address in branches or address in jumps:
            lines.append(f"L_{address:08X}:")
        name = instruction.getOpcodeName()
        if (index > 0 and name.startswith("bc1")
                and instructions[index - 1].getOpcodeName().startswith("c.")):
            # SN inserts a retail-absent hazard nop for these six branches.
            lines.append(f"    .word 0x{word:08X}")
            raw_branch_count += 1
            continue

        mnemonic = instruction.disassemble().strip()
        if name == "c1":
            # Rabbitizer does not name this R5900 two-register sqrt.s form.
            if ((word >> 26) != 0x11 or (word >> 21) & 31 != 0x10
                    or (word >> 11) & 31 != 0 or word & 63 != 4):
                raise ValueError(f"unmapped COP1 encoding at 0x{address:08X}")
            mnemonic = f"sqrt.s $f{(word >> 6) & 31}, $f{(word >> 16) & 31}"
            sqrt_count += 1
        if instruction.isBranch():
            label = f"L_{instruction.getBranchVramGeneric():08X}"
            mnemonic = (mnemonic.rsplit(",", 1)[0] + f", {label}" if "," in mnemonic
                        else mnemonic.split()[0] + f" {label}")
        if instruction.isJumpWithAddress():
            target = instruction.getInstrIndexAsVram()
            mnemonic = re.sub(r"func_[0-9A-Fa-f]+", f"L_{target:08X}", mnemonic)
        lines.append("    " + mnemonic)
    if raw_branch_count != 6 or sqrt_count != 50:
        raise ValueError("R5900 special-case counts differ from measured boot")
    script = f"SECTIONS {{ . = 0x{TEXT_START:08X}; .text : {{ *(.text) }} }}\n"
    stats = {"instructions": len(words), "branch_targets": len(branches),
             "jump_targets": len(jumps), "sqrt_s": sqrt_count,
             "cop1_branch_words": raw_branch_count}
    return "\n".join(lines) + "\n", script, stats


def render_data(boot: Path) -> tuple[str, str]:
    """Copy non-code sections into ignored assembly for a load-image baseline."""
    image = boot.read_bytes()
    report = inspect_elf(boot)
    program = next((item for item in report["programs"] if item["type"] == 1), None)
    if (program is None or int(str(program["virtual_address"]), 16) != TEXT_START
            or program["file_size"] != LOAD_FILE_SIZE):
        raise ValueError("pinned boot load segment differs from measured target")
    source: list[str] = []
    script = ["SECTIONS {", f"  . = 0x{TEXT_START:08X}; .text : {{ *(.text) }}"]
    for name, address, size in DATA_SECTIONS:
        section = next((item for item in report["sections"] if item["name"] == name), None)
        if (section is None or int(str(section["virtual_address"]), 16) != address
                or section["size"] != size or not section["flags"] & 2):
            raise ValueError(f"pinned boot {name} metadata differs from measured target")
        data = image[section["file_offset"]:section["file_offset"] + size]
        source.append(f".section {name}")
        for offset in range(0, size, 16):
            source.append(".byte " + ", ".join(f"0x{byte:02X}" for byte in data[offset:offset + 16]))
        script.append(f"  . = 0x{address:08X}; {name} : {{ *({name}) }}")
    script.append("}")
    return "\n".join(source) + "\n", "\n".join(script) + "\n"


def verify_load_image(boot: Path, rebuilt: Path) -> str:
    original = boot.read_bytes()
    reference_report = inspect_elf(boot)
    candidate = rebuilt.read_bytes()
    candidate_report = inspect_elf(rebuilt)
    program = next(item for item in reference_report["programs"] if item["type"] == 1)
    reference = original[program["file_offset"]:program["file_offset"] + LOAD_FILE_SIZE]
    load = bytearray(LOAD_FILE_SIZE)
    for name, address, size in ((".text", TEXT_START, TEXT_SIZE), *DATA_SECTIONS):
        section = next((item for item in candidate_report["sections"]
                        if item["name"] == name), None)
        if (section is None or int(str(section["virtual_address"]), 16) != address
                or section["size"] != size):
            raise ValueError(f"linked {name} placement differs from measured target")
        offset = address - TEXT_START
        load[offset:offset + size] = candidate[
            section["file_offset"]:section["file_offset"] + size]
    if load != reference:
        count = sum(left == right for left, right in zip(load, reference))
        raise ValueError(f"file-backed boot load image differs: {count}/{LOAD_FILE_SIZE} bytes equal")
    return hashlib.sha256(load).hexdigest()


def run_tool(command: list[str], log: Path) -> None:
    result = subprocess.run(command, cwd=OUTPUT, capture_output=True, text=True,
                            timeout=300, check=False)
    log.write_text(result.stdout + result.stderr, encoding="utf-8")
    if result.returncode:
        raise ValueError(f"{Path(command[0]).name} failed; see {log}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("boot", type=Path)
    parser.add_argument("--assembler", type=Path, required=True)
    parser.add_argument("--linker", type=Path, required=True)
    args = parser.parse_args()
    target = json.loads((ROOT / "config/target.json").read_text(encoding="utf-8"))
    check_tool(args.assembler, ASSEMBLER_SHA256)
    check_tool(args.linker, LINKER_SHA256)
    words = text_words(args.boot, target["boot_sha256"])
    assembly, link_script, stats = render_assembly(words)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    (OUTPUT / "boot_text.s").write_text(assembly, encoding="ascii", newline="\n")
    (OUTPUT / "boot_text.ld").write_text(link_script, encoding="ascii", newline="\n")
    run_tool([str(args.assembler.resolve()), "-o", "boot_text.o", "boot_text.s"],
             OUTPUT / "assembler.log")
    run_tool([str(args.linker.resolve()), "-T", "boot_text.ld", "-o",
              "boot_text.elf", "boot_text.o"], OUTPUT / "linker.log")
    rebuilt = OUTPUT / "boot_text.elf"
    section = next(item for item in inspect_elf(rebuilt)["sections"] if item["name"] == ".text")
    if section["size"] != TEXT_SIZE:
        raise ValueError(f"linked .text size {section['size']} differs from {TEXT_SIZE}")
    exact, equal_count, digest = compare(args.boot, rebuilt, TEXT_START,
                                         TEXT_SIZE, target["boot_sha256"])
    if not exact:
        raise ValueError(f"boot .text differs: {equal_count}/{TEXT_SIZE} bytes equal")
    data_source, full_script = render_data(args.boot)
    (OUTPUT / "boot_data.s").write_text(data_source, encoding="ascii", newline="\n")
    (OUTPUT / "boot_load.ld").write_text(full_script, encoding="ascii", newline="\n")
    run_tool([str(args.assembler.resolve()), "-o", "boot_data.o", "boot_data.s"],
             OUTPUT / "data_assembler.log")
    run_tool([str(args.linker.resolve()), "-T", "boot_load.ld", "-o",
              "boot_load.elf", "boot_text.o", "boot_data.o"], OUTPUT / "load_linker.log")
    load_digest = verify_load_image(args.boot, OUTPUT / "boot_load.elf")
    print(f"boot .text: {equal_count}/{TEXT_SIZE} bytes exact; SHA-256 {digest}")
    print(f"boot file-backed load: {LOAD_FILE_SIZE}/{LOAD_FILE_SIZE} bytes exact; "
          f"SHA-256 {load_digest} (non-code sections copied from pinned input)")
    print("private assembly: " + ", ".join(f"{key}={value}" for key, value in stats.items()))


if __name__ == "__main__":
    main()
