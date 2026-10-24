#!/usr/bin/env python3
"""
The releases of the game this repository builds, and their programs (docs/VERSIONS.md).

  python3 tools/versions.py                         # the table of versions
  python3 tools/versions.py dump [--version K]      # programs from the disc image into baserom/
  python3 tools/versions.py config [--version K]    # config/versions/<K>/programs.tsv from the dump
  python3 tools/versions.py check [--version K]     # the dump against the committed programs.tsv

Every version is one disc image in baserom/ (named as in VERSIONS; hard-link it from wherever
your discs live, never commit it). Its programs are the boot executable and the 21 SNR2
relocatable modules under LVL/:

  baserom/<K>/<EXE>                          the boot executable as the disc stores it
  baserom/<K>/LVL/<name>.REL                 each SNR2 module on the disc

The primary version (NTSC-U v1.00) also supports the standard root baserom paths:
baserom/SCUS_976.15 and baserom/LVL/.

config/versions/<K>/programs.tsv holds what identifies each program: its SHA-1 as the disc
stores it, its entry point, and each section's address, size and SHA-1. Only hashes,
addresses and sizes: never bytes.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import struct
import sys
from dataclasses import dataclass
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

from disc import IsoDisc  # noqa: E402
import elf  # noqa: E402
import rel  # noqa: E402

MODULE_COUNT = 21


@dataclass(frozen=True)
class Version:
    key: str            # short name: "us", "pal"
    id: str             # report / serial id: "SCUS_976.15", "SCES_550.19"
    label: str          # for people: "NTSC-U v1.00", "PAL v1.00"
    region: str         # "USA", "Europe"
    iso: str            # the disc image's canonical file name in baserom/
    exe: str            # the boot executable on the disc (SYSTEM.CNF's BOOT2)
    exe_sha1: str
    exe_sha256: str
    iso_sha1: str
    iso_sha256: str
    iso_size: int
    boot_size: int
    hz: int             # video mode vertical frequency (60 or 50)
    tag: str            # prefix tag for version-specific symbols ("U", "E")
    primary: bool = False

    @property
    def base(self) -> Path:
        """baserom/<key>/, or baserom/ for primary."""
        return ROOT / "baserom" if self.primary else ROOT / "baserom" / self.key

    @property
    def exe_path(self) -> Path:
        return self.base / self.exe

    @property
    def modules_dir(self) -> Path:
        return self.base / "LVL"

    @property
    def config(self) -> Path:
        return ROOT / "config/versions" / self.key


VERSIONS = (
    Version(
        key="us",
        id="SCUS_976.15",
        label="NTSC-U v1.00",
        region="USA",
        iso="SCUS_976.15.iso",
        exe="SCUS_976.15",
        exe_sha1="16029a1552870812cf1c1a088312568c865a4532",
        exe_sha256="d8f1794a5b4f6bd7f70ca62ae11fb790d1c300c2a877ef1aef4c1855fd6575ac",
        iso_sha1="61b9cf7f46b8fc318daa2b98cfc53301654775d6",
        iso_sha256="ceae10a40d916eb78134c21cfe3d939a5c5d0a682a9382e1586df3274be7c7dc",
        iso_size=1744764928,
        boot_size=856120,
        hz=60,
        tag="U",
        primary=True,
    ),
    Version(
        key="pal",
        id="SCES_550.19",
        label="PAL v1.00",
        region="Europe",
        iso="SCES_550.19.iso",
        exe="SCES_550.19",
        exe_sha1="8c4b1833334f7b307e2d9fed51cc63a6d7190b77",
        exe_sha256="2b33e2d66e144ceb63fd8348ba85f560abace4449c3109ee54719c9e3e462c1f",
        iso_sha1="da06cadf3c022d146d113c797311a435a941655b",
        iso_sha256="d8826c4aef806d0a337c0b2fbcbf01e75efda2e410a07534200509bceda16131",
        iso_size=1982988288,
        boot_size=856888,
        hz=50,
        tag="E",
        primary=False,
    ),
)

PRIMARY = next(v for v in VERSIONS if v.primary)
BY_KEY = {v.key: v for v in VERSIONS}
OTHERS = tuple(v for v in VERSIONS if not v.primary)


def get(key: str | None) -> Version:
    """Return the version named KEY (key, id or alias), or PRIMARY by default."""
    if key is None:
        return PRIMARY
    k = key.strip().lower()
    for v in VERSIONS:
        if k in (v.key.lower(), v.id.lower()):
            return v
    if k in ("usa", "ntsc", "ntsc-u"):
        return get("us")
    if k in ("eu", "europe", "pal"):
        return get("pal")
    sys.exit(f"unknown version {key!r}: one of " + ", ".join(v.key for v in VERSIONS))


def find_disc(v: Version, user_path: Path | None = None) -> Path | None:
    """Find a readable ISO image for version V."""
    if user_path:
        p = Path(user_path)
        if p.is_file():
            return p
    candidates = [
        ROOT / "baserom" / v.key / v.iso,
        ROOT / "baserom" / v.iso,
        ROOT / "baserom" / v.key / ("Ratchet & Clank - Size Matters (USA).iso" if v.key == "us" else "Ratchet & Clank - Size Matters (Europe, Australia) (En,Fr,De,Es,It,Nl,Pt,Sv,No,Da,Fi,Pl,Hr).iso"),
        Path(f"/home/lynder063/Downloads/games-ps2/size-matters/{'Ratchet & Clank - Size Matters (USA).iso' if v.key == 'us' else 'Ratchet & Clank - Size Matters (Europe, Australia) (En,Fr,De,Es,It,Nl,Pt,Sv,No,Da,Fi,Pl,Hr).iso'}"),
    ]
    for c in candidates:
        if c.is_file():
            return c
    # Also search baserom dir for any ISO
    search_dirs = [ROOT / "baserom", ROOT / "baserom" / v.key]
    for sdir in search_dirs:
        if sdir.is_dir():
            for f in sdir.glob("*.iso"):
                try:
                    with IsoDisc(f) as d:
                        info = d.inspect()
                        if info.get("boot_file") == v.exe:
                            return f
                except Exception:
                    pass
    return None


def read_disc(v: Version, image_path: Path | None = None) -> tuple[bytes, dict[str, bytes]]:
    """Return (boot_bytes, {rel_path: rel_bytes}) for version V."""
    iso_path = find_disc(v, image_path)
    if not iso_path:
        # Check if already dumped in baserom
        if v.exe_path.is_file() and v.modules_dir.is_dir():
            boot = v.exe_path.read_bytes()
            rels = {f"LVL/{p.name}": p.read_bytes() for p in sorted(v.modules_dir.glob("*.REL"))}
            if len(rels) == MODULE_COUNT:
                return boot, rels
        # Fallback for primary
        if v.primary and (ROOT / "baserom" / v.exe).is_file() and (ROOT / "baserom/LVL").is_dir():
            boot = (ROOT / "baserom" / v.exe).read_bytes()
            rels = {f"LVL/{p.name}": p.read_bytes() for p in sorted((ROOT / "baserom/LVL").glob("*.REL"))}
            if len(rels) == MODULE_COUNT:
                return boot, rels
        sys.exit(f"could not find disc image or dumped files for {v.key} ({v.label})")

    with IsoDisc(iso_path) as disc:
        boot_entry = disc.find(v.exe)
        boot = disc.read(boot_entry.extent * 2048, boot_entry.size)
        lvl_entry = disc.find("LVL")
        entries = disc.entries(lvl_entry)
        rels: dict[str, bytes] = {}
        for name in sorted(entries.keys()):
            if name.endswith(".REL"):
                e = entries[name]
                rels[f"LVL/{name}"] = disc.read(e.extent * 2048, e.size)
        if len(rels) != MODULE_COUNT:
            raise ValueError(f"expected {MODULE_COUNT} modules, found {len(rels)} in {iso_path}")
        return boot, rels


def dump(v: Version, image_path: Path | None = None) -> None:
    boot, rels = read_disc(v, image_path)
    base = v.base
    base.mkdir(parents=True, exist_ok=True)
    v.modules_dir.mkdir(parents=True, exist_ok=True)

    exe_dest = v.exe_path
    if not exe_dest.exists() or exe_dest.read_bytes() != boot:
        exe_dest.write_bytes(boot)
        print(f"wrote {exe_dest.relative_to(ROOT)} ({len(boot)} bytes)")

    for path, data in rels.items():
        dest = base / path
        dest.parent.mkdir(parents=True, exist_ok=True)
        if not dest.exists() or dest.read_bytes() != data:
            dest.write_bytes(data)
    print(f"{v.key} ({v.label}): dumped {v.exe} and {len(rels)} LVL/*.REL modules to {base.relative_to(ROOT)}")


def elf_rows(name: str, boot: bytes) -> list[tuple[str, str, str, str, str, str]]:
    """Return programs.tsv rows for an ELF executable."""
    rows: list[tuple[str, str, str, str, str, str]] = []
    sha1 = hashlib.sha1(boot).hexdigest()
    (kind, machine, version, entry, phoff, shoff, flags, ehsize, phentsize,
     phnum, shentsize, shnum, shstrndx) = elf.ELF_HEADER.unpack_from(boot, 16)
    rows.append((name, "-", f"{entry:08X}", str(len(boot)), "0", sha1))

    raw_sections = [elf.SECTION_HEADER.unpack_from(boot, shoff + i * shentsize)
                    for i in range(shnum)]
    names_offset, names_size = raw_sections[shstrndx][4], raw_sections[shstrndx][5]
    names = boot[names_offset:names_offset + names_size]

    for s in raw_sections:
        name_at, typ, sflags, addr, offset, size, link, info, align, entsize = s
        name_end = names.find(b"\0", name_at)
        sname = names[name_at:name_end].decode("ascii", "replace") if name_end >= 0 else ""
        if not sname:
            continue
        sec_bytes = boot[offset:offset + size]
        sec_sha1 = hashlib.sha1(sec_bytes).hexdigest()
        rows.append((name, sname, f"{addr:08X}", str(size), str(typ), sec_sha1))
    return rows


def rel_rows(path: str, data: bytes) -> list[tuple[str, str, str, str, str, str]]:
    """Return programs.tsv rows for an SNR2 relocatable module."""
    rows: list[tuple[str, str, str, str, str, str]] = []
    sha1 = hashlib.sha1(data).hexdigest()
    (magic, reloc_at, reloc_count, symbol_at, symbol_count, image_name_at,
     ctors_at, dtors_at, exports_at, exports_count, unknown,
     declared_size, unknown2, packed_at, unknown_at38) = rel.HEADER.unpack_from(data)

    rows.append((path, "-", "00000000", str(len(data)), "0", sha1))
    # Section breakdowns
    rows.append((path, "header", "00000000", str(rel.HEADER.size), "1",
                 hashlib.sha1(data[:rel.HEADER.size]).hexdigest()))
    payload_size = reloc_at - rel.HEADER.size
    rows.append((path, "payload", f"{rel.HEADER.size:08X}", str(payload_size), "1",
                 hashlib.sha1(data[rel.HEADER.size:reloc_at]).hexdigest()))
    reloc_size = reloc_count * rel.RELOCATION.size
    rows.append((path, "reloc", f"{reloc_at:08X}", str(reloc_size), "1",
                 hashlib.sha1(data[reloc_at:reloc_at + reloc_size]).hexdigest()))
    sym_size = symbol_count * rel.SYMBOL.size
    rows.append((path, "symtab", f"{symbol_at:08X}", str(sym_size), "2",
                 hashlib.sha1(data[symbol_at:symbol_at + sym_size]).hexdigest()))
    if packed_at and packed_at < len(data):
        packed_size = len(data) - packed_at
        rows.append((path, "packed", f"{packed_at:08X}", str(packed_size), "1",
                     hashlib.sha1(data[packed_at:]).hexdigest()))
    return rows


def program_rows(v: Version, image_path: Path | None = None) -> list[tuple[str, str, str, str, str, str]]:
    boot, rels = read_disc(v, image_path)
    rows = elf_rows("boot", boot)
    for path in sorted(rels.keys()):
        rows.extend(rel_rows(path, rels[path]))
    return rows


def read_programs(v: Version) -> list[tuple[str, str, str, str, str, str]]:
    tsv = v.config / "programs.tsv"
    if not tsv.is_file():
        sys.exit(f"missing {tsv.relative_to(ROOT)}; run 'python3 tools/versions.py config --version {v.key}'")
    rows: list[tuple[str, str, str, str, str, str]] = []
    with tsv.open(encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            parts = line.split("\t")
            if len(parts) >= 6:
                rows.append((parts[0], parts[1], parts[2], parts[3], parts[4], parts[5]))
    return rows


def write_config(v: Version, image_path: Path | None = None) -> None:
    boot, rels = read_disc(v, image_path)
    v.config.mkdir(parents=True, exist_ok=True)

    # 1. programs.tsv
    rows = elf_rows("boot", boot)
    for path in sorted(rels.keys()):
        rows.extend(rel_rows(path, rels[path]))

    tsv_lines = [
        f"# {v.label} ({v.id}): its programs and their sections, from the dump (tools/versions.py config).",
        "# A program's own row has section '-' and its entry point, size and SHA-1 as the disc stores it.",
        "# Hashes, addresses and sizes only.",
        "# program\tsection\taddress\tsize\ttype\tsha1",
    ]
    for r in rows:
        tsv_lines.append("\t".join(r))
    (v.config / "programs.tsv").write_text("\n".join(tsv_lines) + "\n", encoding="utf-8")
    print(f"wrote {(v.config / 'programs.tsv').relative_to(ROOT)}")

    # 2. target.json
    target_data = {
        "game": "Ratchet & Clank: Size Matters",
        "platform": "PlayStation 2",
        "region": v.region,
        "serial": v.id,
        "system_cnf_version": "1.00",
        "video_mode": "NTSC" if v.hz == 60 else "PAL",
        "boot_file": v.exe,
        "reference_status": "complete-public-catalogue-sha1-match",
        "iso_size": v.iso_size,
        "iso_sha1": v.iso_sha1,
        "iso_sha256": v.iso_sha256,
        "iso9660_declared_size": v.iso_size,
        "boot_size": v.boot_size,
        "boot_sha1": v.exe_sha1,
        "boot_sha256": v.exe_sha256,
        "module_count": MODULE_COUNT,
        "matching_compiler": None,
    }
    (v.config / "target.json").write_text(json.dumps(target_data, indent=2) + "\n", encoding="utf-8")
    print(f"wrote {(v.config / 'target.json').relative_to(ROOT)}")

    # 3. modules.tsv
    parsed_modules = [rel.parse_module(p, rels[p]) for p in sorted(rels.keys())]
    modules_tsv = rel.render_modules(parsed_modules)
    (v.config / "modules.tsv").write_text(modules_tsv, encoding="utf-8", newline="\n")
    print(f"wrote {(v.config / 'modules.tsv').relative_to(ROOT)}")

    # 4. boot_layout.json
    res = elf.inspect_elf(v.exe_path if v.exe_path.is_file() else ROOT / "baserom/us/SCUS_976.15")
    (v.config / "boot_layout.json").write_text(json.dumps(res, indent=2) + "\n", encoding="utf-8")
    print(f"wrote {(v.config / 'boot_layout.json').relative_to(ROOT)}")


def check(v: Version, image_path: Path | None = None) -> bool:
    want = read_programs(v)
    have = program_rows(v, image_path)
    bad = [f"want {w} != have {h}" for w, h in zip(want, have) if w != h]
    if len(want) != len(have):
        bad.append(f"row count mismatch: want {len(want)}, have {len(have)}")
    for r in bad[:10]:
        print(f"  {v.key}: differs: {r}")
    disc_p = find_disc(v, image_path)
    loc_str = str(disc_p) if disc_p else "unknown location"
    if not bad:
        prog_count = sum(1 for r in want if r[1] == "-")
        print(f"{v.key} ({v.label}): disc image matches committed programs.tsv ({prog_count} programs, {len(want)} sections) [source: {loc_str}]")
        return True
    else:
        print(f"{v.key} ({v.label}): {len(bad)} rows differ")
        return False


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("command", nargs="?", choices=("dump", "config", "check"))
    parser.add_argument("--version", "-v", action="append", help="version key, serial id, or alias (default: all)")
    parser.add_argument("--image", type=Path, help="override path to disc ISO image")
    args = parser.parse_args()

    if not args.command:
        print(f"{'key':<8} {'id':<16} {'label':<16} {'region':<10} {'hz':>3}  disc image")
        for v in VERSIONS:
            print(f"{v.key:<8} {v.id:<16} {v.label:<16} {v.region:<10} {v.hz:>3}  baserom/{v.iso}" + ("  (primary)" if v.primary else ""))
        return

    versions_to_run = [get(k) for k in args.version] if args.version else list(VERSIONS)
    ok = True
    for v in versions_to_run:
        if args.command == "dump":
            dump(v, args.image)
        elif args.command == "config":
            write_config(v, args.image)
        elif args.command == "check":
            ok &= check(v, args.image)
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
