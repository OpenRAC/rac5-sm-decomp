# Matching blockers

This is the shared, versioned reference for matching blockers and measured remedies.
**Every contributor may edit any entry**, including findings originally written by someone
else. Work in this repository through a fork or topic branch and submit a pull request.
Maintainers review and merge contributions; they are not the only people who can write here.
A coding AI can edit this Markdown file with ordinary file and Git commands.

Discuss proposed changes in the relevant code or documentation PR.
[Issue #98](https://github.com/OpenRAC/rac5-sm-decomp/issues/98) is retired and preserved only
as historical provenance (its imported observations are summarised below).
[Issue #99](https://github.com/OpenRAC/rac5-sm-decomp/issues/99) remains the reservation
noticeboard. Neither a personal comment nor the wiki is a second knowledge register.
The code and qualified linked builds remain the authority for matching status.

## How to contribute

1. Read the relevant entry, `AGENTS.md`, the retained C in `nonmatching/` and current master.
   Reopen an attempt only with a new hypothesis, changed input or additional evidence.
2. Edit the existing entry directly in your branch. Add a section only for a distinct blocker.
   Do not create one file or one record per contributor, agent, session or experiment.
3. Record the target/family, applicable release and placements, compiler/assembler profile,
   hypothesis, measured outcome, remaining difference and next useful experiment. Negative
   results are useful when they rule something out; repeated identical attempts add no facts.
4. Distinguish **hypothesis**, **retained near miss**, **local match**, **PR pending** and
   **merged fix**. Link the PR/commit and the real checks. Equal size is not a match. Preserve
   superseded measurements as dated history and explain which later evidence supersedes them.
5. Submit a normal PR, in English. Anyone can propose a correction to any entry. Only the
   merge is reviewed by a maintainer; no special documentation ownership is required.
6. Describe work by scope and date, not by private working vocabulary. Terms such as *wave*,
   *lot*, *campaign*, *root* and *kit* belong to the people organising a batch of work; a
   public entry says what was measured, on which bodies, and when.

Keep game data, generated assembly, SDK material, trial objects and logs private. Do not copy
them into a PR or this document. Knowledge edits do not waive the source policy or matching
gates. A persistent personal issue comment is not required for blocker notes.

## Recent verified updates

The entries below are dated measurements, not a fresh census. Older claims that a mechanism
is universally impossible are superseded where a later entry says so.

| Topic | Verified update |
| --- | --- |
| Level body scope | PR #106 (merged) brings the table to **7,997 placements** (384,676 placement bytes) in **1,658 sources**; all 21 module hashes still match. |
| Float copy class | PR #104 and PR #106 add 2,737 placements. The retail copies a float record **field by field** in its own order; an aggregate assignment belongs to the `ldl`/`ldr` class instead. |
| Division padding and prologue order | PR #97 adds the `gnu-ee-trial-divpad` profile: two `nop` before `div.s`, and the retail's save order (general registers before floating-point ones). |
| Sixteen-byte copies | PR #103 proves 469 placements. `lq`/`sq` come from a **scalar** `TImode` value, never from an aggregate assignment. |
| `movn` | A 23 October 2026 measurement gives a source form: `p = a2 ? (void *)a2 : (void *)buf;` emits `movn`; `if (a2 != 0) p = a2;` also works. The earlier note calling it inaccessible is superseded. |
| Delay-slot filler | Measurements of 23 October 2026 confirm that the retail puts the **second** argument (or the input store) in a `jal` delay slot where the pinned `cc1` puts the first. Named locals, a local pointer and a wrapper structure do not move it. |
| Prologue order | The retail emits `addiu $sp` before the first `lui` and orders entry-block materialisation differently. `void *p = s->p54;` declared **before** the first call reproduces the retail prologue; declared between two calls it shifts it. |
| Store order | The order is a **permutation** of the source order, not one universal rotation. Sweep permutations; do not guess. |
| Non-canonical page arithmetic | `lui 0x22` followed by `-0x78C` is **0x21F874**, not 0x217874: the immediate is sign-extended and added. `%hi` rounds. |
| One body, two functions | A target may end with a second function; write both in one file and they link end to end (measurements at 128 bytes and at `LEVEL_20:0x02B088`). |

These summaries do not award additional matching credit or replace the build. Check current
source before relying on any older count, profile or pending-PR label in the imported notes.

## Topic index

| Entry | Topic |
| --- | --- |
| [01](#blocker-01) | Register allocation on long bodies (the dominant wall) |
| [02](#blocker-02) | The delay slot's filler and argument order |
| [03](#blocker-03) | Prologue and entry-block ordering |
| [04](#blocker-04) | Store order is a permutation, not one rotation |
| [05](#blocker-05) | Strict aliasing and the reload the retail keeps |
| [06](#blocker-06) | Sixteen-byte copies: a scalar `TImode` value |
| [07](#blocker-07) | The `ldl`/`ldr` aggregate copy |
| [08](#blocker-08) | The float copy, field by field |
| [09](#blocker-09) | Division padding and the prologue save order |
| [10](#blocker-10) | `movn` |
| [11](#blocker-11) | Non-canonical pages and symbol naming |
| [12](#blocker-12) | Two functions in one body |
| [13](#blocker-13) | Erased calls, loader-patched calls and the harness/gate gap |
| [14](#blocker-14) | A body that carries an absolute address |
| [15](#blocker-15) | The assembler is chosen per object |
| [16](#blocker-16) | What this toolchain has no spelling for |
| [17](#blocker-17) | Compiler profiles and their measured effects |
| [18](#blocker-18) | Body boundaries, `next_label` and alignment |

## Blockers

### Blocker 01

Register allocation on long bodies (the dominant wall). Symptom: the instruction sequence is
right and only the register numbers differ. Measured: the available `cc1` profiles derive from
the same GCC 2.9 `reload.c` allocator, so changing profile cannot resolve a floating-point
allocation difference (October 2026). Four compiler hypotheses were refuted for the thirteen
bodies above 412 bytes — the seven pinned profiles, the RAC1 ASTRA tree, the RAC1 production
stack and the pinned tree with the division padding. Reopening condition: the authentic source
of the routine, or a source whose live ranges match the retail's. One lead remains open: the
retail copies pointer parameters with `daddu rd,rs,$zero`, a 64-bit copy, where the pinned chain
emits a 32-bit `move`. A tie that survives three formulations is a stopping signal, not a prompt
for a fourth identical trial.

### Blocker 02

The delay slot's filler and argument order. Symptom: an argument load or an input store sits one
slot earlier or later than the retail. Measured: the retail places the **second** argument in
the `jal` delay slot where the pinned `cc1` places the first; named locals, a local pointer, a
wrapper structure and a comma expression do not change it. Conversely, writing the store
**before** the call puts it in the delay slot when the retail does (`LEVEL_07:0x1983F0`).
Reading the delay slot also tells the return type of an erased call: `daddu $a0,$v0,$zero` is an
integer return, `mov.s $f12,$f0` a float return (`LEVEL_16:0x102C38`). Reopening: a source shape
that emits arguments in the order `a2, a0, a1`.

### Blocker 03

Prologue and entry-block ordering. Symptom: `sd $ra`, `lui`, `addiu $sp` and the first argument
loads are permuted. Measured: the retail saves the general-purpose registers before the
floating-point ones and materialises a local pointer before the first call. The pinned chain
carries the RAC2 "increasing callee-saved saves" option, which inverts the order; reverting it
and separating the two `reorg` hooks of the division-padding patch is the `gnu-ee-trial-divpad`
profile (PR #97). Fifteen of thirty-three recorded failures in one set were this class, and
`void *p = s->p54;` declared before the first call reproduces the retail prologue.

### Blocker 04

Store order is a permutation, not one rotation. Symptom: a group of stores to the same record is
right in content and wrong in order. Measured: write order is the retail's order, but the
compiler moves stores; an early measurement described a rotation, a later one found a full
permutation (`f_B4, f_04, b_35, …` at `LEVEL_06:0x182760`, found after 120 trials). The reset
form `f_00, f_0C, f_08, f_04` reproduces the 56-byte family. Reopening: sweep permutations with
a tool, not by hand.

### Blocker 05

Strict aliasing and the reload the retail keeps. Symptom: the retail reloads a global pointer
after each write; the compiler merges the loads. Measured: declare the global as a structure
(`typedef struct { Obj *p; } Holder;`) and access `D.p->field` on each line; a local pointer to
the global (`float *dst = &D_00383770;`) keeps the page alive across a call and forces the
materialisation **before** the call, in a callee-saved register, as the retail does. A field at
`+0x10` is often a **distinct symbol**, not a member of the first object.

### Blocker 06

Sixteen-byte copies: a scalar `TImode` value. Measured: `lq`/`sq` come from the `movti_internal`
pattern, so they belong to a **scalar** of mode `TImode`; an assignment of an **aggregate** is
cut into eight-byte pieces by `move_by_pieces` and becomes `ld`/`sd`. The retail's sixty-four
bytes are four separate quadwords copied one at a time. The recipe is RAC1's:
`typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));`, one scalar per assignment,
and the global named directly so its address takes the first register. `FRONTEND.REL:0x0061C0`
(64 bytes) is identical to the retail this way, and the recipe rendered eight boot bodies exact
out of eight.

### Blocker 07

The `ldl`/`ldr` aggregate copy. Measured: the pair is an **aggregate aligned on four bytes**
copied by a structure assignment, cut into eight-byte pieces; the member types are irrelevant and
the type's alignment decides between `ldl`/`ldr` and `ld`/`sd`. 469 placements of the class were
proved (PR #103).

### Blocker 08

The float copy, field by field. Measured: the retail copies a float record **field by field**,
in its own order; an aggregate assignment gives `ldl`/`ldr`, the other class. Named intermediate
values are what fix the `$f0..$f15` allocation. The order of the parameters decides the schedule:
putting the float first reproduces the retail where `(void *, void *, float)` does not. The value
written after a call is **the return of the call**. PR #104 and PR #106 add 2,737 placements
under these forms.

### Blocker 09

Division padding and the prologue save order. Measured in the SDK libm units: every `div.s` is
preceded by two `nop`, and no division sits in a delay slot. The assembler is not responsible;
the compiler is. `tools/compiler/patches/0002-rac5-div-pad.patch` and
`0003-rac5-upstream-saves-divpad.patch` define the `gnu-ee-trial-divpad` profile (cc1
`d7f3fb64…`), which reproduced the 20 `Quat_Slerp` placements without regression on the 177
accepted level sources (PR #97). `sdk-divpad` is the same idea for the SDK compiler.

### Blocker 10

`movn`. An earlier note called it inaccessible; a 23 October 2026 measurement gives a source
form: `p = a2 ? (void *)a2 : (void *)buf;` emits `movn $a0,$a2,$a2`, and
`if (a2 != 0) p = a2;` also works. Reopen the families recorded then with that form.

### Blocker 11

Non-canonical pages and symbol naming. Measured: an address is `(page << 16) + sext16(low)`;
`lui 0x22` followed by `-0x78C` is **0x21F874**. A non-canonical page needs a symbol **at the
page** with the offset in the expression (`extern char D_001D0000[];`). A field at `+0x10` is
often a distinct symbol (two `lui`), and two distinct symbols on the same page are needed to
preserve two `lui`. `%hi` rounds: `lui 0x1A` with `lo −0x5324` is `0x0019ACDC`, not `0x001AACDC`.

### Blocker 12

Two functions in one body. Measured: a target can end with a second function — a comparator
`return *a0 - *a1;` in the last twenty bytes of `LEVEL_20:0x02B088`, for instance. Write both
functions in the same file; they link end to end and one family then covers both.

### Blocker 13

Erased calls, loader-patched calls and the harness/gate gap. Measured: the `jal` target reads
`(imm26 << 2) | (PC & 0xF0000000)`, not the PC-relative formula. An erased call is
`func_000000`; a local call is `func_<address>`; a non-canonical page is `func_<page>` with the
offset in the expression. The harness resolves a name that carries no address from the retail
site; the complete gate only accepts a name that carries an address or that the module imports
or exports. Run the pre-flight before a twenty-minute gate pass. Several erased call sites with
incompatible signatures need a sidecar `.map` (`func_erased3 = 0x0`).

### Blocker 14

A body that carries an absolute address. Such a body is not portable: the retail spells the
address differently at each placement. Keep one file per placement, with the address carried by
the symbol name; a family is shareable only when the address is identical at every placement.
This is an authoring rule, not a matching wall.

### Blocker 15

The assembler is chosen per object. Measured: the pinned GNU `as` is the only one that reproduces
the retail on the boot objects (0 divergence on its twin, 1–2 on the others, about 200 for
`Ps2EeAs`). `config/cflags.txt` therefore carries an `as=NAME` selector next to the compiler
selector; `ee-sdk` needs `-G0` for libm, and `sceKernelGetSystemTimeLow__Fv` is exact only under
`Ps2EeAs`. `li.d`/`dli` is chosen by `cc1` (`mips.c:2377/2383`), not by the assembler — the
earlier "assembler gap" diagnosis is superseded.

### Blocker 16

What this toolchain has no spelling for. Measured: 128-bit computed constants (`dsll32`/`or`)
are outside the pinned `cc1`; `add_call` is refused (`MAX_INTEGER_COMPUTATION_MODE = DImode`,
`elf5900.h:33`); `register_precision` segfaults or is ignored; a register-fed `movn` needed the
form in blocker 10. A missing two-`nop` pad is blocker 09, not this entry.

### Blocker 17

Compiler profiles and their measured effects. The boot carries three compilers: the pinned
reconstruction (8-byte save stride), a Sony 2.9-ee build (`sceCdSyncS`) and SN 2.95.3
(`ps2fioDopen`). The level scope pins `pinned`, `gnu-ee-trial`, `gnu-ee-trial-divpad`,
`sdk991111`, `sdk991111sync` and `sdk-divpad`; `astra` and `ee991111b` are trial trees.
A profile option is chosen per source in `config/cflags.txt`, with its measured cause,
provenance and a negative control. `progress/status.json` hashes that file: regenerate the
snapshot after any edit.

### Blocker 18

Body boundaries, `next_label` and alignment. Measured: a compiled prefix or a `next_label`
interval does not prove a complete function. A body is measured on its declared extent; a body
that runs into the next function's entry is not a witness for those bytes. An alignment word
that the retail keeps (`ALIGN(8)`, one zero word) is admitted by the verified-alignment rule and
is not counted as body bytes. Distinct-sized bodies on the same bytes are distinct entries.

## Closed walls

| Wall | What lifted it |
| --- | --- |
| The prologue save order | the retail saves general-purpose registers before floating-point ones; reverting the RAC2 "increasing saves" option and separating the two `reorg` hooks is the `gnu-ee-trial-divpad` profile (PR #97) |
| The R5900 division padding | two `nop` before every single-precision division; same profile |
| A body that carries an absolute address | one file per placement, the address in the symbol name |
| Two candidates claiming one placement | every candidate source is replayed at that placement; the first claim is not necessarily the one that reproduces the retail |
| A call the loader patches | the module holds a zero target; the symbol carries its address in its name |
| The 184-byte quaternion-to-matrix body | naming the nine products explicitly, in the order that fixes the allocation (`src/levels/bodies/LEVEL_06_119B10.c`) |
| The 416-byte `Quat_Slerp` body | the byte-identical twin in the boot gives the routine its name and prototype; the new profile reproduces the prologue order and the division padding (PR #97) |
| Three of the twelve bodies above 412 bytes | a `VEC3` read instead of `VEC4`; pointer copies before the null test with matrix rows sixteen bytes apart; and one was a **profile** wall — the unchanged retained source gives 512 exact bytes under `gnu-ee-trial-divpad` |
| The float copy class | the `ldl`/`ldr` pair is a four-byte-aligned aggregate copied by structure assignment; 469 placements proved (PR #103) |
| The 64-byte copy of `FRONTEND.REL:0x0061C0` | four separate quadwords; `lq`/`sq` come from a scalar `TImode`, and the global is named directly |
| The sixteen-bit accessor and stub families | one authored source carried at every placement that holds the same bytes, each placement proved on its own |

## What is left

The level scope is **7,997 measured placements** of 384,676 placement bytes carried by **1,658
sources**, and the bounded candidates that no accepted body covers still number more than sixty
thousand. The boot keeps **644 accepted functions** over 498,900 bytes of `.text` (91,232 bytes
covered by accepted bodies). The profile files and their patches are the only place where a
toolchain change is allowed to move a body.

## Provenance

Issue #98 was the living wall register from the boot work to October 2026. Its body and comments
remain on GitHub as dated history, including the measurements that later entries corrected. This
document supersedes it as the active register. The maintainer imported the open and closed walls
on 23 October 2026, added the measurements recorded up to that date, and keeps the counts above
in step with `master`. Issue #99 remains the only reservation board.
