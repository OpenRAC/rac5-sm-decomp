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

Six compiler profiles are declared. `pinned` is the
`compiler-no-pad-20261015` cc1 already used by the boot trial. `gnu-ee-trial`
is the same GNU EE build without the RAC2 increasing-callee-saved-saves patch
(cc1 SHA-256 `37704f48…`); some retail prologues save `$ra` before a
floating-point register. `gnu-ee-trial-divpad` reverts
that option and adds the R5900 division padding, so that the prologue saves
the general purpose registers first and every single-precision division is
preceded by two nops (cc1 SHA-256 `d7f3fb64…`). The opt-in
`gnu-ee-trial-divpad-blockmove` also qualifies 32-byte block-move loop
padding.
`sdk991111` and `sdk991111sync` are the Sony EE-GCC 2.9-ee-991111 builds the
boot campaign already pins (cc1 SHA-256 `1305725c…` and `eaf94d2a…`); a few
level bodies only match under them — the game compiler of the sibling
projects is a lever here too — and they are selected per source, never
globally. Most rows use the pinned GNU `gnu-ee-trial-20261015` assembler;
two measured sources select separately pinned `r5900-mfc1` and `ee-frozen`
routes.

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

At the October 2026 snapshot, `config/levels/bodies.tsv` recorded **7,997 placements** (384,676 module
bytes) carried by **1,658 sources**, on top of the wave-17 ones, and all 21
complete module hashes still match. The placements name their source; the
source's own two hashes, its compiler profile and its assembler live once per
source in `config/levels/body_sources.tsv`, so a body carried by hundreds of
placements does not repeat them hundreds of times.

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

The wave-20 scope is separate from the wave-17 one: **7,997 placements**,
**384,676 placement bytes** and **120,444 bytes** of distinct source (a source
counted once). The two scopes are not added together: the 210 wave-17 rows
are part of the 7,997, and 20 of them are the already counted `0x100`
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

### The sixty-four byte copy, and what the sibling projects had already solved

The `FRONTEND.REL:0x0061C0` body was parked for a whole wave: it copies
sixty-four bytes, and the retail does it with four `lq` and four `sq` — the
sixteen-byte moves of the R5900. Every attempt had tried `mode(TF)`,
`aligned(16)` and `vector_size(16)` on their own and none of them produced
those instructions.

The sibling projects had already answered the question. Ratchet & Clank 1
writes its sixteen-byte values as

```c
typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));
```

and the machine description of the pinned compiler says when `lq` and `sq`
come out: they are the `movti_internal` pattern, so they belong to a
**scalar** of mode `TImode`. An assignment of an **aggregate** — a struct or
an array — is not a scalar move: the compiler cuts it into eight-byte pieces
and writes `ld`/`sd`. The retail's sixty-four bytes are therefore four
separate quadwords, copied one at a time:

```c
    dst->q0 = src->q0;
    dst->q1 = src->q1;
    dst->q2 = src->q2;
    dst->q3 = src->q3;
```

That produced the retail's instructions, one byte of difference left: the
retail keeps the global's address in `$a1` and the pointer it loads in
`$a2`, the attempt had them the other way round. The order in which the two
registers are taken follows the order the source first needs them, and a
pointer variable makes the *pointer* come first. Naming the global directly,
twice, puts the global's address first:

```c
    Block *dst = D_0010EA90.dst;
    ...
    *(char *)((char *)&D_0010EA90 + D_0010EA90.off + 8) = 1;
```

The body is then byte-identical to the retail, all sixty-four bytes, and it
is counted with the pinned compiler. The lesson is recorded for the next
waves: `lq`/`sq` mean a **scalar** `TImode` value, and a register that is
merely inverted is an order of creation, not an allocator difference.

### The wave-21 campaign, and the form of a float copy

