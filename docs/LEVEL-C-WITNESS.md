# Shared level and frontend C witnesses

`func_00000100` is an independently authored 8-byte C body returning `1`.
The same two retail instructions occupy module offset `0x100` in all twenty
numbered USA `LEVEL_*.REL` files. The source has **one definition** in
[`src/levels/shared/func_00000100.c`](../src/levels/shared/func_00000100.c).
Its name describes the measured offset; its game-level purpose is unknown.

`func_shared_zero_buffer` is a second independently authored, 72-byte C body.
It reads two level-local pointer records and calls the imported `memset` to
clear a rounded buffer length. Its module offset differs among the twenty
levels, so the [trial profile](../config/levels/compiler_trial.json) pins each
placement. The two addressed data objects also move independently. The gate
resolves their local HI16/LO16 fixups at each placement and requires their
64-byte data windows to be identical across levels and unique within each
module. This verifies the particular data references used by this function;
it does not establish semantic identity for other masked families.

The narrowly scoped [level compiler trial](../config/levels/compiler_trial.json)
reuses the hash-pinned RAC5 GNU EE tools and `-O2 -G0` flags. It accepts these
two shared functions and one frontend function. Two independent forms serve as
uncounted controls:
an indexed global-array read at `LEVEL_01.REL:0x190` (24 bytes) and a global
store at `FRONTEND.REL:0x2CD8` (12 bytes). Their C remains under
`nonmatching/levels/`. Matching these short forms does not identify the
original compiler or qualify arbitrary level functions.

