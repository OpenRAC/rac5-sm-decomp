#!/usr/bin/env python3
"""Explain candidate boundary cuts using the pinned USA SNR2 unwind records."""

from __future__ import annotations

import argparse
from bisect import bisect_left, bisect_right
from collections import Counter, defaultdict
from dataclasses import dataclass
import json
from pathlib import Path
import struct

from disc import IsoDisc, verify_disc
from level_function_inventory import (
    CODE_CATALOGUE, CODE_START, EXPORT_CATALOGUE, MODULE_CATALOGUE,
    ROOT, TARGET, WORD, control_flow, digest, module_rows, records,
)
from rel import HEADER, iter_packed_relocations


@dataclass(frozen=True)
class UnwindRange:
    start: int
    end: int
    exception_table: int | None


def word(data: bytes, offset: int) -> int:
    return WORD.unpack_from(data, offset)[0]


def read_frame_chain(
    data: bytes, cie: int, table: int | None, code_end: int, payload_end: int,
    pointers: dict[int, int],
) -> tuple[list[UnwindRange], int]:
    fde = cie + 4 + word(data, cie)
    frames = []
    while fde + 4 <= payload_end:
        size = word(data, fde)
        if size == 0:
            if not frames:
                raise ValueError("empty legacy unwind record")
            return frames, fde + 4
        if (size < 12 or size % 4 or fde + size + 8 > payload_end
                or fde + 4 - word(data, fde + 4) != cie):
            raise ValueError("invalid FDE extent or CIE reference")
        start, length = word(data, fde + 8), word(data, fde + 12)
        if (pointers.get(fde + 8) != start or (start | length) % 4
                or not CODE_START <= start < start + length <= code_end):
            raise ValueError("invalid FDE code range or start relocation")
        frames.append(UnwindRange(start, start + length, table))
        fde += 4 + size
    raise ValueError("unterminated legacy unwind record")


def unwind_ranges(
    data: bytes, code_end: int, payload_end: int, pointers: dict[int, int],
) -> list[UnwindRange]:
    """Read the two measured legacy version-one CIE layouts."""
    marker = b"\x01eh\0"
    position = code_end
    frames = []
    while (position := data.find(marker, position, payload_end)) != -1:
        cie = position - 8
        position += 1
        table = pointers.get(cie + 12, 0)
        if (cie % 4 or not code_end <= cie <= payload_end - 32
                or word(data, cie) != 24 or word(data, cie + 4) != 0
                or not code_end <= table < payload_end):
            continue
        chain, position = read_frame_chain(data, cie, table, code_end, payload_end, pointers)
        frames.extend(chain)

    # Size, CIE id, version, empty augmentation and the three measured
    # code/data alignment and return-register fields of this second layout.
    empty_prefix = struct.pack("<IIBBBBB", 16, 0, 1, 0, 1, 0x78, 0x40)
    position = code_end
    while (cie := data.find(empty_prefix, position, payload_end)) != -1:
        position = cie + 1
        if cie % 4:
            continue
        try:
            chain, position = read_frame_chain(data, cie, None, code_end, payload_end, pointers)
        except ValueError:
            continue
        frames.extend(chain)
    frames.sort(key=lambda frame: frame.start)
    if any(left.end > right.start for left, right in zip(frames, frames[1:])):
        raise ValueError("overlapping FDE code ranges")
    return frames


def exception_targets(
    data: bytes, frame: UnwindRange, payload_end: int, pointers: dict[int, int],
) -> set[int]:
    """Resolve the frame's relocated protected-range and landing-pad pointers."""
    if frame.exception_table is None:
        return set()
    sites = set()
    targets = set()
    start_is_protected = False
    for offset in range(frame.exception_table, payload_end - 11, 12):
        if word(data, offset) == 0xFFFFFFFF:
            if (word(data, offset + 4) != 0xFFFFFFFF or offset in pointers
                    or not start_is_protected):
                return set()
            break
        record_sites = (offset, offset + 4, offset + 8)
        start, end, handler = (pointers.get(site, -1) for site in record_sites)
        if not (frame.start <= start < end <= frame.end and frame.start <= handler < frame.end):
            return set()
        start_is_protected |= start == frame.start
        sites.update(record_sites)
        targets.update((start, end, handler))
    else:
        return set()
    if any(site not in sites and frame.start < dest < frame.end for site, dest in pointers.items()):
        return set()
    return targets


def return_cut(
    row: dict, frame: UnwindRange, interior: list[dict], targets: set[int],
    external_or_linked_entry: bool,
) -> int | None:
    if (row["status"] != "no_return" or not interior or external_or_linked_entry
            or interior[0]["start"] != row["limit"] or row["limit"] >= frame.end - 8):
        return None
    if any(item["evidence"] != "pointer" or item["start"] not in targets for item in interior):
        return None
    return row["limit"]