That lesson opened a whole class, and the class was measured before it was
cut up: of the bounded candidates of the twenty-one modules, **1,089
families** carry a sixteen byte move, at **1,511 placements**. Eighteen
translation lots took them, and the root **re-proved every claimed row
itself**, at its own placement and under its own profile, before anything
entered the repository. The wave added **469 placements** and left **198
measured failures**, each with its cause.

The form the campaign measured is not "a copy of floats". The `ldl`/`ldr`
pair is an **aggregate aligned on four bytes**, copied by a structure
assignment, which the compiler cuts into **eight byte pieces** (`ldl` at
base+7, `ldr` at base), plus one word when the rest is not a multiple of
eight. The member types are irrelevant; the type's alignment decides
between `ldl`/`ldr` and `ld`/`sd`. A contiguous copy is a **single**
assignment: the retail loads every quadword before it stores any.

The order of the assignments, and the order of the operands of a pointer
arithmetic, decide the registers, and naming a global **directly** puts its
address in the first register. The address of a global reads
`(high << 16) + sext16(low)`, and a non canonical page needs a symbol **at
the page**.

What the wave also found is the sense the levels had stripped: the modules
import the shared game code **by name** — `BinkOpen`, `LIGHT_BeginFrame__Fv`,
`MBOX_Receive__FiPP12HigMsgPacketPUi`,
`dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl` — and the relocation
table says where each call is. That map anchored the candidates, and it is
why a body could be written as game code instead of guessed.

Three things the retail does that the compiler does not remain the open
part: reloading a global after each store (the aliasing of GCC 2.9 merges
the reads), a 128-bit constant that is *computed* rather than literal (the
pinned `cc1` refuses the conversion), and `movn`.

### The wave-22 campaign, and the form of a float copy

The float class is much larger than the sixteen byte one — **14,184
families** at 18,068 placements — and twenty lots took the first 2,400 of
them, ranked by the number of placements they carry. The root re-proved
every claimed row itself, and the wave added **2,383 placements** plus
**three of the twelve bodies** that had been parked for two campaigns
because they are larger than 412 bytes.

The form the campaign measured is the twin of the sixteen byte one. The
float copy of the retail is an assignment **field by field**, in the
retail's exact order; a structure assignment gives `ldl`/`ldr`, which is the
*other* class. The order of the assignments is the order of the
instructions, and it is a **rotation** of the source order — the retail
writes `+0, +0xC, +4, +8` for four fields, so the source writes `f_00,
f_0C, f_08, f_04`, because the compiler swaps the last two stores. The
products of a matrix-vector product have to live in **named locals**, or the
compiler recycles the registers and the body comes out shorter.

The **polarity** of a branch is in the condition: `if (a1 == 0xFFFF)` gives
the retail's inverted branch, and a float comparison written with `>` gives
`c.lt.s` and `bc1tl`, where `<` gives `bc1fl`. A global whose address the
retail spells with a **non canonical page** needs a symbol **at the page**
with the offset in the expression. And to make the compiler **reload** a
global pointer after a write, the global has to be a **structure**.

One of the three parked bodies turned out to be a **profile** wall, not a
source wall: the source the wave-19 campaign had written, unchanged, gives
504 bytes under the pinned compiler and **512 exact bytes** under
`gnu-ee-trial-divpad`. That is a correction to what the earlier waves
concluded, and it is recorded in
[`MATCHING-BLOCKERS.md`](MATCHING-BLOCKERS.md).

### The wave-23 campaign, and the form of a float copy

The wave-23 campaign changed the way the work is divided: each agent proves
a family at **one** placement, and the root extends it afterwards, proving
every placement on its own bytes. Twenty lots took the first 2,400 of the
remaining float families, and the root re-proved every claimed row itself.

What the campaign measured, beyond what the wave-22 campaign had:

- the **order of the assignments** is a **rotation** of the source order: for
  the retail's `R1..Rn` the source writes `R1..R(n-2), Rn, R(n-1)`;
- the **order of the parameters** decides the schedule: putting the float
  first reproduces the retail where `(void *, void *, float)` does not;
