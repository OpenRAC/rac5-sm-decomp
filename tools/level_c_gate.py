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
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from c_source_policy import require_c_source
from import_guard import check_import_call_identity, named_import_calls

import cflags
from boot_symbols import read_boot
from compile_boot_trial import digest, normalized_digest, require_private_output, run
from disc import IsoDisc, verify_disc
from elf import inspect_elf, read_global_functions
from level_body_link import (BodyLinkError, defined_functions, read_object,
                             resolve_symbols, undefined_symbols)
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
BODY_SOURCES = ROOT / "config/levels/body_sources.tsv"
LOCAL_LIBCALLS = ROOT / "config/levels/local_link_symbols.tsv"
OUTPUT = ROOT / "build/level-c-gate"
REPORT = OUTPUT / "report.json"
WORD = struct.Struct("<I")
BODY_HEADER = ["module", "offset", "size", "source"]
SOURCE_HEADER = ["source", "source_sha256_lf", "object_sha256", "profile", "as"]
BODY_PROFILES = ("pinned", "gnu-ee-trial", "gnu-ee-trial-divpad",
                 "gnu-ee-trial-divpad-blockmove", "sdk991111", "sdk991111sync")
BODY_ASSEMBLER = "gnu-ee-trial"
BODY_PREFIX = "src/levels/bodies/"
SHARED_0100 = "src/levels/shared/func_00000100.c"
LOCAL_LIBCALL_FORMAT = "# format: rac5-local-libcall-v1"
LOCAL_LIBCALL_HEADER = ["module", "source", "object_sha256", "symbol",
                        "target", "helper_size", "helper_sha256", "reloc_offsets"]
MULDI3_RELOC_OFFSETS = (0x110, 0x120, 0x130, 0x140)


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


def read_bodies(path: Path, sources_path: Path, known: dict[str, str],
                ends: dict[str, int]) -> list[dict]:
    """Read and validate the placement table and the source table it names.

    A placement row carries only what belongs to a placement: where the body
    sits and which source fills it.  The two hashes, the compiler profile and
    the assembler belong to the *source*, so they live once per source in
    ``config/levels/body_sources.tsv``; a source carried by hundreds of
    placements does not repeat them hundreds of times.
    """
    sources: dict[str, dict] = {}
    with sources_path.open(encoding="utf-8", newline="") as file:
        reader = csv.DictReader((line for line in file if not line.startswith("#")),
                                delimiter="\t")
        if reader.fieldnames != SOURCE_HEADER:
            raise ValueError(
                f"{sources_path.name}: header differs from the documented schema")
        for number, raw in enumerate(reader, 2):
            source = raw["source"].replace("\\", "/")
            if not (source.startswith(BODY_PREFIX) or source == SHARED_0100):
                raise ValueError(
                    f"{sources_path.name}:{number}: source outside the level body tree")
            if raw["profile"] not in BODY_PROFILES:
                raise ValueError(
                    f"{sources_path.name}:{number}: unknown profile {raw['profile']}")
            if raw["as"] != BODY_ASSEMBLER:
                raise ValueError(
                    f"{sources_path.name}:{number}: assembler is not {BODY_ASSEMBLER}")
            for key in ("source_sha256_lf", "object_sha256"):
                if re.fullmatch(r"[0-9a-f]{64}", raw[key]) is None:
                    raise ValueError(
                        f"{sources_path.name}:{number}: {key} is not 64 hex digits")
            if source in sources:
                raise ValueError(f"{sources_path.name}: duplicate source {source}")
            sources[source] = {"source": source,
                               "source_sha256_lf": raw["source_sha256_lf"],
                               "object_sha256": raw["object_sha256"],
                               "profile": raw["profile"], "as": raw["as"]}
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
            if source not in sources:
                raise ValueError(
                    f"{path.name}:{number}: source is not in {sources_path.name}")
            rows.append({"module": module, "offset": offset, "size": size,
                         **sources[source]})
    seen: set[tuple[str, int]] = set()
    spans: dict[str, list[tuple[int, int, str]]] = defaultdict(list)
    sizes: dict[str, int] = {}
    used: set[str] = set()
    for row in rows:
        key = (row["module"], row["offset"])
        if key in seen:
            raise ValueError(f"{path.name}: duplicate placement {key}")
        seen.add(key)
        spans[row["module"]].append((row["offset"], row["offset"] + row["size"],
                                      row["source"]))
        used.add(row["source"])
        prior = sizes.setdefault(row["source"], row["size"])
        if prior != row["size"]:
            raise ValueError(f"{path.name}: source sizes disagree: {row['source']}")
    for module, items in spans.items():
        items.sort()
        for left, right in zip(items, items[1:]):
            if left[1] > right[0]:
                raise ValueError(f"{path.name}: overlapping placements in {module}")
    for source in sorted(set(sources) - used):
        raise ValueError(f"{sources_path.name}: source is carried by no placement: {source}")
    return rows


