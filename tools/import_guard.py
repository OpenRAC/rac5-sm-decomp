"""Require exact retail identities for all accepted level import calls."""

from __future__ import annotations

from bisect import bisect_left
from dataclasses import dataclass
from typing import Mapping

from rel import HEADER, RELOCATION, SYMBOL, unpack_relocation

R_MIPS_26 = 4


class ImportIdentityError(ValueError):
    """A compiled call does not match the retail imported-call relocation."""


@dataclass(frozen=True)
class NamedImportCalls:
    sites: tuple[int, ...]
    names: tuple[str, ...]

    def within(self, start: int, size: int) -> dict[int, str]:
        left = bisect_left(self.sites, start)
        right = bisect_left(self.sites, start + size)
        return {self.sites[index] - start: self.names[index]
                for index in range(left, right)}


def named_import_calls(module: bytes) -> NamedImportCalls:
    """Read named R_MIPS_26 sites whose SNR2 symbol is an import at zero."""
    head = HEADER.unpack_from(module)
    symbols = []
    for index in range(head[4]):
        name_at, address, _aux, _kind, _flags = SYMBOL.unpack_from(
            module, head[3] + index * SYMBOL.size)
        end = module.index(b"\0", name_at)
        symbols.append((module[name_at:end].decode("ascii", "replace"), address))
    calls = []
    seen = set()
    for index in range(head[2]):
        site, kind, symbol, _addend = unpack_relocation(
            module, head[1] + index * RELOCATION.size)
        if symbol >= len(symbols):
            raise ImportIdentityError("named relocation has no retail symbol")
        name, address = symbols[symbol]
        if kind == R_MIPS_26 and address == 0:
            if site in seen or not name:
                raise ImportIdentityError("duplicate or unnamed retail import call")
            seen.add(site)
            calls.append((site, name))
    calls.sort()
    return NamedImportCalls(tuple(site for site, _name in calls),
                            tuple(name for _site, name in calls))


def check_import_call_identity(obj: Mapping, expected: Mapping[int, str],
                               row: Mapping, values: Mapping[str, int]) -> int:
    """Reject a missing, duplicated, renamed or extra zero-address call.

    ``values`` is the same undefined-symbol map used to link this placement.
    A call to an undefined nonzero local function remains valid outside the
    retail import sites; its linked bytes are checked by the program gate.
    """
    at_site: dict[int, str] = {}
    for relocation in obj["relocs"]:
        delta = relocation["offset"]
        if not 0 <= delta < row["size"]:
            continue
        if delta in expected:
            if delta in at_site:
                raise ImportIdentityError(
                    f"{row['module']} 0x{row['offset']:06X}: duplicate relocation at +{delta}")
            if relocation["type"] != R_MIPS_26:
                raise ImportIdentityError(
                    f"{row['module']} 0x{row['offset']:06X}: wrong relocation type at +{delta}")
        elif relocation["type"] != R_MIPS_26:
            continue
        try:
            symbol = obj["symbols"][relocation["sym"]]
            name = symbol["name"]
            undefined = symbol["shndx"] == 0
        except (IndexError, KeyError, TypeError) as error:
            raise ImportIdentityError("invalid object call symbol") from error
        if delta in expected:
            if not undefined or not name or name not in values or values[name] != 0:
                raise ImportIdentityError(
                    f"{row['module']} 0x{row['offset']:06X}: import call is not an undefined zero-address symbol at +{delta}")
            at_site[delta] = name
        elif undefined:
            if not name or name not in values:
                raise ImportIdentityError(
                    f"{row['module']} 0x{row['offset']:06X}: unresolved extra call at +{delta}")
            if values[name] == 0:
                raise ImportIdentityError(
                    f"{row['module']} 0x{row['offset']:06X}: extra zero-address import call {name!r} at +{delta}")
    for delta, retail_name in sorted(expected.items()):
        if delta not in at_site:
            raise ImportIdentityError(
                f"{row['module']} 0x{row['offset']:06X}: missing R_MIPS_26 at +{delta}")
        if at_site[delta] != retail_name:
            raise ImportIdentityError(
                f"{row['module']} 0x{row['offset']:06X} {row['source']} +{delta}: "
                f"object {at_site[delta]!r}, retail {retail_name!r}")
    return len(expected)
