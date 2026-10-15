#!/usr/bin/env python3
"""Link nineteen provisional C functions into the pinned whole-boot witness.

This is not a qualified compiler profile or a counted match. The caller
compiles the hash-pinned C sources with privately held tools; all generated
assembly, non-code data and linked binaries remain under ignored build/.
"""

from __future__ import annotations

import argparse
import hashlib
import json
from dataclasses import dataclass
from pathlib import Path

from boot_assembly import (DATA_SECTIONS, ROOT, TEXT_SIZE, TEXT_START,
                           render_data, text_words, verify_load_image)
from compare_boot_slice import compare
from elf import inspect_elf
from r5900_assembly import (ASSEMBLER_SHA256, LINKER_SHA256, check_tool,
                            render_assembly, run_tool)

OUTPUT = ROOT / "build/boot-c-campaign"
BSS_START = 0x01F28100
BSS_SIZE = 817644
TRAIL_SIZE = 20
PREFIX_SIZE = 128


@dataclass(frozen=True)
class Replacement:
    name: str
    start: int
    end: int
    source_sha256: str
    object_sha256: str


REPLACEMENTS = (
    Replacement("memcard_busy", 0x01E627C0, 0x01E627D0,
                "a9eb80c64d794873ec06689b36c7fa204263c295e5a33077659cbb1c10e02194",
                "415800c82c13e302c09de6aa773a68f82414410e28375e6b726db591fbdeb674"),
    Replacement("memcard_get_widescreen", 0x01E62838, 0x01E62848,
                "8f28355b23090cd3dd8ee6c229537e39656f31e93a1b93da33c243fc87b0e412",
                "7c3312adb70bd342d68cc99bea1d6c0ab39c88bafc2d024e46c70b4495b96518"),
    Replacement("mcpi_msgboxes", 0x01E64FE8, 0x01E65028,
                "31bf7c03b6a9baa2d898b73374755803a4c96ebe51384fc1e91b409ad777530d",
                "704a89a04fd21a851880498cacbf16c9b12db034562877fb70001315a238ee77"),
    Replacement("hig_io_read", 0x01E65458, 0x01E65478,
                "0e06265ef549c2903522a0ab5d83d3432072cdf11d3b71cc782362ea06daaa44",
                "28e487ec02cde2078f7cce27a15e8c4d6cac5afbdd043acd97ead3ce85892338"),
    Replacement("mcpfont_string_length", 0x01E67978, 0x01E679B8,
                "a3df436558c6b02fea72081177ad3ffab12d0bc54fe7a78225d02a8bc05858fb",
                "91227c38a9efa7c0e60f52c04006b1b7cce81750bd2931983d083034c54c309a"),
    Replacement("mcp_string_length", 0x01E67EE8, 0x01E67F28,
                "7c68506e6dafc74864bd906ca143f604d261b14ee3c2a8f63ac930038792b99d",
                "8b227d0835ceb0a800ad6d444d10a72b57fa5b7e40ef83e0030841094b949159"),
    Replacement("camera_init", 0x01E68630, 0x01E68658,
                "0b9ffedec339205fbac3406d4538e24b3c08bd9be9a79fe76311caa8eefe9727",
                "d773349a8d1ea69bbbd3f8411de541b800218be352df0ac96eb548f6825be514"),
    Replacement("fast_mem_copy", 0x01E68EE0, 0x01E68F00,
                "0d9325b4bf6b215c9ae441d5bc93fccd172b164224a560cd502581e387251493",
                "aac626e0fe8af2b7a86a814660ba1d3a484112cecf98ffbb31a00be21efae4b2"),
    Replacement("mcptrans_is_complete", 0x01E68F00, 0x01E68F38,
                "2a62410fe1350c47670c328d786f94e3bf52a7591d6518abc09eaabf9abf1395",
                "864fb45fa04c102dcf1876ae5bd60350394c399c9d8c45c9c6a1f975ac2a8578"),
    Replacement("mcptrans_should_fade", 0x01E68F38, 0x01E68F48,
                "4936b0218c36ae8149534b556a956dcded9be2deb9a8a9bf2a93043a58cc004c",
                "b303d1d814262e42298e90bb6eee27c4800c221ad5c7529cf2ad1c40382e1241"),
    Replacement("rendereffect_reset", 0x01E7D450, 0x01E7D460,
                "42abab422e07697fdf38b35556a9e6b16d00604b720f2ac251e72eeb81d74617",
                "7f60b9dc41caff701d55b068d95c914c45f531337a3479a34b06a1ee8c877733"),
    Replacement("fog_preupdate", 0x01E7D4A8, 0x01E7D4E8,
                "97fb772301a839e09af0cadd9bc02968999593bf0dd7426e00bd53d03c51a45c",
                "c2cb485df80e2e548499a984b4d9aeb753393dd8a958069255e42190631fc0f1"),
    Replacement("buffer_cache_ptr", 0x01E82EC0, 0x01E82ED0,
                "defd1ec63d038655a7039fcc07dadf818693cb7c86e680dcd884f3fff3c67283",
                "41e12407502d86cb7ec946d291e12acef0910dcf3eee9e88600f82bd850c85b8"),
    Replacement("system_clear_color", 0x01E83DA0, 0x01E83DB0,
                "8d70bd39f035043115d053b5489bca472f0acd2e44178f750c749f35b7c4b186",
                "6c08c7141ca7fb34316247e2d202a3bb2056780af175d99168bbbfc2527522b5"),
    Replacement("anim_buffer_used", 0x01E8A1D0, 0x01E8A1E0,
                "ae74f8150b58f54fd47ff0dfd1f476b7c3461f11fef99a423e77e85af1b0bd90",
                "a7f6820679da1a705ad0776fd1808fa11220b8809d9a86b4794f9a947557fd72"),
    Replacement("snd_unlock_positional_array", 0x01E91708, 0x01E91720,
                "ad8186ecfbf318c89151b318e2b6cb826437f9a92da8a39fa78f1b385f539cd6",
                "cdd13809ebc7d72fd5469ffaa8802526e24cfe89f49d87ef39f58d38968a7f96"),
)

