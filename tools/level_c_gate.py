#!/usr/bin/env python3
"""Rebuild accepted shared-level and frontend C at their exact SNR2 placements.

The two additional C sources are compiler controls only. All objects, linker
outputs and reconstructed modules remain private under ignored build/.
"""

from __future__ import annotations

import argparse
import csv
import json
import re
import shutil
import struct
from collections import defaultdict
from pathlib import Path
from c_source_policy import require_c_source

import cflags
from boot_symbols import read_boot
from compile_boot_trial import digest, normalized_digest, require_private_output, run
from disc import IsoDisc, verify_disc
from elf import inspect_elf, read_global_functions
from level_body_link import (BodyLinkError, defined_functions, read_object,
                             resolve_symbols)
from level_program_gate import MEASURED_LOADS, replace_range, sha
from r5900_assembly import LINKER_SHA256, check_tool, run_tool
from rel import (HEADER, RELOCATION, SYMBOL, iter_packed_relocations,
                 unpack_relocation)
from relocate import relocate_module
from snr2_assembly import CODE_START, pinned_modules

ROOT = Path(__file__).resolve().parent.parent
PROFILE = ROOT / "config/levels/compiler_trial.json"
BASE_PROFILE = ROOT / "config/boot/compiler_trial.json"
BODIES = ROOT / "config/levels/bodies.tsv"
OUTPUT = ROOT / "build/level-c-gate"
REPORT = OUTPUT / "report.json"
WORD = struct.Struct("<I")
BODY_HEADER = ["module", "offset", "size", "source", "source_sha256_lf",
               "object_sha256", "profile", "as"]
BODY_PROFILES = ("pinned", "gnu-ee-trial")
BODY_ASSEMBLER = "gnu-ee-trial"
BODY_PREFIX = "src/levels/bodies/"
SHARED_0100 = "src/levels/shared/func_00000100.c"


def profile_and_sources(cpp: Path, cc1: Path, gnu_as: Path) -> tuple[dict, list[dict]]:
    profile = json.loads(PROFILE.read_text(encoding="utf-8"))
    base = json.loads(BASE_PROFILE.read_text(encoding="utf-8"))
    accepted = profile["accepted"]
    controls = profile["provisional_controls"]
    additional = profile["additional_accepted"]
    frontend = profile["frontend_accepted"]
    if (profile["status"] != "qualified_two_shared_functions_and_frontend_only"
            or profile["base_profile"] != "config/boot/compiler_trial.json"
            or base["status"] != "qualified_boot_only"
            or accepted["source"] != "src/levels/shared/func_00000100.c"
            or accepted["offset"] != 0x100 or accepted["body_bytes"] != 8
            or additional["source"] !=
            "src/levels/shared/func_shared_zero_buffer.c"
            or additional["body_bytes"] != 72
            or len(additional["placements"]) != 20
            or frontend["source"] != "src/levels/frontend/func_00002F80.c"
            or frontend["module"] != "FRONTEND.REL"
            or frontend["offset"] != 0x2F80
            or frontend["body_bytes"] != 476
            or [row["source"] for row in controls] != [
                "nonmatching/levels/func_00000190.c",
                "nonmatching/levels/func_00002CD8.c"]
            or base["flags"] != {"cpp": [], "cc1": ["-quiet", "-O2", "-G0"],
                                   "as": []}):
        raise ValueError("level C trial scope or compiler flags changed")
    for label, path in (("cpp", cpp), ("cc1", cc1), ("as", gnu_as)):
        if digest(path) != base["tools"][f"{label}_sha256"]:
            raise ValueError(f"{label} differs from pinned RAC5 compiler trial")
    for row in (accepted, additional, frontend, *controls):
        source = ROOT / row["source"]
        if normalized_digest(source) != row["source_sha256_lf"]:
            raise ValueError(f"level C source differs from measured trial: {source.name}")
    return profile, [accepted, additional, frontend, *controls]


