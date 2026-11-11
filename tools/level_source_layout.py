"""Keep the level body sources in one directory per SNR2 module.

The layout follows the first two Ratchet & Clank decompilations
(``src/levels/<level>/`` plus ``src/levels/shared/``), adapted to the SNR2
modules of Size Matters:

* a body source whose placements in ``config/levels/bodies.tsv`` all lie in
  one module lives in that module's directory: ``src/levels/frontend/`` or
  ``src/levels/01_pokitaru/`` ... ``src/levels/24_treehouse/``;
* a body source placed in several modules lives in ``src/levels/shared/``;
* inside that directory, a source whose placements lie in code that cites one
  original translation unit (``config/levels/source_files.tsv``, from the source
  file names of debug messages) lives in a folder named after that file without
  its extension: ``src/levels/shared/CORE/Breakable/``.

A module that is an identical copy of another (``identical_full_interval_groups``
in ``config/levels/function_inventory_summary.json``: LEVEL_21.REL repeats
LEVEL_15.REL) has no directory of its own; its placements count as the first
module's.  Directory names are the level names of the progress report
(``tools/level_names.py``) without the ``level`` prefix.

usage: python tools/level_source_layout.py [--apply] [--name-twins]

Without ``--apply`` misplaced sources are listed and the exit status is 1 when
there is any.  ``--apply`` moves them (file names are kept) and rewrites every
reference to their old paths in the level tables, ``config/cflags.txt``,
``config/levels/compiler_trial.json`` and the Markdown documents.  When the
reviewed family identity controls name a moved source, their pinned digest
(``controls_sha256`` in ``config/levels/family_identity_summary.json``) is
updated as well: a move changes the paths in that table, never the reviewed
families.  Run it after adding or re-placing level body sources; it is
idempotent.

``--name-twins`` names each source whose placements are the byte-identical twin
of one named boot function (``config/levels/function_names.tsv``) after that
symbol, as the boot sources are: ``FRONTEND_00A5F0.c`` defining ``func_00A5F0``
becomes ``VRAM_SwapFrameBuffers__Fb.c`` defining ``VRAM_SwapFrameBuffers__Fb``.
When several modules carry their own source of one twin, the file names add the
module: ``CAMERA_SetCurrentCamera__FUi_LEVEL_04.c``.  Callers keep the
``func_<offset>`` name, which the level gate resolves by address.  The object
hashes of renamed sources change, so refresh them with
``tools/level_c_gate.py --refresh-bodies`` afterwards.
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
import shutil
import sys
from collections import Counter, defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compile_boot_trial import digest  # noqa: E402
import level_function_names  # noqa: E402
from level_names import LEVEL_NAMES  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
BODIES = ROOT / "config/levels/bodies.tsv"
INVENTORY = ROOT / "config/levels/function_inventory_summary.json"
FAMILY_CONTROLS = ROOT / "config/levels/family_identity_controls.tsv"
FAMILY_SUMMARY = ROOT / "config/levels/family_identity_summary.json"
TABLES = ("config/levels/bodies.tsv", "config/levels/body_sources.tsv",
          "config/levels/family_identity_controls.tsv",
          "config/levels/local_link_symbols.tsv",
          "config/levels/compiler_trial.json", "config/cflags.txt")
DOCUMENT_TREES = ("config", "docs", "progress", "src")
SHARED = "shared"
REFERENCE = re.compile(r"src/levels/(?:[A-Za-z0-9_]+/)+[A-Za-z0-9_]+\.c(?![A-Za-z0-9_])")
SOURCE_PATH = re.compile(r"src/levels/(?P<home>[A-Za-z0-9_]+)/(?:[A-Za-z0-9_]+/)*"
                         r"[A-Za-z0-9_]+\.c")
IDENTIFIER = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")
COMMENT = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)


def identical_copies() -> dict[str, str]:
    """Map each module that repeats another module byte for byte to that module."""
    inventory = json.loads(INVENTORY.read_text(encoding="utf-8"))
    return {copy: group[0] for group in inventory["identical_full_interval_groups"]
            for copy in group[1:]}


COPIES = identical_copies()
MODULE_DIRS = {module: slug if slug == "frontend" else slug.removeprefix("level")
               for module, (slug, _title) in LEVEL_NAMES.items() if module not in COPIES}
SOURCE_DIRS = frozenset(MODULE_DIRS.values()) | {SHARED}


def records(path: Path | None = None) -> list[dict[str, str]]:
    with (path or BODIES).open(encoding="utf-8", newline="") as file:
        return list(csv.DictReader((line for line in file if not line.startswith("#")),
                                   delimiter="\t"))


def home(modules) -> str:
    """Return the directory of a source placed in ``modules``."""
    owners = {COPIES.get(module, module) for module in modules}
    if len(owners) != 1:
        return SHARED
    return MODULE_DIRS[owners.pop()]


def valid_source(source: str) -> bool:
    """A level body source path: src/levels/<directory>/[<folders>/]<name>.c."""
    match = SOURCE_PATH.fullmatch(source)
    return match is not None and match.group("home") in SOURCE_DIRS


def original_folders(rows, labels) -> dict[str, str]:
    """Map each source whose labelled placements cite one translation unit to its folder.

    labels(module, offset) returns (boot twin symbol, original file); see
    level_function_names.labeller.
    """
    files: dict[str, set[str]] = defaultdict(set)
    for row in rows:
        _symbol, file = labels(COPIES.get(row["module"], row["module"]), int(row["offset"], 0))
        if file:
            files[row["source"].replace("\\", "/")].add(file)
    folders = {}
    for source, cited in files.items():
        folder = level_function_names.folder(cited.pop()) if len(cited) == 1 else ""
        if folder:
            folders[source] = folder
    return folders


def misplaced(rows, folders: dict[str, str] | None = None) -> dict[str, str]:
    """Map each source of ``rows`` (bodies.tsv records) that sits elsewhere to its path.

    folders: the original translation unit folder of each source that has one.
    """
    folders = folders or {}
    modules: dict[str, set[str]] = defaultdict(set)
    for row in rows:
        modules[row["source"].replace("\\", "/")].add(row["module"])
    moves = {}
    for source, placed in sorted(modules.items()):
        group = folders.get(source)
        expected = (f"src/levels/{home(placed)}/" + (f"{group}/" if group else "")
                    + source.rsplit("/", 1)[-1])
        if source != expected:
            moves[source] = expected
    return moves


def definition_start(head: str) -> int | None:
    """Where the function name starts when `head` ends with `name(parameters)`."""
    end = len(head.rstrip())
    if not end or head[end - 1] != ")":
        return None
    depth = 0
    for index in range(end - 1, -1, -1):
        char = head[index]
        if char in ";{}":
            return None
        if char == ")":
            depth += 1
        elif char == "(":
            depth -= 1
            if depth == 0:
                match = re.search(r"[A-Za-z_]\w*\s*$", head[:index])
                return match.start() if match else None
    return None


def definitions(source: str) -> list[tuple[bool, str]]:
    """(is static, name) of each function a level body source defines, in order.

    Scans the top-level braces; a brace that follows `name(parameters)` opens a
    definition.
    """
    text = COMMENT.sub(" ", (ROOT / source).read_text(encoding="utf-8"))
    found: list[tuple[bool, str]] = []
    depth = 0
    for brace in re.finditer(r"[{}]", text):
        if brace.group() == "}":
            depth -= 1
            continue
        if depth == 0:
            head = text[:brace.start()]
            start = definition_start(head)
            if start is not None:
                name = re.match(r"[A-Za-z_]\w*", head[start:]).group()
                statement = re.split(r"[;}]", head[:start])[-1]
                found.append((re.search(r"\bstatic\b", statement) is not None, name))
        depth += 1
    return found


def defined_function(source: str) -> str:
    """The name of the function a level body source defines.

    The last definition without `static` wins (helpers come first).
    """
    found = definitions(source)
    if not found:
        raise ValueError(f"{source}: no function definition found")
    return next((name for is_static, name in reversed(found) if not is_static), found[-1][1])


def twin_names(rows, names: list[dict[str, str]]) -> dict[str, tuple[str, str]]:
    """Map each source to name after its boot twin to (symbol, new path).

    A source qualifies when its placements that are boot twins over their whole
    size name one symbol, that symbol is a C identifier the file does not use
    yet, and the file defines exactly one global function.  The file becomes
    <symbol>.c, or <symbol>_<module>.c when several sources carry the symbol
    (the module of its placements, or of its directory); a file name that would
    repeat keeps its current name.  The reviewed family controls of one family
    are renamed together or not at all, so that they keep one logic.
    """
    twins = {(row["module"], int(row["offset"], 0)): (row["symbol"], int(row["size"]))
             for row in names}
    found: dict[str, set[str]] = defaultdict(set)
    placed: dict[str, set[str]] = defaultdict(set)
    for row in rows:
        source = row["source"].replace("\\", "/")
        placed[source].add(row["module"])
        twin = twins.get((COPIES.get(row["module"], row["module"]), int(row["offset"], 0)))
        if twin and twin[1] == int(row["size"]):
            found[source].add(twin[0])
    chosen = {}
    for source, symbols in sorted(found.items()):
        symbol = symbols.pop() if len(symbols) == 1 else ""
        if not IDENTIFIER.fullmatch(symbol):
            continue
        defined = [name for is_static, name in definitions(source) if not is_static]
        text = COMMENT.sub(" ", (ROOT / source).read_text(encoding="utf-8"))
        if len(defined) == 1 and (defined[0] == symbol
                                  or not re.search(rf"\b{symbol}\b", text)):
            chosen[source] = symbol
    for family in family_controls().values():
        if (any(source in chosen for source in family)
                and len({chosen.get(source) for source in family}) != 1):
            for source in family:
                chosen.pop(source, None)
    counts = Counter(chosen.values())
    tags = {directory: module.removesuffix(".REL") for module, directory in MODULE_DIRS.items()}
    wanted = {}
    for source, symbol in chosen.items():
        modules = placed[source]
        tag = (next(iter(modules)).removesuffix(".REL") if len(modules) == 1
               else tags.get(source.split("/")[2], SHARED))
        wanted[source] = f"{symbol}.c" if counts[symbol] == 1 else f"{symbol}_{tag}.c"
    repeats = Counter(wanted.values())
    current = Counter(row["source"].replace("\\", "/").rsplit("/", 1)[-1]
                      for row in {row["source"]: row for row in rows}.values())
    out = {}
    for source, symbol in chosen.items():
        folder, name = source.rsplit("/", 1)
        if repeats[wanted[source]] == 1 and (current[wanted[source]] == 0 or name == wanted[source]):
            name = wanted[source]
        new = f"{folder}/{name}"
        if new != source or defined_function(source) != symbol:
            out[source] = (symbol, new)
    return out


def rename_twins(renames: dict[str, tuple[str, str]]) -> dict[str, str]:
    """Rename each source's function to its boot symbol and the file to its new name."""
    moves = {}
    for old, (symbol, new) in sorted(renames.items()):
        path = ROOT / old
        name = defined_function(old)
        text = path.read_text(encoding="utf-8")
        if new != old and (ROOT / new).exists():
            raise SystemExit(f"{new} already exists; {old} was not renamed")
        updated = re.sub(rf"\b{name}\b", symbol, text)
        if new != old:
            path.unlink()
            moves[old] = new
        (ROOT / new).write_text(updated, encoding="utf-8", newline="\n")
    print(f"named {len(renames)} sources after their boot twins ({len(moves)} files "
          f"renamed); rewrote {rewrite_references(moves)} references")
    if refresh_family_digest():
        print("refreshed controls_sha256 in config/levels/family_identity_summary.json")
    refreshed = refresh_family_logic({moves.get(source, source) for source in renames})
    if refreshed:
        print(f"refreshed normalized_C_sha256 of {refreshed} reviewed families")
    return moves