def read_local_libcalls(path: Path, body_rows: list[dict]
                        ) -> dict[tuple[str, str], dict]:
    """Load reviewed module-local compiler targets; an empty table is valid."""
    accepted = {(row["module"], row["source"]): row for row in body_rows}
    found: dict[tuple[str, str], dict] = {}
    with path.open(encoding="utf-8", newline="") as file:
        if file.readline().rstrip("\r\n") != LOCAL_LIBCALL_FORMAT:
            raise ValueError(f"{path.name}: unrecognized local-libcall format")
        reader = csv.DictReader(
            (line for line in file if not line.startswith("#")), delimiter="\t")
        if reader.fieldnames != LOCAL_LIBCALL_HEADER:
            raise ValueError(f"{path.name}: header differs from the documented schema")
        for number, raw in enumerate(reader, 3):
            module, source = raw["module"], raw["source"]
            key = (module, source)
            row = accepted.get(key)
            if row is None or key in found:
                raise ValueError(f"{path.name}:{number}: unknown or duplicate placement source")
            if (raw["symbol"] != "__muldi3" or row["profile"] != "sdk991111"
                    or row["size"] != 680):
                raise ValueError(f"{path.name}:{number}: unqualified libcall or body")
            if (raw["object_sha256"] != row["object_sha256"]
                    or any(not isinstance(raw[key], str) or
                           re.fullmatch(r"[0-9a-f]{64}", raw[key]) is None
                           for key in ("object_sha256", "helper_sha256"))):
                raise ValueError(f"{path.name}:{number}: invalid object/helper SHA")
            if raw["reloc_offsets"] != "0x110,0x120,0x130,0x140":
                raise ValueError(f"{path.name}:{number}: unreviewed libcall sites")
            try:
                target, helper_size = int(raw["target"], 0), int(raw["helper_size"])
            except (TypeError, ValueError) as error:
                raise ValueError(f"{path.name}:{number}: bad target or extent") from error
            if helper_size != 96 or target < CODE_START or target % 4:
                raise ValueError(f"{path.name}:{number}: invalid helper target or extent")
            found[key] = {"module": module, "source": source,
                          "object_sha256": raw["object_sha256"],
                          "symbol": "__muldi3", "target": target,
                          "helper_size": helper_size,
                          "helper_sha256": raw["helper_sha256"],
                          "reloc_offsets": MULDI3_RELOC_OFFSETS}
    return found


def module_relocation_sites(module: bytes) -> tuple[set[int], set[int]]:
    """Get named and packed local fixup sites for helper identity checks."""
    header = HEADER.unpack_from(module)
    named = {unpack_relocation(
        module, header[1] + index * RELOCATION.size)[0]
        for index in range(header[2])}
    local: set[int] = set()
    for fixup in iter_packed_relocations(module, header[13], header[1]):
        local.add(fixup.site)
        if fixup.low_site is not None:
            local.add(fixup.low_site)
    return named, local