def compile_sources(profile: dict, sources: list[dict], cpp: Path, cc1: Path,
                    gnu_as: Path, output_dir: Path) -> None:
    output = require_private_output(output_dir)
    output.mkdir(parents=True, exist_ok=True)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    flags = json.loads(BASE_PROFILE.read_text(encoding="utf-8"))["flags"]
    per_source = cflags.load()
    for row in sources:
        source = ROOT / row["source"]
        require_c_source(source.read_text(encoding="utf-8"), row["source"])
        stem = source.stem
        (output / source.name).write_bytes(source.read_bytes())
        run([str(cpp.resolve()), source.name], output, output / f"{stem}.cpp.log",
            output / f"{stem}.i")
        require_c_source((output / f"{stem}.i").read_text(encoding="utf-8"),
                         f"{row['source']} preprocessed input")
        entry = cflags.for_source(per_source, source)
        if not entry.pinned:
            raise ValueError(f"level C source is routed to {entry.compiler}, which "
                             f"the level trial does not pin: {row['source']}")
        if not entry.assembler_pinned:
            raise ValueError(f"level C source is routed to the {entry.assembler} "
                             f"assembler, which the level trial does not pin: "
                             f"{row['source']}")
        run([str(cc1.resolve()), *flags["cc1"], *entry.flags,
             f"{stem}.i", "-o", f"{stem}.s"],
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
    if (stem == "func_00002F80" and
            read_global_functions(elf).get(stem) != (0x2F80, 476)):
        raise ValueError("FRONTEND C body has no complete owned function symbol")
    data = elf.read_bytes()
    return data[section["file_offset"]:section["file_offset"] + section["size"]]


def module_symbols(source: bytes) -> tuple[dict[str, int], dict[str, int]]:
    """Return the SNR2 module's (imports, exports) by name.

    Import symbols carry address 0 in the table; every other declared symbol is
    an export whose value is its module-relative address.
    """
    head = HEADER.unpack_from(source)
    imports: dict[str, int] = {}
    exports: dict[str, int] = {}
    for index in range(head[4]):
        name_at, address, _aux, _kind, _flags = SYMBOL.unpack_from(
            source, head[3] + index * SYMBOL.size)
        end = source.index(b"\0", name_at)
        name = source[name_at:end].decode("ascii", "replace")
        if not name:
            continue
        if address:
            exports.setdefault(name, address)
        else:
            imports.setdefault(name, 0)
    return imports, exports


def read_bodies(path: Path, known: dict[str, str],
                ends: dict[str, int]) -> list[dict]:
    """Read and validate ``config/levels/bodies.tsv``."""
    with path.open(encoding="utf-8", newline="") as file:
        reader = csv.DictReader((line for line in file if not line.startswith("#")),
                                delimiter="\t")
        if reader.fieldnames != BODY_HEADER:
            raise ValueError(f"{path.name}: header differs from the documented schema")
        rows: list[dict] = []
        for number, raw in enumerate(reader, 2):
            module = raw["module"]
            if module not in known:
                raise ValueError(f"{path.name}:{number}: unknown module {module}")
            try:
                offset, size = int(raw["offset"], 0), int(raw["size"])
            except ValueError as error:
                raise ValueError(f"{path.name}:{number}: bad offset or size") from error
            if (offset < CODE_START or size <= 0 or size % 4
                    or offset + size > ends[module]):
                raise ValueError(f"{path.name}:{number}: placement outside the module code")
            source = raw["source"].replace("\\", "/")
            if not (source.startswith(BODY_PREFIX) or source == SHARED_0100):
                raise ValueError(f"{path.name}:{number}: source outside the level body tree")
            if raw["profile"] not in BODY_PROFILES:
                raise ValueError(f"{path.name}:{number}: unknown profile {raw['profile']}")
            if raw["as"] != BODY_ASSEMBLER:
                raise ValueError(f"{path.name}:{number}: assembler is not {BODY_ASSEMBLER}")
            for key in ("source_sha256_lf", "object_sha256"):
                if re.fullmatch(r"[0-9a-f]{64}", raw[key]) is None:
                    raise ValueError(f"{path.name}:{number}: {key} is not 64 hex digits")
            rows.append({"module": module, "offset": offset, "size": size,
                         "source": source, "source_sha256_lf": raw["source_sha256_lf"],
                         "object_sha256": raw["object_sha256"],
                         "profile": raw["profile"], "as": raw["as"]})
    seen: set[tuple[str, int]] = set()
    spans: dict[str, list[tuple[int, int, str]]] = defaultdict(list)
    by_source: dict[str, dict] = {}
    for row in rows:
        key = (row["module"], row["offset"])
        if key in seen:
            raise ValueError(f"{path.name}: duplicate placement {key}")
        seen.add(key)
        spans[row["module"]].append((row["offset"], row["offset"] + row["size"],
                                      row["source"]))
        prior = by_source.setdefault(row["source"], row)
        if (prior["profile"] != row["profile"]
                or prior["source_sha256_lf"] != row["source_sha256_lf"]
                or prior["object_sha256"] != row["object_sha256"]
                or prior["size"] != row["size"]):
            raise ValueError(f"{path.name}: source columns disagree: {row['source']}")
    for module, items in spans.items():
        items.sort()
        for left, right in zip(items, items[1:]):
            if left[1] > right[0]:
                raise ValueError(f"{path.name}: overlapping placements in {module}")
    return rows


def extra_cc1_paths(items: list[str]) -> dict[str, Path]:
    """Parse repeated ``--extra-cc1 NAME=PATH`` arguments."""
    table: dict[str, Path] = {}
    for item in items:
        name, separator, value = item.partition("=")
        if not separator or not name or not value:
            raise ValueError(f"--extra-cc1 expects NAME=PATH, got {item!r}")
        if name in table:
            raise ValueError(f"duplicate --extra-cc1 selector: {name}")
        table[name] = Path(value)
    return table


def compile_body_sources(rows: list[dict], args, extra_cc1: dict[str, Path],
                         base_profile: dict) -> dict[str, tuple[Path, dict, str]]:
    """Compile one object per bodies.tsv source and verify its two hashes."""
    output = require_private_output(args.output_dir)
    output.mkdir(parents=True, exist_ok=True)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    flags = base_profile["flags"]["cc1"]
    objects: dict[str, tuple[Path, dict, str]] = {}
    by_source = {row["source"]: row for row in rows}
    for source_path, row in sorted(by_source.items()):
        source = ROOT / source_path
        if not source.is_file():
            raise ValueError(f"level body source is missing: {source_path}")
        require_c_source(source.read_text(encoding="utf-8"), source_path)
        if (not args.refresh_bodies
                and normalized_digest(source) != row["source_sha256_lf"]):
            raise ValueError(f"level body source differs from bodies.tsv: {source_path}")
        profile = row["profile"]
        cc1 = args.cc1 if profile == "pinned" else extra_cc1.get(profile)
        if cc1 is None:
            raise ValueError(f"profile {profile} needs --extra-cc1 {profile}=PATH")
        work = output / "bodies" / source.name
        work.mkdir(parents=True, exist_ok=True)
        (work / source.name).write_bytes(source.read_bytes())
        stem = source.stem
        run([str(args.cpp.resolve()), source.name], work, work / f"{stem}.cpp.log",
            work / f"{stem}.i")
        require_c_source((work / f"{stem}.i").read_text(encoding="utf-8"),
                         f"{source_path} preprocessed input")
        run([str(cc1.resolve()), *flags, f"{stem}.i", "-o", f"{stem}.s"],
            work, work / f"{stem}.cc1.log")
        run([str(args.gnu_as.resolve()), "-o", f"{stem}.o", f"{stem}.s"],
            work, work / f"{stem}.as.log")
        obj = work / f"{stem}.o"
        if not any(value == 0 for value, _size
                   in defined_functions(read_object(obj)).values()):
            raise ValueError(f"level body has no global function at offset 0: {source_path}")
        object_digest = digest(obj)
        if not args.refresh_bodies and object_digest != row["object_sha256"]:
            raise ValueError(f"level body object differs from bodies.tsv: {source_path}")
        published = OUTPUT / f"body_{stem}.o"
        shutil.copyfile(obj, published)
        objects[source_path] = (published, read_object(published), object_digest)
    return objects


def link_level_body(row: dict, obj: Path, mapping: dict[str, int],
                    linker: Path) -> bytes:
    """Link one body at its placement and return the linked ``.text`` bytes."""
    name = f"body_{row['module'].replace('.', '_')}_{row['offset']:06X}"
    symbols = "\n".join(f"{symbol} = 0x{value:08X};"
                        for symbol, value in sorted(mapping.items()))
    script = (f"{symbols}\nSECTIONS {{ . = 0x{row['offset']:08X}; "
              f".text : {{ {obj.name}(.text) }} }}\n")
    (OUTPUT / f"{name}.ld").write_text(script, encoding="ascii", newline="\n")
    run_tool([str(linker.resolve()), "-T", f"{name}.ld", "-o", f"{name}.elf",
              obj.name], OUTPUT, OUTPUT / f"{name}.link.log")
    elf = OUTPUT / f"{name}.elf"
    section = next(item for item in inspect_elf(elf)["sections"]
                   if item["name"] == ".text")
    if (int(section["virtual_address"], 16) != row["offset"]
            or section["size"] != row["size"]):
        raise ValueError(f"linked level body has wrong offset or size: {name}")
    data = elf.read_bytes()
    return data[section["file_offset"]:section["file_offset"] + section["size"]]


def place_body(rebuilt: bytes, body: bytes, start: int, end: int,
               claimed: list[tuple[int, int]]) -> bytes:
    """Place a proved body, allowing an overlap only when the bytes agree."""
    for left, right in claimed:
        if start < right and left < end:
            if rebuilt[start:end] != body:
                raise ValueError(f"overlapping level bodies differ at 0x{start:06X}")
            return rebuilt
    claimed.append((start, end))
    return replace_range(rebuilt, body, start, end)


def write_bodies(rows: list[dict],
                 objects: dict[str, tuple[Path, dict, str]]) -> None:
    """Rewrite the two hash columns after a full, proved pass."""
    source_sha = {row["source"]: normalized_digest(ROOT / row["source"])
                  for row in rows}
    object_sha = {source: value[2] for source, value in objects.items()}
    lines = BODIES.read_text(encoding="utf-8").splitlines()
    output = []
    for line in lines:
        if not line or line.startswith("#") or line.startswith("module\t"):
            output.append(line)
            continue
        fields = line.split("\t")
        fields[4] = source_sha[fields[3]]
        fields[5] = object_sha[fields[3]]
        output.append("\t".join(fields))
    BODIES.write_text("\n".join(output) + "\n", encoding="utf-8", newline="\n")


def shared_buffer_targets(module: str, source: bytes, start: int,
                          code_end: int) -> tuple[int, int, tuple[bytes, bytes]]:
    """Check the reviewed body, import and uniquely identifiable data objects."""
    import rabbitizer

    end = start + 72
    head = HEADER.unpack_from(source)
    if (not CODE_START <= start < end <= code_end
            or source[start + 0x40:start + 0x44] != WORD.pack(0x03E00008)
            or source[start + 0x34:start + 0x38] != WORD.pack(0x0C000000)):
        raise ValueError(f"{module} shared buffer body boundary changed")
    local = {row.site: row for row in iter_packed_relocations(
        source, head[13], head[1]) if start <= row.site < end}
    if {(site - start, row.kind,
         row.low_site - start if row.low_site is not None else None)
            for site, row in local.items()} != {
                (4, 1, 16), (12, 1, 24), (16, 0, None), (24, 0, None)}:
        raise ValueError(f"{module} shared buffer local fixups changed")
    named = []
    for i in range(head[2]):
        site, kind, index, addend = unpack_relocation(
            source, head[1] + i * RELOCATION.size)
        if start <= site < end:
            name_at, address, *_ = SYMBOL.unpack_from(
                source, head[3] + index * SYMBOL.size)
            name = source[name_at:source.index(b"\0", name_at)].decode("ascii")
            named.append((site - start, kind, name, address, addend))
    if named != [(52, 4, "memset", 0, 0)]:
        raise ValueError(f"{module} shared buffer imported call changed")

    # A label at the expected start is only a function boundary if no direct
    # control-flow edge enters its interior.
    calls = 0
    for site in range(CODE_START, code_end, 4):
        word = WORD.unpack_from(source, site)[0]
        if word >> 26 in (2, 3):
            target = (word & 0x03FFFFFF) << 2
            if start < target < end:
                raise ValueError(f"{module} jump enters shared buffer body")
            calls += word >> 26 == 3 and target == start
        if max(CODE_START, start - 0x20000) <= site < min(
                code_end, end + 0x20000):
            insn = rabbitizer.Instruction(word, site,
                                          rabbitizer.InstrCategory.R5900)
            if insn.isBranch() and start < insn.getBranchVramGeneric() < end:
                raise ValueError(f"{module} branch enters shared buffer body")
    if not calls:
        raise ValueError(f"{module} shared buffer has no direct caller")

    targets = []
    signatures = []
    for site in (start + 12, start + 4):
        low_site = local[site].low_site
        high = WORD.unpack_from(source, site)[0] & 0xFFFF
        low = WORD.unpack_from(source, low_site)[0] & 0xFFFF
        if low & 0x8000:
            low -= 0x10000
        target = (high << 16) + low
        if not code_end <= target <= head[1] - 64:
            raise ValueError(f"{module} shared buffer data target outside payload")
        signature = source[target:target + 64]
        if (source.find(signature, code_end, head[1]) != target
                or source.find(signature, target + 1, head[1]) >= 0):
            raise ValueError(f"{module} shared buffer data target is not unique")
        targets.append(target)
        signatures.append(signature)
    if targets[0] == targets[1]:
        raise ValueError(f"{module} shared buffer data targets collapsed")
    return targets[0], targets[1], (signatures[0], signatures[1])


def linked_shared_buffer(row: dict, module: str, start: int,
                         targets: tuple[int, int], linker: Path) -> bytes:
    stem = Path(row["source"]).stem
    name = f"{stem}_{module}"
    script = (f"level_data_a = 0x{targets[0]:08X};\n"
              f"level_data_b = 0x{targets[1]:08X};\nmemset = 0;\n"
              f"SECTIONS {{ . = 0x{start:08X}; "
              f".text : {{ {stem}.o(.text) }} }}\n")
    (OUTPUT / f"{name}.ld").write_text(script, encoding="ascii", newline="\n")
    run_tool([str(linker.resolve()), "-T", f"{name}.ld", "-o",
              f"{name}.elf", f"{stem}.o"], OUTPUT, OUTPUT / f"{name}.link.log")
    elf = OUTPUT / f"{name}.elf"
    section = next(item for item in inspect_elf(elf)["sections"]
                   if item["name"] == ".text")
    if (int(section["virtual_address"], 16) != start
            or section["size"] != row["body_bytes"]):
        raise ValueError(f"{module} shared buffer linked body size or site differs")
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


def frontend_boundary(source: bytes, code_end: int) -> int:
    """Guard the complete 0x2F80 frontend body and its four direct callers."""
    import rabbitizer

    start, end = 0x2F80, 0x315C
    if (rabbitizer.__version__ != "1.16.2" or end > code_end
            or WORD.unpack_from(source, end - 8)[0] != 0x03E00008):
        raise ValueError("FRONTEND New Game C boundary differs")
    head = HEADER.unpack_from(source)
    named = []
    for index in range(head[2]):
        site, kind, symbol_index, addend = unpack_relocation(
            source, head[1] + index * RELOCATION.size)
        if start <= site < end:
            name_at, address, *_ = SYMBOL.unpack_from(
                source, head[3] + symbol_index * SYMBOL.size)
            name = source[name_at:source.index(b"\0", name_at)].decode("ascii")
            named.append((site - start, kind, name, address, addend))
    if named != [
            (0x4C, 4, "strncpy", 0, 0),
            (0x60, 4, "memset", 0, 0),
            (0x74, 4, "strncpy", 0, 0),
            (0xE4, 4, "SND_GetGlobalMusicVolume__Fv", 0, 0),
            (0x1B0, 5, "MCP_WideScreenMaster", 0, 0),
            (0x1B8, 6, "MCP_WideScreenMaster", 0, 0)]:
        raise ValueError("FRONTEND New Game imports differ")
    local = [row for row in iter_packed_relocations(source, head[13], head[1])
             if start <= row.site < end]
    if (len(local) != 39 or local[0].site != start + 12
            or local[0].kind != 1 or local[0].low_site != start + 36):
        raise ValueError("FRONTEND New Game local fixups differ")

    callers = 0
    for site in range(CODE_START, code_end, 4):
        word = WORD.unpack_from(source, site)[0]
        if word >> 26 in (2, 3):
            target = (word & 0x03FFFFFF) << 2
            if not start <= site < end and start < target < end:
                raise ValueError("direct jump enters FRONTEND C body interior")
            callers += not start <= site < end and word >> 26 == 3 and target == start
        if not start <= site < end:
            instruction = rabbitizer.Instruction(word, site,
                                                rabbitizer.InstrCategory.R5900)
            if instruction.isBranch() and start < instruction.getBranchVramGeneric() < end:
                raise ValueError("branch enters FRONTEND C body interior")
    if callers != 4:
        raise ValueError("FRONTEND New Game callers changed")
    return callers


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
    parser.add_argument("--extra-cc1", action="append", default=[],
                        metavar="NAME=PATH",
                        help="extra pinned cc1 by profile selector (gnu-ee-trial)")
    parser.add_argument("--refresh-bodies", action="store_true",
                        help="rewrite config/levels/bodies.tsv hashes after a full pass")
    args = parser.parse_args()
    OUTPUT.mkdir(parents=True, exist_ok=True)
    REPORT.write_text(json.dumps({"status": "incomplete", "counted_matches": 0},
                                 indent=2) + "\n", encoding="utf-8", newline="\n")
    check_tool(args.linker, LINKER_SHA256)
    profile, sources = profile_and_sources(args.cpp, args.cc1, args.gnu_as)
    base_profile = json.loads(BASE_PROFILE.read_text(encoding="utf-8"))
    extra_cc1 = extra_cc1_paths(args.extra_cc1)
    for selector, path in extra_cc1.items():
        entry = base_profile.get("extra_compilers", {}).get(selector)
        if entry is None:
            raise ValueError(f"unknown --extra-cc1 selector: {selector}")
        if digest(path) != entry["tools"]["cc1_sha256"]:
            raise ValueError(f"{selector} cc1 differs from the pinned compiler trial")
    compile_sources(profile, sources, args.cpp, args.cc1, args.gnu_as,
                    args.output_dir)
    bodies = {Path(row["source"]).stem: linked_body(row, args.linker)
              for row in sources if "offset" in row}
    known, ends = pinned_modules(), code_ends()
    body_rows = read_bodies(BODIES, known, ends)
    body_objects = compile_body_sources(body_rows, args, extra_cc1, base_profile)
    bodies_by_module: dict[str, list[dict]] = defaultdict(list)
    for row in body_rows:
        bodies_by_module[row["module"]].append(row)
    for rows in bodies_by_module.values():
        rows.sort(key=lambda row: row["offset"])
    target = json.loads((ROOT / "config/target.json").read_text(encoding="utf-8"))
    boot, boot_symbols = read_boot(args.boot)
    if boot["sha256"] != target["boot_sha256"]:
        raise ValueError("boot differs from pinned USA target")
    addresses = {symbol.name: symbol.address for symbol in boot_symbols}
    names = [name for name in sorted(known) if name.startswith("LEVEL_")]
    additional = profile["additional_accepted"]
    if len(names) != 20 or set(additional["placements"]) != set(names):
        raise ValueError("expected twenty pinned numbered level modules")
    matched = []
    data_signatures = None
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
            start = additional["placements"][name]
            target_a, target_b, signatures = shared_buffer_targets(
                name, source, start, ends[name])
            if data_signatures is None:
                data_signatures = signatures
            elif signatures != data_signatures:
                raise ValueError(f"{name} shared buffer data identities differ")
            buffer_body = linked_shared_buffer(
                additional, name, start, (target_a, target_b), args.linker)
            if buffer_body != source[start:start + 72]:
                raise ValueError(f"shared buffer C function differs in {name}")
            rebuilt = replace_range(rebuilt, buffer_body, start, start + 72)
            if name == "LEVEL_01.REL":
                control = bodies["func_00000190"]
                if control != source[0x190:0x190 + len(control)]:
                    raise ValueError("LEVEL_01 C array-get control differs")
                rebuilt = replace_range(rebuilt, control, 0x190, 0x190 + len(control))
            claimed = [(0x100, 0x108), (start, start + 72)]
            if name == "LEVEL_01.REL":
                claimed.append((0x190, 0x190 + len(control)))
            for row in bodies_by_module.get(name, []):
                obj_path, obj, _object_sha = body_objects[row["source"]]
                try:
                    mapping, _origin = resolve_symbols(obj, *module_symbols(source))
                except BodyLinkError as error:
                    raise ValueError(f"{name} 0x{row['offset']:06X}: {error}") from error
                placed = link_level_body(row, obj_path, mapping, args.linker)
                if placed != source[row["offset"]:row["offset"] + row["size"]]:
                    raise ValueError(
                        f"{name} level body differs at 0x{row['offset']:06X}")
                rebuilt = place_body(rebuilt, placed, row["offset"],
                                     row["offset"] + row["size"], claimed)
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
                            "body_bytes": len(body),
                            "shared_buffer_offset": start,
                            "shared_buffer_bytes": len(buffer_body)})
        frontend = disc.file_bytes("LVL/FRONTEND.REL")
        if sha(frontend) != known["FRONTEND.REL"]:
            raise ValueError("FRONTEND differs from pinned USA module")
        callers = frontend_boundary(frontend, ends["FRONTEND.REL"])
        control = bodies["func_00002CD8"]
        if control != frontend[0x2CD8:0x2CD8 + len(control)]:
            raise ValueError("FRONTEND C store control differs")
        candidate = replace_range(frontend, control, 0x2CD8, 0x2CD8 + len(control))
        frontend_row = profile["frontend_accepted"]
        frontend_body = bodies["func_00002F80"]
        if frontend_body != frontend[0x2F80:0x2F80 + 476]:
            raise ValueError("FRONTEND New Game C body differs")
        candidate = replace_range(candidate, frontend_body, 0x2F80, 0x2F80 + 476)
        claimed = [(0x2CD8, 0x2CD8 + len(control)), (0x2F80, 0x2F80 + 476)]
        for row in bodies_by_module.get("FRONTEND.REL", []):
            obj_path, obj, _object_sha = body_objects[row["source"]]
            try:
                mapping, _origin = resolve_symbols(obj, *module_symbols(frontend))
            except BodyLinkError as error:
                raise ValueError(
                    f"FRONTEND.REL 0x{row['offset']:06X}: {error}") from error
            placed = link_level_body(row, obj_path, mapping, args.linker)
            if placed != frontend[row["offset"]:row["offset"] + row["size"]]:
                raise ValueError(
                    f"FRONTEND.REL level body differs at 0x{row['offset']:06X}")
            candidate = place_body(candidate, placed, row["offset"],
                                   row["offset"] + row["size"], claimed)
        if sha(candidate) != known["FRONTEND.REL"]:
            raise ValueError("FRONTEND complete control module differs")
        base, load_sha, missing = MEASURED_LOADS["FRONTEND.REL"]
        relocated, unresolved = relocate_module("LVL/FRONTEND.REL", candidate,
                                                 base, addresses)
        if sha(relocated) != load_sha or unresolved != missing:
            raise ValueError("FRONTEND C-linked relocated image differs")
    body_sizes: dict[str, int] = {}
    for row in body_rows:
        body_sizes.setdefault(row["source"], row["size"])
    body_summary = {
        "table": "config/levels/bodies.tsv",
        "table_sha256": digest(BODIES),
        "placements": len(body_rows),
        "unique_sources": len(body_sizes),
        "placement_bytes": sum(row["size"] for row in body_rows),
        "unique_source_bytes": sum(body_sizes.values()),
        "profiles": {selector: sum(1 for row in body_rows
                                   if row["profile"] == selector)
                     for selector in sorted({row["profile"] for row in body_rows})},
        "cc1_sha256": {
            "pinned": base_profile["tools"]["cc1_sha256"],
            "gnu-ee-trial":
                base_profile["extra_compilers"]["gnu-ee-trial"]["tools"]["cc1_sha256"]},
        "modules": sorted(bodies_by_module),
        "module_sha256": {module: known[module]
                          for module in sorted(bodies_by_module)},
    }
    if args.refresh_bodies:
        write_bodies(body_rows, body_objects)
        body_summary["table_sha256"] = digest(BODIES)
    report = {"status": "passed_shared_frontend_and_level_bodies",
              "profile": profile["id"],
              "accepted_functions": ["func_00000100", "func_shared_zero_buffer",
                                     "func_00002F80"],
              "counted_matches": 3,
              "unique_body_bytes": 556, "matched_placement_bytes": 2076,
              "frontend_accepted": {"module": "FRONTEND.REL",
                                    "offset": frontend_row["offset"],
                                    "body_bytes": len(frontend_body),
                                    "direct_callers": callers,
                                    "module_sha256": known["FRONTEND.REL"]},
              "placements": matched,
              "provisional_controls": ["LEVEL_01.REL:0x190:24",
                                       "FRONTEND.REL:0x2CD8:12"],
              "runtime_measured_placements": ["FRONTEND.REL", "LEVEL_01.REL"],
              "bodies": body_summary}
    REPORT.write_text(json.dumps(report, indent=2) + "\n",
                      encoding="utf-8", newline="\n")
    print("shared C: 8+72 bytes at all 20 level placements; "
          "FRONTEND New Game: 476 bytes; 21/21 complete modules exact")
    print(f"level bodies: {body_summary['placements']} placements in "
          f"{body_summary['unique_sources']} sources, "
          f"{body_summary['placement_bytes']} placement bytes; "
          "21/21 complete modules exact")


if __name__ == "__main__":
    main()