def family_controls() -> dict[str, list[str]]:
    """Reviewed family id -> the sources of its accepted C controls."""
    out: dict[str, list[str]] = defaultdict(list)
    if FAMILY_CONTROLS.is_file():
        for row in records(FAMILY_CONTROLS):
            out[row["family_id"]].append(row["source"])
    return out


def refresh_family_logic(renamed: set[str]) -> int:
    """Re-pin the normalized C of each reviewed family whose controls were renamed.

    Naming a function after its boot twin changes its name, never its logic, so
    the controls of a family must still normalize to one text.
    """
    from level_family_identity import normalized_control

    families = family_controls()
    raw = FAMILY_SUMMARY.read_text(encoding="utf-8")
    summary = json.loads(raw)
    refreshed = 0
    for family in summary["families"]:
        sources = families.get(family["family_id"], [])
        if not set(sources) & renamed:
            continue
        hashes = {hashlib.sha256(normalized_control(
            (ROOT / source).read_text(encoding="utf-8")).encode()).hexdigest()
            for source in sources}
        if len(hashes) != 1:
            raise SystemExit(f"{family['family_id']}: renamed controls no longer share one logic")
        family["normalized_C_sha256"] = hashes.pop()
        refreshed += 1
    if refreshed:
        FAMILY_SUMMARY.write_text(json.dumps(summary, indent=2) + "\n",
                                  encoding="utf-8", newline="\n")
    return refreshed