def qualify_local_libcall(entry: dict, row: dict, obj: dict, object_sha: str,
                          module: bytes, code_end: int,
                          imports: dict[str, int], exports: dict[str, int],
                          named_sites: set[int], local_sites: set[int]
                          ) -> dict[str, int]:
    """Validate a pinned __muldi3 object and helper without caller retail bytes."""
    if (entry["module"] != row["module"] or entry["source"] != row["source"]
            or entry["object_sha256"] != row["object_sha256"]
            or object_sha != entry["object_sha256"]
            or row["profile"] != "sdk991111" or row["size"] != 680):
        raise ValueError("local libcall module, source, object or profile differs")
    name, target, size = entry["symbol"], entry["target"], entry["helper_size"]
    if name != "__muldi3" or name in imports or name in exports:
        raise ValueError("local libcall name is unqualified or collides")
    if (target % 4 or size != 96 or target < CODE_START
            or target + size > code_end
            or (target < row["offset"] + row["size"]
                and row["offset"] < target + size)):
        raise ValueError("local libcall helper extent is invalid")
    helper = module[target:target + size]
    if (len(helper) != size or sha(helper) != entry["helper_sha256"]
            or module.count(helper) != 1):
        raise ValueError("local libcall helper SHA or uniqueness differs")
    if any(target <= site < target + size
           for site in named_sites | local_sites):
        raise ValueError("local libcall helper contains a relocation")
    if sum(symbol["name"] == name for symbol in undefined_symbols(obj)) != 1:
        raise ValueError("local libcall is not one undefined object symbol")
    uses = sorted((reloc["offset"], reloc["type"]) for reloc in obj["relocs"]
                  if obj["symbols"][reloc["sym"]]["name"] == name)
    expected = [(offset, 4) for offset in entry["reloc_offsets"]]
    if uses != expected:
        raise ValueError("local libcall relocations differ")
    return {name: target}