# Addresses measured in the existing one-function linker witnesses.
LINKER_SYMBOLS = (
    "busy_state = 0x01F4A654;",
    "wide_screen_from_memcard = 0x01F4A6A4;",
    "my_msg_box_id = 0x01EDC7D4;", "their_msg_box_id = 0x01EDC7D8;",
    "ps2fioRead = 0x01EBBBA0;",
    "camera_initialized = 0x01EDE334;", "CAMERA_Reset__Fv = 0x01E68658;",
    "memcpy = 0x01EC614C;",
    "transition_active = 0x01EF037D;", "completion_flag = 0x01EF037C;",
    "transition_state = 0x01F66C30;", "fade_flag = 0x01EF037E;",
    "render_effect_reset = 0x01EF1057;",
    "fog_entries = 0x01F70AE0;",
    "buffer_cache_ptr = 0x01EF57B0;", "clear_color = 0x01EF570C;",
    "animation_buffer_used_size = 0x01EF58F0;",
    "positional_lock = 0x01EF69B4;",
)


def check_inputs(objects_dir: Path) -> None:
    for item in REPLACEMENTS:
        source = ROOT / "nonmatching/boot" / f"{item.name}.c"
        normalized = source.read_text(encoding="utf-8").replace("\r\n", "\n")
        if hashlib.sha256(normalized.encode("utf-8")).hexdigest() != item.source_sha256:
            raise ValueError(f"{item.name} source differs from measured trial")
        obj = objects_dir / f"{item.name}.o"
        if hashlib.sha256(obj.read_bytes()).hexdigest() != item.object_sha256:
            raise ValueError(f"{item.name} object differs from measured GNU EE trial")