- a **local pointer to the global** (`float *dst = &D_00383770;`) makes the
  global's page live across a call, so the compiler materialises it
  **before** the call, in a callee-saved register, as the retail does;
- the value written after a call must be **the return of the call**, not a
  constant;
- a global has **two addressing forms** in the retail — the page alone for
  the access at offset zero, the materialised address for the others — and
  a field at `+0x10` is often a **distinct symbol**;
- the `jal` target of the retail reads `(imm26 << 2) | (PC & 0xF0000000)`,
  not the PC-relative formula.

## With your own lawful pinned USA disc and matching local tools, run in WSL:

```sh
python3 tools/level_c_gate.py baserom/SCUS_976.15.iso \
  --boot baserom/SCUS_976.15 \
  --cpp /path/to/cpp --cc1 /path/to/cc1 --as /path/to/as \
  --linker /mnt/c/path/to/ld.exe \
  --extra-cc1 gnu-ee-trial=/path/to/gnu-ee-trial/cc1 \
  --extra-cc1 gnu-ee-trial-divpad=/path/to/divpad/cc1 \
  --extra-cc1 gnu-ee-trial-divpad-blockmove=/path/to/blockmove/cc1 \
  --extra-cc1 sdk991111=/path/to/sdk/cc1 \
  --extra-cc1 sdk991111sync=/path/to/sdk-sync/cc1 \
  --extra-as r5900-mfc1=/path/to/r5900-mfc1/as \
  --extra-as ee-frozen=/path/to/ee-frozen/as \
  --output-dir /home/you/rac5-level-c-trial
```

`--refresh-bodies` rewrites the two hash columns of `body_sources.tsv` after a
full pass. Keep it out of ordinary runs: a stale hash must fail, not be repaired
silently.

`--jobs N` compiles independently named body sources concurrently and, in the
default linking mode, links their objects concurrently within each module.
The default is one job; compiled source and object hashes are still checked,
and linked placements are still
checked in order against the complete module hash. A local comparison with
four jobs reproduced the same 21 exact module hashes as the sequential pass.

`--batch-link-size 25` opts into multi-object SN links within each module;
`0` keeps individual links. A batch excludes conflicting global symbols and
repeated uses of one object, verifies each object hash before linking, then
checks each output section's address, size, body bytes and named import calls.
The complete module hash remains mandatory. The 25-object route reproduced
all 21 USA modules and 33,620 accepted placements with 2,398 SN link invocations;
batch links run serially to avoid contention in the pinned linker.

The ignored `build/level-c-gate/report.json` starts as `incomplete` with zero
matches on every run. A full pass reports the original scope (three accepted
functions: **556 unique C body bytes**, **2,076 placement bytes**) and the
level-body scope (**33,620 placements** in **23,999 sources**, **2,002,988 placement
bytes**, **1,553,764 distinct-source bytes**). These are scoped matches, not a
qualified game-wide percentage. More functions require their own boundaries,
compiler controls and complete-program checks before their C bytes can be
counted.

`src/levels/shared/` contains the two explicitly authored witnesses from the
initial shared-level compiler trial. Later accepted bodies stay in
`src/levels/bodies/` even when one source is linked at several placements. The
placement table records that reuse, and the progress report counts each source
once in its distinct-source byte total.

Another 267 reviewed 28-byte placements link exactly from 253 C sources
(7,476 placement bytes, 7,084 distinct-source bytes). Each has one local
HI16 and one local LO16 relocation. Each retail interval ends with a return
at body byte 20 and its delay-slot instruction at byte 24; Ghidra identified
a function at every entry. Fourteen placements reuse an identical
source only after that source linked exactly at both sites. This includes
`FRONTEND:0x020968`, whose signed positive mask comparison retains the
retail instructions. All 21 complete USA modules remain exact.