`tools/level_c_gate.py` recompiles all five sources on a native Linux
filesystem, requires pinned object hashes, links each object at its measured
module offset with the pinned SN linker, and compares every body byte. At all
twenty level placements it checks that offset `0x100` is a direct call target,
the adjacent `0x108` is separately called, no **direct** jump or branch enters
the body interior, and no named or packed relocation touches its eight bytes.
For the 72-byte body, it also checks the imported `memset` relocation, the
four local data fixups, the return boundary and direct control-flow entries.
It links the same C object separately at each measured module address using
the corresponding data-symbol addresses. It then replaces both C bodies in
each complete private SNR2 module and requires
all **20/20 complete module SHA-256 values** to match the pinned disc. The
two control functions also preserve their complete frontend/level 01 files,
and the previously measured relocated-image hashes at those two bases.
`func_00002F80` is an independently authored **476-byte** frontend New Game
initializer at module offset `0x2F80`. The [Archipelago Size Matters
research](https://github.com/Panguu/Archipelago-RaCSM/blob/SM-Main/worlds/rac_size_matters/core/patches/starting_planet.py)
identified that entry and its first three instructions; they match the pinned
USA module. A separate Ghidra boundary pass proposed the complete contiguous
body, and the pinned frontend has four direct callers with no direct jump or
branch from outside into its interior. The source keeps offsets where field
names and structure sizes are not yet proven; no Archipelago code or runtime
patch is imported. The gate checks the compiled symbol's complete 476-byte
extent, the six named imports, local fixups, complete FRONTEND.REL file and the
previously measured relocated-image hash. This qualifies that **one frontend
placement**, not a general frontend compiler profile or gameplay equivalence.

## Wave-17 level bodies

`config/levels/bodies.tsv` records **210 placements** (13,128 module bytes)
carried by **158 sources**: 157 author files under
[`src/levels/bodies/`](../src/levels/bodies) plus the shared
`func_00000100.c`. The placements cover all 21 modules (the frontend and the
twenty numbered levels). Eight wave-17 lots measured them; three placements
proved independently by two lots (`LEVEL_02.REL` `0x3EE08`, `0x23A28`,
`0x7F4A0`) appear once in the table.

Each row is one placement: module, offset, size, source, source SHA-256 (LF),
object SHA-256, compiler profile and assembler. The gate compiles every source
once, links it at each placement, compares every body byte with the pinned
retail module, replaces the body in the complete module, and then requires the
pinned module SHA-256. All 21 complete module hashes and the two previously
measured relocated images still match.

Two compiler profiles are declared. `pinned` is the
`compiler-no-pad-20261015` cc1 already used by the boot trial. `gnu-ee-trial`
is the same GNU EE build without the RAC2 increasing-callee-saved-saves patch
(cc1 SHA-256 `37704f48…`); 11 placements need it because the retail prologue
saves `$ra` before a floating-point register. Every row uses the pinned GNU
`gnu-ee-trial-20261015` assembler.

Symbol resolution is deliberately narrower than the wave-17 harness. An
undefined name resolves from the module import table (address 0), the module
export table (its measured offset), or the name itself
(`func_/D_<address>`). The gate never reads a symbol address from the retail
bytes it is proving. Forty-three placements (26 lot sources) used placeholder
names (`level_data_a`, `sub_target`, …) that the harness had resolved from
retail relocation sites; those bodies were renamed once into address-carrying
names, with one file per placement where the address differs, and the original
lot source is named in a header comment. The byte comparison proves each
renamed source exactly like the others.

**A body that carries an absolute address is not portable.** The twelve-byte
bodies of the shape `lui $v0,hi / jr $ra / sw $a0,lo($v0)` exist at dozens
of placements, and the retail spells the address differently at each of them:
`0x27E90` in the frontend, **`0` in all twenty levels**, then `0x2BE50`,
`0x3E628` and `0x10BE50` elsewhere. One source per family is therefore only
valid for a body that carries no address; the others need one file per
placement, with the address the retail uses written into the symbol name. The
immediate of a load or a store is signed, so the address read from the retail
bytes is `(lui << 16) + sign_extended(offset)`.

**A claim is a hypothesis, not a proof.** Two lots may produce different
sources for the same placement, and the first one written is not necessarily
the one that reproduces the retail bytes. Every candidate source of a
placement is therefore replayed at that placement, and the row is dropped when
none of them proves.

The three pre-existing accepted functions and two controls keep their original
scope: **556 unique C body bytes** (8 + 72 shared, 476 frontend) and **2,076
placement bytes**. The wave-17 bodies are a separate scope: **210 placements**,
**13,128 placement bytes**, and **10,560 bytes** of distinct source (a source
counted once). Do not add the scopes together: 20 wave-17 rows are the already
counted `0x100` eight-byte body, re-proved from the lots' own sources.

The rest of each module is supplied by the pinned retail input. No game bytes,
compiler binaries or linked outputs are committed.

## Wave-19 level bodies

`config/levels/bodies.tsv` now records **4,340 placements** (99,604 module
bytes) carried by **385 sources**, on top of the wave-17 ones, and all 21
complete module hashes still match.

The wave-18 campaign worked the levels again with a wider queue: 601 bounded
candidates over the 21 modules, taken from the same
`level_function_inventory` bounds, ranked by the number of placements that
carry the same raw body. Fourteen translation lots produced the bodies, and
the shared families were then expanded: for every accepted body, the 21
modules were searched for the candidate placements that carry the same body
bytes, and each one was proved on its own by compiling the same source,
linking it at that offset and comparing every byte with the retail module.
Nothing is counted on the strength of matching bytes alone.

Most of the added placements belong to a small number of shared families:
eight-byte accessors and stubs (`jr $ra` with the useful instruction in the
delay slot), the `base + index * stride` selectors, the angle-wrapping
helper and the `memset`-plus-counter ring buffer. One authored source
therefore carries many placements, which is why the placement count grows
much faster than the number of sources.

The wave-20 scope is separate from the wave-17 one: **4,340 placements**,
**99,604 placement bytes** and **20,848 bytes** of distinct source (a source
counted once). The two scopes are not added together: the 210 wave-17 rows
are part of the 4,340, and 20 of them are the already counted `0x100`
eight-byte body re-proved from the lots' own sources.

### The `Quat_Slerp` body and a fourth compiler

The 416-byte `Quat_Slerp__FP4QUATPC4QUATT1f` body is carried at **twenty
placements** by one source. It is byte-identical to the boot routine of the
same name, which gives it a prototype the levels do not have on their own.

Its measurement produced a fourth compiler chain. The reconstruction matched
the retail for the first fifty-one instructions and then differed only by two
register numbers, and the prologue was wrong in the same way: the retail saves
the general purpose registers before the floating point ones. The pinned chain
carries the RAC2 "increasing callee-saved saves" patch, which walks the save
registers upward, and the chain that matches reverts it. On top of the
project's own division padding patch, two anchored edits are collected in
`tools/compiler/patches/0003-rac5-upstream-saves-divpad.patch`; the profile is
pinned per source as `gnu-ee-trial-divpad` and
[described in the compiler status](COMPILER-STATUS.md). The change is
additive: the 177 level bodies accepted before it recompile to byte-identical
objects under the new `cc1`.

Three hundred and forty bodies in the wave-18 queue are larger than 412
bytes, a band the wave-17 campaign never attempted. Most of that band stays
unmatched: the instruction sequence of those bodies is right, but GCC 2.9
allocates the floating-point registers differently from the retail code.
That is an allocator difference, not a source difference, and it is parked
with its first difference and a reopening condition rather than counted.

## With your own lawful pinned USA disc and matching local tools, run in WSL:

```sh
python3 tools/level_c_gate.py baserom/SCUS_976.15.iso \
  --boot baserom/SCUS_976.15 \
  --cpp /path/to/cpp --cc1 /path/to/cc1 --as /path/to/as \
  --linker /mnt/c/path/to/ld.exe \
  --extra-cc1 gnu-ee-trial=/path/to/gnu-ee-trial/cc1 \
  --output-dir /home/you/rac5-level-c-trial
```

`--refresh-bodies` rewrites the two hash columns of `bodies.tsv` after a full
pass. Keep it out of ordinary runs: a stale hash must fail, not be repaired
silently.

The ignored `build/level-c-gate/report.json` starts as `incomplete` with zero
matches on every run. A full pass reports the original scope (three accepted
functions: **556 unique C body bytes**, **2,076 placement bytes**) and the
level-body scope (**3,571 placements** in **177 sources**, **54,472 placement
bytes**, **11,068 distinct-source bytes**). These are scoped matches, not a
qualified game-wide percentage. More functions require their own boundaries,
compiler controls and complete-program checks before their C bytes can be
counted.
