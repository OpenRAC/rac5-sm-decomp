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
On 2 November 2026, a fresh full-object recompilation found 19 more pinned
`Ps2EeAs` hash variants: each differs by one or two bytes only in non-loadable
`.mdebug`, while `.text` and relocations are identical. The profile now names
both complete hashes for 25 measured objects; it does not normalize object bytes.

### Blocker 16

What this toolchain has no spelling for. Measured: 128-bit computed constants (`dsll32`/`or`)
are outside the pinned `cc1`; `add_call` is refused (`MAX_INTEGER_COMPUTATION_MODE = DImode`,
`elf5900.h:33`); `register_precision` segfaults or is ignored; a register-fed `movn` needed the
form in blocker 10. A missing two-`nop` pad is blocker 09, not this entry.

### Blocker 17

Compiler profiles and their measured effects. The boot carries three compilers: the pinned
reconstruction (8-byte save stride), a Sony 2.9-ee build (`sceCdSyncS`) and SN 2.95.3
(`ps2fioDopen`). Accepted level sources select `pinned`, `gnu-ee-trial`,
`gnu-ee-trial-divpad`, `sdk991111` or `sdk991111sync` in
`config/levels/body_sources.tsv`; `sdk-divpad`, `astra` and `ee991111b` remain
trial profiles. A compiler is chosen per source with measured cause and a
complete-program check. On 2 November 2026, retained C for
`LEVEL_03.REL:0x110C00` and `LEVEL_09.REL:0x0B04E0` became exact under
`sdk991111` (the latter also needed its second call's third zero argument).
The same profile left 498 other retained C bodies nonmatching in a 500-body
comparison, so these two results do not justify a global compiler switch.
Regenerate `progress/status.json` after changing source profiles.

### Blocker 18

Body boundaries, `next_label` and alignment. Measured: a compiled prefix or a `next_label`
interval does not prove a complete function. A body is measured on its declared extent; a body
that runs into the next function's entry is not a witness for those bytes. An alignment word
that the retail keeps (`ALIGN(8)`, one zero word) is admitted by the verified-alignment rule and
is not counted as body bytes. Distinct-sized bodies on the same bytes are distinct entries.
Fourteen boot bodies promoted on 2 November 2026 end before their next code label;
each has a normal return, no direct branch from its body into the remaining
interval and no direct edge from outside into its interior. The later bytes
stay in the assembly baseline and receive no C credit from that body.

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
| Twelve-byte scalar global accessors | `return D_<address>;` or `D_<address> = value;`, with the address recovered by `page << 16` plus signed low immediate; 498 distinct C sources reproduce 528 USA level placements, each checked by the complete module gate (2 November 2026) |
| Four short level body forms | A nonzero global test, a plain call wrapper, a wrapper passing zero first, and a pair of zero stores compile directly from C; 500 distinct sources reproduce 677 USA placements after excluding one self-calling wrapper that the compiler folds differently (2 November 2026) |
| Plain 28-byte call wrappers | `void f(void) { target(); }` reproduces 500 further distinct USA level bodies with a frame, return-address save and restore, and one call; self-calling variants are excluded because the compiler folds their control flow (2 November 2026) |
| Short call wrappers with arguments | Three C forms pass zero, a named module-global address, or that address plus the caller argument to one address-named target; 500 distinct bodies reproduce 530 USA placements (2 November 2026) |
| Scalar byte and word accessors | Typed external globals reproduce byte getters/setters, word setters, boolean getters, zero stores and immediate setters; 500 distinct C sources reproduce 533 further USA placements (2 November 2026) |
| Additional short call and indexed-data forms | Typed C for two successive calls, indexed global words, a call through a loaded global pointer, and previously proved short argument wrappers reproduces 500 distinct bodies at 510 USA placements (2 November 2026) |
| Further scalar and constant-call forms | Zero-byte stores, loads through a global pointer, boolean byte and zero tests, wrappers passing an immediate, indexed global stores and other short accessors reproduce 500 distinct C bodies at 523 USA placements (2 November 2026) |
| Medium local-record and call forms | Six typed C forms with local records, two calls, masked arguments, stride-indexed data and return-after-call behavior reproduce 500 distinct bodies at 556 USA placements. A separate 112-byte packed-argument body remains uncounted after three register-allocation variants (2 November 2026) |
| Argument shifts, stored results and conditional state initialization | Three C forms reproduce 158 further bodies at 165 USA placements. The 44-byte and 72-byte forms use the pinned compiler; the 80-byte state initializer is exact under the already qualified `sdk991111` profile, while the pinned and `gnu-ee-trial` profiles use a different stack frame (2 November 2026) |
| Timer records and floating-point clamps | A 56-byte indexed timer record with a 16.667 ms to frame conversion, and a 0.01f threshold followed by a zero clamp, reproduce 74 further bodies at 75 USA placements. Both use the pinned compiler and follow source forms already accepted at other level placements (2 November 2026) |
| Frontend state, on-demand init and halfword reads | Three accepted C forms extend to 117 additional USA bodies at 123 placements. The state transition and indexed halfword read use the pinned compiler; the 64-byte initializer is exact under the existing `sdk991111sync` profile, which supplies its frame size and call scheduling (2 November 2026) |
| Medium state updates and initialization | Three already accepted C forms extend to 62 USA bodies at 64 placements: state updates, record reset and resource initialization. The 232-byte record form needs its per-level float constant and byte-field offset measured rather than copied from another placement (2 November 2026) |
| Medium record, matrix, vector and effect forms | Four already accepted C forms extend to 72 additional USA bodies at 72 placements. The 208-byte effect setup requires the existing `gnu-ee-trial` compiler profile for the retail prologue and floating-point save order; the other forms use the pinned profile (2 November 2026) |
| Larger matrix, callback, state-copy and vector-angle forms | Four accepted C forms extend to 73 further USA bodies at 74 placements. The vector-angle form uses the existing `gnu-ee-trial-divpad` profile for retail division padding; other forms use the pinned compiler (2 November 2026) |
| Further state copies and vector midpoints | Two accepted C forms extend to 36 further USA bodies at 56 placements. The midpoint form is shared byte-for-byte across several levels; every placement is checked separately while the source earns unique-byte credit once (2 November 2026) |
| Reused C forms across level modules | Existing typed C forms extend to 732 further USA bodies at 751 placements. Each new source and placement is checked independently; the complete-module gate catches named local calls that an isolated probe accepts. Thirty-eight such calls use their measured address-named target so the full linker can resolve them (4 November 2026) |
| Additional exact C forms | Existing typed forms extend to 629 more USA bodies at 675 placements. Each source's undefined symbols were checked against every target module before the complete gate; 46 extra placements share a byte-identical body and earn unique-source credit once (4 November 2026) |
| Remaining known C forms | Previously accepted typed forms extend to 877 further USA bodies at 939 placements. All 62 extra placements of shared bodies are exact independently, and every new object resolves against its target modules before the complete gate (4 November 2026) |
| Record initialization with `powf` | A new 472-byte C form reproduces 50 USA bodies at 51 placements. Keep the 16-byte head and the 64-byte record as separately named globals, and retain a pointer to the record across both `powf` calls; this reproduces the retail register lifetime and save order under `gnu-ee-trial`. The per-level colors and float constants are measured separately (4 November 2026) |
| More record-initialization forms with `powf` | Four typed C forms of 308, 420, 436 and 464 bytes reproduce 55 further USA bodies at 55 placements (22,712 distinct-source bytes) under `gnu-ee-trial`. Each form uses a separately named head and record, initializes a local record and copies it after two `powf` calls. Within each structurally identical group, the varying head, record and optional data addresses were extracted per module; every linked placement and all 21 complete modules were checked (4 November 2026) |
| Block-move loop count and larger record initializers | A source-specific `gnu-ee-trial-divpad-blockmove` compiler profile fixes an RTL short-loop count that inserted two unnecessary `nop` words in 32-byte aggregate copies. It reproduces 41 further USA C bodies on 42 placements (22,020 distinct-source bytes): the earlier 536-byte near miss at `LEVEL_01:0x033E58`, its 540-byte sibling family, and four 528/532-byte bodies. The old 536-byte C linked at 544 bytes with its first difference at byte 16 under the base divpad profile; with the measured patch it links exactly. The original compiler remains pinned, 140 prior divpad objects retain their hashes, and two complete 21-module gates pass (4 November 2026) |
| Additional named record forms | Existing `gnu-ee-trial` compiles 44 further C sources at 45 USA placements (14,016 distinct-source bytes), including 252- and 268-byte records. Initial zero-address call placeholders were corrected to the retail `memset`, `cosf` and `sinf` import names before promotion; all 127 new placements passed an import-identity audit and both complete-module gates (4 November 2026) |
| UI initialization families | Two related 1,120- and 924-byte C forms reproduce 38 further sources at 40 USA placements (38,836 distinct-source bytes) under `gnu-ee-trial-divpad`. A common callee's return type is `int`, supported by both retail return paths; correcting the 1,120-byte declarations preserves every exact object. LEVEL_15/21 share one source per form, each linked independently. Return/delay slots and following zero alignment words were reviewed separately (4 November 2026) |
| Further 632-, 644- and 192-byte C families | Three typed C forms reproduce 77 additional USA sources on 81 placements (32,184 distinct-source bytes). The 632-byte form retains both named `memset` imports; the 644-byte form keeps its 18 named imports and three local calls; the 192-byte form keeps six local calls. Four extra placements reuse an identical source and are checked separately. The 644-byte bodies' trailing zero alignment word is excluded from C credit. Each source and placement passes two complete 21-module gates (4 November 2026) |
| Additional known C forms | Four previously accepted forms extend to 54 further USA bodies at 55 placements. Address-named and file-scope symbol aliases are retained only where the compiler produces the exact body and every target module resolves them (4 November 2026) |

## Retained module C attempts (4 November 2026)

These USA frontend and level sources are useful hypotheses, retained in
`nonmatching/levels/` without C credit. Each result is from an isolated linked
comparison against the stated candidate extent. The complete-module gate has
not accepted any of them, and structurally similar placements elsewhere have
not been claimed.

| Source and candidate extent | Profile and linked result | Next useful check |
| --- | --- | --- |
| [`FRONTEND.REL:0x00A150`](../nonmatching/levels/FRONTEND_00A150.c), 1,168 bytes | Pinned GNU EE: 1,116 bytes; first difference at body byte 8. The one call and eight branches are present in both, but the candidate is 52 bytes short. | Review packet-construction field types, live ranges and the full frontend boundary before extending to levels. |
| [`FRONTEND.REL:0x00DD40`](../nonmatching/levels/FRONTEND_00DD40.c), 1,896 bytes | Pinned GNU EE: 1,800 bytes; first difference at body byte 260, initially a branch displacement; first different code shape at byte 308. | Reconstruct text-wrap control flow and local variable lifetimes; confirm other module boundaries separately. |
| [`FRONTEND.REL:0x016200`](../nonmatching/levels/FRONTEND_016200.c), 1,924 bytes | `gnu-ee-trial-divpad`: 1,736 bytes; first difference at body byte 92. The C retains the order of 74 call targets but only 18 of the reference's 21 branches. A separate zero alignment word follows each reviewed body and earns no C credit. | Recover the missing control-flow paths and floating-point live ranges; verify every placement before promotion. |
| [`0x01A398`](../nonmatching/levels/LEVEL_01_01A398.c), 244 bytes | Pinned GNU EE: 236 bytes; first difference at body byte 6. Both direct global indexing and local pointer spelling had this mismatch. | Review the global access and copy structure, including whether scalar float stores express the candidate body. |
| [`0x0340B8`](../nonmatching/levels/LEVEL_01_0340B8.c), 1,192 bytes | Pinned GNU EE: 1,084 bytes; first difference at body byte 0. The candidate and reference have eight calls, but their stack frames and mask tests differ. | Reconstruct temporary groups and mask/control flow, then recheck the candidate bound and source identity. |
| [`0x0532F8`](../nonmatching/levels/LEVEL_01_0532F8.c), 428 bytes | `gnu-ee-trial`: 428 bytes; first difference at body byte 48 in scheduling the head stores around `memset`. The retained head-field order reduces differing words from 15 to 13, but none of 24 equivalent orders matched. Aggregate initialization, local head pointer, call naming and prototype variants also remained different. | Change the source-level call-shape or qualified compiler hypothesis; another store-order permutation adds no evidence. |
| [`0x0876B8`](../nonmatching/levels/LEVEL_01_0876B8.c), 1,840 bytes | Pinned GNU EE: 1,836 bytes; first difference at body byte 0. The source retains the pad API calls and 68-byte copy, but saves an extra register and uses a 64-byte rather than 48-byte stack frame. | Review the lifetime of the pad-mode return value and related register allocation; verify other family members only after this body matches. |
| [`0x0AC5B8`](../nonmatching/levels/LEVEL_01_0AC5B8.c), 1,196 bytes | `gnu-ee-trial`: 1,200 bytes; first difference at body byte 12 in the saved-register sequence. The representative boundary excludes the following zero word. | Find a source/prototype with the required floating-point argument and five stack temporaries, then recheck the linked body. |
| [`0x0C0F50`](../nonmatching/levels/LEVEL_01_0C0F50.c), 1,996 bytes | `gnu-ee-trial-divpad`: 2,020 bytes; first difference at byte 56 in a branch displacement, first different non-branch code at byte 376. Sixty call targets remain in the same order. | Review global index arithmetic and division padding before treating the structural family as one source identity. |
| [`0x0C0EB8`](../nonmatching/levels/LEVEL_01_0C0EB8.c), 148 bytes | Pinned GNU EE links 160 bytes; first difference remains at body byte 4. The typed two-table search preserves the current pointer-key ABI and both local data targets, and raises the common word subsequence from 19 to 25 of 37 retail words. | Recover the shared zero-return branch and first-stage cursor register while preserving the two record strides and key comparisons. |
| [`0x0588A8`](../nonmatching/levels/LEVEL_01_0588A8.c), 280 bytes | Pinned GNU EE links 276 bytes; first difference at body byte 25 changes the initial float register (`f3` retail, `f1` C). Both local calls keep their targets but occur four bytes early. All 20 structural placements differ. | Recover the state-field initialization order and float live ranges that add the missing instruction before the calls. |
| [`0x094098`](../nonmatching/levels/LEVEL_01_094098.c), 280 bytes | Pinned GNU EE links 280 bytes; first difference at body byte 37 is the outer-loop index register. All 20 structural placements differ, while the named `g_MaterialHasBloomedThisFrame` import is retained. | Recover nested-loop register lifetimes and field-store scheduling before another family-wide linked comparison. |
| [`0x098108`](../nonmatching/levels/LEVEL_01_098108.c), 236 bytes | Pinned GNU EE links 240 bytes; first difference at body byte 1 is list-owner register allocation. The compiler also adds a divide-by-zero check absent from retail. Only the representative is measured. | Qualify a compiler route for the retail `divu` shape and recover the entry register lifetimes before deriving placements. |
| [`0x164708`](../nonmatching/levels/LEVEL_01_164708.c), 124 bytes | Pinned GNU EE links 124 bytes; first difference at body byte 0 loads `D_00207558` before the retail float constant. Only the representative is measured. | Recover the global-load and float-constant scheduling in pure C before deriving the 16 structural placements. |
| [`0x11E9A8`](../nonmatching/levels/LEVEL_01_11E9A8.c), 264 bytes | Pinned GNU EE links 264 bytes; first difference at body byte 88 is a branch displacement. Both local calls keep their sites and targets; all 20 structural placements differ at byte 88. | Recover the float return-value lifetime and store/branch form after the second call while preserving the retail comparison's NaN behavior. |
| [`0x0CD700`](../nonmatching/levels/LEVEL_01_0CD700.c), 1,880 bytes | `gnu-ee-trial`: 1,848 bytes; first difference at body byte 0 for the retained clean source. A structural probe moved the first difference to byte 72 but did not match the six-entry copy loop. | Verify loop register lifetimes, source ABI and the candidate boundary before testing another form. |
| [`0x0FF2B8`](../nonmatching/levels/LEVEL_01_0FF2B8.c), 2,004 bytes | `gnu-ee-trial-divpad`: 2,048 bytes; first difference at body byte 0. Eight `memset` calls appear, but the stack frame is 400 bytes instead of the reference's 416. | Recover local variable lifetimes and frame layout while preserving the eight calls and reviewed return/delay slot. |
| [`0x110D70`](../nonmatching/levels/LEVEL_01_110D70.c), 1,184 bytes | Pinned GNU EE: 1,092 bytes; first difference at body byte 0. The current geometry source differs substantially beyond the prologue. | Revisit prototypes, vertex-selection logic and temporaries before trying another compiler profile. |
| [`0x11E790`](../nonmatching/levels/LEVEL_01_11E790.c), 536 bytes | `gnu-ee-trial-divpad`: 532 bytes; first difference at body byte 0. Pinned and local-array variants also differed. | Check local record layout, stack frame and parameter ABI before changing arithmetic spelling. |
| [`0x1158B8`](../nonmatching/levels/LEVEL_01_1158B8.c), 1,856 bytes | `gnu-ee-trial-divpad`: 1,756 bytes; first difference at body byte 0. Both have twelve divisions and the direct call at byte 172, but the stack frame is 224 versus 256 bytes. | Recover the stack-based clamp temporaries and floating-point live ranges; review all other placements separately. |
| [`0x1255B0`](../nonmatching/levels/LEVEL_01_1255B0.c), 544 bytes | Pinned GNU EE: 544 bytes; first difference at body byte 32. Equal length is not a match. | Review floating-point temporary lifetimes and save order against caller and callee evidence. |
| [`0x19BFF0`](../nonmatching/levels/LEVEL_01_19BFF0.c), 520 bytes | Pinned GNU EE: 476 bytes; first difference at body byte 4. A decompiler also flagged an unreachable block. | Confirm the full boundary and original control flow; resolve the random factor's semantics before relying on this source. |

## Further frontend C attempts (4 November 2026)

The sources below preserve useful C hypotheses without match credit. Each
number is an isolated linked comparison of the USA `FRONTEND.REL`
representative. Other modules may share a structural shape, but each
placement still needs its own boundary, source-identity and complete-module
checks before promotion. A zero alignment word after a reviewed body is
excluded from its C size.

| Source and candidate extent | Measured result | Reopening condition |
| --- | --- | --- |
| [`0x006850`](../nonmatching/levels/FRONTEND_006850.c), 788 bytes | `sdk991111sync` links 784 bytes, first difference at byte 0; it supplies the required synchronization but its stack frame differs. | Find a qualified C compiler route that emits both the synchronization and the retail prologue. |
| [`0x006B68`](../nonmatching/levels/FRONTEND_006B68.c), 768 bytes | Corrected C passes `&gRT_BackBuffer` to the late `func_0000A650` call, consistent with the retail relocation at that call. SHA-pinned `sdk991111sync` links 712 bytes and first differs at byte 0 with a 96-byte frame. An experimental per-source selective `$s0` quadword-save route links 712 bytes and first differs at byte 4 with a 64-byte frame, two `sq`, one `lq`, and five `sd`/`ld` pairs versus the retail six pairs. Neither is byte-exact. | Recover the source lifetimes that retain the incoming argument in `$s5`, the missing save/restore pair, and the original return path; then qualify the selective route with accepted controls and compare the complete linked body and module. |
| [`0x0098C0`](../nonmatching/levels/FRONTEND_0098C0.c), 1,124 bytes | Pinned GNU EE links 1,108 bytes, first difference at byte 14. | Recover parameter live ranges and the 16-byte tag initialization. |
| [`0x009D28`](../nonmatching/levels/FRONTEND_009D28.c), 1,064 bytes | Pinned GNU EE links 1,072 bytes, first difference at byte 28 in allocation of the alpha indicator. | Review the indicator's type and lifetime before trying another profile. |
| [`0x00D298`](../nonmatching/levels/FRONTEND_00D298.c), 896 bytes | `gnu-ee-trial` links 872 bytes, first difference at byte 0; six call targets remain in order. Its C signature now agrees with the exact 212-byte callers' register roles, while the original formal argument order remains unproved. | Recover the missing saved-register and branch structure. |
| [`0x00D948`](../nonmatching/levels/FRONTEND_00D948.c), 744 bytes | `gnu-ee-trial-divpad` links 728 bytes, first difference at byte 16. | Resolve color-state register lifetime and glyph-unpacking schedule. |
| [`0x00FC88`](../nonmatching/levels/FRONTEND_00FC88.c), 732 bytes | `gnu-ee-trial` links 736 bytes, first difference at byte 8. | Recover lifetimes of the module base, flags pointer and checksum. |
| [`0x011AD8`](../nonmatching/levels/FRONTEND_011AD8.c), 744 bytes | `sdk991111sq` links 760 bytes, first difference at byte 0; its stack frame and final tail calls differ. | Find a measured source/profile that retains the retail quadword frame and call endings. |
| [`0x0149D0`](../nonmatching/levels/FRONTEND_0149D0.c), 1,084 bytes | Pinned GNU EE links 1,064 bytes, first difference at byte 4; eleven calls retain their order but three branches are missing. | Recover the omitted control-flow paths and live ranges. |
| [`0x016CD8`](../nonmatching/levels/FRONTEND_016CD8.c), 1,012 bytes | Pinned GNU EE links 1,012 bytes, first difference at byte 470; the remaining register allocation differs despite equal length. | Recover the C expression and temporary lifetime that select the retail general registers. |
| [`0x01F9A0`](../nonmatching/levels/FRONTEND_01F9A0.c), 984 bytes | Pinned GNU EE links 968 bytes, first difference at byte 12. | Recover the parameter and local-variable live ranges. |
| [`0x024A70`](../nonmatching/levels/FRONTEND_024A70.c), 816 bytes | `sdk991111` links 760 bytes, first difference at byte 8; its frame agrees more closely than GNU's but the body is incomplete. | Reconstruct the packed node traversal and saved-value lifetimes. |

## R5900 quad-save level prologues (4 November 2026)

A bounded USA-level scan found **236 candidate placements in 14 normalized
shapes** whose prologues save `$s0`–`$s7` and `$fp` with `sq`, then `$ra`
with `sd`; none is accepted C. Pinned GNU EE and `sdk991111` use doubleword
saves. The boot-only `sdk991111sq` route saves `$s0`–`$s7` as quadwords but
leaves `$fp` doubleword and reverses the retail slot order. A private opt-in
cc1 corrected the widths and slot order on a register-pressure witness, yet
pure C for `LEVEL_01.REL:0x0A2630` linked **656/948 bytes**, first differing
at byte 0. An accepted leaf control stayed exact; a nonleaf control regressed.
This is not a qualified general replacement. Reopen with a C body and a
measured per-source profile that match all 948 linked bytes, then prove its
20 placements and the complete-module gates. No C bytes are credited.

## Further level C attempts (4 November 2026)

These `LEVEL_01.REL` sources are retained hypotheses with **no C credit**.
Each measurement below is a linked comparison of the representative body
only. Structurally related level placements have not been accepted or
credited. Source types and field roles remain provisional where a callee or
record layout has not been independently confirmed.

| Source and candidate extent | Measured result | Reopening condition |
| --- | --- | --- |
| [`0x006300`](../nonmatching/levels/LEVEL_01_006300.c), 1,172 bytes | `gnu-ee-trial-divpad` links 1,184 bytes, first difference at body byte 6; nine call targets remain in order. | Recover the global-address register choice and the missing source shape around the third square root. |
| [`0x00C860`](../nonmatching/levels/LEVEL_01_00C860.c), 1,084 bytes | Pinned GNU EE links 1,052 bytes, first difference at byte 0; five calls retain their targets. | Revisit contiguous vector layout and persistent loop values before changing profiles. |
| [`0x040F28`](../nonmatching/levels/LEVEL_01_040F28.c), 592 bytes | `gnu-ee-trial` links 592 bytes, first difference at byte 184 in scalar load/register scheduling; fourteen call targets stay in order. | Recover floating-point temporary lifetimes and the callback's source form. |
| [`0x0537E0`](../nonmatching/levels/LEVEL_01_0537E0.c), 1,032 bytes | `gnu-ee-trial` links 1,028 bytes, first difference at byte 32. | Revisit floating-point save order and lifetime of the initial pointer. |
| [`0x0694A0`](../nonmatching/levels/LEVEL_01_0694A0.c), 992 bytes | `gnu-ee-trial-divpad` links 996 bytes, first difference at byte 28; six calls keep their order. | Find the source ordering that removes the four surplus code bytes while preserving the measured frame. |
| [`0x069BA0`](../nonmatching/levels/LEVEL_01_069BA0.c), 1,060 bytes | `gnu-ee-trial` links 968 bytes; first raw difference at byte 24 in a branch displacement, first other difference at byte 64 in FP register allocation. | Review the three-state interpolation record and local float lifetimes. |
| [`0x0B6218`](../nonmatching/levels/LEVEL_01_0B6218.c), 1,156 bytes | `gnu-ee-trial-divpad` links 1,176 bytes, first difference at byte 64 in a branch displacement; the prologue before it is exact. | Review threshold selection and its floating-point live ranges. |
| [`0x0DD328`](../nonmatching/levels/LEVEL_01_0DD328.c), 460 bytes | `gnu-ee-trial-divpad` links 460 bytes, first difference at byte 41 in allocation of call-argument registers. The six calls match in count. | Recover the live ranges around the allocation helper before expanding the 31 structural candidates. |
| [`0x112B28`](../nonmatching/levels/LEVEL_01_112B28.c), 1,068 bytes | `gnu-ee-trial-divpad` links 1,052 bytes, first difference at byte 108 in the first square root's FP destination register. | Recover five local FP slots and fallback branches before testing siblings. |
| [`0x1210A0`](../nonmatching/levels/LEVEL_01_1210A0.c), 1,084 bytes | `gnu-ee-trial-divpad` links 1,100 bytes, first difference at byte 60 in floating-point load order. | Review vector products, small-norm fallback and the extra frame words. |
| [`0x129968`](../nonmatching/levels/LEVEL_01_129968.c), 1,056 bytes | Pinned GNU EE links 1,044 bytes; first difference at byte 76 is a branch displacement after an exact prologue. | Recover error-path lengths and allocation lifetime while keeping the observed calls. |
| [`0x08CDE0`](../nonmatching/levels/LEVEL_01_08CDE0.c), 188 bytes | Pinned GNU EE links 192 bytes, first difference at byte 14 in mask-register allocation; the 20 related placements have no exact result. | Confirm bitfield layout and aliasing, then relink the pilot before checking siblings. |
| [`0x1D1248`](../nonmatching/levels/LEVEL_01_1D1248.c), 160 bytes | Pinned GNU EE links 160 bytes, first difference at byte 8 in saved-register allocation; all 26 related placements retain that mismatch. | Recover the lifetimes of the global base, output and input cursors, loop end and choice table. |

## Corrected level-call hypotheses (4 November 2026)

These C sources retain useful, nonmatching reconstructions. Each result is an
isolated full-body linked comparison of USA `LEVEL_01.REL`; equal length does
not establish a match. No C bytes are credited until the applicable placements
and complete-module gates pass. The type and buffer limits below remain part
of the hypothesis.

| Source and retail body | Linked result | First difference | Reopen when | Type and bounds limit |
| --- | --- | --- | --- | --- |
| [`0x0B1D68`](../nonmatching/levels/LEVEL_01_0B1D68.c), 1,148 bytes | `gnu-ee-trial-divpad`: 1,124 bytes | Body byte 24; first difference beyond branch shape at 136 | Recover menu register lifetimes, color packing and branch layout. | `func_0AE708` has a retail-inferred `int(int, void *, float)` ABI; each output buffer is 16 bytes. |
| [`0x0B1818`](../nonmatching/levels/LEVEL_01_0B1818.c), 1,120 bytes | `gnu-ee-trial-divpad`: 1,108 bytes | Body byte 48; first difference beyond branch shape at 200 | Recover menu register allocation and color-conversion order. | The retail-inferred `func_0AE708` ABI writes up to 16 output bytes. |
| [`0x0D5668`](../nonmatching/levels/LEVEL_01_0D5668.c), 1,084 bytes | `gnu-ee-trial`: 1,104 bytes | Body byte 8 | Recover list layout and floating-point division schedule. | The bound for dynamic text passed to `sprintf` into 256 bytes remains unproved. |
| [`0x0BF180`](../nonmatching/levels/LEVEL_01_0BF180.c), 1,188 bytes | `gnu-ee-trial`: 1,176 bytes | Body byte 4 | Recover menu register lifetimes and branch structure. | Its `UiSamples` output is 16 bytes under the retail-inferred `func_0AE708` ABI. |
| [`0x0CC5D0`](../nonmatching/levels/LEVEL_01_0CC5D0.c), 584 bytes | Pinned GNU EE: 584 bytes | Body byte 12 | Recover menu-state register allocation without changing the 16-byte rectangle. | The fixed threshold table fits its four-byte text slots in the measured USA module. |
| [`0x0D2408`](../nonmatching/levels/LEVEL_01_0D2408.c), 1,016 bytes | `gnu-ee-trial`: 1,016 bytes | Body byte 92 | Recover local pointer live ranges and recheck the full linked body. | Resource failure can leave later output bytes unwritten. |
| [`0x083E38`](../nonmatching/levels/LEVEL_01_083E38.c), 1,068 bytes | `gnu-ee-trial-divpad`: 1,056 bytes | Body byte 60 | Resolve the first branch displacement, later register choices and division padding. | The accepted `func_125E78` uses 12/64/12-byte buffers. The trailing payload layout and outer item-array length remain runtime hypotheses. |
| [`0x01EF20`](../nonmatching/levels/LEVEL_01_01EF20.c), 1,168 bytes | `gnu-ee-trial-divpad`: 1,168 bytes | Body byte 340 | Resolve the square-root padding class while preserving vector and matrix buffers. | The caller assumes a nonnegative count and readable 40-byte records. |

## Additional retained near misses (4 November 2026)

These C files are retained as hypotheses in `nonmatching/`. Each measurement
below is an isolated full-body linked comparison with the USA retail module.
No body is byte-exact or credited, and structural relatives are not accepted
from these representative results. Field layouts and helper prototypes remain
provisional where the retail callee has not established them.

| Source and retail extent | Qualified linked result | Reopen when | Source-level limit |
| --- | --- | --- | --- |
| [`LEVEL_01:0x00A320`](../nonmatching/levels/LEVEL_01_00A320.c), 928 bytes | `gnu-ee-trial-divpad`: 876 bytes; first difference at body byte 18 in the global-pointer register. | Recover the missing float operations and pointer live range before rechecking the pilot and related placements. | The 36-byte matrix and 16-byte quaternion match the accepted local relay; the surrounding state layout remains a hypothesis. |
| [`LEVEL_01:0x00AE08`](../nonmatching/levels/LEVEL_01_00AE08.c), 948 bytes | Pinned GNU EE: 952 bytes; first difference at byte 0 in the stack frame. Five local calls remain in order. | Recover the flag bitfield form and constant live ranges, then relink the pilot. | The motion record passed to the accepted five-argument callee has the measured field offsets; bitfields and caller aliasing remain provisional. |
| [`LEVEL_01:0x018848`](../nonmatching/levels/LEVEL_01_018848.c), 868 bytes | `gnu-ee-trial`: 844 bytes; first difference at byte 14 in initial register allocation. The two `memcpy` imports remain. | Recover the missing copy and bound-test instructions without losing the measured unaligned moves. | Only the 64-byte block is packed; record layout and source strides remain hypotheses. |
| [`LEVEL_01:0x01D1E0`](../nonmatching/levels/LEVEL_01_01D1E0.c), 712 bytes | `gnu-ee-trial-divpad`: 692 bytes; first difference at byte 22 in pointer-register allocation. | Recover pointer and floating-point live ranges, confirm the two local helper prototypes, then relink the pilot. | One `sqrtf` import and two local calls are measured; their record-field roles are provisional. |
| [`LEVEL_01:0x02ED98`](../nonmatching/levels/LEVEL_01_02ED98.c), 880 bytes | `gnu-ee-trial-divpad`: 884 bytes; first difference at byte 0 in the stack frame. All four calls keep their order; 20 structural poses were linked and none matched. | Explain the extra 16 bytes of retail local frame and initial float lifetimes before retesting. | Vector fields and the local collision callee's role remain hypotheses. |
| [`LEVEL_01:0x03EEE0`](../nonmatching/levels/LEVEL_01_03EEE0.c), 244 bytes | `gnu-ee-trial-divpad`: 232 bytes; first difference at byte 22 in address-register and vector-load scheduling. Twenty structural poses were linked and none matched. | Recover the scalar store order and local-vector layout that account for the missing 12 bytes. | The single named import is `sqrtf`; the local vector source form remains provisional. |
| [`LEVEL_01:0x048F68`](../nonmatching/levels/LEVEL_01_048F68.c), 696 bytes | `gnu-ee-trial-divpad`: 656 bytes; first difference at byte 4 in floating-point zero materialization. | Recover vector aliasing and float live ranges, then relink the pilot before other placements. | Both named `sqrtf` calls are retained; the structural relatives remain unproved. |
| [`LEVEL_01:0x064DF0`](../nonmatching/levels/LEVEL_01_064DF0.c), 152 bytes | Pinned GNU EE: 148 bytes; first difference at byte 8 is a branch displacement; first different non-branch code is at byte 32. | Recover the shared float condition and pointer selection for the clamp. | No calls or imports; actor fields and the global fade value remain inferred. |
| [`LEVEL_01:0x068DB8`](../nonmatching/levels/LEVEL_01_068DB8.c), 912 bytes | Pinned GNU EE: 872 bytes; first difference at byte 282 in local float/register scheduling. Eight local calls retain their order. | Recover the two angle temporaries and record-tail pointer lifetime, then the later field stores. | The accepted angle helper's pointer roles are aligned; other record fields and helper prototypes remain provisional. |
| [`LEVEL_01:0x08C960`](../nonmatching/levels/LEVEL_01_08C960.c), 924 bytes | Pinned GNU EE: 912 bytes; first difference at byte 0; the C frame is `0x120` against retail `0xE0`. Three named calls retain their order. | Recover display-list payload layout and register lifetimes before further placements. | Two payloads and the display-list packet structure remain layout hypotheses; named data imports are distinct from calls. |
| [`LEVEL_01:0x098FD0`](../nonmatching/levels/LEVEL_01_098FD0.c), 852 bytes | Pinned GNU EE: 812 bytes; first difference at byte 4. Six local calls retain their order. | Recover record-base and slot-index live ranges and missing call-argument setup. | The unaligned 64-byte copy is expressed in C; the last callee prototype and record layout remain provisional. |
| [`LEVEL_01:0x0B9E90`](../nonmatching/levels/LEVEL_01_0B9E90.c), 200 bytes | Pinned GNU EE with source-specific `-mno-check-zero-division`: 200 bytes, first difference at body byte 118, 46/50 words identical; without that flag the linked body is 208 bytes. | Recover the argument-register live ranges for `right - 16` and constant `2`, then reprove all 20 related placements. | The local helper's integer return is supported by retail arithmetic and preserves all 21 accepted helper poses; the UI record layout remains provisional. |
| [`LEVEL_01:0x19CEB0`](../nonmatching/levels/LEVEL_01_19CEB0.c), 436 bytes | `gnu-ee-trial`: 428 bytes; first difference at byte 76 in the x-coordinate load. Four local calls are eight bytes early in the C. | Recover the x/y/z load-and-store order while preserving callee register flow. | The local callee's detailed prototype is an ABI hypothesis from retail register use. |
| [`LEVEL_01:0x1B4330`](../nonmatching/levels/LEVEL_01_1B4330.c), 628 bytes | `gnu-ee-trial-divpad`: 588 bytes; first difference at byte 6 in register allocation. | Recover basis-local scheduling and record-search control flow before other placements. | One `sqrtf` import and two local calls are measured; record and service types remain provisional. |
| [`LEVEL_01:0x1CAAE8`](../nonmatching/levels/LEVEL_01_1CAAE8.c), 296 bytes | Pinned GNU EE: 276 bytes; first difference at byte 1 in the object-pointer register (`t4` retail, `t2` compiled). | Recover the pointer and float-temporary lifetimes or copy shape, then relink the pilot. | No calls or imports; both lazy record initializations are retained but field roles are provisional. |
| [`FRONTEND:0x0073B8`](../nonmatching/levels/FRONTEND_0073B8.c), 284 bytes | `gnu-ee-trial`: 284 bytes; first difference at byte 172 in UI-field load scheduling. | Recover the four UI-field register live ranges or qualify a new compiler profile. | Three named display-list calls and the two named data imports are retained; the local UI state is 20 bytes. |

| [`LEVEL_01:0x001740`](../nonmatching/levels/LEVEL_01_001740.c), 260 bytes | Pinned GNU EE: 260 bytes; first difference at body byte 9 in float-register allocation. All 20 structural placements retain two named local calls but none matches. | Recover the float-register lifetime and field-store order while preserving the 64-byte copy and call identities. | Record field roles and the registration helper's return type remain provisional. |

## Named import calls in accepted level bodies (4 November 2026)

An audit of the earlier accepted corpus found **592 wrong C import names**
at named `R_MIPS_26` call sites in 496 placements and 246 sources. The
linked bodies were byte-exact because several different SNR2 imports have
address zero before loading; equal call words alone do not identify the
callee. This was a source-naming problem, not evidence that the linked
retail bytes differed.

The 246 existing C sources now use the retail import names. One shared
28-byte wrapper had served 146 placements spanning seven different imports;
it was split into seven named C sources and 125 placement paths were
reassigned. All **496/496** affected placements remain byte-exact after
relinking. The strict level gate now checks every named imported call of
accepted C, including the shared-level and frontend witnesses. Its normal
complete-module run reports **2,933 body import sites + 24 witness sites,
zero mismatches and 21/21 complete modules exact**.

The split adds six authored source definitions and **168 bytes to the
source-counted unique C total**, while adding no new covered retail bytes or
placements. This small accounting increase is disclosed in the ByteMatch
estimate; it is not new decompilation coverage. The historical audit and
full per-site proof remain private, with names, counts and limits recorded
here for contributors.

## Qualified compiler-generated local multiplication (5 November 2026)

Twenty C sources adapted from the public GCC 2.95.3 `fp-bit.c` multiplication
path reproduce **21 bounded 680-byte placements** (13,600 distinct-source
bytes). Their provenance, original license and linking exception are recorded
in [`THIRD_PARTY_NOTICES.md`](../THIRD_PARTY_NOTICES.md). The compiler emits
four `__muldi3` calls per body. A versioned table qualifies only the pinned
module/source/object pairs and four call sites, after verifying the unique
96-byte helper and its SHA in each retail module. The strict resolver remains
in force for every source without such a row. Both individual and batched
complete-module gates reproduce all 21 USA modules; this is a measured local
link target, not a general rule for unresolved compiler calls.

## What is left

The level scope is **27,789 measured placements** of 1,641,584 placement bytes carried by **18,663
sources**, and many bounded candidates remain outside the accepted scope. The boot keeps
**693 accepted functions** covering 88,948 of 498,900 bytes of `.text`.
The eight newly accepted bounded families contribute 241 distinct C bodies
and 252 placements (35,536 distinct-source bytes); their zero alignment tails
are excluded. The 212-byte wrappers pass x/y/text and two scales in the
retail registers, but the callee's original formal C parameter order is not
uniquely recoverable from the ABI. The six pointer roles in the 68-byte helper
family and some callee types in the 128-byte vector family remain provisional.
The accepted 40-byte `LEVEL_01:0x123DC8` wrapper now passes its output pointer
explicitly while retaining the same compiled object and retail bytes.
Six further bounded families (120, 168, 780, 680, 228 and 864 bytes) add
**112 C sources, 115 placements and 41,692 distinct-source bytes**; their
zero alignment tails are excluded. Fifty-nine already accepted C definitions
also now make implicit call arguments or returns explicit without changing
their pinned objects or linked retail bytes. Other source-level ABI contracts
remain under review even where the compiled bytes match.
Four more bounded families (132, 100, 300 and 176 bytes) add **70 C sources,
73 placements and 12,584 distinct-source bytes**. Their accepted C retains
the measured data relocations and named `sqrtf` imports. Additional accepted
wrappers now pass their consumed GPR and FPR arguments explicitly, without
changing their pinned objects or linked retail bodies.
The 713 linked C bodies cover 93,032 bytes including alignment. The profile
files and their patches are the only place where a toolchain change is allowed
to move a body.

## Provenance

Issue #98 was the living wall register from the boot work to October 2026. Its body and comments
remain on GitHub as dated history, including the measurements that later entries corrected. This
document supersedes it as the active register. The maintainer imported the open and closed walls
on 23 October 2026, added the measurements recorded up to that date, and keeps the counts above
in step with `master`. Issue #99 remains the only reservation board.

## Bounded frontend C attempts of 64 bytes or less (5 November 2026)

These candidate entries have source-level C retained under `nonmatching/levels/`. The listed objects are isolated linked trials against the pinned USA frontend, not accepted matches. Accepted bounded frontend entries, including `0x020968`, pass the complete 21-module gate as C. Each retained source records a concrete next experiment; equal length alone earns no credit.

| Candidate | Retail body | Best isolated trial | Reopening condition |
| --- | ---: | --- | --- |
| [`0x0004D8`](../nonmatching/levels/FRONTEND_0004D8.c) | 44 B | pinned: 44 B, first difference +2 | Recover the two-global test expression that assigns the retail value registers. |
| [`0x002620`](../nonmatching/levels/FRONTEND_002620.c) | 28 B | pinned: 28 B, first difference +12 | Recover the second-argument ABI conversion that places a move in the imported lseek call delay slot. |
| [`0x003600`](../nonmatching/levels/FRONTEND_003600.c) | 52 B | pinned: 48 B, first difference +6 | Recover the global flag store and imported-call argument register order. |
| [`0x005618`](../nonmatching/levels/FRONTEND_005618.c) | 56 B | sdk991111: 56 B, first difference +22 | Recover the branch-dependent global-pointer load and selected field offset. |
| [`0x006120`](../nonmatching/levels/FRONTEND_006120.c) | 56 B | pinned: 56 B, first difference +2 | Recover the state-table base and index register lifetimes across the three updates. |
| [`0x00AB70`](../nonmatching/levels/FRONTEND_00AB70.c) | 56 B | pinned: 56 B, first difference +2 | Recover the record-stride multiply and argument-bank setup for the local call. |
| [`0x01E380`](../nonmatching/levels/FRONTEND_01E380.c) | 60 B | pinned: 60 B, first difference +11 | Recover the masked-index register and final record comparison control flow. |
| [`0x020698`](../nonmatching/levels/FRONTEND_020698.c) | 64 B | pinned: 60 B, first difference +8 | Recover the flag set/clear branch and the two pointer reload lifetimes. |
| [`0x020918`](../nonmatching/levels/FRONTEND_020918.c) | 44 B | pinned: 40 B, first difference +2 | Recover the mask-expression order and the retail literal/register lifetimes. |
| [`0x0209B0`](../nonmatching/levels/FRONTEND_0209B0.c) | 48 B | pinned: 44 B, first difference +20 | Recover the conditional masked return without shortening away the retail conditional move. |
| [`0x021188`](../nonmatching/levels/FRONTEND_021188.c) | 40 B | pinned: 40 B, first difference +28 | Recover the null-check and sign-test branch layout without the branch-likely shortening. |
| [`0x021A00`](../nonmatching/levels/FRONTEND_021A00.c) | 44 B | pinned: 44 B, first difference +8 | Recover the bounds-failure branch and stride-calculation lifetime. |
| [`0x021C40`](../nonmatching/levels/FRONTEND_021C40.c) | 52 B | sdk991111: 52 B, first difference +10 | Recover the bounds-failure branch while retaining the indexed comparison and SDK compiler route. |
| [`0x024140`](../nonmatching/levels/FRONTEND_024140.c) | 64 B | pinned: 64 B, first difference +12 | Recover the local float store versus output-pointer setup around the first call. |
| [`0x026878`](../nonmatching/levels/FRONTEND_026878.c) | 64 B | pinned: 48 B, first difference +0 | Recover the saved-register frame and comparison-result lifetime around the imported strcmp call. |
| [`0x0275D0`](../nonmatching/levels/FRONTEND_0275D0.c) | 52 B | pinned: 52 B, first difference +2 | Recover the lazy-initialization pointer test and its address/register lifetimes without an artificial null check. |

The previous `FRONTEND:0x020968` attempt linked to 24 bytes and first differed at
body byte 4 because the compiler reduced the high-bit mask to a shift. The
accepted [C source](../src/levels/bodies/FRONTEND_020968.c) uses a signed
`(flags & 0x40000) > 0` comparison. It links exactly at the frontend and 15
level placements, and the complete 21-module gate passes (5 November 2026).

## Short raw-identical level-body candidates (5 November 2026)

The following USA candidate bodies are raw-identical across the listed numbered levels and contain no body relocations. This is boundary and code-shape evidence only; each retained C source differs in an isolated linked trial and none of its placements earns C credit. In this short-body scope, 237 reviewed families have passed the complete 21-module gate as accepted C. Eight 16–32-byte forms cover 148 linked placements with 168 distinct-source bytes: a floating-point constant return, conditional field assignment, two unsigned range tests, a range-length accessor, a state store, a floating-point affine result and three field clears. Another 23 source forms add 429 exact placements and 296 distinct-source bytes; two more placements reuse an existing qualified C source. A further 38 source forms of 8–64 bytes add 340 exact placements and 924 distinct-source bytes. The next 46 short forms add 121 exact placements and 1,164 distinct-source bytes. Eleven more sources cover 98 exact placements, including repeated uses inside a module, while adding 204 distinct-source bytes. Forty-eight isolated 8–32-byte sources add 48 exact placements and 824 distinct-source bytes; one 24-byte candidate interval remains uncounted pending boundary review. Twenty-one isolated 36–64-byte C sources add 21 exact placements and 1,048 distinct-source bytes; 18 further C hypotheses remain uncounted. Each new placement was linked independently before the complete-module gate.

| Representative | Retail body | Candidate placements | Best isolated trial | Reopening condition |
| --- | ---: | ---: | --- | --- |
| [`0x0B9800`](../nonmatching/levels/LEVEL_01_0B9800.c) | 64 B | 20 | pinned: 64 B, first difference +24 | Recover the array-index shift before the record-stride multiply and their temporary-register lifetimes. |
| [`0x058738`](../nonmatching/levels/LEVEL_01_058738.c) | 60 B | 20 | pinned: 60 B, first difference +15 | Recover the local zero-float and stack pointer selection after the initial field load. |
| [`0x0BCBA0`](../nonmatching/levels/LEVEL_01_0BCBA0.c) | 60 B | 20 | pinned: 56 B, first difference +0 | Recover the owner-pointer lifetime and the two-stage count/output checks. |
| [`0x129DF8`](../nonmatching/levels/LEVEL_01_129DF8.c) | 56 B | 20 | pinned: 56 B, first difference +8 | Recover the linked-list loop entry without the compiler shortening it to a branch-likely return. |
| [`0x037238`](../nonmatching/levels/LEVEL_01_037238.c) | 52 B | 20 | pinned: 56 B, first difference +2 | Recover the insertion-loop entry and value truncation before the first comparison. |
| [`0x03C0E8`](../nonmatching/levels/LEVEL_01_03C0E8.c) | 52 B | 20 | pinned: 56 B, first difference +9 | Recover the retail 64-bit clear-mask materialization and final field update. |
| [`0x02E568`](../nonmatching/levels/LEVEL_01_02E568.c) | 48 B | 20 | pinned: 48 B, first difference +6 | Recover the three field-load lifetimes and subtraction register assignment. |
| [`0x03BF08`](../nonmatching/levels/LEVEL_01_03BF08.c) | 48 B | 20 | pinned: 48 B, first difference +2 | Recover the child-pointer and flag temporary registers while keeping the short signed clear mask. |
| [`0x03BF60`](../nonmatching/levels/LEVEL_01_03BF60.c) | 48 B | 20 | pinned: 48 B, first difference +2 | Recover the child-pointer and flag temporary registers while keeping the short signed clear mask. |
| [`0x0A60C8`](../nonmatching/levels/LEVEL_01_0A60C8.c) | 48 B | 20 | pinned: 48 B, first difference +4 | Recover the packed high-byte extraction and alpha mask scheduling before field stores. |
| [`0x0D83C8`](../nonmatching/levels/LEVEL_01_0D83C8.c) | 48 B | 20 | pinned: 48 B, first difference +12 | Recover the unsigned-range and zero-sentinel branch layout without reordering the half-width subtraction. |
| [`0x0294C0`](../nonmatching/levels/LEVEL_01_0294C0.c) | 44 B | 20 | pinned: 40 B, first difference +4 | Recover the nested byte-flag tests and the retail boolean return lifetime that adds one operation. |
| [`0x134F68`](../nonmatching/levels/LEVEL_01_134F68.c) | 52 B | 15 | pinned: 52 B, first difference +24 | Recover the record field-store and zero-fill grouping after the first six exact operations. |
| [`0x08BE88`](../nonmatching/levels/LEVEL_01_08BE88.c) | 36 B | 20 | pinned: 36 B, first difference +12 | Recover the byte and zero-store ordering while retaining the signed -1 constant and the final delay-slot store. |
| [`0x09FB18`](../nonmatching/levels/LEVEL_01_09FB18.c) | 36 B | 20 | pinned: 36 B, first difference +8 | Recover the self-linked node pointer-store order relative to the four zeroed fields. |
| [`0x04B4C0`](../nonmatching/levels/LEVEL_01_04B4C0.c) | 32 B | 20 | pinned: 44 B, first difference +5 | The 64-bit clear mask materializes too long; test a natural source form or a narrowly qualified opt-in compiler remedy with prior-mask controls. |
| [`0x06DDE8`](../nonmatching/levels/LEVEL_01_06DDE8.c) | 36 B | 13 | pinned: 44 B, first difference +20 | The compiler inserts a redundant zero-divisor trap before modulo by the constant 12; qualify a narrow source/compiler remedy with controls for accepted division users. |
| [`0x036648`](../nonmatching/levels/LEVEL_01_036648.c) | 52 B | 20 | `gnu-ee-trial-divpad`: 56 B, first difference +40 | The profile inserts one more padding word before the second floating division; qualify a source-specific schedule with controls for accepted division users. |
| [`0x0B91F0`](../nonmatching/levels/LEVEL_01_0B91F0.c) | 12 B | 20 | pinned: 12 B, first difference +0 | The compiler folds the unsigned constant comparison into a different instruction form; recover the original source or a narrow qualified profile. |
| [`0x049780`](../nonmatching/levels/LEVEL_01_049780.c) | 12 B | 15 | pinned: 8 B, first difference +0 | The no-op C body drops retail's balanced stack frame; establish the frame's source-level cause or original compiler behavior. |
| [`LEVEL_03:0x039678`](../nonmatching/levels/LEVEL_03_039678.c) | 64 B | 7 | pinned: 64 B, first difference +22 | Recover the callback ABI or source-level lifetime that assigns the nested pointer loads to the retail temporaries. |
| [`LEVEL_02:0x1805A0`](../nonmatching/levels/LEVEL_02_1805A0.c) | 60 B | 4 | pinned: 60 B, first difference +18 | Recover the indexed slot access shape that assigns the byte index and slot base to the retail temporaries. |
| [`LEVEL_08:0x20FA38`](../nonmatching/levels/LEVEL_08_20FA38.c) | 64 B | 3 | pinned: 64 B, first difference +13 | Recover the original list-initialization loop and end-pointer lifetime before rechecking the shared sites. |
| [`LEVEL_04:0x165538`](../nonmatching/levels/LEVEL_04_165538.c) | 48 B | 3 | pinned: 44 B, first difference +16 | Retain the second byte comparison's result lifetime and final boolean move without artificial compiler steering. |
| [`LEVEL_22:0x1311A0`](../nonmatching/levels/LEVEL_22_1311A0.c) | 64 B | 2 | pinned: 64 B, first difference +2 | Recover the selector source and child-pointer register lifetime around the early sentinel return. |
| [`LEVEL_15:0x11D580`](../nonmatching/levels/LEVEL_15_11D580.c) | 44 B | 2 | pinned: 40 B, first difference +28; `gnu-ee-trial-divpad`: 56 B | Qualify a source-specific division schedule with controls for prior accepted division bodies. |
| [`LEVEL_22:0x131218`](../nonmatching/levels/LEVEL_22_131218.c) | 44 B | 2 | pinned: 44 B, first difference +4 | Recover the null and index-bound branch ordering before retrying both sites. |
| [`LEVEL_08:0x1AE4C0`](../nonmatching/levels/LEVEL_08_1AE4C0.c) | 24 B candidate interval | 1 | pinned empty C: 8 B, first difference +0 | Review the two return sequences and incoming references to establish actual function ownership before C promotion. |
| [`LEVEL_16:0x0752D0`](../nonmatching/levels/LEVEL_16_0752D0.c) | 64 B | 1 | pinned: 64 B, first difference +2 | Recover the loop-end pointer and accumulator register lifetimes while retaining the 0x80 record stride. |
| [`LEVEL_17:0x16A720`](../nonmatching/levels/LEVEL_17_16A720.c) | 64 B | 1 | pinned: 64 B, first difference +12 | Recover the nested boolean branch and result lifetime without shortening the second state test. |
| [`LEVEL_10:0x1E2060`](../nonmatching/levels/LEVEL_10_1E2060.c) | 60 B | 1 | pinned: 68 B, first difference +4 | Establish the virtual callback prototype and saved-register setup before retrying the indirect call. |
| [`LEVEL_10:0x174150`](../nonmatching/levels/LEVEL_10_174150.c) | 56 B | 1 | pinned: 56 B, first difference +12 | Recover the subobject pointer and callback-call source shape around the 0x50 record offset. |
| [`LEVEL_16:0x136178`](../nonmatching/levels/LEVEL_16_136178.c) | 56 B | 1 | pinned: 60 B, first difference +16 | Recover the floating constant store and branch layout while preserving the final child update. |
| [`LEVEL_16:0x156D50`](../nonmatching/levels/LEVEL_16_156D50.c) | 52 B | 1 | pinned: 48 B, first difference +0 | Recover the source and destination field-load schedule for the five record updates. |
| [`LEVEL_17:0x16A7E0`](../nonmatching/levels/LEVEL_17_16A7E0.c) | 52 B | 1 | pinned: 52 B, first difference +8 | Recover the two-entry loop counter and pointer register lifetimes. |
| [`LEVEL_05:0x07A520`](../nonmatching/levels/LEVEL_05_07A520.c) | 48 B | 1 | pinned: 48 B, first difference +2 | Recover the primary/fallback pointer branch layout and the nested result-pointer lifetime. |
| [`LEVEL_10:0x088F10`](../nonmatching/levels/LEVEL_10_088F10.c) | 48 B | 1 | pinned: 32 B, first difference +4 | Recover the nullable flag test without the compiler shortening the masked boolean expression. |
| [`LEVEL_07:0x1C3468`](../nonmatching/levels/LEVEL_07_1C3468.c) | 44 B | 1 | pinned: 44 B, first difference +8 | Recover the early-return branch and second-child preload schedule. |
| [`LEVEL_09:0x1A01B0`](../nonmatching/levels/LEVEL_09_1A01B0.c) | 44 B | 1 | pinned: 44 B, first difference +8 | Recover the early-return branch and second-child preload schedule. |
| [`LEVEL_09:0x1A0718`](../nonmatching/levels/LEVEL_09_1A0718.c) | 44 B | 1 | pinned: 44 B, first difference +2 | Recover the three-condition boolean accumulator and state-compare register lifetimes. |
| [`LEVEL_18:0x17A768`](../nonmatching/levels/LEVEL_18_17A768.c) | 44 B | 1 | pinned: 44 B, first difference +8 | Recover the early-return branch and second-child preload schedule. |
| [`LEVEL_02:0x166B00`](../nonmatching/levels/LEVEL_02_166B00.c) | 40 B | 1 | pinned: 40 B, first difference +2 | Recover the byte-counter load, clear store and limit-pointer register order. |
| [`LEVEL_02:0x1A3510`](../nonmatching/levels/LEVEL_02_1A3510.c) | 40 B | 1 | pinned: 40 B, first difference +2 | Recover the byte-counter load, clear store and limit-pointer register order. |
| [`LEVEL_02:0x1D9670`](../nonmatching/levels/LEVEL_02_1D9670.c) | 40 B | 1 | pinned: 36 B, first difference +2 | Recover the indexed record's separate +4 subrecord address and output-register lifetime. |
| [`LEVEL_16:0x1599E8`](../nonmatching/levels/LEVEL_16_1599E8.c) | 40 B | 1 | pinned: 32 B, first difference +2 | Recover the two independent stride calculations; the compiler shortens the conditional stride. |
| [`LEVEL_16:0x177F60`](../nonmatching/levels/LEVEL_16_177F60.c) | 40 B | 1 | pinned: 40 B, first difference +2 | Recover the byte-counter load, clear store and limit-pointer register order. |

## Short local data relocations (5 November 2026)

Forty-four site-specific 12- and 16-byte C sources in USA levels 01–06 link
exactly at their reviewed placements (664 distinct and placement bytes). Each
body has one local HI16/LO16 relocation pair; none calls a named import. The
sources express seven small data-access forms with the correct address for
their own module. Byte similarity across levels alone does not justify a
shared source. The complete 21-module gate verifies the linked addresses and
retail bytes for all accepted placements.

Another 147 site-specific 12- and 16-byte C bodies in USA levels 07–24 link
exactly (2,180 distinct and placement bytes). They use 147 local HI16 and 149
local LO16 relocations; two bodies read and clear the same byte through two
LO16 sites. None has a named import. For `LEVEL_24:0x1A5B78`, Ghidra did not
create a function label, but the candidate inventory records a direct call
from `0x19BF98`, a complete 16-byte return interval with no tail, and no
overlap. Its own linked C and the full module gate are exact. These are
reviewed boundaries and placements, not a claim that all remaining short
intervals are functions.

Another 229 20-byte USA placements link exactly from 210 C sources (4,580
placement bytes, 4,200 distinct-source bytes). Twenty levels share one
[`ALPHASORT` reset source](../src/levels/bodies/LEVEL_01_08F2F8.c): its two
named imports and their relocation roles are identical at every site. The
other 209 sources use their own local data targets. The complete 21-module
gate checks every linked placement and named import identity.

The next 162 reviewed 24-byte local-data placements link exactly from 155 C
sources (3,888 placement bytes, 3,720 distinct-source bytes). Seven pairs in
levels 15 and 21 use one source per pair after verifying equal retail bodies,
data targets, relocation roles and linked bytes at both sites. The other
sources retain their site-specific data addresses. The complete 21-module
gate verifies all linked placements.

The subsequent 267 reviewed 28-byte placements with local HI16/LO16 pairs
link exactly from 253 C sources (7,476 placement bytes, 7,084 distinct-source
bytes). A typed field and a separate record pointer preserve the retail base
and field offset where a flattened address changed the instructions. An
unsigned bit test shortened the frontend mask body; the signed positive
comparison above preserved its explicit mask. Fourteen source reuses were
verified by relinking at each target before the 21-module gate passed.

Another 209 reviewed 28-byte call wrappers with one relocation link exactly
from 201 C sources (5,852 placement bytes, 5,628 distinct-source bytes).
Local calls keep their measured targets; imported calls keep their symbol
names. Eight identical sources were relinked at each placement before the
complete 21-module gate passed.

Another 81 reviewed 28-byte local-data placements with three or four local
relocations link exactly from 76 C sources (2,268 placement bytes, 2,128
distinct-source bytes). Seven ordinary C forms cover paired global reads,
conditional updates, byte extraction, a pointer-based difference, bitmask
updates and a global maximum. Five identical sources were relinked at their
second level placement before the complete 21-module gate passed.

Another 246 reviewed 32-byte call wrappers link exactly from 238 C sources
(7,872 placement bytes, 7,616 distinct-source bytes). Their local calls keep
the measured targets, and 20 imported `memset` calls keep that exact name.
The pointer and floating-point argument forms were confirmed by the retail
register use; eight identical sources were relinked at their other placement
before the complete 21-module gate passed.

Another 131 reviewed 32-byte local-data placements with one HI16/LO16 pair
link exactly from 125 C sources (4,192 placement bytes, 4,000 distinct-source
bytes). Six identical sources were relinked at their second placement before
the complete 21-module gate passed. Byte and record-field source forms retain
the retail base and displacement where a flattened Ghidra address did not.

Another 94 reviewed 32-byte placements with three, four or six relocations
link exactly from 90 C sources (3,008 placement bytes, 2,880 distinct-source
bytes). The imported `SND_Fixup` call retains its exact name at 20 sites; 21
other sites retain local call targets. Code-pointer arguments are distinguished
from level-data pointers using the measured code boundary. For the three-global
store form, placing the two zero stores first in C yields the retail byte
store first after compilation. Four identical sources were relinked at both
sites before the complete 21-module gate passed.

Another 209 reviewed 36-byte call bodies link exactly from 182 C sources
(7,524 placement bytes, 6,552 distinct-source bytes). All call relocations
are local and retain their measured targets. Floating-point arguments,
unsigned literal width and an output-pointer argument explain three
otherwise incorrect call shapes. Twenty-seven identical sources were
relinked at their other placements before the complete 21-module gate passed.

Another 186 reviewed 36-byte placements with two relocations link exactly
from 179 C sources (6,696 placement bytes, 6,444 distinct-source bytes).
Seven identical sources were relinked at their second placement before the
complete 21-module gate passed. Signed bounds, natural branch direction and
the arithmetic expression tree preserve the retail instruction order.

Four pointer-condition bodies remain nonmatching (for example,
[`LEVEL_02:0x1D2090`](../nonmatching/levels/LEVEL_02_1D2090.c)). The retained
pinned C object has the correct 36-byte length but first differs at byte 2
in the global-pointer and result registers. Nested conditionals, ternary and
pointer-return forms did not select the retail registers; five other
qualified `cc1` routes did not match the representative. Reopen with an
evidenced source-level lifetime or narrowly qualified compiler remedy.

Twenty halfword-mask bodies remain nonmatching (for example,
[`LEVEL_01:0x027528`](../nonmatching/levels/LEVEL_01_027528.c)). The pinned C
object is 32 bytes, but first differs at byte 6 because the mask and data
pointer temporaries use the opposite registers. Reordering the operands,
using local pointers, a typed field view and a separate bit-array base did
not change the register assignment. Five other qualified `cc1` routes on
the representative had the same difference. Reopen with a source-level
lifetime that selects the retail registers or a narrowly qualified compiler
remedy; all 20 retained C attempts remain uncounted.

Twenty-one `asyncPs2fioLseek` wrappers remain nonmatching: the existing
[`FRONTEND:0x002620`](../nonmatching/levels/FRONTEND_002620.c) attempt and
20 additional retained level attempts. The pinned object has the correct
28-byte length but first differs at byte 12: the retail call-delay slot has
a 64-bit argument move, while the compiler emits a no-op. Wider, narrower,
pointer and old-style parameter declarations did not recover that move on
the frontend representative; five other qualified `cc1` routes had the
same difference. Reopen with source-level ABI evidence or a narrowly
qualified compiler remedy.

The self-calling bodies at [`LEVEL_15:0x093E00`](../nonmatching/levels/LEVEL_15_093E00.c)
and [`LEVEL_21:0x093E00`](../nonmatching/levels/LEVEL_21_093E00.c)
also remain nonmatching. The retail has an explicit 28-byte call and return,
while pinned C folds the recursive call to a 24-byte loop (first difference
at byte 0). The available `cc1` rejects `-fno-optimize-sibling-calls`.
Reopen with a natural source form or a qualified compiler profile that keeps
the call without changing its behavior.

Twenty 20-byte local global-copy bodies remain nonmatching despite one
authored C source per site under `nonmatching/levels/` (for example,
[`LEVEL_01:0x08CDC8`](../nonmatching/levels/LEVEL_01_08CDC8.c)).
The pinned compiler emits the same 20-byte length but first differs at
body byte 2 by exchanging the source-address and copied-word temporary
registers. Typed pointers, arrays and a one-word structure, as well as
the qualified SDK and GNU trial profiles on the representative, did not
change this mismatch. The 20 candidate sites remain uncounted until a
source-level lifetime or narrowly qualified compiler remedy reproduces
all retail bytes and the complete modules.