def repeated_names(rows) -> list[str]:
    """File names carried by more than one source (the gates compile sources by name)."""
    names = Counter(source.rsplit("/", 1)[-1]
                    for source in {row["source"].replace("\\", "/") for row in rows})
    return sorted(name for name, count in names.items() if count > 1)


def documents() -> list[Path]:
    paths = sorted(ROOT.glob("*.md"))
    for tree in DOCUMENT_TREES:
        paths += sorted((ROOT / tree).rglob("*.md"))
    return paths


def rewrite_references(moves: dict[str, str]) -> int:
    rewritten = 0
    for path in [ROOT / table for table in TABLES] + documents():
        if not path.is_file():
            continue
        text = path.read_text(encoding="utf-8")
        hits = 0

        def replace(match: re.Match) -> str:
            nonlocal hits
            new = moves.get(match.group(0))
            if new is None:
                return match.group(0)
            hits += 1
            return new

        updated = REFERENCE.sub(replace, text)
        if hits:
            path.write_text(updated, encoding="utf-8", newline="\n")
            rewritten += hits
    return rewritten


def refresh_family_digest() -> bool:
    raw = FAMILY_SUMMARY.read_text(encoding="utf-8")
    summary = json.loads(raw)
    current = digest(FAMILY_CONTROLS)
    if summary["controls_sha256"] == current:
        return False
    FAMILY_SUMMARY.write_text(raw.replace(summary["controls_sha256"], current),
                              encoding="utf-8", newline="\n")
    return True