def split_assembly(assembly: str) -> tuple[str, str, list[str]]:
    """Remove C intervals while preserving external branch labels by address."""
    lines = assembly.splitlines()
    header = [".set noat", ".set noreorder", ".section .text",
              ".globl boot_text_start", "boot_text_start:"]
    if lines[:len(header)] != header:
        raise ValueError("boot assembly header differs from measured layout")
    if any(not TEXT_START + PREFIX_SIZE <= item.start < item.end <= TEXT_START + TEXT_SIZE
           or item.start % 8 or item.end % 8 for item in REPLACEMENTS):
        raise ValueError("C intervals lie outside aligned boot text")
    if any(left.end > right.start for left, right in zip(REPLACEMENTS, REPLACEMENTS[1:])):
        raise ValueError("C intervals overlap")
    prefix = [".set noat", ".set noreorder", ".section .text.align", ".align 7",
              ".globl boot_text_start", "boot_text_start:"]
    remainder = [".set noat", ".set noreorder"]
    address = TEXT_START
    current_segment = None
    skipped_labels: list[str] = []
    for line in lines[len(header):]:
        region = next((i for i, item in enumerate(REPLACEMENTS)
                       if item.start <= address < item.end), None)
        if region is None:
            if address < TEXT_START + PREFIX_SIZE:
                prefix.append(line)
            else:
                segment = sum(item.end <= address for item in REPLACEMENTS)
                if segment != current_segment:
                    remainder.append(f".section .text.seg{segment}")
                    current_segment = segment
                remainder.append(line)
        elif line.endswith(":"):
            label = line[:-1]
            if label != f"L_{address:08X}":
                raise ValueError(f"unexpected label inside C interval: {label}")
            skipped_labels.append(label)
        if line.startswith("    "):
            address += 4
    if (address != TEXT_START + TEXT_SIZE
            or sum(line.startswith("    ") for line in prefix) != PREFIX_SIZE // 4):
        raise ValueError("split assembly does not span measured boot text")
    return ("\n".join(prefix) + "\n", "\n".join(remainder) + "\n",
            skipped_labels)


def linker_script(skipped_labels: list[str]) -> str:
    parts = ["boot_prefix_align.o(.text.align)"]
    for index, item in enumerate(REPLACEMENTS):
        parts += [f"boot_split_multi.o(.text.seg{index})", f"{item.name}.o(.text)",
                  ". = ALIGN(8);"]
    parts.append(f"boot_split_multi.o(.text.seg{len(REPLACEMENTS)})")
    lines = [*LINKER_SYMBOLS,
             *(f"{label} = 0x{label[2:]};" for label in skipped_labels),
             "SECTIONS {", f"  . = 0x{TEXT_START:08X};",
             "  .text : { " + " ".join(parts) + " }"]
    for name, address, _size in DATA_SECTIONS:
        lines.append(f"  . = 0x{address:08X}; {name} : {{ boot_data.o({name}) }}")
    lines += [f"  . = 0x{BSS_START:08X}; .bss : {{ boot_bss.o(.bss) }}",
              "  .tail (NOLOAD) : { boot_tail.o(.tail) }", "}"]
    return "\n".join(lines) + "\n"


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("boot", type=Path)
    parser.add_argument("--objects-dir", type=Path, required=True)
    parser.add_argument("--assembler", type=Path, required=True)
    parser.add_argument("--linker", type=Path, required=True)
    args = parser.parse_args()
    check_tool(args.assembler, ASSEMBLER_SHA256)
    check_tool(args.linker, LINKER_SHA256)
    check_inputs(args.objects_dir)
    target = json.loads((ROOT / "config/target.json").read_text(encoding="utf-8"))
    words = text_words(args.boot, target["boot_sha256"])
    assembly, stats = render_assembly(words, TEXT_START, symbol="boot_text_start",
                                      raw_cop1_branches=True)
    if (stats["sqrt_s"] != 50 or stats["cop1_branch_words"] != 6
            or stats["zero_target_jumps"] or stats["instructions"] != TEXT_SIZE // 4):
        raise ValueError("rendered boot assembly differs from measured baseline")
    prefix, remainder, labels = split_assembly(assembly)
    data_source, _ = render_data(args.boot)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    for name, source in (("boot_prefix_align.s", prefix),
                         ("boot_split_multi.s", remainder),
                         ("boot_data.s", data_source),
                         ("boot_bss.s", f".section .bss\n.space {BSS_SIZE}\n"),
                         ("boot_tail.s", f'.section .tail,"aw",@nobits\n.space {TRAIL_SIZE}\n')):
        (OUTPUT / name).write_text(source, encoding="ascii", newline="\n")
    (OUTPUT / "boot_multi.ld").write_text(linker_script(labels),
                                           encoding="ascii", newline="\n")
    for item in REPLACEMENTS:
        (OUTPUT / f"{item.name}.o").write_bytes(
            (args.objects_dir / f"{item.name}.o").read_bytes())
    for stem in ("boot_prefix_align", "boot_split_multi", "boot_data",
                 "boot_bss", "boot_tail"):
        run_tool([str(args.assembler.resolve()), "-o", f"{stem}.o", f"{stem}.s"],
                 OUTPUT, OUTPUT / f"{stem}.log")
    run_tool([str(args.linker.resolve()), "-N", "-e", "0x01E62508",
              "-T", "boot_multi.ld", "-o",
              "boot_multi.elf", "boot_prefix_align.o", "boot_split_multi.o",
              *(f"{item.name}.o" for item in REPLACEMENTS),
              "boot_data.o", "boot_bss.o", "boot_tail.o"],
             OUTPUT, OUTPUT / "linker.log")
    candidate = OUTPUT / "boot_multi.elf"
    exact, count, digest = compare(args.boot, candidate, TEXT_START, TEXT_SIZE,
                                   target["boot_sha256"])
    if not exact:
        raise ValueError(f"C-linked boot text differs: {count}/{TEXT_SIZE} bytes equal")
    load_digest = verify_load_image(args.boot, candidate)
    reference = inspect_elf(args.boot)
    linked = inspect_elf(candidate)
    expected_program = next(item for item in reference["programs"] if item["type"] == 1)
    actual_program = next(item for item in linked["programs"] if item["type"] == 1)
    expected_raw = args.boot.read_bytes()[expected_program["file_offset"]:
                                          expected_program["file_offset"] + expected_program["file_size"]]
    actual_raw = candidate.read_bytes()[actual_program["file_offset"]:
                                        actual_program["file_offset"] + actual_program["file_size"]]
    expected_bss = next(item for item in reference["sections"] if item["name"] == ".bss")
    actual_bss = next(item for item in linked["sections"] if item["name"] == ".bss")
    tail = next(item for item in linked["sections"] if item["name"] == ".tail")
    if (linked["entry"] != reference["entry"]
            or actual_program != expected_program or actual_raw != expected_raw
            or actual_bss["virtual_address"] != expected_bss["virtual_address"]
            or actual_bss["size"] != expected_bss["size"] or actual_bss["type"] != 8
            or tail["type"] != 8 or tail["size"] != TRAIL_SIZE
            or int(tail["virtual_address"], 16) != BSS_START + BSS_SIZE):
        raise ValueError("C-linked entry/PT_LOAD/BSS layout or raw bytes differ from retail")
    print(f"C-linked boot .text: {count}/{TEXT_SIZE} exact; SHA-256 {digest}")
    print(f"C-linked raw PT_LOAD: {len(expected_raw)}/{len(expected_raw)} exact; "
          f"SHA-256 {load_digest}")
    print(f"ELF entry, PT_LOAD header and BSS: exact; {len(labels)} external code labels restored")
    print("Nineteen provisional C functions; no qualified compiler or counted match")


if __name__ == "__main__":
    main()