def resolved_body_mapping(row: dict, obj: dict, object_sha: str,
                          module: bytes, code_end: int,
                          imports: dict[str, int], exports: dict[str, int],
                          qualified: dict[tuple[str, str], dict]
                          ) -> tuple[dict[str, int], dict[str, str]]:
    """Keep the existing strict resolver unless a reviewed row applies."""
    entry = qualified.get((row["module"], row["source"]))
    if entry is None:
        return resolve_symbols(obj, imports, exports)
    if entry["symbol"] not in {symbol["name"] for symbol in undefined_symbols(obj)}:
        raise ValueError("qualified local symbol is not referenced by object")
    named_sites, local_sites = module_relocation_sites(module)
    local = qualify_local_libcall(
        entry, row, obj, object_sha, module, code_end,
        imports, exports, named_sites, local_sites)
    return resolve_symbols(obj, imports, exports, local)


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
    per_source = cflags.load()
    by_source = {row["source"]: row for row in rows}

    def compile_one(item: tuple[str, dict]) -> tuple[str, tuple[Path, dict, str]]:
        source_path, row = item
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
        entry = cflags.for_source(per_source, source)
        if not entry.pinned or not entry.assembler_pinned:
            raise ValueError(f"level body tool selectors belong in body_sources.tsv: "
                             f"{source_path}")
        work = output / "bodies" / source.name
        work.mkdir(parents=True, exist_ok=True)
        (work / source.name).write_bytes(source.read_bytes())
        stem = source.stem
        run([str(args.cpp.resolve()), source.name], work, work / f"{stem}.cpp.log",
            work / f"{stem}.i")
        require_c_source((work / f"{stem}.i").read_text(encoding="utf-8"),
                         f"{source_path} preprocessed input")
        run([str(cc1.resolve()), *flags, *entry.flags,
             f"{stem}.i", "-o", f"{stem}.s"],
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
        return source_path, (published, read_object(published), object_digest)

    objects: dict[str, tuple[Path, dict, str]] = {}
    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        for source_path, result in pool.map(compile_one, sorted(by_source.items())):
            objects[source_path] = result
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


def defined_global_names(obj: dict) -> set[str]:
    """Names that would collide if two objects shared one linker invocation."""
    return {symbol["name"] for symbol in obj["symbols"]
            if symbol["bind"] == 1 and symbol["shndx"] not in (0, 0xFFF1)
            and symbol["name"]}


def plan_body_link_batches(items: list[dict], maximum: int) -> list[list[dict]]:
    """Group only objects with compatible names and symbol assignments."""
    groups: list[list[dict]] = []
    for item in items:
        if not item["batchable"]:
            groups.append([item])
            continue
        target = None
        for group in sorted(groups, key=len):
            if len(group) >= maximum or not all(x["batchable"] for x in group):
                continue
            definitions = set().union(*(x["defined"] for x in group))
            assignments = {name: value for x in group
                           for name, value in x["mapping"].items()}
            if (item["obj_path"].name in {x["obj_path"].name for x in group}
                    or item["defined"] & definitions
                    or item["defined"] & assignments.keys()
                    or definitions & item["mapping"].keys()
                    or any(name in assignments and assignments[name] != value
                           for name, value in item["mapping"].items())):
                continue
            target = group
            break
        if target is None:
            target = []
            groups.append(target)
        target.append(item)
    return groups


def batch_link_level_bodies(module: str, rows: list[dict],
                            objects: dict[str, tuple[Path, dict, str]],
                            imports: dict[str, int], exports: dict[str, int],
                            module_data: bytes, code_end: int,
                            qualified: dict[tuple[str, str], dict],
                            linker: Path, maximum: int, jobs: int
                            ) -> tuple[list[tuple[dict, bytes, dict[str, int]]], int]:
    """Re-link every body, checking each output section's address and extent."""
    prepared = []
    for row in rows:
        if row["module"] != module:
            raise ValueError("batch contains a body from another module")
        obj_path, obj, object_sha = objects[row["source"]]
        if obj_path.parent != OUTPUT:
            raise ValueError(f"level body object outside private output: {row['source']}")
        try:
            mapping, _origin = resolved_body_mapping(
                row, obj, object_sha, module_data, code_end,
                imports, exports, qualified)
        except (BodyLinkError, ValueError) as error:
            raise ValueError(f"{module} 0x{row['offset']:06X}: {error}") from error
        definitions = defined_global_names(obj)
        safe_name = re.fullmatch(r"[A-Za-z0-9_.-]+", obj_path.name) is not None
        prepared.append({"row": row, "obj_path": obj_path,
                         "object_sha": object_sha, "mapping": mapping,
                         "defined": definitions,
                         "batchable": safe_name and not definitions & mapping.keys()})
    # Verify each distinct object once, in parallel. Batch links themselves are
    # serialized: concurrent multi-object SN links contend on this toolchain.
    unique_objects = {item["obj_path"]: item["object_sha"] for item in prepared}
    def verify_object(pair: tuple[Path, str]) -> None:
        path, expected_sha = pair
        if path.is_symlink() or digest(path) != expected_sha:
            raise ValueError(f"stale level body object: {path.name}")
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        list(pool.map(verify_object, unique_objects.items()))
    groups = plan_body_link_batches(prepared, maximum)

    def link_group(numbered: tuple[int, list[dict]]) -> list[tuple[dict, bytes, dict]]:
        number, group = numbered
        if len(group) == 1:
            item = group[0]
            return [(item["row"], link_level_body(item["row"], item["obj_path"],
                                                   item["mapping"], linker),
                     item["mapping"])]
        ordered = sorted(group, key=lambda item: item["row"]["offset"])
        assignments = {name: value for item in ordered
                       for name, value in item["mapping"].items()}
        stem = f"body_batch_{module.replace('.', '_')}_{number:04d}"
        lines = [*(f"{name} = 0x{value:08X};"
                   for name, value in sorted(assignments.items())), "SECTIONS {"]
        for index, item in enumerate(ordered):
            section = f".body{index:03d}"
            lines.extend((f"  . = 0x{item['row']['offset']:08X};",
                          f"  {section} : {{ {item['obj_path'].name}(.text) }}"))
        lines.extend(("}", ""))
        (OUTPUT / f"{stem}.ld").write_text("\n".join(lines), encoding="ascii",
                                            newline="\n")
        run_tool([str(linker.resolve()), "-T", f"{stem}.ld", "-o",
                  f"{stem}.elf", *(item["obj_path"].name for item in ordered)],
                 OUTPUT, OUTPUT / f"{stem}.link.log")
        elf = OUTPUT / f"{stem}.elf"
        sections = inspect_elf(elf)["sections"]
        data = elf.read_bytes()
        result = []
        for index, item in enumerate(ordered):
            name = f".body{index:03d}"
            found = [section for section in sections if section["name"] == name]
            row = item["row"]
            if (len(found) != 1 or int(found[0]["virtual_address"], 16) !=
                    row["offset"] or found[0]["size"] != row["size"]):
                raise ValueError(f"{module} 0x{row['offset']:06X}: batch section differs")
            section = found[0]
            body = data[section["file_offset"]:
                        section["file_offset"] + section["size"]]
            if len(body) != row["size"]:
                raise ValueError(f"{module} 0x{row['offset']:06X}: short batch body")
            result.append((row, body, item["mapping"]))
        return result

    by_offset: dict[int, tuple[bytes, dict[str, int]]] = {}
    for numbered in enumerate(groups):
        for row, body, mapping in link_group(numbered):
            by_offset[row["offset"]] = body, mapping
    return [(row, *by_offset[row["offset"]]) for row in rows], len(groups)


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
    """Rewrite the measured hashes of the source table after a full pass.

    The placement table holds no measurement, so it is left alone; the two
    hash columns of the source table are the measured ones.
    """
    source_sha = {row["source"]: normalized_digest(ROOT / row["source"])
                  for row in rows}
    object_sha = {source: value[2] for source, value in objects.items()}
    output = []
    for line in BODY_SOURCES.read_text(encoding="utf-8").splitlines():
        if not line or line.startswith("#") or line.startswith("source\t"):
            output.append(line)
            continue
        fields = line.split("\t")
        source = fields[0]
        fields[1] = source_sha[source]
        fields[2] = object_sha[source]
        output.append("\t".join(fields))
    BODY_SOURCES.write_text("\n".join(output) + "\n", encoding="utf-8", newline="\n")


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
    parser.add_argument("--jobs", type=int, default=1,
                        help="parallel body compilations and links per module (default: 1)")
    parser.add_argument("--batch-link-size", type=int, default=0,
                        help="opt-in multi-object SN links; 0 disables, 2..25 limits objects per link")
    args = parser.parse_args()
    if not 1 <= args.jobs <= 16:
        parser.error("--jobs must be between 1 and 16")
    if args.batch_link_size != 0 and not 2 <= args.batch_link_size <= 25:
        parser.error("--batch-link-size must be 0 or between 2 and 25")
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
    accepted_object = read_object(
        OUTPUT / f"{Path(profile['accepted']['source']).stem}.o")
    additional_object = read_object(
        OUTPUT / f"{Path(profile['additional_accepted']['source']).stem}.o")
    frontend_object = read_object(
        OUTPUT / f"{Path(profile['frontend_accepted']['source']).stem}.o")
    bodies = {Path(row["source"]).stem: linked_body(row, args.linker)
              for row in sources if "offset" in row}
    known, ends = pinned_modules(), code_ends()
    body_rows = read_bodies(BODIES, BODY_SOURCES, known, ends)
    local_libcalls = read_local_libcalls(LOCAL_LIBCALLS, body_rows)
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
    batch_linker_invocations = 0
    body_import_sites = 0
    witness_import_sites = 0
    witness_placements_checked = 0
    data_signatures = None
    with IsoDisc(args.image) as disc:
        verify_disc(disc, target)
        for name in names:
            source = disc.file_bytes("LVL/" + name)
            if sha(source) != known[name]:
                raise ValueError(f"{name} differs from pinned USA module")
            retail_calls = named_import_calls(source)
            shared_boundary(name, source, ends[name])
            body = bodies["func_00000100"]
            if body != source[0x100:0x108]:
                raise ValueError(f"shared C function differs in {name}")
            return_row = {"module": name, "offset": 0x100,
                          "size": profile["accepted"]["body_bytes"],
                          "source": profile["accepted"]["source"]}
            witness_import_sites += check_import_call_identity(
                accepted_object, retail_calls.within(0x100, return_row["size"]),
                return_row, profile["accepted"].get("linker_symbols", {}))
            witness_placements_checked += 1
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
            witness_row = {"module": name, "offset": start,
                           "size": additional["body_bytes"],
                           "source": additional["source"]}
            witness_import_sites += check_import_call_identity(
                additional_object, retail_calls.within(start, additional["body_bytes"]),
                witness_row, {"level_data_a": target_a, "level_data_b": target_b,
                              "memset": 0})
            witness_placements_checked += 1
            rebuilt = replace_range(rebuilt, buffer_body, start, start + 72)
            if name == "LEVEL_01.REL":
                control = bodies["func_00000190"]
                if control != source[0x190:0x190 + len(control)]:
                    raise ValueError("LEVEL_01 C array-get control differs")
                rebuilt = replace_range(rebuilt, control, 0x190, 0x190 + len(control))
            claimed = [(0x100, 0x108), (start, start + 72)]
            if name == "LEVEL_01.REL":
                claimed.append((0x190, 0x190 + len(control)))
            imports, exports = module_symbols(source)

            if args.batch_link_size:
                linked, invocations = batch_link_level_bodies(
                    name, bodies_by_module.get(name, []), body_objects, imports,
                    exports, source, ends[name], local_libcalls,
                    args.linker, args.batch_link_size, args.jobs)
                batch_linker_invocations += invocations
                for row, placed, mapping in linked:
                    obj = body_objects[row["source"]][1]
                    body_import_sites += check_import_call_identity(
                        obj, retail_calls.within(row["offset"], row["size"]),
                        row, mapping)
                    if placed != source[row["offset"]:row["offset"] + row["size"]]:
                        raise ValueError(
                            f"{name} level body differs at 0x{row['offset']:06X}")
                    rebuilt = place_body(rebuilt, placed, row["offset"],
                                         row["offset"] + row["size"], claimed)
            else:
                def linked_row(row: dict) -> tuple[dict, bytes, int]:
                    obj_path, obj, object_sha = body_objects[row["source"]]
                    try:
                        mapping, _origin = resolved_body_mapping(
                            row, obj, object_sha, source, ends[name],
                            imports, exports, local_libcalls)
                    except (BodyLinkError, ValueError) as error:
                        raise ValueError(f"{name} 0x{row['offset']:06X}: {error}") from error
                    checked = check_import_call_identity(
                        obj, retail_calls.within(row["offset"], row["size"]), row, mapping)
                    return row, link_level_body(row, obj_path, mapping, args.linker), checked

                with ThreadPoolExecutor(max_workers=args.jobs) as pool:
                    for row, placed, checked in pool.map(linked_row, bodies_by_module.get(name, [])):
                        body_import_sites += checked
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
        frontend_calls = named_import_calls(frontend)
        callers = frontend_boundary(frontend, ends["FRONTEND.REL"])
        control = bodies["func_00002CD8"]
        if control != frontend[0x2CD8:0x2CD8 + len(control)]:
            raise ValueError("FRONTEND C store control differs")
        candidate = replace_range(frontend, control, 0x2CD8, 0x2CD8 + len(control))
        frontend_row = profile["frontend_accepted"]
        frontend_body = bodies["func_00002F80"]
        witness_row = {"module": "FRONTEND.REL",
                       "offset": frontend_row["offset"],
                       "size": frontend_row["body_bytes"],
                       "source": frontend_row["source"]}
        witness_import_sites += check_import_call_identity(
            frontend_object,
            frontend_calls.within(frontend_row["offset"], frontend_row["body_bytes"]),
            witness_row, frontend_row["linker_symbols"])
        witness_placements_checked += 1
        if frontend_body != frontend[0x2F80:0x2F80 + 476]:
            raise ValueError("FRONTEND New Game C body differs")
        candidate = replace_range(candidate, frontend_body, 0x2F80, 0x2F80 + 476)
        claimed = [(0x2CD8, 0x2CD8 + len(control)), (0x2F80, 0x2F80 + 476)]
        frontend_imports, frontend_exports = module_symbols(frontend)
        if args.batch_link_size:
            linked, invocations = batch_link_level_bodies(
                "FRONTEND.REL", bodies_by_module.get("FRONTEND.REL", []),
                body_objects, frontend_imports, frontend_exports,
                frontend, ends["FRONTEND.REL"], local_libcalls,
                args.linker, args.batch_link_size, args.jobs)
            batch_linker_invocations += invocations
            for row, placed, mapping in linked:
                obj = body_objects[row["source"]][1]
                body_import_sites += check_import_call_identity(
                    obj, frontend_calls.within(row["offset"], row["size"]),
                    row, mapping)
                if placed != frontend[row["offset"]:row["offset"] + row["size"]]:
                    raise ValueError(
                        f"FRONTEND.REL level body differs at 0x{row['offset']:06X}")
                candidate = place_body(candidate, placed, row["offset"],
                                       row["offset"] + row["size"], claimed)
        else:
            for row in bodies_by_module.get("FRONTEND.REL", []):
                obj_path, obj, object_sha = body_objects[row["source"]]
                try:
                    mapping, _origin = resolved_body_mapping(
                        row, obj, object_sha, frontend, ends["FRONTEND.REL"],
                        frontend_imports, frontend_exports, local_libcalls)
                except (BodyLinkError, ValueError) as error:
                    raise ValueError(
                        f"FRONTEND.REL 0x{row['offset']:06X}: {error}") from error
                body_import_sites += check_import_call_identity(
                    obj, frontend_calls.within(row["offset"], row["size"]), row, mapping)
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
    if witness_import_sites != 24 or witness_placements_checked != 41:
        raise ValueError("accepted C witness import-call coverage differs")
    body_sizes: dict[str, int] = {}
    for row in body_rows:
        body_sizes.setdefault(row["source"], row["size"])
    body_summary = {
        "table": "config/levels/bodies.tsv",
        "table_sha256": digest(BODIES),
        "sources_table": "config/levels/body_sources.tsv",
        "sources_table_sha256": digest(BODY_SOURCES),
        "placements": len(body_rows),
        "unique_sources": len(body_sizes),
        "placement_bytes": sum(row["size"] for row in body_rows),
        "unique_source_bytes": sum(body_sizes.values()),
        "profiles": {selector: sum(1 for row in body_rows
                                   if row["profile"] == selector)
                     for selector in sorted({row["profile"] for row in body_rows})},
        "cc1_sha256": {
            selector: (base_profile["tools"]["cc1_sha256"] if selector == "pinned"
                       else base_profile["extra_compilers"][selector]["tools"]["cc1_sha256"])
            for selector in sorted({row["profile"] for row in body_rows})},
        "modules": sorted(bodies_by_module),
        "module_sha256": {module: known[module]
                          for module in sorted(bodies_by_module)},
        "import_identity": {"body_row_sites": body_import_sites,
                            "accepted_witness_sites": witness_import_sites,
                            "accepted_witness_placements_checked": witness_placements_checked,
                            "total_sites": body_import_sites + witness_import_sites,
                            "mismatches": 0},
    }
    if args.batch_link_size:
        body_summary["batch_link_size"] = args.batch_link_size
        body_summary["body_batch_linker_invocations"] = batch_linker_invocations
    if args.refresh_bodies:
        write_bodies(body_rows, body_objects)
        body_summary["table_sha256"] = digest(BODIES)
        body_summary["sources_table_sha256"] = digest(BODY_SOURCES)
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
    if args.batch_link_size:
        print(f"level body batch links: {batch_linker_invocations} invocations "
              f"for {len(body_rows)} placements")
    print("shared C: 8+72 bytes at all 20 level placements; "
          "FRONTEND New Game: 476 bytes; 21/21 complete modules exact")
    print(f"level bodies: {body_summary['placements']} placements in "
          f"{body_summary['unique_sources']} sources, "
          f"{body_summary['placement_bytes']} placement bytes; "
          "21/21 complete modules exact")


if __name__ == "__main__":
    main()