def ordinary_delay_slot(value: int, address: int) -> bool:
    import rabbitizer

    instruction = rabbitizer.Instruction(value, address, rabbitizer.InstrCategory.R5900)
    exception = (value >> 26 == 0 and value & 63 in (12, 13)
                 or (value & 0xFFE0003F) in (0x42000010, 0x42000018))
    return (instruction.isValid() and not instruction.hasDelaySlot()
            and not instruction.isTrap() and not exception)


def review_module(
    module: str, data: bytes, code_end: int, inventory_exports: set[int],
    exported_addresses: set[int], accepted: list[tuple[int, int]],
) -> dict:
    import rabbitizer

    header = HEADER.unpack_from(data)
    payload_end = header[1]
    pointers = {item.site: word(data, item.site)
                for item in iter_packed_relocations(data, header[13], payload_end)
                if item.kind == 3}
    frames = unwind_ranges(data, code_end, payload_end, pointers)
    flow = control_flow(data, code_end)
    _, returns, edges = flow
    rows = module_rows(module, data, code_end, inventory_exports, flow=flow)
    starts = [row["start"] for row in rows]
    by_start = dict(zip(starts, rows))
    results = []
    classifications = Counter()
    coverage = Counter()
    for frame in frames:
        if frame.exception_table is None:
            coverage["empty_fdes"] += 1
            coverage["empty_fde_bytes"] += frame.end - frame.start
            overlap = [bounds for bounds in accepted
                       if bounds[0] < frame.end and frame.start < bounds[1]]
            if not overlap:
                coverage["empty_without_accepted_overlap"] += 1
            elif all(bounds == (frame.start, frame.end) for bounds in overlap):
                coverage["empty_same_accepted_extent"] += 1
            else:
                coverage["empty_different_accepted_extent"] += 1
            continue
        coverage["eh_fdes"] += 1
        coverage["eh_fde_bytes"] += frame.end - frame.start
        row = by_start.get(frame.start)
        if row is None or row["status"] != "no_return":
            continue
        within = {site for site in returns if frame.start <= site < frame.end}
        if not within:
            classifications["no_jr_ra_in_frame"] += 1
            continue
        if (within != {frame.end - 8}
                or any(left < frame.end and frame.start < right for left, right in accepted)):
            classifications["needs_review"] += 1
            continue
        if not ordinary_delay_slot(word(data, frame.end - 4), frame.end - 4):
            classifications["needs_review"] += 1
            continue
        interior = rows[bisect_right(starts, frame.start):bisect_left(starts, frame.end)]
        targets = exception_targets(data, frame, payload_end, pointers)
        incoming = any(
            frame.start < target < frame.end and (
                not frame.start <= origin < frame.end
                or rabbitizer.Instruction(word(data, origin), origin,
                                          rabbitizer.InstrCategory.R5900).isFunctionCall()
            )
            for origin, target in edges
        )
        exported = any(frame.start < site < frame.end for site in exported_addresses)
        cut = return_cut(row, frame, interior, targets, incoming or exported)
        if cut is None:
            classifications["needs_review"] += 1
            continue
        classifications["return_after_exception_pointer"] += 1
        results.append({"start": frame.start, "inventory_limit": cut, "frame_end": frame.end})
    return {"module": module, "frames": len(frames), "coverage": coverage,
            "classifications": classifications,
            "return_cuts": results}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("iso", type=Path)
    args = parser.parse_args()
    target = json.loads(TARGET.read_bytes())
    intervals = {row["module"]: row for row in records(CODE_CATALOGUE)}
    modules = {Path(row["path"]).name: row for row in records(MODULE_CATALOGUE)}
    if len(intervals) != 21 or set(intervals) != set(modules):
        raise ValueError("pinned level catalogues do not contain 21 placements")
    exports, exported_addresses, accepted = defaultdict(set), defaultdict(set), defaultdict(list)
    for row in records(EXPORT_CATALOGUE):
        module = Path(row["module"]).name
        offset = int(row["offset"], 16)
        exported_addresses[module].add(offset)
        if row["symbol"] == "lib_main__FiPPc":
            exports[module].add(offset)
    for row in records(ROOT / "config/levels/bodies.tsv"):
        start = int(row["offset"], 16)
        accepted[row["module"]].append((start, start + int(row["size"])))

    results = []
    counts = Counter()
    coverage = Counter()
    with IsoDisc(args.iso) as disc:
        verify_disc(disc, target)
        for module in sorted(modules):
            data = disc.file_bytes(modules[module]["path"])
            code_end = int(intervals[module]["end_exclusive"], 16)
            if (digest(data) != modules[module]["sha256"]
                    or digest(data[CODE_START:code_end]) != intervals[module]["sha256"]):
                raise ValueError(f"{module} differs from pinned SNR2 code")
            result = review_module(
                module, data, code_end, exports[module], exported_addresses[module], accepted[module],
            )
            counts.update(result["classifications"])
            coverage.update(result["coverage"])
            results.append(result)
    print(json.dumps({"coverage": coverage, "classifications": counts, "modules": results}, indent=2))


if __name__ == "__main__":
    main()
