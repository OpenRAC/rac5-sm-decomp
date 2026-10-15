# SNR2 function-boundary and shared-code audit

[`tools/level_function_inventory.py`](../tools/level_function_inventory.py)
analyzes all 21 hash-pinned USA `LVL/*.REL` modules. It gathers possible
function starts from direct `jal` targets, the exported `lib_main` entry and
code addresses in packed local pointer relocations. It partitions every
candidate code interval between those starts, checks `jr $ra` return/delay
slots and zero tails, and rejects a clean boundary when a direct branch or
jump enters its interior from another interval. This is a **candidate-entry
inventory**, not a declaration that every row is a real function. Pointer
tables can contain jump-table basic blocks; valid instructions can also occur
in embedded data.

The pinned private run produced:

| Classification | Candidate intervals |
| --- | ---: |
| Direct-call/export start with bounded return and zero tail | 74,051 |
| Relocated pointer start with bounded return and zero tail | 22,321 |
| No return before the next candidate start | 19,510 |
| Nonzero bytes after the last observed return | 8,474 |
| **All candidate entry intervals** | **124,356** |

The 74,051 stronger bounded candidates cover **26,702,516 body bytes by
placement**. The full candidate code intervals cover **36,341,888 bytes by
placement**. Their gap is not automatically unimplemented code: it includes
uncertain function bodies, alignment and possible embedded data.

For every bounded candidate, the tool records a raw body SHA-256 and a second
SHA-256 after masking only fields at measured relocation sites. The masked
hash also includes each site's offset, relocation kind, named symbol and
addend. This exposes code that moves between levels without publishing code
bytes. **Masked equality is only a review lead**: two different globals or
callees may have the same masked instructions. Groups containing multiple
occurrences in one module are especially ambiguous and are not collapsed in
the conservative lead measure.

Raw, byte-identical bounded bodies account for **23,765,324 distinct candidate
bytes**, compared with 26,702,516 placement bytes. The strictly exact audit
also drops the complete identical code interval of `LEVEL_21.REL` after
keeping `LEVEL_15.REL`, then deduplicates non-overlapping raw-identical
bounded bodies only when a group occurs at most once per retained module.
That leaves an **upper bound of 33,168,892 candidate interval bytes**. It is
still an upper bound because relocated addresses can hide more shared code,
and the input intervals may contain data. The much smaller **4,106,316-byte
relocation-masked conservative lead** applies only to the stronger bounded
bodies and is *not* a proven lower bound or a report denominator.

With your lawful pinned USA disc, run:

```sh
python tools/level_function_inventory.py --write baserom/SCUS_976.15.iso
python tools/level_function_inventory.py --check
python tools/progress_status.py --write
```

The tracked [`function_inventory_summary.json`](../config/levels/function_inventory_summary.json)
contains metadata and counts only. Detailed per-module TSVs and
`exact_duplicate_groups.tsv` / `masked_review_leads.tsv` stay under ignored
`build/level-functions/` because they are large, generated research worklists.
`--check` validates the public snapshot and its source-catalogue hashes without
the game; the private `--write` run is needed to reverify the analysis itself.

Before a game-wide [ByteMatch objdiff report](https://github.com/Veradictus/ByteMatch/blob/master/docs/getting-started.md)
is published, the uncertain rows need function/control-flow review and masked
families need target-equivalence checks. No exact unique-code denominator or
game-wide percentage is claimed from this audit.

## Independent function-boundary cross-check

A separate private Ghidra 12.1.3 project imported all 21 pinned candidate
code slices at module offset `0x80` with an R5900 language extension. The
authored [`ExportFunctionBounds.java`](../tools/ghidra/ExportFunctionBounds.java)
exports only entry/body metadata. The
[`level_ghidra_crosscheck.py`](../tools/level_ghidra_crosscheck.py) tool
requires the Ghidra body to be contiguous from the same candidate entry and
to end at the independently inferred return boundary. The identical
`LEVEL_15`/`LEVEL_21` code intervals produced identical Ghidra export hashes,
an additional repeatability control.

Across all modules, **83,459 candidate boundaries** and **24,107,476 body
bytes by placement** agree exactly between the two methods. Ghidra alone
proposed **2,689** entries; the static call/pointer audit alone proposed
**27,692**. The differences are private review worklists. Ghidra's raw-code
import excludes module data and can miss calls or misclassify embedded data;
agreement is corroboration, not proof that every other address is non-code.
See [`tools/ghidra/README.md`](../tools/ghidra/README.md) for reproducing the
analysis with a lawful image and local Ghidra installation.

## Structural translation leads

[`level_translation_families.py`](../tools/level_translation_families.py)
filters masked groups to one placement per module, requires every boundary
to agree with Ghidra, preserves named relocation symbols and addends, and
requires local HI16/LO16 data references to move by one consistent
module-specific delta. **531 groups** passed those structural checks. They
contain **1,744,600 placement body bytes** but only **151,048 body bytes**
when one representative per group is counted. Their additional candidate
savings beyond raw-identical groups are **1,494,612 bytes**, giving a
**31,674,280-byte structural lead upper bound** over the original candidate
intervals. This number is *not* a qualified unique-code denominator.

The largest lead has a **32,796-byte** body in all twenty numbered levels.
Ghidra agrees with its boundary in every placement. Each placement has the
same 82 named call relocations, while all 47 local HI16 data references
translate by one consistent offset for that level; the remaining unpaired
low reference follows the same offset modulo 16 bits. This strongly supports
one shared code template, while the game-level role and source identity still
require review. Groups with local code jumps or nonuniform data translations
remain in the unresolved worklist.