def apply(moves: dict[str, str]) -> None:
    for old, new in moves.items():
        target = ROOT / new
        if target.exists():
            raise SystemExit(f"{new} already exists; {old} was not moved")
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.move(str(ROOT / old), str(target))
    for old in moves:
        folder = (ROOT / old).parent
        if folder.is_dir() and not any(folder.iterdir()):
            folder.rmdir()
    print(f"moved {len(moves)} sources; rewrote {rewrite_references(moves)} references")
    if refresh_family_digest():
        print("refreshed controls_sha256 in config/levels/family_identity_summary.json")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--apply", action="store_true",
                        help="move misplaced sources and rewrite their references")
    parser.add_argument("--name-twins", action="store_true",
                        help="name boot twin sources and their functions after the boot symbol")
    args = parser.parse_args(argv)
    names, files = level_function_names.check()
    labels = level_function_names.labeller(names, files)
    rows = records()
    repeated = repeated_names(rows)
    if repeated:
        print("source file names used by several sources: " + ", ".join(repeated[:20]))
        return 1
    moves = misplaced(rows, original_folders(rows, labels))
    if args.apply and moves:
        apply(moves)
        rows = records()
    if args.name_twins:
        renames = twin_names(rows, names)
        if renames:
            rename_twins(renames)
            print("refresh their object hashes: tools/level_c_gate.py ... --refresh-bodies")
            rows = records()
    moves = misplaced(rows, original_folders(rows, labels))
    if moves:
        for old, new in list(moves.items())[:20]:
            print(f"{old} -> {new}")
        print(f"{len(moves)} level body sources are outside their module directory; "
              "run python tools/level_source_layout.py --apply")
        return 1
    invalid = sorted({row["source"] for row in rows if not valid_source(row["source"])})
    if invalid:
        print("source names outside src/levels/<directory>/[<folders>/]<name>.c: "
              + ", ".join(invalid[:20]))
        return 1
    sources = {row["source"] for row in rows}
    homes = Counter(source.split("/")[2] for source in sources)
    grouped = sum(source.count("/") > 3 for source in sources)
    print(f"level source layout: {len(sources)} sources in {len(homes)} directories "
          f"({homes[SHARED]} shared), {grouped} in original source file folders")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
