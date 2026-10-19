#!/usr/bin/env python3
"""Read compiled level C objects and resolve their symbols without retail bytes.

Ported from the wave-17 harness (``w17/E0/levels_try.py``), restricted to the
symbol sources that do not depend on the bytes being proved:

1. the module import table: a declared symbol with address 0 is an import;
2. the module export table: a declared symbol with a non-zero address;
3. the name itself: ``func_<address>`` / ``D_<address>`` carries the measured
   module-relative address.

The retail module is the comparison target; it is never a symbol source. A
source whose placeholder names need the retail relocation sites fails here
with the unresolved names instead of silently borrowing an address.
"""

from __future__ import annotations

import re
import struct
from pathlib import Path

ELF_HEADER = struct.Struct("<HHIIIIIHHHHHH")
SECTION_HEADER = struct.Struct("<IIIIIIIIII")
ELF_SYMBOL = struct.Struct("<IIIBBH")
SHT_SYMTAB, SHT_REL, SHT_RELA = 2, 9, 4
SHN_UNDEF, SHN_COMMON = 0, 0xFFF1
STB_GLOBAL, STT_FUNC = 1, 2
ADDRESS_IN_NAME = re.compile(r"^(?:func|D|DAT|d|jtbl|lbl|sub|off)_([0-9A-Fa-f]{6,8})$")


class BodyLinkError(Exception):
    """A condition that prevents a body from being linked (not a mismatch)."""


def read_object(path: Path) -> dict:
    """Read a little-endian MIPS32 ELF object's ``.text``, symbols and relocs."""
    data = path.read_bytes()
    if len(data) < 52 or data[:4] != b"\x7fELF" or data[4] != 1 or data[5] != 1:
        raise BodyLinkError(f"{path.name}: not a 32-bit little-endian ELF")
    (_kind, machine, _ver, _entry, _phoff, shoff, _flags, _ehsize, _phent,
     _phnum, shentsize, shnum, shstrndx) = ELF_HEADER.unpack_from(data, 16)
    if machine != 8:
        raise BodyLinkError(f"{path.name}: not a MIPS ELF")
    raw = [SECTION_HEADER.unpack_from(data, shoff + index * shentsize)
           for index in range(shnum)]
    names_at, names_size = raw[shstrndx][4], raw[shstrndx][5]
    names = data[names_at:names_at + names_size]

    sections = []
    for index, (name_at, typ, sflags, addr, offset, size, link, info,
                _align, entsize) in enumerate(raw):
        end = names.find(b"\0", name_at)
        sections.append({"index": index,
                         "name": names[name_at:end].decode("ascii", "replace"),
                         "type": typ, "flags": sflags, "addr": addr,
                         "offset": offset, "size": size, "link": link,
                         "info": info, "entsize": entsize})

    symtab = next((item for item in sections if item["type"] == SHT_SYMTAB), None)
    if symtab is None:
        raise BodyLinkError(f"{path.name}: no symbol table")
    strings = sections[symtab["link"]]
    strtab = data[strings["offset"]:strings["offset"] + strings["size"]]
    step = symtab["entsize"] or ELF_SYMBOL.size
    symbols: list[dict] = []
    for at in range(symtab["offset"], symtab["offset"] + symtab["size"], step):
        name_at, value, size, info, _other, shndx = ELF_SYMBOL.unpack_from(data, at)
        end = strtab.find(b"\0", name_at)
        symbols.append({"name": strtab[name_at:end].decode("ascii", "replace"),
                        "value": value, "size": size, "bind": info >> 4,
                        "type": info & 0xF, "shndx": shndx})

    text = next((item for item in sections
                 if item["name"] == ".text" and item["flags"] & 4), None)
    if text is None:
        raise BodyLinkError(f"{path.name}: no .text section")

    relocs: list[dict] = []
    for section in sections:
        if section["type"] not in (SHT_REL, SHT_RELA):
            continue
        if section["info"] != text["index"]:
            continue
        rela = section["type"] == SHT_RELA
        entry = 12 if rela else 8
        step = section["entsize"] or entry
        for at in range(section["offset"], section["offset"] + section["size"], step):
            if rela:
                offset, info, addend = struct.unpack_from("<IIi", data, at)
            else:
                offset, info = struct.unpack_from("<II", data, at)
                addend = 0
            relocs.append({"offset": offset, "type": info & 0xFF,
                           "sym": info >> 8, "addend": addend})
    relocs.sort(key=lambda item: item["offset"])

    return {"text": data[text["offset"]:text["offset"] + text["size"]],
            "text_addr": text["addr"], "symbols": symbols, "relocs": relocs}


def undefined_symbols(obj: dict) -> list[dict]:
    """Global undefined symbols that need a value at link time."""
    return [symbol for symbol in obj["symbols"]
            if symbol["shndx"] == SHN_UNDEF and symbol["bind"] == STB_GLOBAL
            and symbol["name"]]


def defined_functions(obj: dict) -> dict[str, tuple[int, int]]:
    """Defined global functions as name -> (value, compiled size)."""
    return {symbol["name"]: (symbol["value"], symbol["size"])
            for symbol in obj["symbols"]
            if symbol["shndx"] not in (SHN_UNDEF, SHN_COMMON)
            and symbol["type"] == STT_FUNC and symbol["name"]}


def resolve_symbols(obj: dict, imports: dict[str, int],
                    exports: dict[str, int]) -> tuple[dict[str, int], dict[str, str]]:
    """Resolve every undefined symbol from the module tables or its own name."""
    values: dict[str, int] = {}
    origin: dict[str, str] = {}
    missing: list[str] = []
    for symbol in undefined_symbols(obj):
        name = symbol["name"]
        if name in imports:
            values[name], origin[name] = imports[name], "import"
        elif name in exports:
            values[name], origin[name] = exports[name], "export"
        elif (match := ADDRESS_IN_NAME.match(name)):
            values[name], origin[name] = int(match.group(1), 16), "name-address"
        else:
            missing.append(name)
    if missing:
        raise BodyLinkError(
            "unresolved external symbol(s): " + ", ".join(sorted(missing))
            + "; name them func_/D_<address>, or use a module import or export")
    return values, origin