Another 209 reviewed 28-byte call wrappers link exactly from 201 C sources
(5,852 placement bytes, 5,628 distinct-source bytes). Their single call
relocation preserves the local target or the named import. Eight duplicate
source placements were relinked at both sites before the complete-module
gate. Every retail interval has a return at byte 20 and its delay slot at
byte 24. The other 23 reviewed call bodies remain uncounted with C attempts
under `nonmatching/levels/`.

Another 81 reviewed 28-byte local-data placements link exactly from 76 C
sources (2,268 placement bytes, 2,128 distinct-source bytes). Their three or
four local relocations cover paired global reads, conditional updates, byte
extraction and a pointer-based difference. Five identical sources link at two
level placements each. Every reviewed retail interval returns at byte 20 with
its delay slot at byte 24, and all 21 complete modules remain exact.

Another 246 reviewed 32-byte call wrappers link exactly from 238 C sources
(7,872 placement bytes, 7,616 distinct-source bytes). The single call
relocation at each site preserves its local target or the named `memset`
import. Eight identical sources were relinked at a second placement. Every
retail interval returns at byte 24 with its delay slot at byte 28; the full
21-module gate remains exact.

Another 131 reviewed 32-byte local-data placements link exactly from 125 C
sources (4,192 placement bytes, 4,000 distinct-source bytes). Each has one
local HI16/LO16 pair. Six identical sources were relinked at their other
placement. All 151 reviewed retail intervals return at byte 24 with their
delay slot at byte 28; the 20 halfword-mask candidates that remain
nonmatching are retained under `nonmatching/levels/` and receive no C credit.

Another 94 reviewed 32-byte placements with three, four or six body
relocations link exactly from 90 C sources (3,008 placement bytes, 2,880
distinct-source bytes). Twenty named `SND_Fixup` calls keep their import
identity, and the local calls keep their measured targets. Four identical
sources were relinked at both sites. Every retail interval returns at byte
24 with its delay slot at byte 28, and all 21 modules remain exact.

Another 209 reviewed 36-byte call bodies link exactly from 182 C sources
(7,524 placement bytes, 6,552 distinct-source bytes). Their local calls keep
the measured targets. Twenty-seven placements reuse an identical source only
after exact relinking at the other site. The floating-point, unsigned literal
and output-pointer parameter forms reproduce the retail argument registers.
Every retail interval returns at byte 28 with its delay slot at byte 32, and
the complete 21-module gate remains exact.

Another 186 reviewed 36-byte placements with two body relocations link
exactly from 179 C sources (6,696 placement bytes, 6,444 distinct-source
bytes). They include local data references and two-call forms. Seven identical
sources were relinked at their other placements. All 190 reviewed retail
intervals return at byte 28 with their delay slot at byte 32; four remaining
pointer-condition bodies have retained C under `nonmatching/levels/` and
receive no C credit.

Another 230 reviewed 36-byte placements with three to eight body relocations
link exactly from 222 C sources (8,280 placement bytes, 7,992 distinct-source
bytes). The 20 named `SND_FixupSoundSignaturesIOP` imports retain their exact
identity, and local calls keep their measured targets. Eight identical
sources were relinked at both sites. Every retail interval returns at byte
28 with its delay slot at byte 32, and all 21 modules remain exact.

Another 226 reviewed 40-byte call bodies link exactly from 204 C sources
(9,040 placement bytes, 8,160 distinct-source bytes). Thirteen named
`SignalSema` calls keep their import identity; the other calls keep their
measured local targets. Twenty-two identical sources were relinked at a
second placement. Every retail interval returns at byte 32 with its delay
slot at byte 36, and all 21 modules remain exact.

Another 256 reviewed 40-byte placements with two body relocations link
exactly from 256 C sources (10,240 placement and distinct-source bytes).
They include local data, two-call bodies and 11 named
`g_bRenderPlayerShadow` data relocations. All 274 reviewed retail intervals
return at byte 32 with their delay slot at byte 36. The 18 sign-test and
boolean candidates retained under `nonmatching/levels/` receive no C credit;
all 21 complete modules remain exact.

Another 91 reviewed 40-byte placements in levels 19–24 link exactly from
91 C sources (3,640 placement and distinct-source bytes). Their local data,
two-call and named-data forms extend the preceding 40-byte evidence. Seven
other reviewed placements have retained C attempts for the same signed-test
and boolean-conversion differences and receive no C credit. All 98 retail
intervals return at byte 32 with their delay slot at byte 36, and all 21
complete modules remain exact.

Another 226 reviewed 40-byte placements with three or more relocations link
exactly from 216 authored C sources (9,040 placement bytes and 8,640 distinct
source bytes). Ten sources serve both levels 15 and 21; each source linked
exactly at both sites before the complete 21-module gate. The 15 other
reviewed placements retain C under `nonmatching/levels/` and earn no C credit.
Every retail interval returns at byte 32 with its delay slot at byte 36.

Another 108 reviewed 44-byte placements with one call relocation link exactly
from 96 authored C sources (4,752 placement bytes and 4,224 distinct-source
bytes). Twelve additional placements reuse an identical source after that
source linked exactly at each site. Five integer-modulo bodies require the
existing per-source `-mno-check-zero-division` flag; the level-body gate now
applies these opted-in flags. The other 80 reviewed C attempts remain under
`nonmatching/levels/` without match credit. Every retail interval returns at
byte 36 with its delay slot at byte 40. All 21 complete modules remain exact.

Another 200 reviewed 44-byte placements with two relocations link exactly
from 192 authored C sources (8,800 placement bytes and 8,448 distinct-source
bytes). Eight additional placements reuse an identical source only after the
canonical source linked exactly at both sites. The other 83 reviewed C
attempts remain under `nonmatching/levels/` without match credit. Every
retail interval returns at byte 36 with its delay slot at byte 40; all 21
complete modules remain exact.

Another 155 reviewed 44-byte placements with three relocations link exactly
from 146 authored C sources (6,820 placement bytes and 6,424 distinct-source
bytes). Nine additional placements reuse an identical source only after the
canonical file linked exactly at both sites. One further call wrapper has
retained C under `nonmatching/levels/` without match credit. Every retail
interval returns at byte 36 with its delay slot at byte 40, and all 21
complete modules remain exact.

Another 115 reviewed 44-byte placements with four relocations link exactly
from 109 authored C sources (5,060 placement bytes and 4,796 distinct-source
bytes). Six additional placements reuse an identical source after the
canonical file linked exactly at both sites. The named
`PS2HEAP_Free__FPv` import remains named at its 20 call placements. Twenty
other reviewed C attempts stay in `nonmatching/levels/` without match credit.
All 135 retail intervals return at byte 36 with their delay slot at byte 40;
all 21 complete modules remain exact.

All 130 reviewed 44-byte placements with five or six relocations link exactly
from 124 authored C sources (5,720 placement bytes and 5,456 distinct-source
bytes). Six placements reuse a source only after the canonical file linked
exactly at both sites. The two-global call wrappers require two natural C
evaluation orders: 60 read the second value into a local before the call,
while 20 link with direct arguments. Twenty other bodies copy quadwords from
the first call's result using 64-bit C types. Each retail interval returns at
byte 36 with its delay slot at byte 40; all 21 complete modules remain exact.

Another 342 reviewed 48-byte placements with one or two relocations link
exactly from 329 authored C sources (16,416 placement bytes and 15,792
distinct-source bytes). Thirteen additional placements reuse an identical
source after exact relinks with the canonical file. Four signed-modulo
wrappers use the measured per-source division flag; the 20 null-guarded
wrappers qualify their error callee as nonreturning, matching the retail
control flow. A packed C structure reproduces one unaligned 16-byte copy.
Eleven reviewed C attempts remain under `nonmatching/levels/` without match
credit. Every retail interval returns at byte 40 with its delay slot at byte
44; all 21 complete modules remain exact.

Another 116 reviewed 48-byte placements with three relocations link exactly
from 111 authored C sources (5,568 placement bytes and 5,328 distinct-source
bytes). Five additional placements reuse an identical source after exact
relinks with the canonical file. Two other reviewed address forms retain C
under `nonmatching/levels/` without match credit. Every retail interval
returns at byte 40 with its delay slot at byte 44; all 21 complete modules
remain exact.

Another 99 reviewed 48-byte placements with four or more relocations link
exactly from 95 authored C sources (4,752 placement bytes and 4,560
distinct-source bytes). Four additional placements reuse an identical
source only after it linked exactly at both sites. Fifty named `memset`
imports retain their names. Forty-three other reviewed C attempts stay in
`nonmatching/levels/` without match credit. Every retail interval returns
at byte 40 with its delay slot at byte 44; all 21 complete modules remain
exact.

Another 82 reviewed relocation-bearing placements of 176–196 bytes link
exactly from 78 authored pure C sources (15,492 placement bytes and 14,736
distinct-source bytes). Four placements reuse a canonical source after an
independent exact link and equal object hash at each placement. The four
source forms initialize pointer fields, update a bounded range, update an
effect state and guard a state transition. Sixteen other representative C
attempts stay in `nonmatching/levels/` with measured first differences and
reopening conditions; the other 327 candidate sites receive no C credit.
All 21 complete USA modules remain exact.

Another 122 reviewed relocation-bearing placements of 76–80 bytes link
exactly from 107 authored pure C sources (9,512 placement bytes and 8,324
distinct-source bytes). Fifteen placements reuse canonical C after an
independent exact link and object-hash check. Six source forms cover a
four-call sequence, a six-call sequence, allocation followed by the named
`memset` import, a callback wrapper, a guarded frontend state update and a
frontend forwarding wrapper with its stack argument. The other 14
representative C attempts remain under `nonmatching/levels/` without match
credit; 280 candidate sites remain unaccepted. All 21
complete USA modules remain exact.

Another 101 reviewed relocation-bearing placements of 68–72 bytes link
exactly from 96 authored pure C sources (7,192 placement bytes and 6,836
distinct-source bytes). Five placements reuse canonical C after independent
exact links and object-hash checks. The five forms cover a frontend loop,
the named `memset` import, a global-table search, guarded calls and a
stack-buffer call. Fifteen other representative C attempts remain under
`nonmatching/levels/` without match credit; 301 candidate sites remain
unaccepted. All 21 complete USA modules remain exact.

Another 120 reviewed 68-byte placements link exactly from 97 authored pure C
sources (8,160 placement bytes and 6,596 distinct-source bytes). Twenty-three
placements reuse canonical C after independent exact links and object-hash
checks. A single C definition for two named `memset` calls serves twenty
raw-identical placements; other forms update globals, test state, forward
calls and preserve a shared record layout. Thirteen other representative C
attempts remain under `nonmatching/levels/` without match credit; 159
candidate sites remain unaccepted. All 21 complete USA modules remain exact.

Another 158 reviewed relocation-bearing placements of 72–84 bytes link
exactly from 153 authored pure C sources (12,236 placement bytes and 11,844
distinct-source bytes). Five placements reuse canonical C after independent
exact links and object-hash checks. Nine source forms cover hashed-value
stores, repeated calls, state initialization, two table scans and a measured
0x58-byte record with its writable field at offset 0x3c. Eleven other
representative C attempts remain under `nonmatching/levels/` without match
credit; 195 candidate sites remain unaccepted. All 21 complete USA modules
remain exact.

Another 119 reviewed relocation-bearing placements of 80–100 bytes link
exactly from 113 authored pure C sources (11,120 placement bytes and 10,560
distinct-source bytes). Six placements reuse canonical C after independent
exact links and object-hash checks. Two dispatchers compare symbolic function
addresses, three forms issue direct call sequences, and a named ATRAC stop
wrapper passes the instance from its list entry. The former retained ATRAC C
has been promoted into `src/levels/bodies/`. Fifteen other representative C
attempts remain under `nonmatching/levels/` without match credit; 266
candidate sites remain unaccepted. All 21 complete USA modules remain exact.

Another 124 reviewed relocation-bearing placements of 120–128 bytes link
exactly from 118 authored pure C sources (15,204 placement bytes and 14,468
distinct-source bytes). Six placements reuse canonical C after independent
exact links and object-hash checks. Five forms cover a frontend file-close
loop, UI state handling, named `sscanf`, guarded frees and two conditional
calls. Fifteen other representative C attempts remain under
`nonmatching/levels/` without match credit; 354 candidate sites remain
unaccepted. All 21 complete USA modules remain exact.

Another 410 bounded USA relocation-bearing candidate sites of 129–175 bytes
have Ghidra-corroborated complete body extents: all 410 match the inventory.
Thirteen pure C forms reproduce **268 placements from 237 authored sources**
(44,324 placement bytes and 176,948 distinct-source bytes). One form is exact
only under the qualified `gnu-ee-trial-divpad` profile, and one form uses the
measured per-source `-mno-check-zero-division` flag. The forms include a
one-element pool-alignment loop, a heap sift-down, a heap extraction pass, a
state `switch`, a parameter decoder, an ordered-insertion loop, a 64-bit flag
update with two calls, a dispatcher, a list insertion and destruction pair, a
table loop and a sound-bank teardown.

Seven other representative C attempts remain under `nonmatching/levels/` with
measured first differences and reopening conditions; for example the
[frontend range lookup](../nonmatching/levels/FRONTEND_014838.c) matches its
first 78 bytes, the [lowercase copy](../nonmatching/levels/FRONTEND_01C9C0.c)
matches its first 32, and the
[heap extraction helper](../nonmatching/levels/LEVEL_01_036F58.c) links 148 of
160 bytes. The other 142 candidate sites receive no match credit. All 21
complete USA modules remain exact.

Another 1,666 bounded USA relocation-bearing candidate sites of 129–200 bytes
have Ghidra-corroborated complete body extents: all 1,666 match the inventory.
Seventeen pure C forms reproduce **361 placements from 344 authored sources**
(60,892 placement bytes and 204,070 distinct-source bytes). Thirty-nine
placements are exact only under the qualified `gnu-ee-trial-divpad` profile
and twenty under `sdk991111`; the rest use the pinned chain. The forms include
a table-scan loop, a frontend pad/state sequence, a guarded index loop, a
float wrapper, a pool-element append, a list teardown, a sound dispatcher and
several dispatch chains.

Forty-seven other representative C attempts remain under `nonmatching/levels/`
with measured first differences and reopening conditions; the remaining
candidate sites receive no match credit. All 21 complete USA modules remain
exact.

Another 1,206 bounded USA candidates of 104–200 bytes were selected in two
later scopes (647 and 559 sites), each with Ghidra-corroborated body extents.
Twenty forms reproduce **459 placements from 388 authored sources** (79,056
placement bytes and 265,765 distinct-source bytes). One form uses the
qualified `gnu-ee-trial` profile, one `gnu-ee-trial-divpad`, one the
`-mno-check-zero-division` flag, and one the newly qualified `ps2eeas`
assembler route; the rest use the pinned chain.

Twenty-eight other representative C attempts remain under
`nonmatching/levels/` with measured first differences and reopening
conditions; the remaining candidate sites receive no match credit. All 21
complete USA modules remain exact.

Another 559 bounded USA candidates of 148–192 bytes were selected with
Ghidra-corroborated extents. Eighteen forms reproduce **334 placements from
288 authored sources** (54,792 placement bytes and 185,262 distinct-source
bytes). One form uses `gnu-ee-trial`, one `gnu-ee-trial-divpad`, one
`sdk991111`, and one the `ps2eeas` assembler with the measured
`-malign-functions=2` flag; the rest use the pinned chain. Twelve other
representative C attempts remain under `nonmatching/levels/` with measured
first differences and reopening conditions. All 21 complete USA modules
remain exact.
