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

Updates go directly into the relevant blocker entry, with their date. The summary table that
stood here until 26 November 2026 has been folded into blockers 02–04, 06, 08–12 and the
closed walls; the level-body totals it quoted are in [What is left](#what-is-left) and
[`progress/status.json`](../../progress/status.json). Older claims that a mechanism is
universally impossible are superseded where a later entry says so. These summaries do not award
matching credit or replace the build; check current source before relying on any older count,
profile or pending-PR label.

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

**Boot measurements, 14 November 2026.** Two source causes behind "only the registers differ".
(1) The declared return type of a callee: when a call's value is unused, a callee declared
`int` keeps the result register out of reach of the next value computed after the call, where
a `void` callee lets the compiler reuse it.
[`GLOBALWAD_LoadPlayerWad`](../../nonmatching/boot/GLOBALWAD_LoadPlayerWad__F13PlayerWadType.c)
goes from 509 to 512 of 512 bytes when `HIT_fclose__FPi` is declared `int`; the accepted source
defines it `void` around a call whose value stays in the result register, so the prototype needs
reconciling before integration. (2) One variable per value: giving the "active system" pointer
of [`CAMERA_Update`](../../nonmatching/boot/CAMERA_Update__Fv.c) its own variable, instead of
reusing the loop's, lets its address arithmetic share its register as retail does; and in
[`SND_PlayPositionalSound`](../../nonmatching/boot/SND_PlayPositionalSound__FP14SND_PositionalUi.c)
the order of two independent reads decides which saved register each gets (386 to 392 of 392
under `gnu-ee-trial`). (3) Naming the object again:
[`GLOBALWAD_SplitWadToIOP`](../../nonmatching/boot/GLOBALWAD_SplitWadToIOP__FP10WAD_HEADERPvUiRUi.c)
goes from 270 to 360 of 360 bytes when its sizing loop reads `wad->entries[i]` although a local
already holds `wad->entries`; the repeated address becomes the register copy retail keeps before
the loop. In the same way
[`SND_FadeAllATRAC`](../../nonmatching/boot/SND_FadeAllATRAC__Fff.c) (116 of 116 under
`gnu-ee-trial`) is an indexed loop that names `g_AtracInstances[i]` at both calls, where a
walking pointer moved the increment across the test. (4) Loop shape read from the control flow:
[`SND_StopSoundsImmediate`](../../nonmatching/boot/SND_StopSoundsImmediate__Fb.c) goes from 176
to 356 of 356 bytes as `while (flush() || busy)` with `busy` set at its declaration and an
`int`-indexed scan; a signed comparison of two addresses at a loop end is the mark of a signed
index, not of a pointer walk. These are exact local witnesses after independent SN links, not
accepted matches.

### Blocker 02

The delay slot's filler and argument order. Symptom: an argument load or an input store sits one
slot earlier or later than the retail. Measured: the retail places the **second** argument in
the `jal` delay slot where the pinned `cc1` places the first; named locals, a local pointer, a
wrapper structure and a comma expression do not change it. Conversely, writing the store
**before** the call puts it in the delay slot when the retail does (`LEVEL_07:0x1983F0`).
Reading the delay slot also tells the return type of an erased call: `daddu $a0,$v0,$zero` is an
integer return, `mov.s $f12,$f0` a float return (`LEVEL_16:0x102C38`). The argument-order
measurements date from 23 October 2026. Reopening: a source shape that emits arguments in the
order `a2, a0, a1`.

**Call-argument review, 27 November 2026.** Before treating a register-only
near miss as a scheduling problem, compare the retained caller with its accepted
callee and the actual argument registers. At `LEVEL_01:0x10F6F0`, the usage
helper receives both the asset kind and consumed bytes, including alignment
padding. At `LEVEL_04:0x197870`, the finish helper receives the owner and the
record loaded from its `+0x58` field. Making those second arguments explicit
reproduces the complete 140-byte and 80-byte bodies under the pinned route;
no scheduling flag or register binding is needed. Together with the reviewed
124-byte loop below, all three pass the pinned complete 21-module C gate;
65,501 complete objects retain their expected hashes. Ghidra's inferred prototype
alone is not evidence: follow the raw argument data flow and the callee's use.

### Blocker 03

Prologue and entry-block ordering. Symptom: `sd $ra`, `lui`, `addiu $sp` and the first argument
loads are permuted. Measured: the retail saves the general-purpose registers before the
floating-point ones and materialises a local pointer before the first call. The pinned chain
carries the RAC2 "increasing callee-saved saves" option, which inverts the order; reverting it
and separating the two `reorg` hooks of the division-padding patch is the `gnu-ee-trial-divpad`
profile (PR #97). Fifteen of thirty-three recorded failures in one set were this class, and
`void *p = s->p54;` declared before the first call reproduces the retail prologue; declared
between two calls, it shifts it. The retail also emits `addiu $sp` before the first `lui`.

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

**Boot camera unit, 14 November 2026.** The same remedy applies to the boot's current-camera
pointer at `0x01EDE330`: declared as the single member of a record, it is reloaded after every
member store, float stores included, as retail does. With it
[`CAMERA_PreUpdate`](../../nonmatching/boot/CAMERA_PreUpdate__Fv.c) (114 to 144 of 144 bytes) and
[`CAMERA_Update`](../../nonmatching/boot/CAMERA_Update__Fv.c) (255 to 444 of 444) are exact local
witnesses under the rebuilt default route and `gnu-ee-trial`, and
[`CAMERA_Reset`](../../nonmatching/boot/CAMERA_Reset__Fv.c) and
[`CAMERA_SetFovX`](../../nonmatching/boot/CAMERA_SetFovX__Ff.c) need no byte-offset casts. The
camera count in the next word is a distinct symbol: a two-member record shares one address
register between both and loses retail's second `lui`. Two adjacent stores through one pointer
value come out in the opposite order to the source in both `CAMERA_Update` and
`CAMERA_SetFovX`.

### Blocker 06

Sixteen-byte copies: a scalar `TImode` value. Measured: `lq`/`sq` come from the `movti_internal`
pattern, so they belong to a **scalar** of mode `TImode`; an assignment of an **aggregate** is
cut into eight-byte pieces by `move_by_pieces` and becomes `ld`/`sd`. The retail's sixty-four
bytes are four separate quadwords copied one at a time. The recipe is RAC1's:
`typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));`, one scalar per assignment,
and the global named directly so its address takes the first register. `FRONTEND.REL:0x0061C0`
(64 bytes) is identical to the retail this way, and the recipe rendered eight boot bodies exact
out of eight. The level pass of 21 October 2026 that measured this class with the `ldl`/`ldr`
aggregate form of blocker 07 proved 469 placements (PR #103).

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

**Boot camera unit, 14 November 2026.** `gnu-ee-trial-divpad` pads every division. Retail boot
code does not: in [`CAMERA_SetFovX`](../../nonmatching/boot/CAMERA_SetFovX__Ff.c) the square root
after a subtraction has its two `nop`, while the division whose divisor the previous instruction
has just loaded from memory has none. That source is instruction-for-instruction retail under
this profile except for those two extra `nop` (241 of 280 bytes).
[`CAMERA_Reset`](../../nonmatching/boot/CAMERA_Reset__Fv.c) is 452 of 452 under the same
profile, which has no boot route, and 442 of 452 under the default route (prologue order only).
Reopen with a measured padding rule and regression controls on the accepted level sources.
A private rule that skips the padding after a load of either operand makes `CAMERA_SetFovX`
exact but changes one accepted level body at its 20 placements (a divisor constant loaded just
before a padded division), so that form is refuted.

The existing level profile `gnu-ee-trial-divpad-blockmove` also reproduces
[`GLOBALWAD_CopyAndFix`](../../nonmatching/boot/GLOBALWAD_CopyAndFix__FP15WAD_FILE_HEADERRP15WAD_FILE_HEADERPvUiRUi.c)
(448 of 448; 230 under the default route, which pads its two record-copy loops), and every
other boot witness of this date: `CAMERA_PreUpdate`, `CAMERA_Update`, `CAMERA_Reset`,
`GLOBALWAD_LoadPlayerWad`, `GLOBALWAD_SplitWadToIOP` and the record overload of
`SND_PlayPositionalSound`. One profile covering these camera, WAD and sound bodies is evidence
for a boot route of that family; it is not a qualification.

**Boot positional sound update, 13 November 2026.** The retained
[candidate at `0x01E92B40`](../../nonmatching/boot/func_1E92B40.c) reproduces its
proposed 560-byte extent in an independent SN link under rebuilt
`gnu-ee-trial-divpad -O2 -G0`. On the same source, the default rebuilt GNU
route emits 552 bytes with 453 equal byte positions in the compared prefix,
first difference `+0x10`; `sdk-divpad` emits 560 bytes with 538 equal positions,
first difference at entry. Division padding alone therefore does not explain
all differences between these compiler bases. The unsigned all-ones handle
sentinel, distinct volume-variable lifetimes and initialization order of the
two addressable output words account for the measured source changes.

A private per-source extension trial recompiled all 714 objects and reproduced
the complete 856,120-byte boot ELF exactly. All 713 previous source/object pins
and accepted-object routes were preserved. The run used `--unpinned-tools` and
does not qualify this boot placement or expand the profile's documented scope.
The GNU profile remains level-only in the committed metadata; the trial's
replacement, selector and generated catalogue changes are not included here.

Reopen integration with explicit profile-scope review, verified recipe/tool
provenance, existing-object regression controls and a qualified complete boot
gate; do not change the global route. The reconstructed wrapper declarations
follow their accepted definitions, including the callback wrapper's word-based
address parameters. The two direct callers pass one record pointer, ignore the
return and iterate 64 records with stride `0x58`. Direct-flow and limited
address-reference scans support `0x01E92B40..0x01E92D70` as a provisional owner;
other indirect entries and original source types remain review obligations.
The following eight bytes retain unknown ownership in the assembly baseline
and are excluded from this source. No C is promoted.

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
functions in the same file; they link end to end and one family then covers both. The same
happens in a 128-byte body.

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

**Level objects, 13 November 2026.** Rebuilding all 116 accepted level sources
using pinned Ps2EeAs 1.8.19.316 reproduced their canonical Windows object
hashes. Wine 10.0 produced different complete hashes, with every difference
confined to non-loadable `.mdebug`; every byte outside that section, including
code, relocations, symbols and ELF headers, remained equal. The level profile
now records these exact alternatives in `object_sha256_alternates`, bound to
each unchanged source and compiler/assembler route. The canonical Windows
pins are preserved. Unknown variants and stale bindings remain errors; the
compiled objects are never rewritten or normalized. This addresses host
metadata, not an instruction mismatch or a new compiler profile.

On 21 November 2026 the same pinned binary, run on a Windows 10 host through WSL
interop, produced a third complete hash for 194 level objects: one `.mdebug` byte
differs (a register-mask word reads `0x20C0` where the canonical object has
`0x30C0`), and every byte outside that section is equal. On 22 November 2026 the
cause was measured on that host: the bit (`0x1000` of the word) depends on the
Windows environment the assembler starts with, not on the input assembly or the
working directory. Started from the full environment of the calling shell (about
one hundred variables) it is clear; started from a minimal environment
(`SYSTEMROOT` and `PATH` only, or a WSL session launched from one) it is set. No
single variable and no environment size alone flips it, which is consistent with
a read of uninitialized memory. The recorded tables follow different conventions:
every level hash except twenty matches the set bit, and all 50 `ps2eeas` boot
hashes match the clear bit, so on that host the level gate passes from a minimal
environment and the boot gate from the full one. The twenty level objects pinned on
21 November (PR #287) had recorded the clear bit; their `object_sha256` values were
refreshed with `--refresh-bodies` from a minimal environment, and the complete
level gate then passed with all 21 modules exact and no tolerance. When recording a
new `Ps2EeAs` hash, check that the bit agrees with the other hashes of the same
table.

On 27 November 2026, a pinned level assembler invoked through WIBO produced
another complete-object hash for `LEVEL_01_0023B0.c`: two bytes differed only
in non-loadable `.mdebug`, while every other byte, including text, symbols,
relocations and ELF headers, agreed. The same input assembly and pinned binary
executed through native Windows reproduced the existing canonical object.
Use the qualified execution environment before proposing a new hash alternative;
neither clearing metadata nor changing an existing pin is a valid shortcut.

### Blocker 16

What this toolchain has no spelling for. Measured: 128-bit computed constants (`dsll32`/`or`)
are outside the pinned `cc1`; `add_call` is refused (`MAX_INTEGER_COMPUTATION_MODE = DImode`,
`elf5900.h:33`); `register_precision` segfaults or is ignored; a register-fed `movn` needed the
form in blocker 10. A missing two-`nop` pad is blocker 09, not this entry.
On 12 November 2026, five boot bodies of the sound state layer were measured
(USA `SCUS_976.15`): `SND_LevelInit__Fv`, `SND_MCPShutdown__Fv`,
`SND_LevelShutdown__Fv`, `SND_MCPUpdate__FPC7MATRIX4T0` and
`SND_LevelUpdate__FPC7MATRIX4T0`, 52 to 68 body bytes each, each followed by one
zero alignment word. Each tests `g_SoundCtrl` and, on the unexpected state,
executes a `break` with code 1 before it continues. A scan of the boot `.text`
finds exactly five such instructions, one in each of these bodies; the other
`break` instructions are the compiler's division guard (code 7, 47 sites) and one
unrelated site. **Hypothesis:** the trap comes from a source-level assertion that
this toolchain has no C spelling for. Measured: local rebuilds of the pinned
chain and of `sdk991111` at `-O2 -G0` emit `break` only as the division guard,
so no body reaches its trap (0 exact bodies; one compile per body and per
compiler; `prodg2953` not tried). The rebuilt compiler binaries are not
hash-identical to the pins; they reproduced the pinned object hashes of the
accepted boot sources they were compared on, and no gate was run. The trap is
not the only difference: the two shutdown bodies keep the base of the global in
`$s0` across their call inside a 16-byte frame, which the rebuilt pinned chain
does not do, and `sdk991111` turns the call of `SND_LevelInit__Fv` into a tail
jump the retail does not have. No C is retained in `nonmatching/` for them: a
body without the trap does not preserve the original behaviour. Reopen with a
compiler builtin or source form that emits a code-1 `break`, or with a
maintainer decision on whether this trap is handwritten assembly.

A later isolated probe on 12 November 2026 tried the ordinary C builtin
`__builtin_trap()` with the pinned SN ProDG 3.01 compiler at `-S -O2 -G0`.
It rejected the source with `__builtin_trap not supported by this target`;
no instruction was emitted. The pinned `sdk991111` compiler and a local rebuild
of the pinned chain (not hash-identical to its pins) gave the same diagnostic
on the same three-line source. This rules out that builtin on these routes, not
every possible source form. The five complete bodies were not retried.

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

**R5900 assembler recipe, 27 November 2026 ([PR #307](https://github.com/OpenRAC/rac5-sm-decomp/pull/307)).**
The public `r5900-mfc1` rebuild retained a top-down expansion of some 64-bit
immediates that differed from the pinned assembler. Patch `0009` restores GNU's
generic expansion for this route, with patched-source SHA-256 `afc3bc78…`.
The rebuilt assembler reproduces the complete recorded object hashes for all
271 current sources, including the 54 added since the initial 217-source check.
The default assembler, source flags, object hashes and binary pin are unchanged.
The rebuilt binary itself differs from its pin, so this regression check stays
non-qualifying and adds no matching credit. See the
[rebuild recipe and scope](toolchain.md#rebuilt-tools-have-other-hashes).

Retained boot attempts and type reviews of 15–17 November 2026 that used these profiles are
kept in the dated log under
[Retained USA boot attempts and reviews](#retained-usa-boot-attempts-and-reviews-1517-november-2026).

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

**USA boot Spiral boundary, 15 November 2026.** The retained
`Spiral_EmitJoint__FP12Spiral_GroupPC12Spiral_Pointb` body occupies
`0x01E754C8..0x01E755CC` (260 bytes), followed by one zero alignment word.
Its temporary replacement ends at `0x01E755D0`; the further stack adjustment
and zero word through `0x01E755D8` remain unexplained baseline bytes.
Do not claim that entire next-label interval as a 272-byte C body.

**USA boot quaternion boundary, 15 November 2026.** The named matrix
conversion at `0x01E77F00` returns through `0x01E77FB8` (184 bytes), without
an outgoing edge into its 56-byte nonzero tail. That tail has a distinct
entry at `0x01E77FB8`, called by the accepted static initializer wrapper
at `0x01E77FF0`; it remains in the baseline. There is no direct outside edge
to the conversion's interior. The 240-byte next-label interval therefore
does not describe a 240-byte matrix conversion body. A further aligned
absolute-word scan of nonexecuting boot sections found only `.sndata`
references to the conversion entry and static wrapper, none to the body's
interior. This does not exclude constructed pointers or relocated level
references and is not a universal indirect-entry proof.

**Boot sound internal entries, 13 November 2026.** The 2,160-byte next-label
interval of `SND_StopATRACInstance__FP13ATRACInstance` is not one function.
The retained [12-byte setter](../../nonmatching/boot/SND_StopATRACInstance__FP13ATRACInstance.c)
and seven address-named C candidates at `0x01E92AB0`, `0x01E92D78`,
`0x01E92DE8`, `0x01E92E48`, `0x01E92E60`, `0x01E92E98` and `0x01E932D8`
reproduce 656 compared bytes in independent SN links using rebuilt GNU EE
tools with `-O2 -G0`. These are local witnesses, not accepted C. Direct calls,
callback-address construction and independent returns corroborate separate
entries; they do not exclude other indirect entries. The nonzero eight-byte
gap at `0x01E92D70` remains unassigned in the assembly baseline.

An isolated trial added the setter and the unpadded candidates at `0x01E92DE8`,
`0x01E92E48`, `0x01E92E98` and `0x01E932D8`: five C objects supplying 356
compiled bytes. The standard boot gate recompiled all 718 objects and reproduced
the complete 856,120-byte ELF exactly, including the full code and load image.
It ran with `--unpinned-tools` and reported `qualifying_tools: false`; no C was
promoted. The committed profile and generated catalogue retain their existing
scope pending a qualifying integration run. The unassigned gap stayed in the
assembly baseline throughout the trial.

The current boot catalogue requires an anonymous body to fill its owner span
exactly. The 140-, 108- and 52-byte candidates at `0x01E92AB0`, `0x01E92D78`
and `0x01E92E60` each have a following zero word and remain outside that gate.
Reopen their integration only with a reviewed anonymous-boundary and trailing-word
protocol; do not enlarge their body extents to absorb those words. Callback
registration stores a 32-bit function address and a 64-bit payload. The retained
callback `long` parameters are measured ABI carriers (64 bits on these rebuilt
compilers), not recovered original declarations. A static trace through the
same alternating callback banks reaches the indirect call at `0x01E94808`,
which supplies a 32-bit result and a 64-bit payload. This corroborates the
reconstructed calling convention; original source types and signedness still
require review. Positional-record iteration supports
a `0x58` stride; the larger trailing padding in a private caller sketch is not
evidence for a shared layout. Promotion requires the qualified complete gate
and semantic review of the chosen extents and contracts.

**Internal join versus trailing alignment, 13 November 2026.** The retained
[148-byte body at LEVEL_16:0x16BB98](../../nonmatching/levels/LEVEL_16_16BB98.c)
still differs at the word at `+0x28` in all sixteen reviewed placements. The
compiled internal join is at `+0x48`, while retail enters at `+0x44`. Both
GNU and SN outputs retain that internal difference. SN can additionally
produce a 148-byte function symbol in a 152-byte text section whose last
four bytes are zero and agree with the original padding. Admitting that tail
alone would therefore not make this body match. Twenty accepted caller
sources also declare incompatible argument/return contracts. Reopen with a
new, measured source or toolchain explanation for the internal join and a
coherent caller graph; neither equal length nor tail trimming is a remedy.

## Closed walls

| Wall | What lifted it |
| --- | --- |
| The prologue save order | the retail saves general-purpose registers before floating-point ones; reverting the RAC2 "increasing saves" option and separating the two `reorg` hooks is the `gnu-ee-trial-divpad` profile (PR #97) |
| The R5900 division padding | two `nop` before every single-precision division; same profile |
| A body that carries an absolute address | one file per placement, the address in the symbol name |
| Two candidates claiming one placement | every candidate source is replayed at that placement; the first claim is not necessarily the one that reproduces the retail |
| A call the loader patches | the module holds a zero target; the symbol carries its address in its name |
| The 184-byte quaternion-to-matrix body | naming the nine products explicitly, in the order that fixes the allocation (`src/levels/shared/LEVEL_06_119B10.c`) |
| The 416-byte `Quat_Slerp` body | the byte-identical twin in the boot gives the routine its name and prototype; the new profile reproduces the prologue order and the division padding (PR #97) |
| Three of the twelve bodies above 412 bytes | a `VEC3` read instead of `VEC4`; pointer copies before the null test with matrix rows sixteen bytes apart; and one was a **profile** wall — the unchanged retained source gives 512 exact bytes under `gnu-ee-trial-divpad` |
| The `ldl`/`ldr` aggregate copy class | the `ldl`/`ldr` pair is a four-byte-aligned aggregate copied by structure assignment; 469 placements proved (PR #103). The float copy itself is field by field (blocker 08) |
| The 64-byte copy of `FRONTEND.REL:0x0061C0` | four separate quadwords; `lq`/`sq` come from a scalar `TImode`, and the global is named directly |
| The sixteen-bit accessor and stub families | one authored source carried at every placement that holds the same bytes, each placement proved on its own |
| Record initialization with `powf` | A new 472-byte C form reproduces 50 USA bodies at 51 placements. Keep the 16-byte head and the 64-byte record as separately named globals, and retain a pointer to the record across both `powf` calls; this reproduces the retail register lifetime and save order under `gnu-ee-trial`. The per-level colors and float constants are measured separately (4 November 2026) |
| Block-move loop count and larger record initializers | A source-specific `gnu-ee-trial-divpad-blockmove` compiler profile fixes an RTL short-loop count that inserted two unnecessary `nop` words in 32-byte aggregate copies. It reproduces 41 further USA C bodies on 42 placements (22,020 distinct-source bytes): the earlier 536-byte near miss at `LEVEL_01:0x033E58`, its 540-byte sibling family, and four 528/532-byte bodies. The old 536-byte C linked at 544 bytes with its first difference at byte 16 under the base divpad profile; with the measured patch it links exactly. The original compiler remains pinned, 140 prior divpad objects retain their hashes, and two complete 21-module gates pass (4 November 2026) |
| Boot GCC runtime library | on 13 November 2026 the nine remaining boot `libgcc` functions (`__divdi3`, `__moddi3`, `__udivdi3`, `__umoddi3`, `__muldi3`, `__fixdfdi`, `__do_global_dtors`, `__do_global_ctors`, `__unpack_f`; 6,836 body bytes) are exact from GCC's own `libgcc2.c`/`fp-bit.c` text as OpenRAC/rac1-decomp vendors it, under `sdk991111 -O2 -G0` (`__unpack_f` also under the pinned chain). Five need `longlong.h`'s original MIPS `umul_ppmm`, which AGENTS.md now allows as RAC2 does. Write such a function as the upstream module, not as rewritten C |

## What is left

At the 27 November 2026 snapshot (`progress/status.json`), the level scope is **82,774 measured
placements** of 10,413,908 placement bytes carried by **65,501 sources**, and many bounded
candidates remain outside the accepted scope. The boot keeps **864 accepted functions** covering
119,008 of 498,900 bytes of `.text`. [Original assembly](#original-assembly-classification-26-november-2026)
(86 boot units and 2 level shapes in `config/handwritten_asm.tsv`) is counted apart from C. The remainder of this section records earlier dated additions.
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
The 884 linked boot C bodies cover 123,480 bytes including alignment. The profile
files and their patches are the only place where a toolchain change is allowed
to move a body.

## Provenance

Issue #98 was the living wall register from the boot work to October 2026. Its body and comments
remain on GitHub as dated history, including the measurements that later entries corrected. This
document supersedes it as the active register. The maintainer imported the open and closed walls
on 23 October 2026, added the measurements recorded up to that date, and keeps the counts above
in step with `master`. Issue #99 remains the only reservation board.

## Dated measurement log

The sections below are dated measurement records, kept in date order. They are history, not a
fresh census: later entries and the numbered blockers above supersede them where they disagree,
and current totals come from [`progress/status.json`](../../progress/status.json).

| Date | Record |
| --- | --- |
| 2–4 November 2026 | [Level C forms extended to further placements](#level-c-forms-extended-to-further-placements-24-november-2026) |
| 4 November 2026 | [Retained module C attempts](#retained-module-c-attempts-4-november-2026) |
| 4 November 2026 | [Further frontend C attempts](#further-frontend-c-attempts-4-november-2026) |
| 4 November 2026 | [R5900 quad-save level prologues](#r5900-quad-save-level-prologues-4-november-2026) |
| 4 November 2026 | [Further level C attempts](#further-level-c-attempts-4-november-2026) |
| 4 November 2026 | [Corrected level-call hypotheses](#corrected-level-call-hypotheses-4-november-2026) |
| 4 November 2026 | [Additional retained near misses](#additional-retained-near-misses-4-november-2026) |
| 4 November 2026 | [Named import calls in accepted level bodies](#named-import-calls-in-accepted-level-bodies-4-november-2026) |
| 5 November 2026 | [Qualified compiler-generated local multiplication](#qualified-compiler-generated-local-multiplication-5-november-2026) |
| 5 November 2026 | [Bounded frontend C attempts of 64 bytes or less](#bounded-frontend-c-attempts-of-64-bytes-or-less-5-november-2026) |
| 5 November 2026 | [Short raw-identical level-body candidates](#short-raw-identical-level-body-candidates-5-november-2026) |
| 5 November 2026 | [Short local data relocations](#short-local-data-relocations-5-november-2026) |
| November 2026 | [Bounded USA short-body near misses](#bounded-usa-short-body-near-misses-november-2026) |
| November 2026 | ↳ [Further bounded USA short-body blockers](#further-bounded-usa-short-body-blockers-november-2026) |
| November 2026 | ↳ [Later bounded USA short-body measurements](#later-bounded-usa-short-body-measurements-november-2026) |
| 9 November 2026 | ↳ [USA bounded bodies of 68–76 bytes](#usa-bounded-bodies-of-6876-bytes-9-november-2026) |
| 9 November 2026 | ↳ [USA bounded bodies of 61–120 bytes](#usa-bounded-bodies-of-61120-bytes-9-november-2026) |
| 9 November 2026 | ↳ [USA bounded bodies of 100–200 bytes](#usa-bounded-bodies-of-100200-bytes-9-november-2026) |
| 9 November 2026 | ↳ [Prototype review of the held 61–200-byte bodies](#prototype-review-of-the-held-61200-byte-bodies-9-november-2026) |
| 9 November 2026 | ↳ [Retry passes over open forms of up to 200 bytes](#retry-passes-over-open-forms-of-up-to-200-bytes-9-november-2026) |
| 9 November 2026 | ↳ [USA bounded bodies of 201–600 bytes](#usa-bounded-bodies-of-201600-bytes-9-november-2026) |
| 13 November 2026 | [Bounded USA level source updates](#bounded-usa-level-source-updates-13-november-2026) |
| 14 November 2026 | ↳ [USA bodies of at most 200 bytes](#usa-bodies-of-at-most-200-bytes-14-november-2026) |
| 21 November 2026 | ↳ [USA bodies of 201 to 400 bytes](#usa-bodies-of-201-to-400-bytes-21-november-2026) |
| 22 November 2026 | ↳ [USA bodies of 801 to 1,500 bytes and near-miss retries](#usa-bodies-of-801-to-1500-bytes-and-near-miss-retries-22-november-2026) |
| 22 November 2026 | ↳ [USA bodies of 401 to 800 bytes](#usa-bodies-of-401-to-800-bytes-22-november-2026) |
| 22 November 2026 | ↳ [Sister-decompilation twins](#sister-decompilation-twins-22-november-2026) |
| 15–17 November 2026 | [Retained USA boot attempts and reviews](#retained-usa-boot-attempts-and-reviews-1517-november-2026) |
| 17 November 2026 | ↳ [USA boot bodies of 112–444 bytes](#usa-boot-bodies-of-112444-bytes-17-november-2026) |
| 26 November 2026 | ↳ [USA boot bodies of 164–472 bytes](#usa-boot-bodies-of-164472-bytes-26-november-2026) |
| 26 November 2026 | [Original assembly classification](#original-assembly-classification-26-november-2026) |
| 26–27 November 2026 | [USA level sources and call contracts](#usa-level-sources-and-call-contracts-26-27-november-2026) |

### Level C forms extended to further placements (2–4 November 2026)

These rows stood in the closed-walls table until 26 November 2026. Each records C forms that
reproduced further USA level placements, checked by the complete module gate.

| Forms | Result |
| --- | --- |
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
| More record-initialization forms with `powf` | Four typed C forms of 308, 420, 436 and 464 bytes reproduce 55 further USA bodies at 55 placements (22,712 distinct-source bytes) under `gnu-ee-trial`. Each form uses a separately named head and record, initializes a local record and copies it after two `powf` calls. Within each structurally identical group, the varying head, record and optional data addresses were extracted per module; every linked placement and all 21 complete modules were checked (4 November 2026) |
| Additional named record forms | Existing `gnu-ee-trial` compiles 44 further C sources at 45 USA placements (14,016 distinct-source bytes), including 252- and 268-byte records. Initial zero-address call placeholders were corrected to the retail `memset`, `cosf` and `sinf` import names before promotion; all 127 new placements passed an import-identity audit and both complete-module gates (4 November 2026) |
| UI initialization families | Two related 1,120- and 924-byte C forms reproduce 38 further sources at 40 USA placements (38,836 distinct-source bytes) under `gnu-ee-trial-divpad`. A common callee's return type is `int`, supported by both retail return paths; correcting the 1,120-byte declarations preserves every exact object. LEVEL_15/21 share one source per form, each linked independently. Return/delay slots and following zero alignment words were reviewed separately (4 November 2026) |
| Further 632-, 644- and 192-byte C families | Three typed C forms reproduce 77 additional USA sources on 81 placements (32,184 distinct-source bytes). The 632-byte form retains both named `memset` imports; the 644-byte form keeps its 18 named imports and three local calls; the 192-byte form keeps six local calls. Four extra placements reuse an identical source and are checked separately. The 644-byte bodies' trailing zero alignment word is excluded from C credit. Each source and placement passes two complete 21-module gates (4 November 2026) |
| Additional known C forms | Four previously accepted forms extend to 54 further USA bodies at 55 placements. Address-named and file-scope symbol aliases are retained only where the compiler produces the exact body and every target module resolves them (4 November 2026) |

### Retained module C attempts (4 November 2026)

These USA frontend and level sources are useful hypotheses, retained in
`nonmatching/levels/` without C credit. Each result is from an isolated linked
comparison against the stated candidate extent. The complete-module gate has
not accepted any of them, and structurally similar placements elsewhere have
not been claimed.

| Source and candidate extent | Profile and linked result | Next useful check |
| --- | --- | --- |
| [`FRONTEND.REL:0x00A150`](../../nonmatching/levels/FRONTEND_00A150.c), 1,168 bytes | Pinned GNU EE: 1,116 bytes; first difference at body byte 8. The one call and eight branches are present in both, but the candidate is 52 bytes short. | Review packet-construction field types, live ranges and the full frontend boundary before extending to levels. |
| [`FRONTEND.REL:0x00DD40`](../../nonmatching/levels/FRONTEND_00DD40.c), 1,896 bytes | Pinned GNU EE: 1,800 bytes; first difference at body byte 260, initially a branch displacement; first different code shape at byte 308. | Reconstruct text-wrap control flow and local variable lifetimes; confirm other module boundaries separately. |
| [`FRONTEND.REL:0x016200`](../../nonmatching/levels/FRONTEND_016200.c), 1,924 bytes | `gnu-ee-trial-divpad`: 1,736 bytes; first difference at body byte 92. The C retains the order of 74 call targets but only 18 of the reference's 21 branches. A separate zero alignment word follows each reviewed body and earns no C credit. | Recover the missing control-flow paths and floating-point live ranges; verify every placement before promotion. |
| [`0x01A398`](../../src/levels/01_pokitaru/LEVEL_01_01A398.c) (accepted 27 November 2026), 244 bytes | Pinned GNU EE: 236 bytes; first difference at body byte 6. Both direct global indexing and local pointer spelling had this mismatch. | Review the global access and copy structure, including whether scalar float stores express the candidate body. |
| [`0x0340B8`](../../nonmatching/levels/LEVEL_01_0340B8.c), 1,192 bytes | Pinned GNU EE: 1,084 bytes; first difference at body byte 0. The candidate and reference have eight calls, but their stack frames and mask tests differ. | Reconstruct temporary groups and mask/control flow, then recheck the candidate bound and source identity. |
| [`0x0532F8`](../../src/levels/01_pokitaru/LEVEL_01_0532F8.c) (accepted 22 November 2026), 428 bytes | `gnu-ee-trial`: 428 bytes; first difference at body byte 48 in scheduling the head stores around `memset`. The retained head-field order reduces differing words from 15 to 13, but none of 24 equivalent orders matched. Aggregate initialization, local head pointer, call naming and prototype variants also remained different. | Change the source-level call-shape or qualified compiler hypothesis; another store-order permutation adds no evidence. |
| [`0x0876B8`](../../nonmatching/levels/LEVEL_01_0876B8.c), 1,840 bytes | Pinned GNU EE: 1,836 bytes; first difference at body byte 0. The source retains the pad API calls and 68-byte copy, but saves an extra register and uses a 64-byte rather than 48-byte stack frame. | Review the lifetime of the pad-mode return value and related register allocation; verify other family members only after this body matches. |
| [`0x0AC5B8`](../../nonmatching/levels/LEVEL_01_0AC5B8.c), 1,196 bytes | `gnu-ee-trial`: 1,200 bytes; first difference at body byte 12 in the saved-register sequence. The representative boundary excludes the following zero word. | Find a source/prototype with the required floating-point argument and five stack temporaries, then recheck the linked body. |
| [`0x0C0F50`](../../nonmatching/levels/LEVEL_01_0C0F50.c), 1,996 bytes | `gnu-ee-trial-divpad`: 2,020 bytes; first difference at byte 56 in a branch displacement, first different non-branch code at byte 376. Sixty call targets remain in the same order. | Review global index arithmetic and division padding before treating the structural family as one source identity. |
| [`0x0C0EB8`](../../nonmatching/levels/LEVEL_01_0C0EB8.c), 148 bytes | Pinned GNU EE links 160 bytes; first difference remains at body byte 4. The typed two-table search preserves the current pointer-key ABI and both local data targets, and raises the common word subsequence from 19 to 25 of 37 retail words. | Recover the shared zero-return branch and first-stage cursor register while preserving the two record strides and key comparisons. |
| [`0x0588A8`](../../src/levels/01_pokitaru/LEVEL_01_0588A8.c) (accepted 21 November 2026), 280 bytes | Pinned GNU EE links 276 bytes; first difference at body byte 25 changes the initial float register (`f3` retail, `f1` C). Both local calls keep their targets but occur four bytes early. All 20 structural placements differ. | Recover the state-field initialization order and float live ranges that add the missing instruction before the calls. |
| [`0x094098`](../../src/levels/01_pokitaru/LEVEL_01_094098.c) (accepted 21 November 2026), 280 bytes | Pinned GNU EE links 280 bytes; first difference at body byte 37 is the outer-loop index register. All 20 structural placements differ, while the named `g_MaterialHasBloomedThisFrame` import is retained. | Recover nested-loop register lifetimes and field-store scheduling before another family-wide linked comparison. |
| [`0x098108`](../../nonmatching/levels/LEVEL_01_098108.c), 236 bytes | Pinned GNU EE links 240 bytes; first difference at body byte 1 is list-owner register allocation. The compiler also adds a divide-by-zero check absent from retail. Only the representative is measured. | Qualify a compiler route for the retail `divu` shape and recover the entry register lifetimes before deriving placements. |
| [`0x164708`](../../src/levels/01_pokitaru/LEVEL_01_164708.c) (accepted 9 November 2026), 124 bytes | Pinned GNU EE links 124 bytes; first difference at body byte 0 loads `D_00207558` before the retail float constant. Only the representative is measured. | Recover the global-load and float-constant scheduling in pure C before deriving the 16 structural placements. |
| [`0x11E9A8`](../../src/levels/01_pokitaru/LEVEL_01_11E9A8.c) (accepted 21 November 2026), 264 bytes | Pinned GNU EE links 264 bytes; first difference at body byte 88 is a branch displacement. Both local calls keep their sites and targets; all 20 structural placements differ at byte 88. | Recover the float return-value lifetime and store/branch form after the second call while preserving the retail comparison's NaN behavior. |
| [`0x0CD700`](../../nonmatching/levels/LEVEL_01_0CD700.c), 1,880 bytes | `gnu-ee-trial`: 1,848 bytes; first difference at body byte 0 for the retained clean source. A structural probe moved the first difference to byte 72 but did not match the six-entry copy loop. | Verify loop register lifetimes, source ABI and the candidate boundary before testing another form. |
| [`0x0FF2B8`](../../nonmatching/levels/LEVEL_01_0FF2B8.c), 2,004 bytes | `gnu-ee-trial-divpad`: 2,048 bytes; first difference at body byte 0. Eight `memset` calls appear, but the stack frame is 400 bytes instead of the reference's 416. | Recover local variable lifetimes and frame layout while preserving the eight calls and reviewed return/delay slot. |
| [`0x110D70`](../../nonmatching/levels/LEVEL_01_110D70.c), 1,184 bytes | Pinned GNU EE: 1,092 bytes; first difference at body byte 0. The current geometry source differs substantially beyond the prologue. | Revisit prototypes, vertex-selection logic and temporaries before trying another compiler profile. |
| [`0x11E790`](../../nonmatching/levels/LEVEL_01_11E790.c), 536 bytes | `gnu-ee-trial-divpad`: 532 bytes; first difference at body byte 0. Pinned and local-array variants also differed. | Check local record layout, stack frame and parameter ABI before changing arithmetic spelling. |
| [`0x1158B8`](../../nonmatching/levels/LEVEL_01_1158B8.c), 1,856 bytes | `gnu-ee-trial-divpad`: 1,756 bytes; first difference at body byte 0. Both have twelve divisions and the direct call at byte 172, but the stack frame is 224 versus 256 bytes. | Recover the stack-based clamp temporaries and floating-point live ranges; review all other placements separately. |
| [`0x1255B0`](../../src/levels/shared/LEVEL_01_1255B0.c) (accepted 22 November 2026), 544 bytes | Pinned GNU EE: 544 bytes; first difference at body byte 32. Equal length is not a match. | Review floating-point temporary lifetimes and save order against caller and callee evidence. |
| [`0x19BFF0`](../../nonmatching/levels/LEVEL_01_19BFF0.c), 520 bytes | Pinned GNU EE: 476 bytes; first difference at body byte 4. A decompiler also flagged an unreachable block. | Confirm the full boundary and original control flow; resolve the random factor's semantics before relying on this source. |

### Further frontend C attempts (4 November 2026)

The sources below preserve useful C hypotheses without match credit. Each
number is an isolated linked comparison of the USA `FRONTEND.REL`
representative. Other modules may share a structural shape, but each
placement still needs its own boundary, source-identity and complete-module
checks before promotion. A zero alignment word after a reviewed body is
excluded from its C size.

| Source and candidate extent | Measured result | Reopening condition |
| --- | --- | --- |
| [`0x006850`](../../nonmatching/levels/FRONTEND_006850.c), 788 bytes | `sdk991111sync` links 784 bytes, first difference at byte 0; it supplies the required synchronization but its stack frame differs. | Find a qualified C compiler route that emits both the synchronization and the retail prologue. |
| [`0x006B68`](../../nonmatching/levels/FRONTEND_006B68.c), 768 bytes | Corrected C passes `&gRT_BackBuffer` to the late `func_0000A650` call, consistent with the retail relocation at that call. SHA-pinned `sdk991111sync` links 712 bytes and first differs at byte 0 with a 96-byte frame. An experimental per-source selective `$s0` quadword-save route links 712 bytes and first differs at byte 4 with a 64-byte frame, two `sq`, one `lq`, and five `sd`/`ld` pairs versus the retail six pairs. Neither is byte-exact. | Recover the source lifetimes that retain the incoming argument in `$s5`, the missing save/restore pair, and the original return path; then qualify the selective route with accepted controls and compare the complete linked body and module. |
| [`0x0098C0`](../../nonmatching/levels/FRONTEND_0098C0.c), 1,124 bytes | Pinned GNU EE links 1,108 bytes, first difference at byte 14. | Recover parameter live ranges and the 16-byte tag initialization. |
| [`0x009D28`](../../nonmatching/levels/FRONTEND_009D28.c), 1,064 bytes | Pinned GNU EE links 1,072 bytes, first difference at byte 28 in allocation of the alpha indicator. | Review the indicator's type and lifetime before trying another profile. |
| [`0x00D298`](../../nonmatching/levels/FRONTEND_00D298.c), 896 bytes | `gnu-ee-trial` links 872 bytes, first difference at byte 0; six call targets remain in order. Its C signature now agrees with the exact 212-byte callers' register roles, while the original formal argument order remains unproved. | Recover the missing saved-register and branch structure. |
| [`0x00D948`](../../nonmatching/levels/FRONTEND_00D948.c), 744 bytes | `gnu-ee-trial-divpad` links 728 bytes, first difference at byte 16. | Resolve color-state register lifetime and glyph-unpacking schedule. |
| [`0x00FC88`](../../nonmatching/levels/FRONTEND_00FC88.c), 732 bytes | `gnu-ee-trial` links 736 bytes, first difference at byte 8. | Recover lifetimes of the module base, flags pointer and checksum. |
| [`0x011AD8`](../../nonmatching/levels/FRONTEND_011AD8.c), 744 bytes | `sdk991111sq` links 760 bytes, first difference at byte 0; its stack frame and final tail calls differ. | Find a measured source/profile that retains the retail quadword frame and call endings. |
| [`0x0149D0`](../../nonmatching/levels/FRONTEND_0149D0.c), 1,084 bytes | Pinned GNU EE links 1,064 bytes, first difference at byte 4; eleven calls retain their order but three branches are missing. | Recover the omitted control-flow paths and live ranges. |
| [`0x016CD8`](../../src/levels/frontend/FRONTEND_016CD8.c) (accepted 22 November 2026), 1,012 bytes | Pinned GNU EE links 1,012 bytes, first difference at byte 470; the remaining register allocation differs despite equal length. | Recover the C expression and temporary lifetime that select the retail general registers. |
| [`0x01F9A0`](../../nonmatching/levels/FRONTEND_01F9A0.c), 984 bytes | Pinned GNU EE links 968 bytes, first difference at byte 12. | Recover the parameter and local-variable live ranges. |
| [`0x024A70`](../../src/levels/frontend/FRONTEND_024A70.c) (accepted 22 November 2026), 816 bytes | `sdk991111` links 760 bytes, first difference at byte 8; its frame agrees more closely than GNU's but the body is incomplete. | Reconstruct the packed node traversal and saved-value lifetimes. |

### R5900 quad-save level prologues (4 November 2026)

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

### Further level C attempts (4 November 2026)

These `LEVEL_01.REL` sources are retained hypotheses with **no C credit**.
Each measurement below is a linked comparison of the representative body
only. Structurally related level placements have not been accepted or
credited. Source types and field roles remain provisional where a callee or
record layout has not been independently confirmed.

| Source and candidate extent | Measured result | Reopening condition |
| --- | --- | --- |
| [`0x006300`](../../nonmatching/levels/LEVEL_01_006300.c), 1,172 bytes | `gnu-ee-trial-divpad` links 1,184 bytes, first difference at body byte 6; nine call targets remain in order. | Recover the global-address register choice and the missing source shape around the third square root. |
| [`0x00C860`](../../nonmatching/levels/LEVEL_01_00C860.c), 1,084 bytes | Pinned GNU EE links 1,052 bytes, first difference at byte 0; five calls retain their targets. | Revisit contiguous vector layout and persistent loop values before changing profiles. |
| [`0x040F28`](../../nonmatching/levels/LEVEL_01_040F28.c), 592 bytes | `gnu-ee-trial` links 592 bytes, first difference at byte 184 in scalar load/register scheduling; fourteen call targets stay in order. | Recover floating-point temporary lifetimes and the callback's source form. |
| [`0x0537E0`](../../nonmatching/levels/LEVEL_01_0537E0.c), 1,032 bytes | `gnu-ee-trial` links 1,028 bytes, first difference at byte 32. | Revisit floating-point save order and lifetime of the initial pointer. |
| [`0x0694A0`](../../nonmatching/levels/LEVEL_01_0694A0.c), 992 bytes | `gnu-ee-trial-divpad` links 996 bytes, first difference at byte 28; six calls keep their order. | Find the source ordering that removes the four surplus code bytes while preserving the measured frame. |
| [`0x069BA0`](../../nonmatching/levels/LEVEL_01_069BA0.c), 1,060 bytes | `gnu-ee-trial` links 968 bytes; first raw difference at byte 24 in a branch displacement, first other difference at byte 64 in FP register allocation. | Review the three-state interpolation record and local float lifetimes. |
| [`0x0B6218`](../../nonmatching/levels/LEVEL_01_0B6218.c), 1,156 bytes | `gnu-ee-trial-divpad` links 1,176 bytes, first difference at byte 64 in a branch displacement; the prologue before it is exact. | Review threshold selection and its floating-point live ranges. |
| [`0x0DD328`](../../src/levels/01_pokitaru/LEVEL_01_0DD328.c) (accepted 11 November 2026), 460 bytes | `gnu-ee-trial-divpad` links 460 bytes, first difference at byte 41 in allocation of call-argument registers. The six calls match in count. | Recover the live ranges around the allocation helper before expanding the 31 structural candidates. |
| [`0x112B28`](../../nonmatching/levels/LEVEL_01_112B28.c), 1,068 bytes | `gnu-ee-trial-divpad` links 1,052 bytes, first difference at byte 108 in the first square root's FP destination register. | Recover five local FP slots and fallback branches before testing siblings. |
| [`0x1210A0`](../../src/levels/01_pokitaru/LEVEL_01_1210A0.c) (accepted 22 November 2026), 1,084 bytes | `gnu-ee-trial-divpad` links 1,100 bytes, first difference at byte 60 in floating-point load order. | Review vector products, small-norm fallback and the extra frame words. |
| [`0x129968`](../../nonmatching/levels/LEVEL_01_129968.c), 1,056 bytes | Pinned GNU EE links 1,044 bytes; first difference at byte 76 is a branch displacement after an exact prologue. | Recover error-path lengths and allocation lifetime while keeping the observed calls. |
| [`0x08CDE0`](../../src/levels/01_pokitaru/LEVEL_01_08CDE0.c) (accepted 27 November 2026), 188 bytes | Earlier measurement: pinned GNU EE linked 192 bytes, first differing at byte 14 in mask-register allocation. The replacement is accepted on 26 November 2026. | Resolved for the independently linked placements; other candidates still require their own checks. |
| [`0x1D1248`](../../src/levels/01_pokitaru/LEVEL_01_1D1248.c) (accepted 9 November 2026), 160 bytes | Pinned GNU EE links 160 bytes, first difference at byte 8 in saved-register allocation; all 26 related placements retain that mismatch. | Recover the lifetimes of the global base, output and input cursors, loop end and choice table. |

### Corrected level-call hypotheses (4 November 2026)

These C sources retain useful, nonmatching reconstructions. Each result is an
isolated full-body linked comparison of USA `LEVEL_01.REL`; equal length does
not establish a match. No C bytes are credited until the applicable placements
and complete-module gates pass. The type and buffer limits below remain part
of the hypothesis.

| Source and retail body | Linked result | First difference | Reopen when | Type and bounds limit |
| --- | --- | --- | --- | --- |
| [`0x0B1D68`](../../nonmatching/levels/LEVEL_01_0B1D68.c), 1,148 bytes | `gnu-ee-trial-divpad`: 1,124 bytes | Body byte 24; first difference beyond branch shape at 136 | Recover menu register lifetimes, color packing and branch layout. | `func_0AE708` has a retail-inferred `int(int, void *, float)` ABI; each output buffer is 16 bytes. |
| [`0x0B1818`](../../nonmatching/levels/LEVEL_01_0B1818.c), 1,120 bytes | `gnu-ee-trial-divpad`: 1,108 bytes | Body byte 48; first difference beyond branch shape at 200 | Recover menu register allocation and color-conversion order. | The retail-inferred `func_0AE708` ABI writes up to 16 output bytes. |
| [`0x0D5668`](../../nonmatching/levels/LEVEL_01_0D5668.c), 1,084 bytes | `gnu-ee-trial`: 1,104 bytes | Body byte 8 | Recover list layout and floating-point division schedule. | The bound for dynamic text passed to `sprintf` into 256 bytes remains unproved. |
| [`0x0BF180`](../../nonmatching/levels/LEVEL_01_0BF180.c), 1,188 bytes | `gnu-ee-trial`: 1,176 bytes | Body byte 4 | Recover menu register lifetimes and branch structure. | Its `UiSamples` output is 16 bytes under the retail-inferred `func_0AE708` ABI. |
| [`0x0CC5D0`](../../src/levels/01_pokitaru/LEVEL_01_0CC5D0.c) (accepted 22 November 2026), 584 bytes | Pinned GNU EE: 584 bytes | Body byte 12 | Recover menu-state register allocation without changing the 16-byte rectangle. | The fixed threshold table fits its four-byte text slots in the measured USA module. |
| [`0x0D2408`](../../nonmatching/levels/LEVEL_01_0D2408.c), 1,016 bytes | `gnu-ee-trial`: 1,016 bytes | Body byte 92 | Recover local pointer live ranges and recheck the full linked body. | Resource failure can leave later output bytes unwritten. |
| [`0x083E38`](../../nonmatching/levels/LEVEL_01_083E38.c), 1,068 bytes | `gnu-ee-trial-divpad`: 1,056 bytes | Body byte 60 | Resolve the first branch displacement, later register choices and division padding. | The accepted `func_125E78` uses 12/64/12-byte buffers. The trailing payload layout and outer item-array length remain runtime hypotheses. |
| [`0x01EF20`](../../nonmatching/levels/LEVEL_01_01EF20.c), 1,168 bytes | `gnu-ee-trial-divpad`: 1,168 bytes | Body byte 340 | Resolve the square-root padding class while preserving vector and matrix buffers. | The caller assumes a nonnegative count and readable 40-byte records. |

### Additional retained near misses (4 November 2026)

These C files are retained as hypotheses in `nonmatching/`. Each measurement
below is an isolated full-body linked comparison with the USA retail module.
No body is byte-exact or credited, and structural relatives are not accepted
from these representative results. Field layouts and helper prototypes remain
provisional where the retail callee has not established them.

| Source and retail extent | Qualified linked result | Reopen when | Source-level limit |
| --- | --- | --- | --- |
| [`LEVEL_01:0x00A320`](../../nonmatching/levels/LEVEL_01_00A320.c), 928 bytes | `gnu-ee-trial-divpad`: 876 bytes; first difference at body byte 18 in the global-pointer register. | Recover the missing float operations and pointer live range before rechecking the pilot and related placements. | The 36-byte matrix and 16-byte quaternion match the accepted local relay; the surrounding state layout remains a hypothesis. |
| [`LEVEL_01:0x00AE08`](../../src/levels/01_pokitaru/LEVEL_01_00AE08.c) (accepted 22 November 2026), 948 bytes | Pinned GNU EE: 952 bytes; first difference at byte 0 in the stack frame. Five local calls remain in order. | Recover the flag bitfield form and constant live ranges, then relink the pilot. | The motion record passed to the accepted five-argument callee has the measured field offsets; bitfields and caller aliasing remain provisional. |
| [`LEVEL_01:0x018848`](../../src/levels/01_pokitaru/LEVEL_01_018848.c) (accepted 22 November 2026), 868 bytes | `gnu-ee-trial`: 844 bytes; first difference at byte 14 in initial register allocation. The two `memcpy` imports remain. | Recover the missing copy and bound-test instructions without losing the measured unaligned moves. | Only the 64-byte block is packed; record layout and source strides remain hypotheses. |
| [`LEVEL_01:0x01D1E0`](../../nonmatching/levels/LEVEL_01_01D1E0.c), 712 bytes | `gnu-ee-trial-divpad`: 692 bytes; first difference at byte 22 in pointer-register allocation. | Recover pointer and floating-point live ranges, confirm the two local helper prototypes, then relink the pilot. | One `sqrtf` import and two local calls are measured; their record-field roles are provisional. |
| [`LEVEL_01:0x02ED98`](../../nonmatching/levels/LEVEL_01_02ED98.c), 880 bytes | `gnu-ee-trial-divpad`: 884 bytes; first difference at byte 0 in the stack frame. All four calls keep their order; 20 structural poses were linked and none matched. | Explain the extra 16 bytes of retail local frame and initial float lifetimes before retesting. | Vector fields and the local collision callee's role remain hypotheses. |
| [`LEVEL_01:0x03EEE0`](../../nonmatching/levels/LEVEL_01_03EEE0.c), 244 bytes | `gnu-ee-trial-divpad`: 232 bytes; first difference at byte 22 in address-register and vector-load scheduling. Twenty structural poses were linked and none matched. | Recover the scalar store order and local-vector layout that account for the missing 12 bytes. | The single named import is `sqrtf`; the local vector source form remains provisional. |
| [`LEVEL_01:0x048F68`](../../nonmatching/levels/LEVEL_01_048F68.c), 696 bytes | `gnu-ee-trial-divpad`: 656 bytes; first difference at byte 4 in floating-point zero materialization. | Recover vector aliasing and float live ranges, then relink the pilot before other placements. | Both named `sqrtf` calls are retained; the structural relatives remain unproved. |
| [`LEVEL_01:0x064DF0`](../../src/levels/01_pokitaru/LEVEL_01_064DF0.c) (accepted 22 November 2026), 152 bytes | Pinned GNU EE: 148 bytes; first difference at byte 8 is a branch displacement; first different non-branch code is at byte 32. | Recover the shared float condition and pointer selection for the clamp. | No calls or imports; actor fields and the global fade value remain inferred. |
| [`LEVEL_01:0x068DB8`](../../src/levels/01_pokitaru/LEVEL_01_068DB8.c) (accepted 22 November 2026), 912 bytes | Pinned GNU EE: 872 bytes; first difference at byte 282 in local float/register scheduling. Eight local calls retain their order. | Recover the two angle temporaries and record-tail pointer lifetime, then the later field stores. | The accepted angle helper's pointer roles are aligned; other record fields and helper prototypes remain provisional. |
| [`LEVEL_01:0x08C960`](../../nonmatching/levels/LEVEL_01_08C960.c), 924 bytes | Pinned GNU EE: 912 bytes; first difference at byte 0; the C frame is `0x120` against retail `0xE0`. Three named calls retain their order. | Recover display-list payload layout and register lifetimes before further placements. | Two payloads and the display-list packet structure remain layout hypotheses; named data imports are distinct from calls. |
| [`LEVEL_01:0x098FD0`](../../src/levels/01_pokitaru/DRAW_ApplyDisplay__FPC7MATRIX4N20Ui_LEVEL_01.c) (accepted 22 November 2026), 852 bytes | Pinned GNU EE: 812 bytes; first difference at byte 4. Six local calls retain their order. | Recover record-base and slot-index live ranges and missing call-argument setup. | The unaligned 64-byte copy is expressed in C; the last callee prototype and record layout remain provisional. |
| [`LEVEL_01:0x0B9E90`](../../src/levels/01_pokitaru/LEVEL_01_0B9E90.c) (accepted 21 November 2026), 200 bytes | Pinned GNU EE with source-specific `-mno-check-zero-division`: 200 bytes, first difference at body byte 118, 46/50 words identical; without that flag the linked body is 208 bytes. | Recover the argument-register live ranges for `right - 16` and constant `2`, then reprove all 20 related placements. | The local helper's integer return is supported by retail arithmetic and preserves all 21 accepted helper poses; the UI record layout remains provisional. |
| [`LEVEL_01:0x19CEB0`](../../src/levels/01_pokitaru/LEVEL_01_19CEB0.c) (accepted 11 November 2026), 436 bytes | `gnu-ee-trial`: 428 bytes; first difference at byte 76 in the x-coordinate load. Four local calls are eight bytes early in the C. | Recover the x/y/z load-and-store order while preserving callee register flow. | The local callee's detailed prototype is an ABI hypothesis from retail register use. |
| [`LEVEL_01:0x1B4330`](../../nonmatching/levels/LEVEL_01_1B4330.c), 628 bytes | `gnu-ee-trial-divpad`: 588 bytes; first difference at byte 6 in register allocation. | Recover basis-local scheduling and record-search control flow before other placements. | One `sqrtf` import and two local calls are measured; record and service types remain provisional. |
| [`LEVEL_01:0x1CAAE8`](../../nonmatching/levels/LEVEL_01_1CAAE8.c), 296 bytes | Pinned GNU EE: 276 bytes; first difference at byte 1 in the object-pointer register (`t4` retail, `t2` compiled). | Recover the pointer and float-temporary lifetimes or copy shape, then relink the pilot. | No calls or imports; both lazy record initializations are retained but field roles are provisional. |
| [`FRONTEND:0x0073B8`](../../src/levels/frontend/SYSTEM_SetAlphaTestMode__FbUcUi_FRONTEND.c) (accepted 27 November 2026), 284 bytes | `gnu-ee-trial`: 284 bytes; first difference at byte 172 in UI-field load scheduling. | Recover the four UI-field register live ranges or qualify a new compiler profile. | Three named display-list calls and the two named data imports are retained; the local UI state is 20 bytes. |

| [`LEVEL_01:0x001740`](../../nonmatching/levels/LEVEL_01_001740.c), 260 bytes | Pinned GNU EE: 260 bytes; first difference at body byte 9 in float-register allocation. All 20 structural placements retain two named local calls but none matches. | Recover the float-register lifetime and field-store order while preserving the 64-byte copy and call identities. | Record field roles and the registration helper's return type remain provisional. |

### Named import calls in accepted level bodies (4 November 2026)

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

### Qualified compiler-generated local multiplication (5 November 2026)

Twenty C sources adapted from the public GCC 2.95.3 `fp-bit.c` multiplication
path reproduce **21 bounded 680-byte placements** (13,600 distinct-source
bytes). Their provenance, original license and linking exception are recorded
in [`THIRD_PARTY_NOTICES.md`](../../THIRD_PARTY_NOTICES.md). The compiler emits
four `__muldi3` calls per body. A versioned table qualifies only the pinned
module/source/object pairs and four call sites, after verifying the unique
96-byte helper and its SHA in each retail module. The strict resolver remains
in force for every source without such a row. Both individual and batched
complete-module gates reproduce all 21 USA modules; this is a measured local
link target, not a general rule for unresolved compiler calls.

### Bounded frontend C attempts of 64 bytes or less (5 November 2026)

These candidate entries have source-level C retained under `nonmatching/levels/`. The listed objects are isolated linked trials against the pinned USA frontend, not accepted matches. Accepted bounded frontend entries, including `0x020968`, pass the complete 21-module gate as C. Each retained source records a concrete next experiment; equal length alone earns no credit.

| Candidate | Retail body | Best isolated trial | Reopening condition |
| --- | ---: | --- | --- |
| [`0x0004D8`](../../src/levels/frontend/FRONTEND_0004D8.c) (accepted 9 November 2026) | 44 B | pinned: 44 B, first difference +2 | Recover the two-global test expression that assigns the retail value registers. |
| [`0x002620`](../../src/levels/shared/FRONTEND_002620.c) (accepted 10 November 2026) | 28 B | pinned: 28 B, first difference +12 | Recover the second-argument ABI conversion that places a move in the imported lseek call delay slot. |
| [`0x003600`](../../src/levels/frontend/FRONTEND_003600.c) (accepted 9 November 2026) | 52 B | pinned: 48 B, first difference +6 | Recover the global flag store and imported-call argument register order. |
| [`0x005618`](../../src/levels/frontend/FRONTEND_005618.c) (accepted 11 November 2026) | 56 B | sdk991111: 56 B, first difference +22 | Recover the branch-dependent global-pointer load and selected field offset. |
| [`0x006120`](../../src/levels/frontend/MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType.c) (accepted 9 November 2026) | 56 B | pinned: 56 B, first difference +2 | Recover the state-table base and index register lifetimes across the three updates. |
| [`0x00AB70`](../../src/levels/frontend/FRONTEND_00AB70.c) (accepted 22 November 2026) | 56 B | pinned: 56 B, first difference +2 | Recover the record-stride multiply and argument-bank setup for the local call. |
| [`0x01E380`](../../src/levels/frontend/FRONTEND_01E380.c) (accepted 11 November 2026) | 60 B | pinned: 60 B, first difference +11 | Recover the masked-index register and final record comparison control flow. |
| [`0x020698`](../../src/levels/frontend/FRONTEND_020698.c) (accepted 21 November 2026) | 64 B | pinned: 60 B, first difference +8 | Recover the flag set/clear branch and the two pointer reload lifetimes. |
| [`0x020918`](../../src/levels/frontend/FRONTEND_020918.c) (accepted 26 November 2026) | 44 B | pinned: 40 B, first difference +2 | Recover the mask-expression order and the retail literal/register lifetimes. |
| [`0x0209B0`](../../src/levels/frontend/FRONTEND_0209B0.c) (accepted 9 November 2026) | 48 B | pinned: 44 B, first difference +20 | Recover the conditional masked return without shortening away the retail conditional move. |
| [`0x021188`](../../src/levels/frontend/FRONTEND_021188.c) (accepted 9 November 2026) | 40 B | pinned: 40 B, first difference +28 | Recover the null-check and sign-test branch layout without the branch-likely shortening. |
| [`0x021A00`](../../src/levels/frontend/FRONTEND_021A00.c) (accepted 9 November 2026) | 44 B | pinned: 44 B, first difference +8 | Recover the bounds-failure branch and stride-calculation lifetime. |
| [`0x021C40`](../../src/levels/frontend/FRONTEND_021C40.c) (accepted 9 November 2026) | 52 B | sdk991111: 52 B, first difference +10 | Recover the bounds-failure branch while retaining the indexed comparison and SDK compiler route. |
| [`0x024140`](../../nonmatching/levels/FRONTEND_024140.c) | 64 B | pinned: 64 B, first difference +12 | Recover the local float store versus output-pointer setup around the first call. |
| [`0x026878`](../../src/levels/shared/__eq__C9type_infoRC9type_info_shared.c) (accepted 25 November 2026) | 64 B | pinned: 48 B, first difference +0 | Recover the saved-register frame and comparison-result lifetime around the imported strcmp call. |
| [`0x0275D0`](../../src/levels/frontend/FRONTEND_0275D0.c) (accepted 11 November 2026) | 52 B | pinned: 52 B, first difference +2 | Recover the lazy-initialization pointer test and its address/register lifetimes without an artificial null check. |

The previous `FRONTEND:0x020968` attempt linked to 24 bytes and first differed at
body byte 4 because the compiler reduced the high-bit mask to a shift. The
accepted [C source](../../src/levels/frontend/FRONTEND_020968.c) uses a signed
`(flags & 0x40000) > 0` comparison. It links exactly at the frontend and 15
level placements, and the complete 21-module gate passes (5 November 2026).

### Short raw-identical level-body candidates (5 November 2026)

The following USA candidate bodies are raw-identical across the listed numbered levels and contain no body relocations. This is boundary and code-shape evidence only; each retained C source differs in an isolated linked trial and none of its placements earns C credit. In this short-body scope, 237 reviewed families have passed the complete 21-module gate as accepted C. Eight 16–32-byte forms cover 148 linked placements with 168 distinct-source bytes: a floating-point constant return, conditional field assignment, two unsigned range tests, a range-length accessor, a state store, a floating-point affine result and three field clears. Another 23 source forms add 429 exact placements and 296 distinct-source bytes; two more placements reuse an existing qualified C source. A further 38 source forms of 8–64 bytes add 340 exact placements and 924 distinct-source bytes. The next 46 short forms add 121 exact placements and 1,164 distinct-source bytes. Eleven more sources cover 98 exact placements, including repeated uses inside a module, while adding 204 distinct-source bytes. Forty-eight isolated 8–32-byte sources add 48 exact placements and 824 distinct-source bytes; one 24-byte candidate interval remains uncounted pending boundary review. Twenty-one isolated 36–64-byte C sources add 21 exact placements and 1,048 distinct-source bytes; 18 further C hypotheses remain uncounted. Each new placement was linked independently before the complete-module gate.

| Representative | Retail body | Candidate placements | Best isolated trial | Reopening condition |
| --- | ---: | ---: | --- | --- |
| [`0x0B9800`](../../src/levels/01_pokitaru/LEVEL_01_0B9800.c) (accepted 9 November 2026) | 64 B | 20 | pinned: 64 B, first difference +24 | Recover the array-index shift before the record-stride multiply and their temporary-register lifetimes. |
| [`0x058738`](../../src/levels/shared/LEVEL_01_058738.c) (accepted 9 November 2026) | 60 B | 20 | pinned: 60 B, first difference +15 | Recover the local zero-float and stack pointer selection after the initial field load. |
| [`0x0BCBA0`](../../src/levels/shared/LEVEL_01_0BCBA0.c) (accepted 26 November 2026) | 60 B | 20 | pinned: 56 B, first difference +0 | Recover the owner-pointer lifetime and the two-stage count/output checks. |
| [`0x129DF8`](../../src/levels/01_pokitaru/WAD_NextAssetByType__FP15WAD_FILE_HEADER_LEVEL_01.c) (accepted 9 November 2026) | 56 B | 20 | pinned: 56 B, first difference +8 | Recover the linked-list loop entry without the compiler shortening it to a branch-likely return. |
| [`0x037238`](../../src/levels/shared/LEVEL_01_037238.c) (accepted 9 November 2026) | 52 B | 20 | pinned: 56 B, first difference +2 | Recover the insertion-loop entry and value truncation before the first comparison. |
| [`0x03C0E8`](../../src/levels/shared/LEVEL_01_03C0E8.c) (accepted 26 November 2026) | 52 B | 20 | pinned: 56 B, first difference +9 | Recover the retail 64-bit clear-mask materialization and final field update. |
| [`0x02E568`](../../src/levels/shared/LEVEL_01_02E568.c) (accepted 9 November 2026) | 48 B | 20 | pinned: 48 B, first difference +6 | Recover the three field-load lifetimes and subtraction register assignment. |
| [`0x03BF08`](../../src/levels/01_pokitaru/LEVEL_01_03BF08.c) (accepted 11 November 2026) | 48 B | 20 | pinned: 48 B, first difference +2 | Recover the child-pointer and flag temporary registers while keeping the short signed clear mask. |
| [`0x03BF60`](../../src/levels/01_pokitaru/LEVEL_01_03BF60.c) (accepted 10 November 2026) | 48 B | 20 | pinned: 48 B, first difference +2 | Recover the child-pointer and flag temporary registers while keeping the short signed clear mask. |
| [`0x0A60C8`](../../src/levels/shared/LEVEL_01_0A60C8.c) (accepted 9 November 2026) | 48 B | 20 | pinned: 48 B, first difference +4 | Recover the packed high-byte extraction and alpha mask scheduling before field stores. |
| [`0x0D83C8`](../../src/levels/01_pokitaru/LEVEL_01_0D83C8.c) (accepted 9 November 2026) | 48 B | 20 | pinned: 48 B, first difference +12 | Recover the unsigned-range and zero-sentinel branch layout without reordering the half-width subtraction. |
| [`0x0294C0`](../../src/levels/shared/LEVEL_01_0294C0.c) (accepted 26 November 2026) | 44 B | 20 | pinned: 40 B, first difference +4 | Recover the nested byte-flag tests and the retail boolean return lifetime that adds one operation. |
| [`0x134F68`](../../src/levels/01_pokitaru/LEVEL_01_134F68.c) (accepted 22 November 2026) | 52 B | 15 | pinned: 52 B, first difference +24 | Recover the record field-store and zero-fill grouping after the first six exact operations. |
| [`0x08BE88`](../../src/levels/01_pokitaru/LEVEL_01_08BE88.c) (accepted 9 November 2026) | 36 B | 20 | pinned: 36 B, first difference +12 | Recover the byte and zero-store ordering while retaining the signed -1 constant and the final delay-slot store. |
| [`0x09FB18`](../../src/levels/shared/LEVEL_01_09FB18.c) (now accepted) | 36 B | 20 | pinned: 36 B, first difference +8 | Recover the self-linked node pointer-store order relative to the four zeroed fields. |
| [`0x04B4C0`](../../src/levels/01_pokitaru/LEVEL_01_04B4C0.c) (accepted 9 November 2026) | 32 B | 20 | pinned: 44 B, first difference +5 | The 64-bit clear mask materializes too long; test a natural source form or a narrowly qualified opt-in compiler remedy with prior-mask controls. |
| [`0x06DDE8`](../../src/levels/shared/LEVEL_01_06DDE8.c) (accepted 9 November 2026) | 36 B | 13 | pinned: 44 B, first difference +20 | The compiler inserts a redundant zero-divisor trap before modulo by the constant 12; qualify a narrow source/compiler remedy with controls for accepted division users. |
| [`0x036648`](../../nonmatching/levels/LEVEL_01_036648.c) | 52 B | 20 | `gnu-ee-trial-divpad`: 56 B, first difference +40 | The profile inserts one more padding word before the second floating division; qualify a source-specific schedule with controls for accepted division users. |
| [`0x0B91F0`](../../src/levels/shared/LEVEL_01_0B91F0.c) (accepted 9 November 2026) | 12 B | 20 | pinned: 12 B, first difference +0 | The compiler folds the unsigned constant comparison into a different instruction form; recover the original source or a narrow qualified profile. |
| [`0x049780`](../../src/levels/shared/LEVEL_01_049780.c) (accepted 9 November 2026) | 12 B | 15 | pinned: 8 B, first difference +0 | The no-op C body drops retail's balanced stack frame; establish the frame's source-level cause or original compiler behavior. |
| [`LEVEL_03:0x039678`](../../src/levels/shared/LEVEL_03_039678.c) (accepted 9 November 2026) | 64 B | 7 | pinned: 64 B, first difference +22 | Recover the callback ABI or source-level lifetime that assigns the nested pointer loads to the retail temporaries. |
| [`LEVEL_02:0x1805A0`](../../src/levels/shared/LEVEL_02_1805A0.c) (accepted 9 November 2026) | 60 B | 4 | pinned: 60 B, first difference +18 | Recover the indexed slot access shape that assigns the byte index and slot base to the retail temporaries. |
| [`LEVEL_08:0x20FA38`](../../src/levels/shared/CORE/Lightweight/LW_Anim/LEVEL_08_20FA38.c) (accepted 9 November 2026) | 64 B | 3 | pinned: 64 B, first difference +13 | Recover the original list-initialization loop and end-pointer lifetime before rechecking the shared sites. |
| [`LEVEL_04:0x165538`](../../src/levels/shared/LEVEL_04_165538.c) (accepted 26 November 2026) | 48 B | 3 | pinned: 44 B, first difference +16 | Retain the second byte comparison's result lifetime and final boolean move without artificial compiler steering. |
| [`LEVEL_22:0x1311A0`](../../src/levels/shared/LEVEL_22_1311A0.c) (accepted 26 November 2026) | 64 B | 2 | pinned: 64 B, first difference +2 | Recover the selector source and child-pointer register lifetime around the early sentinel return. |
| [`LEVEL_15:0x11D580`](../../nonmatching/levels/LEVEL_15_11D580.c) | 44 B | 2 | pinned: 40 B, first difference +28; `gnu-ee-trial-divpad`: 56 B | Qualify a source-specific division schedule with controls for prior accepted division bodies. |
| [`LEVEL_22:0x131218`](../../src/levels/shared/LEVEL_22_131218.c) (accepted 9 November 2026) | 44 B | 2 | pinned: 44 B, first difference +4 | Recover the null and index-bound branch ordering before retrying both sites. |
| [`LEVEL_08:0x1AE4C0`](../../src/levels/08_dayni_moon/LEVEL_08_1AE4C0.c) (accepted 11 November 2026) | 24 B candidate interval | 1 | pinned empty C: 8 B, first difference +0 | Review the two return sequences and incoming references to establish actual function ownership before C promotion. |
| [`LEVEL_16:0x0752D0`](../../src/levels/16_multiplayer_01/LEVEL_16_0752D0.c) (accepted 9 November 2026) | 64 B | 1 | pinned: 64 B, first difference +2 | Recover the loop-end pointer and accumulator register lifetimes while retaining the 0x80 record stride. |
| [`LEVEL_17:0x16A720`](../../nonmatching/levels/LEVEL_17_16A720.c) | 64 B | 1 | pinned: 64 B, first difference +12 | Recover the nested boolean branch and result lifetime without shortening the second state test. |
| [`LEVEL_10:0x1E2060`](../../src/levels/10_quodrona/LEVEL_10_1E2060.c) (accepted 9 November 2026) | 60 B | 1 | pinned: 68 B, first difference +4 | Establish the virtual callback prototype and saved-register setup before retrying the indirect call. |
| [`LEVEL_10:0x174150`](../../src/levels/10_quodrona/LEVEL_10_174150.c) (accepted 9 November 2026) | 56 B | 1 | pinned: 56 B, first difference +12 | Recover the subobject pointer and callback-call source shape around the 0x50 record offset. |
| [`LEVEL_16:0x136178`](../../src/levels/shared/LEVEL_16_136178.c) (accepted 9 November 2026) | 56 B | 1 | pinned: 60 B, first difference +16 | Recover the floating constant store and branch layout while preserving the final child update. |
| [`LEVEL_16:0x156D50`](../../src/levels/16_multiplayer_01/LEVEL_16_156D50.c) (accepted 9 November 2026) | 52 B | 1 | pinned: 48 B, first difference +0 | Recover the source and destination field-load schedule for the five record updates. |
| [`LEVEL_17:0x16A7E0`](../../src/levels/17_multiplayer_02/LEVEL_17_16A7E0.c) (accepted 9 November 2026) | 52 B | 1 | pinned: 52 B, first difference +8 | Recover the two-entry loop counter and pointer register lifetimes. |
| [`LEVEL_05:0x07A520`](../../src/levels/05_medical_outpost/LEVEL_05_07A520.c) (accepted 9 November 2026) | 48 B | 1 | pinned: 48 B, first difference +2 | Recover the primary/fallback pointer branch layout and the nested result-pointer lifetime. |
| [`LEVEL_10:0x088F10`](../../nonmatching/levels/LEVEL_10_088F10.c) | 48 B | 1 | pinned: 32 B, first difference +4 | Recover the nullable flag test without the compiler shortening the masked boolean expression. |
| [`LEVEL_07:0x1C3468`](../../src/levels/07_dreamtime/LEVEL_07_1C3468.c) (accepted 9 November 2026) | 44 B | 1 | pinned: 44 B, first difference +8 | Recover the early-return branch and second-child preload schedule. |
| [`LEVEL_09:0x1A01B0`](../../src/levels/09_inside_clank/LEVEL_09_1A01B0.c) (accepted 9 November 2026) | 44 B | 1 | pinned: 44 B, first difference +8 | Recover the early-return branch and second-child preload schedule. |
| [`LEVEL_09:0x1A0718`](../../src/levels/09_inside_clank/LEVEL_09_1A0718.c) (accepted 26 November 2026) | 44 B | 1 | pinned: 44 B, first difference +2 | Recover the three-condition boolean accumulator and state-compare register lifetimes. |
| [`LEVEL_18:0x17A768`](../../src/levels/18_multiplayer_03/LEVEL_18_17A768.c) (accepted 9 November 2026) | 44 B | 1 | pinned: 44 B, first difference +8 | Recover the early-return branch and second-child preload schedule. |
| [`LEVEL_02:0x166B00`](../../src/levels/02_rykan_v/LEVEL_02_166B00.c) (accepted 9 November 2026) | 40 B | 1 | pinned: 40 B, first difference +2 | Recover the byte-counter load, clear store and limit-pointer register order. |
| [`LEVEL_02:0x1A3510`](../../src/levels/02_rykan_v/LEVEL_02_1A3510.c) (accepted 9 November 2026) | 40 B | 1 | pinned: 40 B, first difference +2 | Recover the byte-counter load, clear store and limit-pointer register order. |
| [`LEVEL_02:0x1D9670`](../../src/levels/02_rykan_v/LEVEL_02_1D9670.c) (accepted 9 November 2026) | 40 B | 1 | pinned: 36 B, first difference +2 | Recover the indexed record's separate +4 subrecord address and output-register lifetime. |
| [`LEVEL_16:0x1599E8`](../../src/levels/16_multiplayer_01/LEVEL_16_1599E8.c) (accepted 9 November 2026) | 40 B | 1 | pinned: 32 B, first difference +2 | Recover the two independent stride calculations; the compiler shortens the conditional stride. |
| [`LEVEL_16:0x177F60`](../../src/levels/16_multiplayer_01/LEVEL_16_177F60.c) (accepted 9 November 2026) | 40 B | 1 | pinned: 40 B, first difference +2 | Recover the byte-counter load, clear store and limit-pointer register order. |

### Short local data relocations (5 November 2026)

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
[`ALPHASORT` reset source](../../src/levels/shared/LEVEL_01_08F2F8.c): its two
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

Another 230 reviewed 36-byte placements with three to eight relocations
link exactly from 222 C sources (8,280 placement bytes, 7,992 distinct-source
bytes). The 20 named `SND_FixupSoundSignaturesIOP` imports keep their identity;
other calls keep their local target. Callback pointers into code are kept
distinct from level-data addresses. Measured byte fields, record offsets,
signed literal width and store order account for the exact C forms. Eight
identical sources were relinked at both sites before the 21-module gate passed.

Another 226 reviewed 40-byte call bodies link exactly from 204 C sources
(9,040 placement bytes, 8,160 distinct-source bytes). Thirteen imported
`SignalSema` calls keep their exact name; the other calls retain their local
target. The retail argument register use showed a forwarded semaphore ID,
floating-point constants and a longer wrapper that inserts an argument into
the outgoing register bank. Twenty-two identical sources were relinked at
both sites before the 21-module gate passed.

Another 256 reviewed 40-byte placements with two relocations link exactly
from 256 C sources (10,240 placement and distinct-source bytes). Eleven
`g_bRenderPlayerShadow` data imports retain their exact name; other bodies
retain local data references or both local call targets. All 21 complete
modules remain exact.

Another 91 reviewed 40-byte placements in levels 19–24 link exactly from
91 C sources (3,640 placement and distinct-source bytes). Seven further
40-byte placements remain nonmatching with retained C because they reproduce
the signed-test or boolean-conversion differences documented below. The
complete 21-module gate passes; the seven retained bodies earn no C credit.

Another 226 reviewed 40-byte placements with three or more relocations link
exactly from 216 C sources (9,040 placement bytes, 8,640 distinct-source
bytes). Ten C sources each reproduce two placements in levels 15 and 21,
independently recompiled and linked at both sites. The full 21-module gate
passes. Fifteen other sites keep their C attempts in `nonmatching/levels/`
without match credit:

- Thirteen boolean-return bodies (for example,
  [`LEVEL_01:0x0133C0`](../../nonmatching/levels/LEVEL_01_0133C0.c)) link 36
  bytes against the 40-byte retail body. The first difference is the branch
  displacement at byte 12; the retail path retains an extra value transfer
  before returning. Natural conditional forms and five qualified `cc1`
  routes did not restore it. Reopen with evidence for the original value
  lifetime or a qualified compiler route.
- Two call wrappers (for example,
  [`LEVEL_02:0x03FBD0`](../../src/levels/02_rykan_v/LEVEL_02_03FBD0.c) (accepted 9 November 2026)) link the
  correct 40 bytes but first differ at byte 8. The compiler swaps a parameter
  move with local-address setup. Reopen with a natural source form or a
  qualified compiler route that preserves the retail order.

Another 108 reviewed 44-byte one-call placements link exactly from 96 C
sources (4,752 placement bytes, 4,224 distinct-source bytes). Twelve
additional placements reuse a source only after it linked exactly at every
site. Five integer-modulo bodies (including `rand` callers) were 52 bytes
with the default zero-divisor guard and become exact at 44 bytes using the
existing source-specific `-mno-check-zero-division` flag. The level-body gate
now applies `config/cflags.txt` entries to accepted body sources, while
`tools/cflags.py` recognizes their placement-table sources. All 21 complete
modules pass; the flag is limited to the five measured bodies. Eighty other
44-byte placements retain C without match credit:

- Forty record-update wrappers (for example,
  [`LEVEL_01:0x04DA70`](../../nonmatching/levels/LEVEL_01_04DA70.c)) link at 40
  rather than 44 bytes, first differing at byte 5 where the retail preserves
  another input-register copy. Natural record layouts, value types and five
  other qualified `cc1` routes did not restore it. Reopen with evidenced
  input lifetimes or a qualified compiler route.
- Twenty signed-condition wrappers (for example,
  [`LEVEL_01:0x0035D0`](../../src/levels/shared/LEVEL_01_0035D0.c) (accepted 11 November 2026)) link at 44
  bytes but first differ at byte 13: the signed comparison result uses a
  different register. Natural early-return and typed forms and five other
  qualified `cc1` routes did not select the retail register.
- Twenty constant-comparison wrappers (for example,
  [`LEVEL_01:0x0413E8`](../../src/levels/01_pokitaru/LEVEL_01_0413E8.c) (accepted 9 November 2026)) link at 44
  bytes but first differ at byte 6: the constant and field load use opposite
  registers. Natural comparison forms and five other qualified `cc1` routes
  did not select the retail allocation. Reopen both comparison families with
  source or compiler evidence for their original value lifetimes.

Another 200 reviewed 44-byte two-relocation placements link exactly from
192 C sources (8,800 placement bytes, 8,448 distinct-source bytes). Eight
extra placements reuse a source only after the canonical file linked exactly
at both sites. All 21 complete modules pass. Eighty-three other placements
keep useful C attempts under `nonmatching/levels/` without match credit:

- Twenty pointer-table guards (for example,
  [`LEVEL_01:0x024A38`](../../src/levels/01_pokitaru/LEVEL_01_024A38.c) (accepted 10 November 2026)) link at 44
  bytes but first differ at byte 0: the compiler folds a nonzero check and
  upper bound into one adjusted unsigned range test. Nested conditions,
  five qualified `cc1` routes and scoped flags did not preserve both checks.
- Twenty-five byte-mask setters (for example,
  [`LEVEL_01:0x027480`](../../src/levels/01_pokitaru/LEVEL_01_027480.c) (accepted 10 November 2026)) link at 44
  bytes but first differ at byte 4, where clear-mask normalization and
  indexed-address setup are scheduled in the opposite order. Typed record
  and operand-order forms and qualified compiler routes did not restore it.
- Twenty boolean-return bodies (for example,
  [`LEVEL_01:0x0639B8`](../../src/levels/01_pokitaru/LEVEL_01_0639B8.c) (accepted 26 November 2026)) link at 40
  instead of 44 bytes; the first difference at byte 8 is the branch span.
  The retail retains an extra value transfer. A wider return reaches 44 bytes
  but selects a different conditional move.
- Fifteen flag-mask queries (for example,
  [`LEVEL_01:0x132F48`](../../src/levels/01_pokitaru/LEVEL_01_132F48.c) (accepted 26 November 2026)) link at 40
  instead of 44 bytes, first differing at byte 2 in register allocation.
  Direct C folds both masks into 28 bytes. Reopen these families with source
  or compiler evidence for the original value lifetimes and scheduling.
- Three isolated condition bodies (for example,
  [`LEVEL_04:0x0B7C58`](../../src/levels/04_metalis/LEVEL_04_0B7C58.c) (accepted 22 November 2026)) link at 40
  instead of 44 bytes, first differing at byte 4. Recover the original
  condition form before retrying.

Another 155 reviewed 44-byte three-relocation placements link exactly from
146 C sources (6,820 placement bytes, 6,424 distinct-source bytes). Nine
extra placements reuse a source only after the canonical file linked exactly
at both sites. The natural C for the 40 global-update wrappers also preserves
the first local call's return value through the global store. All 21 complete
modules pass. One call wrapper,
[`LEVEL_10:0x0C5D98`](../../src/levels/10_quodrona/LEVEL_10_0C5D98.c) (accepted 9 November 2026), remains
nonmatching: pinned C links 44 bytes but first differs at byte 4, where the
global-address setup precedes forwarded argument copies. Natural argument
types, five qualified `cc1` routes and scoped scheduling flags did not restore
the retail order. Reopen with an evidenced source form or qualified compiler
route; this retained C earns no match credit.

Another 115 reviewed 44-byte four-relocation placements link exactly from
109 C sources (5,060 placement bytes, 4,796 distinct-source bytes). Six
additional placements reuse a source only after the canonical file linked
exactly at both sites. The 20 named `PS2HEAP_Free__FPv` imports keep their
retail name. All 21 complete modules pass. Twenty two-global zero queries
remain nonmatching (for example,
[`LEVEL_01:0x025580`](../../src/levels/01_pokitaru/LEVEL_01_025580.c) (accepted 9 November 2026)): pinned C
links 44 bytes but first differs at byte 8, where the first branch span and
second global load are scheduled differently. Nested and typed conditions,
five other qualified `cc1` routes and scoped flags did not restore the retail
flow. Reopen with an evidenced source form or compiler route; they earn no C
credit.

All 130 reviewed 44-byte placements with five or six relocations link exactly
from 124 C sources (5,720 placement bytes, 5,456 distinct-source bytes). Six
additional placements reuse a source only after it linked exactly at both
sites. For 80 two-global call wrappers, 60 require reading the second value
before the call and 20 require direct arguments; this preserves the retail
order of the two address setups. Twenty other bodies require 64-bit C values
to reproduce the two quadword stores. All 21 complete modules pass; no new C
attempt is parked for this scope.

Another 342 reviewed 48-byte placements with one or two relocations link
exactly from 329 C sources (16,416 placement bytes, 15,792 distinct-source
bytes). Thirteen extra placements reuse a source only after it linked exactly
at both sites. Four signed-modulo wrappers use the existing source-specific
`-mno-check-zero-division` flag. Twenty wrappers call an error path that is
nonreturning in the matching C; a read-only decompilation of the exemplar
callee shows an indirect call followed by unconditional self-recursion.
A packed C structure reproduces the unaligned 16-byte copy in
`LEVEL_24:0x0BEAE8` without instruction assembly. The full 21-module gate
passes. Eleven other sites retain useful C without match credit:

- Five bounded-index wrappers (for example,
  [`LEVEL_16:0x022C28`](../../nonmatching/levels/LEVEL_16_022C28.c)) link 48
  bytes but first differ at byte 6 in the range-result register and branch
  layout. Natural positive-branch and local-result forms and five qualified
  `cc1` routes did not reproduce the retail sequence.
- Five record-reset wrappers (for example,
  [`LEVEL_16:0x112480`](../../src/levels/16_multiplayer_01/LEVEL_16_112480.c) (accepted 9 November 2026)) link 44
  rather than 48 bytes and first differ at byte 4: the compiler omits a
  record-pointer copy and schedules the byte clear before the call rather
  than in its delay slot. Typed records and natural store orders did not
  restore it.
- One nested-condition wrapper,
  [`LEVEL_02:0x16F9F8`](../../src/levels/02_rykan_v/LEVEL_02_16F9F8.c) (accepted 9 November 2026), links 48
  bytes but first differs at byte 14 in the condition register. A direct
  expression and five qualified `cc1` routes did not select the retail
  register. Reopen these families with source-value lifetime or a qualified
  compiler route that explains the register and branch choices.

Another 116 reviewed 48-byte placements with three relocations link exactly
from 111 C sources (5,568 placement bytes, 5,328 distinct-source bytes).
Five extra placements reuse a source only after it linked exactly at both
sites, and all 21 complete modules pass. Two address-clear wrappers
([`LEVEL_15:0x0F73A0`](../../src/levels/15_giant_clank_metalis/LEVEL_15_0F73A0.c) (accepted 9 November 2026),
[`LEVEL_21:0x0F73A0`](../../src/levels/15_giant_clank_metalis/LEVEL_15_0F73A0.c) (accepted 9 November 2026)) remain
nonmatching: pinned C links 36 bytes against 48 retail bytes and first
differs at byte 16. It folds `base + 0x40000 + 0x4048` into one address,
while retail materializes `0x40000` separately. Natural pointer, array and
integer-base forms and scoped flags did not keep both additions. Reopen with
evidence for the original data layout or a qualified compiler route; these
two retained sources earn no match credit.

Another 99 reviewed 48-byte placements with four or more relocations link
exactly from 95 C sources (4,752 placement bytes, 4,560 distinct-source
bytes). Four extra placements reuse a source only after it linked exactly
at both sites. Fifty named `memset` imports retain their retail name, and
all 21 complete modules pass. Forty-three sites retain useful C attempts
without match credit:

- Twenty two-global boolean tests (for example,
  [`LEVEL_01:0x0A7330`](../../src/levels/01_pokitaru/LEVEL_01_0A7330.c) (accepted 26 November 2026)) link 44
  bytes against 48 retail bytes. The first difference is the branch span
  at byte 12; retail keeps an additional boolean transfer. Wide-return and
  local-result forms and five qualified `cc1` routes did not reproduce it.
- Twenty table setters (for example,
  [`LEVEL_01:0x0CB260`](../../nonmatching/levels/LEVEL_01_0CB260.c)) link 48
  bytes but first differ at byte 6 in stride, count and address registers.
  The retained C models the entry pointer left in the retail result
  register; typed records and five qualified `cc1` routes did not match.
- Two floating-point condition bodies (for example,
  [`LEVEL_22:0x0571F8`](../../src/levels/22_skyboard_kalidon/LEVEL_22_0571F8.c) (accepted 14 November 2026)) link 44
  bytes against 48 retail bytes and first differ at byte 4. Retail has a
  scheduling gap after materializing floating-point zero before comparing;
  five qualified `cc1` routes omit it. Reopen with a qualified, narrowly
  tested compiler or assembler scheduling remedy.
- One float-and-call body,
  [`LEVEL_02:0x001410`](../../src/levels/02_rykan_v/CAMERA_SetFov__Ff_LEVEL_02.c) (accepted 9 November 2026), links 44
  bytes against 48 retail bytes and first differs at byte 12. Retail copies
  the input float before its first call and stores that copy in the call's
  delay slot. Reopen with source-value lifetime or qualified compiler
  evidence. None of these 43 attempts earns C match credit.

Another 301 reviewed 52-byte placements with one relocation link exactly
from 290 C sources (15,652 placement bytes, 15,080 distinct-source bytes).
Eleven additional placements reuse a source only after an independent exact
link at each target, and all 21 complete USA modules pass. The source forms
include record and conditional-call wrappers, bounded loops, field updates
and floating-point arguments. The linked register choices establish where a
call receives the record pointer or a floating-point value; signed `-1`
uses the retail single immediate instruction where an unsigned constant
would expand to two. No candidate in this scope remains nonmatching.

Another 346 reviewed 52-byte placements with two or more relocations
link exactly from 328 C sources (17,992 placement bytes, 17,056
distinct-source bytes). Eighteen extra placements reuse a source only
after an independent exact link at the target. All 21 complete USA
modules pass. Fifty-one other placements retain publishable C without
match credit:

- Twenty bound-checked record clears (for example,
  [LEVEL_01:0x0B2618](../../src/levels/01_pokitaru/LEVEL_01_0B2618.c) (accepted 9 November 2026))
  link 48 against 52 bytes and first differ at byte 4. The compiler
  removes the retail boolean complement and shortens the branch.
- Twenty lazy pointer initializers (for example,
  [LEVEL_01:0x1EEA20](../../src/levels/01_pokitaru/LEVEL_01_1EEA20.c) (accepted 11 November 2026))
  link 48 against 52 bytes and first differ at byte 8. The compiler
  folds a pointer-null guard, including with an inline C helper.
- Five four-entry table clears (for example,
  [LEVEL_02:0x028F80](../../src/levels/02_rykan_v/LEVEL_02_028F80.c) (accepted 9 November 2026))
  link 52 bytes but first differ at byte 8 because the global base
  and field offset combine and loop registers change.
- Two masked global setters (for example,
  [LEVEL_04:0x0B7E80](../../src/levels/04_metalis/LEVEL_04_0B7E80.c) (accepted 9 November 2026))
  link 52 bytes but first differ at byte 30 in the final address register.
- Two global read wrappers (for example,
  [LEVEL_15:0x0F52D8](../../src/levels/15_giant_clank_metalis/LEVEL_15_0F52D8.c) (accepted 9 November 2026))
  link 40 against 52 bytes and first differ at byte 4 in the staged
  global address calculation.
- Two fallback indexed reads (for example,
  [LEVEL_22:0x1311E0](../../src/levels/22_skyboard_kalidon/LEVEL_22_1311E0.c) (accepted 9 November 2026))
  link 52 bytes but first differ at byte 6 in the index-mask register.

For the bound checks, lazy initializers, table clears, masked setters
and fallback reads, five other already qualified compiler routes did
not resolve their representative mismatches. Reopen the retained
sources with original type, layout or value-lifetime evidence; any new
compiler remedy needs per-source qualification and complete-module gates.

Another 417 reviewed 56-byte placements with one to three relocations
link exactly from 402 C sources (23,352 placement bytes, 22,512
distinct-source bytes). Fifteen extra placements reuse a source only
after an independent exact link at the target; all 21 complete USA
modules pass. Eighty-one other placements retain publishable C without
match credit. The largest recurring blockers are:

- Twenty conditional call results (for example,
  [LEVEL_01:0x023B38](../../src/levels/01_pokitaru/LEVEL_01_023B38.c) (accepted 9 November 2026)):
  pinned C links 56 bytes but first differs in the post-call branch
  and field load at byte 35.
- Twenty 24-byte-stride call wrappers (for example,
  [LEVEL_01:0x0A6000](../../src/levels/01_pokitaru/LEVEL_01_0A6000.c) (accepted 22 November 2026)):
  pinned C links 56 bytes but first differs at byte 2 in register
  allocation for the stride and data base.
- Sixteen indexed record lookups (for example,
  [LEVEL_01:0x16B640](../../src/levels/01_pokitaru/LEVEL_01_16B640.c) (accepted 11 November 2026)):
  pinned C links 52 bytes and first differs at byte 28 in the
  conditional table-entry tests.

The remaining 25 retained C bodies cover global-state checks, four-entry
scans, float-argument calls and isolated field access or return-value
differences. Their source comments record the measured first difference
and a concrete reopening condition. New compiler or type hypotheses
need an isolated exact link and the complete-module gate before promotion.

Another 236 reviewed 56-byte placements with four or more relocations
link exactly from 226 C sources (13,216 placement bytes, 12,656
distinct-source bytes). Ten additional placements reuse a source only
after an independent exact link at the target; all 21 complete USA
modules pass. The [LEVEL_19:0x1515C8](../../src/levels/19_multiplayer_04/LEVEL_19_1515C8.c)
body has a verified complete return and one direct local caller despite
having no Ghidra function entry; its linked C reproduces all 56 bytes.

Forty more placements retain publishable C without match credit:
twenty 36-byte-stride table clears (for example,
[LEVEL_01:0x0744A0](../../src/levels/01_pokitaru/LEVEL_01_0744A0.c) (accepted 9 November 2026))
first differ at byte 2 in global and table register allocation; twenty
two-global initializers (for example,
[LEVEL_01:0x0D1800](../../src/levels/01_pokitaru/LEVEL_01_0D1800.c) (accepted 14 November 2026))
first differ at byte 6 in global address register and store scheduling.
Each retained C links 56 bytes. Five other already qualified compiler
routes failed both representatives. Reopen with evidenced table layout
or initializer value lifetime before qualifying a source-specific remedy.

Another 383 reviewed 60-byte placements with one to four relocations
link exactly from 366 C sources (22,980 placement bytes, 21,960
distinct-source bytes). Seventeen additional placements reuse a source
only after an independent exact link at the target; all 21 complete
USA modules pass.

Forty-six placements retain publishable C without match credit.
Twenty indexed-table lookups (for example,
[LEVEL_01:0x11A248](../../src/levels/01_pokitaru/LEVEL_01_11A248.c) (accepted 11 November 2026))
link 60 bytes but differ at byte 6 in masked-index and table-base
registers. Fifteen conditional call wrappers (for example,
[LEVEL_01:0x023C68](../../src/levels/01_pokitaru/LEVEL_01_023C68.c) (accepted 9 November 2026))
link 60 bytes but choose another comparison register and argument
schedule. Five paired-array clears, two extended-argument float calls,
two indirect calls and two shift results retain their measured first
difference and reopening condition in their C comments. A new source
or compiler hypothesis must pass isolated links and complete-module
gates before receiving C credit.

A review of 144 putative 60-byte intervals with five or more relocations
found 129 exact 60-byte C placements from 123 sources. Thirteen guarded
pair-array stores retain C without match credit (for example,
[LEVEL_01:0x080C98](../../src/levels/01_pokitaru/LEVEL_01_080C98.c) (accepted 9 November 2026)):
pinned C links 68 bytes and first differs at byte 2 in argument and
global register allocation.

The other two putative intervals, in LEVEL_15.REL and LEVEL_21.REL at
0x0F78B8, each contain **two distinct complete functions**: a 32-byte
global state store followed by a 28-byte call wrapper at 0x0F78D8.
Ghidra recognizes both entries, and each retail body has its own
return. The [call wrapper](../../src/levels/15_giant_clank_metalis/LEVEL_15_0F78D8.c)
links exactly at both placements from one C source. The two
[32-byte stores](../../nonmatching/levels/LEVEL_15_0F78B8.c) retain C
without credit: pinned C links 20 bytes and first differs at byte 0
after folding a staged global address into one constant. Reopen with
evidence for the original data layout or a qualified address route.
No 60-byte match is claimed for those split intervals.

Taken together, this review adds 131 exact placements from 124 C
sources (7,796 placement bytes, 7,408 distinct-source bytes) while
retaining 15 useful nonmatching C bodies. All 21 complete USA modules
remain exact.

A review of 485 candidate 64-byte intervals with relocations found 246
exact placements from 238 C sources (15,744 placement bytes, 15,232
distinct-source bytes). Eight placements reuse the same C after an
independent exact link. The complete 21-module USA gate passes. Natural
loop forms recovered the [array initializer](../../src/levels/01_pokitaru/LEVEL_01_02A118.c)
and the [table search](../../src/levels/02_rykan_v/LEVEL_02_027F08.c); correcting
the declared width of `g_bRenderPlayerShadow` recovered five more
placements. Another 230 complete candidate bodies retain measured C in
`nonmatching/`, with their first difference and reopening condition in
the source comments. For example, the [flag update](../../src/levels/01_pokitaru/LEVEL_01_132CD8.c) (accepted 21 November 2026)
still differs in branch-likely scheduling. Nine candidate entries lacked
a Ghidra function at their start; they receive neither C credit nor an
invented boundary until reviewed further.

Three repeated short-body leads remain blocked after further measured trials.
For the 20 [indexed lookups](../../src/levels/01_pokitaru/LEVEL_01_039B18.c) (accepted 9 November 2026),
reordering C locals and nesting the call expression produced the same
64-byte object and byte-6 register difference; three qualified GNU routes
kept that difference, while both SDK routes produced 44 bytes with a
byte-0 difference. For the 40 [conditional byte conversions](../../src/levels/01_pokitaru/LEVEL_01_0881D8.c) (accepted 9 November 2026),
a mutable result and a conditional expression missed the retail
branch-likely instruction; three GNU routes retained a byte-24 difference,
and the SDK routes differed from byte 0. For the 20
[field initializers](../../src/levels/01_pokitaru/LEVEL_01_08BE88.c) (accepted 9 November 2026),
source-order and ordinary structure-field variants still scheduled the
36-byte stores differently at byte 8 across all five qualified routes.
These remain C attempts without match credit; reopen only with evidence
for a different source-level data layout or a qualified scheduling remedy.

The 20 raw-identical 36-byte linked-list initializers now reproduce the
retail body from one [C source](../../src/levels/shared/LEVEL_01_09FB18.c)
(720 placement bytes, 36 distinct-source bytes). The embedded list head
is represented explicitly: its second pointer is addressed relative to
the head rather than through the enclosing node, which reproduces the
retail pointer-store order without assembly or barriers. All 20 isolated
links and all 21 complete USA modules are exact; the former retained
attempt at the representative placement is promoted.

Three more reviewed short-body forms add 59 exact USA placements (9,192
placement bytes, 300 new distinct-source bytes). A
[152-byte flag update](../../src/levels/shared/LEVEL_01_087620.c) and a
[148-byte phase update](../../src/levels/shared/LEVEL_01_0639E8.c) each link
exactly at twenty numbered levels. The phase update alone selects the
hash-pinned `r5900-mfc1` assembler route; the default assembler inserts
an extra load-delay word after `mfc1`. Another nineteen placements reuse
the already accepted [168-byte source](../../src/levels/shared/LEVEL_01_088EC0.c)
without adding a source. All 21 complete USA modules remain exact, and
all previously accepted object pins are unchanged.

Seventeen other reviewed C hypotheses from the same 140–196-byte scope
remain in `nonmatching/` with their first difference and reopening
condition. The [164-byte float clamp](../../src/levels/01_pokitaru/LEVEL_01_0023B0.c) (accepted 9 November 2026)
differs only in one branch destination after natural C restructuring.
The [double classifier](../../src/levels/frontend/FRONTEND_023528.c) (accepted 22 November 2026) has a
152-byte Ghidra body followed by a nonzero word inside the 156-byte
candidate interval; no credit is claimed for that extra word or its
unresolved ownership. Five qualified `cc1` routes did not resolve the
other representative differences.

Four new shared C sources and four existing sources cover 112 exact USA
placements of 84–152 bytes (11,908 placement bytes, 388 new
distinct-source bytes). Thirty-five placements reuse the existing sources
after independent exact links. The new C sources cover a
[100-byte float step](../../src/levels/shared/LEVEL_01_001940.c),
[100-byte status count](../../src/levels/shared/LEVEL_01_07D1C8.c),
[92-byte record write](../../src/levels/shared/LEVEL_01_0B9840.c) and
[96-byte interpolation](../../src/levels/shared/LEVEL_01_12F218.c).
The interpolation preserves the measured zero-valued polynomial terms;
removing those floating-point operations would change NaN behavior.
Only the float step selects the hash-pinned `ee-frozen` assembler;
the default GNU assembler yields 96 bytes from the same C. All 21
complete USA modules remain exact, and the previously accepted source
and placement rows retain their original pins.

Twelve other reviewed C hypotheses remain in `nonmatching/` with their
first difference and reopening condition. For example, the
[88-byte pointer-array removal](../../src/levels/01_pokitaru/LEVEL_01_08BE18.c) (accepted 9 November 2026)
still swaps one commutative address operand near its end. The
[frontend table count](../../src/levels/shared/FRONTEND_025CC0.c) (accepted 9 November 2026) has a
68-byte Ghidra body inside a 72-byte candidate interval; the following
word is nonzero at all 21 placements and receives no C credit or assumed
ownership. Five other qualified compiler routes and two alternate
assemblers did not resolve the retained representative differences.

Fourteen sign-test bodies remain nonmatching (for example,
[`LEVEL_01:0x1337E8`](../../src/levels/01_pokitaru/LEVEL_01_1337E8.c) (accepted 9 November 2026)). Pinned C
links 40 bytes but first differs at byte 28: it reduces the retail signed
comparison to a bit shift. A complemented-value expression and longer signed
type did not match, nor did five other qualified `cc1` routes on the
representative. Reopen with a natural source form or qualified compiler
route that preserves the signed comparison.

Four byte-conjunction bodies also remain nonmatching (for example,
[`LEVEL_16:0x078A30`](../../src/levels/16_multiplayer_01/LEVEL_16_078A30.c) (accepted 22 November 2026)). The retained
40-byte C first differs at byte 24: a conditional move replaces the retail
boolean conversion and register copies. Wide and local-return variants and
five other qualified `cc1` routes did not match. Reopen with evidenced value
lifetimes or a narrowly qualified compiler remedy.

Four pointer-condition bodies remain nonmatching (for example,
[`LEVEL_02:0x1D2090`](../../src/levels/02_rykan_v/LEVEL_02_1D2090.c) (accepted 14 November 2026)). The retained
pinned C object has the correct 36-byte length but first differs at byte 2
in the global-pointer and result registers. Nested conditionals, ternary and
pointer-return forms did not select the retail registers; five other
qualified `cc1` routes did not match the representative. Reopen with an
evidenced source-level lifetime or narrowly qualified compiler remedy.

Twenty halfword-mask bodies remain nonmatching (for example,
[`LEVEL_01:0x027528`](../../src/levels/01_pokitaru/LEVEL_01_027528.c) (accepted 9 November 2026)). The pinned C
object is 32 bytes, but first differs at byte 6 because the mask and data
pointer temporaries use the opposite registers. Reordering the operands,
using local pointers, a typed field view and a separate bit-array base did
not change the register assignment. Five other qualified `cc1` routes on
the representative had the same difference. Reopen with a source-level
lifetime that selects the retail registers or a narrowly qualified compiler
remedy; all 20 retained C attempts remain uncounted.

Twenty-one `asyncPs2fioLseek` wrappers remain nonmatching: the existing
[`FRONTEND:0x002620`](../../src/levels/shared/FRONTEND_002620.c) (accepted 10 November 2026) attempt and
20 additional retained level attempts. The pinned object has the correct
28-byte length but first differs at byte 12: the retail call-delay slot has
a 64-bit argument move, while the compiler emits a no-op. Wider, narrower,
pointer and old-style parameter declarations did not recover that move on
the frontend representative; five other qualified `cc1` routes had the
same difference. Reopen with source-level ABI evidence or a narrowly
qualified compiler remedy.

The self-calling bodies at [`LEVEL_15:0x093E00`](../../src/levels/15_giant_clank_metalis/LEVEL_15_093E00.c) (accepted 9 November 2026)
and [`LEVEL_21:0x093E00`](../../src/levels/15_giant_clank_metalis/LEVEL_15_093E00.c) (accepted 9 November 2026)
also remain nonmatching. The retail has an explicit 28-byte call and return,
while pinned C folds the recursive call to a 24-byte loop (first difference
at byte 0). The available `cc1` rejects `-fno-optimize-sibling-calls`.
Reopen with a natural source form or a qualified compiler profile that keeps
the call without changing its behavior.

Twenty 20-byte local global-copy bodies remain nonmatching despite one
authored C source per site under `nonmatching/levels/` (for example,
[`LEVEL_01:0x08CDC8`](../../src/levels/01_pokitaru/LEVEL_01_08CDC8.c) (accepted 9 November 2026)).
The pinned compiler emits the same 20-byte length but first differs at
body byte 2 by exchanging the source-address and copied-word temporary
registers. Typed pointers, arrays and a one-word structure, as well as
the qualified SDK and GNU trial profiles on the representative, did not
change this mismatch. The 20 candidate sites remain uncounted until a
source-level lifetime or narrowly qualified compiler remedy reproduces
all retail bytes and the complete modules.

Another 463 relocation-bearing candidate bodies of 68–100 bytes have matching
Ghidra body extents. Pure C under the pinned GNU EE route reproduces **260
placements from 211 authored sources** (23,600 placement bytes and 19,236
distinct-source bytes). Forty-nine placements reuse a canonical source after
an independent exact link and object-hash check. Examples include the
[four-call wrapper](../../src/levels/01_pokitaru/LEVEL_01_0C0B18.c),
[global-state call guard](../../src/levels/01_pokitaru/LEVEL_01_0BC530.c) and
[callback-list traversal](../../src/levels/01_pokitaru/LEVEL_01_09FA48.c).
All 21 complete USA modules remain exact; the prior source and placement rows
are unchanged.

The other 203 candidate bodies retain pure C in `nonmatching/levels/`, with
their linked size, first difference and a source-level reopening condition in
each file. For example, the
[guarded removal](../../src/levels/01_pokitaru/LEVEL_01_0BB340.c) (accepted 9 November 2026) currently links
108 rather than 100 bytes, while the
[frontend stack wrapper](../../src/levels/frontend/dpsub_FRONTEND.c) (accepted 9 November 2026) links 100
bytes but differs from its first byte. These receive no C credit. The
relocation-masked shapes used to select the sites were research leads; they
did not by themselves establish source sharing or match status.

Another 424 relocation-bearing candidate sites of 104–152 bytes have
Ghidra-corroborated complete body extents. Four pure C forms reproduce **83
placements from 79 authored sources** (11,700 placement bytes and 11,136
distinct-source bytes). Four placements reuse canonical C after independent
exact links and equal object hashes. The forms are a
[140-byte pool-slot search](../../src/levels/frontend/FRONTEND_01E2F0.c),
[136-byte indexed-object traversal](../../src/levels/frontend/FRONTEND_022B48.c),
[144-byte allocation](../../src/levels/frontend/__cp_push_exception_FRONTEND.c) and
[144-byte saved-flags callback](../../src/levels/01_pokitaru/LEVEL_01_088A90.c).
Only the allocation selects the already pinned `sdk991111` compiler route;
the other three use the default profile. All 21 complete USA modules remain
exact, with previous source and placement pins unchanged.

Sixteen other representative C attempts remain in `nonmatching/levels/`,
with measured first differences and specific reopening conditions. The
[140-byte frontend division](../../src/levels/frontend/FRONTEND_012600.c) (accepted 22 November 2026)
requires the source-specific `-mno-check-zero-division` flag to reach the
correct length but still differs at byte 36. The
[108-byte float packet](../../src/levels/01_pokitaru/LEVEL_01_1D1BD0.c) (accepted 27 November 2026) has a
callee signature corroborated as float, float, pointer, pointer, int. Its earlier
112-byte attempt first differed at byte 12; the 26 November replacement reproduces
the complete 108-byte body. The other 341 candidate
sites have no new matching credit from this review. Relocation-masked
similarity alone still does not establish C source identity.

Another 394 relocation-bearing candidate sites of 80–100 bytes have
Ghidra-corroborated complete body extents. Six pure C forms reproduce **117
placements from 112 authored sources** (10,508 placement bytes and 10,068
distinct-source bytes). Five placements reuse canonical C after independent
exact links and equal object hashes. The forms are a
[84-byte countdown wrapper](../../src/levels/01_pokitaru/LEVEL_01_028510.c),
[84-byte guarded record loop](../../src/levels/01_pokitaru/LEVEL_01_013368.c),
[88-byte float-indexed table lookup](../../src/levels/01_pokitaru/LEVEL_01_0001A8.c),
[92-byte ATRAC fade wrapper](../../src/levels/01_pokitaru/LEVEL_01_18D2E0.c),
[100-byte record initializer](../../src/levels/01_pokitaru/LEVEL_01_06AF60.c) and
[92-byte callback-array traversal](../../src/levels/01_pokitaru/LEVEL_01_07DCD8.c).
They use the default pinned C and assembler route. All 21 complete USA
modules remain exact, and previous source and placement pins are unchanged.

Fourteen other representative C attempts remain in `nonmatching/levels/`
with measured first differences and reopening conditions. The
[88-byte packed-table initializer](../../nonmatching/levels/LEVEL_01_0974A8.c)
requires the source-specific `-mno-check-zero-division` flag to reach the
correct length but still differs at byte 2. The
[80-byte frontend state guard](../../src/levels/frontend/FRONTEND_021438.c) (accepted 9 November 2026)
links 72 bytes and first differs at byte 32; the retail retains a redundant
state check that must not be introduced as purposeless C. The other 277
candidate sites receive no new matching credit from this review. Their
masked structural similarity is not a source-identity proof.

Another 409 relocation-bearing candidate sites of 156–200 bytes have
Ghidra-corroborated complete body extents. Four pure C forms reproduce **82
placements from 78 authored sources** (15,492 placement bytes and 14,736
distinct-source bytes) under the default pinned route. Four placements reuse
canonical C after independent exact links and equal object hashes. These
forms are a
[176-byte pointer-field initializer](../../src/levels/frontend/FRONTEND_0170D0.c),
a [196-byte range update](../../src/levels/frontend/FRONTEND_012690.c), a
[192-byte effect-state update](../../src/levels/01_pokitaru/LEVEL_01_066230.c) and a
[192-byte guarded state update](../../src/levels/01_pokitaru/LEVEL_01_04A998.c).
Previous source and placement pins are unchanged.

Sixteen other representative C attempts remain in `nonmatching/levels/` with
measured first differences and specific reopening conditions. For example,
the [200-byte effect call](../../nonmatching/levels/LEVEL_01_0DC120.c) links to
the right length under the already qualified `gnu-ee-trial-divpad` route but
first differs at byte 4 in 64-bit mask construction. The
[196-byte pointer clamp](../../src/levels/01_pokitaru/LEVEL_01_055018.c) (accepted 9 November 2026) links to
200 bytes and first differs at byte 2. The qualified SDK, GNU trial and
division-pad compiler routes emit the same 200-byte object for that source. The
[196-byte refcounted list removal](../../src/levels/frontend/__cp_pop_exception_FRONTEND.c) (accepted 27 November 2026)
links 220 bytes and first differs at byte 8 because the fallback call extends
the link-pointer lifetime. The
[200-byte path CRC](../../nonmatching/levels/LEVEL_01_10F380.c) links 108 bytes
and differs from its first byte; its separator scan remains unresolved.
The other 327 candidate sites receive no new matching credit; masked
structural similarity remains a research lead only.

Another 363 bounded USA candidate placements of 104–196 bytes were reviewed
without relocations. Twenty raw-identical groups each have matching Ghidra
body extents and one normalized pseudocode form across their sites. This
supports source-sharing experiments but does not qualify a shared C source.
One pure C exemplar per group remains under `nonmatching/levels/` with its
linked length, first difference and reopening condition. None is exact, so
the accepted placement tables and progress reports are unchanged.

The [matrix-vector calculation](../../src/levels/shared/LEVEL_01_126078.c) (accepted 14 November 2026)
links to the correct 136-byte length but still differs at byte 8 after a
source-level load-order change. The
[bitfield decoder](../../src/levels/shared/FRONTEND_00B928.c) (accepted 9 November 2026) links to the
correct 104-byte length but first differs at byte 1; unsigned byte input
corrected the earlier 92-byte candidate. The
[enumerated-type test](../../src/levels/shared/LEVEL_01_0374B8.c) (accepted 9 November 2026) links 128
rather than 132 bytes and first differs at byte 2. For five close
representatives, the qualified default, GNU trial, division-pad and SDK
compiler routes did not resolve the mismatch. All 363 placements remain
uncounted until the source reproduces each complete body and the full-module
gate passes.

Another 402 bounded USA relocation-bearing candidate sites of 76–80 bytes
have Ghidra-corroborated complete body extents. Five pure C forms reproduce
**122 placements from 107 authored sources** (9,512 placement bytes and 8,324
distinct-source bytes) under the default pinned route. Fifteen placements
reuse a canonical source after independent exact links and equal object
hashes. The forms are a
[four-call sequence](../../src/levels/shared/LEVEL_01_002570.c),
[six-call sequence](../../src/levels/01_pokitaru/LEVEL_01_01B630.c),
[allocation and named `memset`](../../src/levels/01_pokitaru/LEVEL_01_10F7D8.c),
[callback wrapper](../../src/levels/01_pokitaru/__is_pointer__FPv_LEVEL_01.c),
[frontend state guard](../../src/levels/frontend/FRONTEND_0032E8.c) and
[frontend forwarding wrapper](../../src/levels/frontend/FRONTEND_00ECF0.c).
The prior source and placement pins remain unchanged.

Fourteen other representative C attempts remain under `nonmatching/levels/`
with measured first differences and reopening conditions. The
[80-byte conditional call](../../src/levels/01_pokitaru/LEVEL_01_0D7680.c) (accepted 9 November 2026)
reached the correct length and matches through byte 33 after changing its
source branch order, but its equality test still lowers differently. The
[80-byte global table search](../../src/levels/01_pokitaru/LEVEL_01_074D60.c) (accepted 9 November 2026)
links 72 bytes and first differs at byte 18 in its end-pointer traversal.
The other 280
candidate sites receive no new match credit. A relocation-masked form remains
a research lead until every claimed placement links exactly.

Another 402 bounded USA relocation-bearing candidate sites of 68–76 bytes
have Ghidra-corroborated complete body extents and one normalized pseudocode
form per selected group. Five pure C forms reproduce **101 placements from
96 authored sources** (7,192 placement bytes and 6,836 distinct-source bytes)
under the default pinned route. Five placements reuse canonical C after
independent exact links and equal object hashes. The forms are a
[frontend loop](../../src/levels/frontend/FRONTEND_003B10.c),
[named `memset` call](../../src/levels/01_pokitaru/LEVEL_01_018800.c),
[global table search](../../src/levels/01_pokitaru/LEVEL_01_07A538.c),
[guarded call chain](../../src/levels/01_pokitaru/LEVEL_01_0A75C8.c) and
[stack-buffer call](../../src/levels/01_pokitaru/LEVEL_01_068CF0.c).
Previous source and placement pins remain unchanged.

Fifteen other representative C attempts remain in `nonmatching/levels/` with
measured first differences and reopening conditions. The
[frontend global reset](../../src/levels/frontend/FRONTEND_021668.c) (accepted 9 November 2026) has the
correct 68-byte length after changing its source control flow, but first
differs at byte 23 in its branch form and register use. The
[68-byte forwarding helper](../../src/levels/01_pokitaru/LEVEL_01_0362D8.c) (accepted 26 November 2026) links
60 bytes after accounting for two additional call arguments; its stack
argument convention remains unresolved. The other 301 candidate sites gain
no match credit. Relocation-masked similarity alone does not qualify a shared
source or prove a match.

Another 279 bounded USA relocation-bearing candidate sites of 68 bytes have
Ghidra-corroborated complete body extents and one normalized pseudocode form
per selected group. Seven pure C forms reproduce **120 placements from 97
authored sources** (8,160 placement bytes and 6,596 distinct-source bytes)
under the default pinned route. Twenty-three placements reuse canonical C
after independent exact links and equal object hashes. Notably, the
[paired named `memset` calls](../../src/levels/shared/LEVEL_01_1318D0.c) use one
source at twenty raw-identical placements. Other forms include a
[two-call global mask](../../src/levels/01_pokitaru/LEVEL_01_087E00.c),
[call and global stores](../../src/levels/01_pokitaru/LEVEL_01_0A7360.c),
[shared record layout](../../src/levels/01_pokitaru/LEVEL_01_0C48D8.c) and
[conditional state wrapper](../../src/levels/04_metalis/LEVEL_04_1C71F0.c).
Previous source and placement pins remain unchanged.

Thirteen other representative C attempts remain under `nonmatching/levels/`
with measured first differences and reopening conditions. The
[global sentinel test](../../src/levels/01_pokitaru/LEVEL_01_0A6958.c) (accepted 26 November 2026) links 48
rather than 68 bytes, while the
[halfword bit update](../../src/levels/16_multiplayer_01/LEVEL_16_024FE8.c) (accepted 9 November 2026) links 64 bytes
and first differs at byte 2. The other 159 candidate sites receive no match
credit. Relocation-masked similarity alone does not qualify source reuse.

Another 353 bounded USA relocation-bearing candidate sites of 72–84 bytes
have Ghidra-corroborated complete body extents. Nine pure C forms reproduce
**158 placements from 153 authored sources** (12,236 placement bytes and
11,844 distinct-source bytes) under the default pinned route. Five placements
reuse canonical C after independent exact links and equal object hashes.
The forms include
[hashed-value stores](../../src/levels/01_pokitaru/LEVEL_01_0B5C78.c),
[four calls with a saved global](../../src/levels/01_pokitaru/LEVEL_01_0B6F78.c),
[three repeated calls](../../src/levels/01_pokitaru/LEVEL_01_028DC0.c),
[state initialization](../../src/levels/01_pokitaru/LEVEL_01_075420.c) and a
[0x58-byte record field](../../src/levels/01_pokitaru/LEVEL_01_024468.c) at offset
0x3c. The last source uses the record base corroborated by its linked
instructions; treating that field as an isolated global left a byte-56
difference. Previous source and placement pins remain unchanged.

Eleven other representative C attempts remain under `nonmatching/levels/`
with measured first differences and reopening conditions. The
[related record lookup](../../nonmatching/levels/LEVEL_01_0246D0.c) links 80
rather than 84 bytes after adopting the same record base, while the
[global table scan](../../src/levels/01_pokitaru/LEVEL_01_079BD0.c) (accepted 25 November 2026) has the correct
72-byte length but first differs at byte 6 in register allocation. The other
195 candidate sites receive no match credit. One masked group also has ten
normalized Ghidra pseudocode variants, so its apparent structural similarity
does not by itself establish a shared C definition.

Another 385 bounded USA relocation-bearing candidate sites were reviewed:
366 sites of 84–100 bytes and 19 sites of an 80-byte named ATRAC stop wrapper.
All have Ghidra-corroborated complete body extents. Six pure C forms reproduce
**119 placements from 113 authored sources** (11,120 placement bytes and
10,560 distinct-source bytes) under the default pinned route. Six placements
reuse canonical C after independent exact links and equal object hashes.
The forms include [two function-address dispatchers](../../src/levels/01_pokitaru/LEVEL_01_079608.c),
[graphics setup](../../src/levels/01_pokitaru/CORE/Lightweight/LW_Model/LEVEL_01_0349B8.c),
[guarded global calls](../../src/levels/01_pokitaru/LEVEL_01_0C9620.c),
[four-call initialization](../../src/levels/01_pokitaru/LEVEL_01_019420.c) and the
[ATRAC stop wrapper](../../src/levels/01_pokitaru/LEVEL_01_18D290.c).

The dispatchers initially linked to the correct 100-byte length but differed
because numeric comparison constants lowered with `ori`; naming the compared
functions produced the retail relocations and exact links. The ATRAC wrapper
was reopened from its retained C using evidence that the named import takes
the instance stored in the list entry. Its prior
`nonmatching/levels/LEVEL_01_18D290.c` file is removed on promotion.
Fifteen other representative C attempts remain under `nonmatching/levels/`
with measured first differences and reopening conditions. The other 266
candidate sites receive no match credit. Previous source and placement pins
remain unchanged.

Another 478 bounded USA relocation-bearing candidate sites of 104–128 bytes
have Ghidra-corroborated complete body extents. Five pure C forms reproduce
**124 placements from 118 authored sources** (15,204 placement bytes and
14,468 distinct-source bytes) under the default pinned route. Six placements
reuse canonical C after independent exact links and equal object hashes.
The forms include a [file-close loop](../../src/levels/frontend/FRONTEND_002888.c)
using the named `ps2fioClose` import,
[UI state handling](../../src/levels/frontend/FRONTEND_01E438.c),
[named `sscanf`](../../src/levels/frontend/FRONTEND_01CB08.c),
[guarded frees](../../src/levels/01_pokitaru/LEVEL_01_110C88.c) and
[conditional calls](../../src/levels/01_pokitaru/LEVEL_01_023AB8.c).

The file-close loop initially linked to the correct 120-byte length but
first differed at byte 83: an early `return 0` caused a constant to replace
the saved close result. Breaking the loop and returning that result once
reproduced all 42 placements. Fifteen other representative C attempts remain
under `nonmatching/levels/` with measured first differences and reopening
conditions. For example, the
[frontend text scan](../../nonmatching/levels/FRONTEND_00C448.c) has the correct
128-byte length but differs at byte 4 in its saved registers, and the
[frontend copy wrapper](../../src/levels/frontend/FRONTEND_024958.c) (accepted 9 November 2026) links 124
bytes but differs from the start of its prologue. The other 354 candidate
sites receive no match credit. Previous source and placement pins remain
unchanged.

Another 410 bounded USA candidate sites of 129–175 bytes were measured in
November 2026. Thirteen C forms reproduced 268 placements exactly; see
`docs/gates/level-c-witness.md`. Seven representative forms remain blocked, each
retained under `nonmatching/levels/` and none counted:

- `FRONTEND.REL:0x014838` (168 B) matches its first 78 bytes. The retail and
  the pinned chain disagree on the `high`/`found` registers, on duplicate
  epilogues and on the loop rotation.
- `LEVEL_01.REL:0x0B5868` (172 B) matches through body byte 84; four
  instructions of the clamp block are ordered differently.
- `FRONTEND.REL:0x01C9C0` (160 B) matches its first 32 bytes. The retail
  computes `dst + len + 1` once and reuses it for the terminator store and the
  return; the pinned chain materialises two addresses.
- `LEVEL_01.REL:0x007AD8` (168 B) has an exact frame and prologue; the first
  difference is the floating-point register that receives `D_00217E88[2]`.
- `LEVEL_01.REL:0x029548` (168 B) links 168 bytes. The default chain differs
  at body byte 4; `gnu-ee-trial-divpad` moves the difference to two swapped
  delay slots at body byte 60.
- `LEVEL_01.REL:0x02E488` (164 B) matches through body byte 70; only the
  register of the second `addiu 0x1F` differs, and the rest follows from it.
- `LEVEL_01.REL:0x036F58` (160 B) links 148 bytes. The loop body is identical
  instruction by instruction, but the prologue loses a second `heap` register
  and merges the guard's `end - heap` with the count's.

Another 1,666 bounded USA candidate sites of 129–200 bytes were measured in
November 2026. Seventeen C forms reproduced 361 placements exactly; see
`docs/gates/level-c-witness.md`. Forty-seven representative forms remain blocked and
are retained under `nonmatching/levels/` with their measured difference and a
reopening condition; none is counted. The measured blockers cluster into four
classes:

- **Register allocation permutations**: the same instructions are present but
  a pair of temporaries is allocated in the opposite registers (for example
  `LEVEL_01.REL:0x0C3AA8` and the float-register permutation of
  `LEVEL_02.REL:0x059F40`).
- **Prologue and epilogue order**: `FRONTEND.REL:0x0026B0` differs only in the
  restore order (`s1,s0,s2,ra` instead of `s0,s1,s2,ra`), and
  `LEVEL_02.REL:0x09EA50` hoists the division constant after the register
  saves.
- **Constant materialisation and hoisting**: `LEVEL_01.REL:0x0DD080`
  reassociates the `|5`, `LEVEL_01.REL:0x0AE658` folds a `+4` that the retail
  materialises in a delay slot, and `LEVEL_01.REL:0x0D9248` rotates five
  constants through the argument registers.
- **Flow reconstruction**: `LEVEL_01.REL:0x0C9AA8` merges `lui` pairs the
  retail keeps distinct, and `LEVEL_01.REL:0x0D0E28` duplicates a table-scan
  test that the retail keeps as two top-tested loops.

One form needs a measured flag rather than new C: `LEVEL_02.REL:0x0C07A0`
links 200 bytes only with `-mno-check-zero-division`. Two exact forms require
the `gnu-ee-trial-divpad` profile (see `level-c-witness.md`).

Another 1,206 bounded USA candidates of 104–200 bytes were measured in two
later scopes. Twenty forms reproduced 459 placements exactly; twenty-eight
representative forms remain blocked and are retained under
`nonmatching/levels/` with measured differences and reopening conditions. The
new evidence adds four reusable facts:

- **Assembler expansion of 64-bit constants.** The pinned GNU assembler
  expands a `dli` as `ori`/`dsll16`; the retail uses `lui`/`ori`/`dsll3`/`ori`.
  SN `Ps2EeAs` reproduces the retail expansion. It is now registered as the
  per-source `ps2eeas` level-body assembler for the measured 18 placements;
  its SHA-256 is the one already pinned for the boot reconstruction.
- **Hazard nop after `mtc1`.** One 168-byte body is exact only with the same
  `ee-frozen` assembler; the pinned GNU assembler omits the coprocessor hazard
  nop, the `gnu-ee-trial` assembler emits 164 bytes.
- **Adjacent-store swap.** GCC 2.9 exchanges two independent adjacent stores of
  the same value. Writing the source stores in the opposite order restores the
  retail order; `volatile` was measured as unnecessary and is not used.
- **Conditional-move conversion.** GCC 2.9 converts a branch-based value
  selection (`sltu`/`xori`/`beqz`/two `addiu`) into a conditional move in
  `jump.c`; a real 0/1 boolean used as a value is the remaining hypothesis.

Two forms need a different allocation behaviour rather than a new source form:
`LEVEL_02.REL:0x0E3A10` and `LEVEL_03.REL:0x0B9E58` differ only in the register
holding a live temporary, across all six qualified cc1 profiles.

Another 559 bounded USA candidates of 148–192 bytes were measured in the next
scope. Eighteen forms reproduced 334 placements exactly; twelve representative
forms remain blocked and are retained under `nonmatching/levels/`. The new
evidence adds:

- **Assembler and alignment together.** One 164-byte body needs the `ps2eeas`
  route *and* `-malign-functions=2`: the GNU assembler binds the internal join
  label after the compare/coprocessor-branch hazard nop (body byte 128 wrong),
  `ps2eeas` alone pads the section to 168 bytes, and the alignment flag brings
  it back to 164 with all 19 placements exact.
- **64-bit soft-float frame.** One 152-byte body is exact only under
  `sdk991111`: the retail saves its registers at 16-byte spacing for a body
  that manipulates 64-bit values, while the pinned chain uses 8-byte spacing.
- **32-bit mask encoding.** The retail forms a zero-extended 32-bit -1 with
  `addiu`/`dsrl32`; GCC uses `lui 0xFFFF`/`dsrl32`. Same value, same size, two
  immediate bytes differ; all six cc1 profiles agree.
- **Floating-point allocation order.** Two parked forms differ only in `f1`/`f4`
  versus `f0`/`f3` (or `v0`/`v1`) allocation while every instruction and size
  match.
- **Gate symbol resolution.** Generic source-level names resolve in the private
  harness through retail relocations but not in the repository gate, which
  accepts only imports/exports and `func_`/`D_<address>`. A shared source must
  be expanded to per-site sources with the measured names before promotion.

### Bounded USA short-body near misses (November 2026)

Forty-eight representative pure-C attempts for selected bodies of at most 200 bytes were recompiled and linked at their stated USA sites. All 48 remain nonmatching; their forms account for 414 individually measured nonmatching placements, with no C match credit. Twenty-two representatives link at the retail length, twenty are shorter, and six are longer. A matching length or relocation-masked shape does not extend a measurement to untested placements. The useful sources are retained under `nonmatching/levels/` with their first differences and reopening conditions.

- **Register lifetimes and call ABI.** The [frontend table lookup](../../src/levels/frontend/FRONTEND_01F1A0.c) (accepted 10 November 2026) links 104/104 bytes but swaps two temporary registers from byte 62; its caller's second-argument type also needs review. The [global fade selector](../../src/levels/02_rykan_v/LEVEL_02_069E68.c) (accepted 22 November 2026) links 148/152 bytes and changes the branch at byte 8 because the global pointer and stack bound have different lifetimes. The [global state initializer](../../src/levels/01_pokitaru/LEVEL_01_035988.c) (accepted 14 November 2026) links 100/104 bytes and first differs at byte 2 in its base-register allocation.
- **Control flow, delay slots and returns.** The [byte-store helper](../../src/levels/01_pokitaru/LEVEL_01_133FE8.c) (accepted 9 November 2026) links 132/132 bytes but lacks the retail callee-argument move in the call delay slot at byte 52. The [copy wrapper](../../src/levels/01_pokitaru/LEVEL_01_1EBBD0.c) (accepted 9 November 2026) uses the qualified `sdk991111` profile and preserves the named `memcpy` import, yet links 120/124 bytes: after an exact 92-byte prefix it emits a tail jump instead of the retail call and return. The [signed clamp](../../src/levels/01_pokitaru/LEVEL_01_0B9D20.c) (accepted 22 November 2026) links 140/140 bytes but selects a shift where retail uses a signed comparison at byte 92.
- **Layout, aliasing and store order.** The [twelve-byte record copy](../../src/levels/shared/FRONTEND_015E68.c) (accepted 9 November 2026) links 144/140 bytes and differs from entry, leaving its alignment and copy-before-guard ABI open. The [rotation matrix](../../src/levels/shared/LEVEL_01_123F10.c) (accepted 14 November 2026) links 144/144 bytes but first changes the sine/cosine store and float-register schedule at byte 16. The [float-state initializer](../../src/levels/01_pokitaru/LEVEL_01_0589C0.c) (accepted 9 November 2026) links 192/196 bytes; constant loading and field-store order diverge from byte 13.
- **Integer width and lowering.** The [packed 64-bit field return](../../src/levels/01_pokitaru/LEVEL_01_03B368.c) (accepted 11 November 2026) reproduces the initial unaligned load/copy but links 44/72 bytes; the remaining stack-word reconstruction and masks require a faithful source form. The [partial-product multiplication](../../src/levels/shared/__muldi3_shared.c) (accepted 26 November 2026) has the correct 96-byte length but differs at entry in multiplier and register order. The [upper-coordinate helper](../../src/levels/01_pokitaru/LEVEL_01_0AD0C0.c) (accepted 14 November 2026) links 132/132 bytes and first differs at byte 26 in the operand order of two additions; preserve the original upper-Y calculation when reopening it.
- **Assembler and alignment.** The [bit-mask helper](../../src/levels/shared/LEVEL_01_03C450.c) (accepted 27 November 2026) earlier linked 152/148 bytes with the qualified per-source `ps2eeas` route and first differed at byte 6. The 26 November replacement reproduces the complete 148-byte body; its measured `-malign-functions=2` option removes the final alignment word.

The 132-byte [resource-selection body](../../src/levels/01_pokitaru/LEVEL_01_089B60.c) (accepted 9 November 2026) has a separate **defined-behavior blocker**. An earlier C version linked exactly at 20 USA placements with `1U << item[-1]`, but `item[-1]` is a byte and a 32-bit C shift is undefined when it is at least 32. The R5900 variable shift uses only the low five bits. The reviewed direct callers in the representative level do not prove that the byte is in 0..31; their record pointers come from resource data, and an all-ones flag mask does not bound the shift. The retained defined C uses `1U << (item[-1] & 31U)` and links 136/132 bytes, first differing at byte 20 at all 20 placements. None of those placements receives match credit. Reopen only with a range proof covering every applicable producer/caller or a qualified compiler route that reproduces the retail from defined C.

#### Further bounded USA short-body blockers (November 2026)

In the reviewed USA selection, 45 representative pure-C attempts still differ from retail after isolated links. Their handoffs record 460 nonmatching placements; 18 representatives link at the retail length, 19 shorter and eight longer. These are measured source leads, not C match credit, and a masked form does not extend one representative's result to untested sites.

- **Register lifetimes, branches and calls (earlier measurements).** The [tag parser](../../src/levels/shared/CORE/Lightweight/LW_Model/LEVEL_01_034678.c) (accepted 27 November 2026) links 112/112 bytes but first changes constant placement at +17; the [global scan](../../src/levels/02_rykan_v/LEVEL_02_07B648.c) (accepted 9 November 2026) links 72/80 bytes and loses the base copy and guarded load schedule at +18. The [previous-field call](../../src/levels/01_pokitaru/LEVEL_01_062DB8.c) (accepted 27 November 2026) links 148/148 bytes but differs at +52: recover its argument preparation without adding a parameter that contradicts the callee ABI. The [stack-argument forwarding body](../../src/levels/02_rykan_v/LEVEL_02_03AD20.c) (accepted 26 November 2026) earlier linked 60/68 bytes. The tag parser, previous-field call and stack-argument forwarding body now reproduce their complete retail extents after the 26 November source and prototype corrections; the global scan records an older result.
- **Floating-point scheduling and assembler scope.** The [matrix product](../../nonmatching/levels/LEVEL_02_12EDC0.c) links 196/196 bytes but assigns the first float registers differently from +2; recover live ranges under a qualified compiler route. The [two-division body](../../nonmatching/levels/LEVEL_02_03B090.c) links 56/52 bytes: retail needs two latency words before its first division and one before its second, while the available division-padding route adds two to both. A route change needs per-source qualification and regression controls.
- **Integer width, address expressions and defined behavior.** The [aligned-address helper](../../src/levels/shared/LEVEL_01_058738.c) (accepted 9 November 2026) links 60/60 bytes but first differs at +15 because retail uses aligned-address OR semantics rather than addition. The [64-bit mask builder](../../src/levels/shared/LEVEL_01_03C0E8.c) (accepted 26 November 2026) links 56/52 bytes and needs the original constant expansion. The [72-byte shift helper](../../src/levels/02_rykan_v/LEVEL_02_028C90.c) (accepted 9 November 2026) retains defined C and links 76 bytes, first differing at +48; its privately exact unmasked shift needs a proof that every applicable value is below 32, or a qualified route that matches from defined C.
- **Partial masked forms.** The [124-byte output helper](../../src/levels/02_rykan_v/LEVEL_02_05E888.c) (accepted 9 November 2026) has 12 nonmatching placements (132/124 bytes, first difference +60) alongside seven separately exact placements. Recover its stack loads and call behavior for the per-module output stub; do not promote the remaining 12 by masked similarity.
- **Semantic holds.** The earlier 132-byte resource-selection shift at LEVEL_01.REL:0x089B60 described above remains uncredited without an input-range proof. The [124-byte byte conversion](../../src/levels/shared/LEVEL_01_132280.c) (accepted 9 November 2026) links 116/124 bytes without a redundant zero guard; the privately exact guarded C is held because that guard is unreachable after the lowercase-range test. Reopen only with credible source-level evidence for the guard or a natural defined C match. At the previous snapshot, the 68-byte setter at `LEVEL_02.REL:0x07BCA0` was locally exact but uncredited because accepted callers declared a zero-argument prototype; the measured resolution below supersedes that hold.

**Resolved: 68-byte setter/getter ABI chain (USA).** The 68-byte
[setter](../../src/levels/02_rykan_v/LEVEL_02_07BCA0.c) passes its object key to an
80-byte getter and writes the selected value. A complete accepted-C callgraph
review found 322 direct edges through this chain. Correcting the declarations
in 153 accepted C sources preserved their object hashes at 160 placements;
36 compatible controls remained unchanged. Nineteen setter placements now
link exactly from 18 canonical C sources, with 114 terminal callees reviewed
as Ghidra boundary/ABI witnesses rather than credited C. The pinned USA
complete-program gate passes 21/21 modules with no named-import mismatch.
This fixes the previous local ABI hold, without claiming indirect-call or
runtime validation, PAL matches, or a game-wide function denominator.

#### Later bounded USA short-body measurements (November 2026)

In this reviewed USA selection, 42 representative pure-C attempts still differ from retail at 669 individually tested placements; none of those placements earns C match credit. Seventeen representatives link at the retail length, 23 shorter and two longer. Across all 1,229 selected sites, 489 have accepted C, 669 are measured nonmatches, and 71 remain semantic holds; none is untested. A matching length or masked form does not prove source identity.

- **Register and loop lifetimes.** The [signed bit extractor](../../src/levels/02_rykan_v/LEVEL_02_03BE70.c) (accepted 26 November 2026) links 88/92 bytes, first difference +36: recover the separate result-register transfer. The [record linker](../../src/levels/shared/ENGINE/par/LEVEL_01_098018.c) (accepted 9 November 2026) links 92/92 bytes, first difference +10: recover its first-pointer register and source multiplication, and establish the count-zero domain before promoting a replacement.
- **Floating-point allocation.** The [weighted-coordinate body](../../nonmatching/levels/LEVEL_02_121690.c) links 160/160 bytes but differs from entry in the absolute-value and accumulator FPR schedule. The [three-product update](../../src/levels/shared/LEVEL_01_055C38.c) (accepted 9 November 2026) links 92/96 bytes, first difference +4 in its stack spills. Reopen these with measured live ranges or a qualified per-source compiler route, preserving the original arithmetic order.
- **Calls and return flow.** The [two-argument caller](../../src/levels/01_pokitaru/LEVEL_01_1B63C8.c) (accepted 9 November 2026) links 116/116 bytes, first difference +42, while its accepted callee still declares one argument; reconcile both sides of that ABI before credit. The [guarded getter](../../src/levels/02_rykan_v/LEVEL_02_07AA10.c) (accepted 26 November 2026) links 92/96 bytes, first difference +28: retain its pointer-key contract while restoring the boolean temporary and branch schedule.
- **Defined operations and unexplained frames.** The [byte-indexed bit update](../../src/levels/02_rykan_v/LEVEL_02_027CB8.c) (accepted 9 November 2026) links 80/84 bytes, first difference +2; an explicit low-five-bit shift mask is needed for defined behavior over all byte values. The [global division body](../../nonmatching/levels/LEVEL_02_09DB78.c) links 104/88 bytes, first difference +4; establish a nonzero divisor invariant or defined divide-zero behavior before promotion. The [empty body](../../src/levels/shared/LEVEL_01_049780.c) (accepted 9 November 2026) links 8/12 bytes from plain C, first difference +0; explain the retail transient frame rather than adding dead or volatile locals for bytes.

**Semantic holds, separately uncredited.** Five defined C witnesses are retained separately under `nonmatching/levels/`: the [168-byte list walker](../../src/levels/01_pokitaru/LEVEL_01_154D58.c) (accepted 9 November 2026) needs a nonzero record-count invariant; the [136-byte float conversion](../../src/levels/01_pokitaru/LEVEL_01_06AD30.c) (accepted 9 November 2026) needs a finite, bounded input; and the [80-byte selector](../../src/levels/01_pokitaru/LEVEL_01_025098.c) (accepted 9 November 2026) needs a non-null callee result on all paths. The [76-byte wrapper](../../src/levels/01_pokitaru/LEVEL_01_16B020.c) (accepted 11 November 2026) and [72-byte wrapper](../../src/levels/01_pokitaru/LEVEL_01_144050.c) (accepted 10 November 2026) link byte-exact in isolation but remain uncredited because accepted callers use conflicting ABI declarations. The [80-byte return-code wrapper](../../src/levels/02_rykan_v/LEVEL_02_0DE010.c) (accepted 9 November 2026) and [72-byte four-call wrapper](../../src/levels/01_pokitaru/LEVEL_01_0B6EC0.c) (accepted 9 November 2026) use defined natural C that links 80/80 bytes (first difference +34) and 52/72 bytes (first difference +6), respectively; their privately exact XOR test and one-iteration loop have no independent source justification. None of these holds is C match credit. Reopen only with the stated range, ABI or source evidence and then repeat isolated links and the complete-program gate.

#### USA bounded bodies of 68–76 bytes (9 November 2026)

This USA selection covers the 40–76-byte bounded candidates whose relocation-masked form had no retained attempt. Nine representative pure-C attempts still differ from retail and earn no credit; 25 other forms are byte-exact but held for ABI review. Equal length is not a match.

- **Loop induction.** The [pool-slot claim](../../src/levels/shared/LEVEL_16_15D9A8.c) (accepted 14 November 2026) and its [0x2D0-displacement sibling](../../src/levels/shared/LEVEL_16_14D788.c) (accepted 9 November 2026) link 68/68 bytes under `sdk991111`, first difference +8: the retail keeps the pool base as the induction pointer and reads the slot flag by displacement, while the compiler folds the displacement into the pointer; the pinned and `gnu-ee-trial` profiles keep a separate counter (60 bytes). Find a loop or element form that keeps the displacement out of the induction variable.
- **Address constants and register choice.** The [clamped counter decrement](../../src/levels/18_multiplayer_03/LEVEL_18_114188.c) (accepted 9 November 2026) links 68/72 bytes, first difference +4: the retail adds the 0x18 field offset after materialising the global, the compiler folds it into the address constant. The [table-entry division](../../src/levels/10_quodrona/LEVEL_10_173168.c) (accepted 14 November 2026) needs `gnu-ee-trial-divpad` for its division and links 72/72 bytes, first difference +8, with the index product in another register. The [timer start or stop](../../src/levels/10_quodrona/LEVEL_10_19B498.c) (accepted 11 November 2026) links 68/68 bytes, first difference +4: the retail places the float zero in the second float argument register; establish that parameter from callee or caller evidence before retrying.
- **Branch and tail layout.** The [mode selector](../../src/levels/22_skyboard_kalidon/LEVEL_22_11BBC0.c) (accepted 26 November 2026) (68/68 bytes, +28) becomes a conditional move in every measured form and profile; the [identifier test](../../src/levels/07_dreamtime/LEVEL_07_1983A8.c) (accepted 26 November 2026) (68/72 bytes, +24) lacks the retail copy of the comparison into a second result register; the [kind-to-class mapping](../../src/levels/03_kalidon/LEVEL_03_193860.c) (accepted 26 November 2026) (68/68 bytes, +28) keeps a separate case-3 block where the retail shares one return; the [leading-entry count](../../src/levels/16_multiplayer_01/LEVEL_16_168C98.c) (accepted 9 November 2026) (68/68 bytes, +4) fills the first delay slot with the counter reset instead of the list base. Recover the original statement shapes; do not add dead code.

**ABI holds, separately uncredited.** Twenty-five forms (78 placements) link byte-exact, but their prototypes disagree with an accepted callee definition or with accepted callers. The largest are the [resource registration](../../src/levels/01_pokitaru/LEVEL_01_1D4138.c) (accepted 11 November 2026) (13 placements; the accepted callee is defined with four `long long` parameters and no return value), the [sub-record reset](../../src/levels/01_pokitaru/LEVEL_01_0EFB00.c) (accepted 11 November 2026) (12 placements; it passes an argument to the shared empty stub), the [tag-and-mask update](../../src/levels/03_kalidon/LEVEL_03_177C18.c) (accepted 9 November 2026) (7 placements) and the [bounded table cell](../../src/levels/16_multiplayer_01/LEVEL_16_0220C8.c) (accepted 11 November 2026) (5 placements; the accepted callers disagree with each other). Reopen by reconciling those prototypes while keeping every accepted object hash, then relink each placement and rerun the complete-module gate.

#### USA bounded bodies of 61–120 bytes (9 November 2026)

Parallel attempts covered the 240 smallest relocation-masked forms of 61–120 bytes that had no retained attempt. Eighty-two representative pure-C attempts still differ from retail and earn no credit; 35 of them link at a different length. The eleven closest attempts (equal length, at most four differing words) are retained under `nonmatching/levels/` with their measured first difference and a reopening condition:

- **Statement and scheduling order.** [LEVEL_04:0x14F6F8](../../src/levels/04_metalis/LEVEL_04_14F6F8.c) (accepted 9 November 2026) and [LEVEL_04:0x1DDE00](../../src/levels/04_metalis/LEVEL_04_1DDE00.c) (accepted 9 November 2026) schedule a load or a constant before the counter update; [LEVEL_16:0x15D590](../../src/levels/16_multiplayer_01/LEVEL_16_15D590.c) (accepted 9 November 2026) fills its first loop delay slot differently; [LEVEL_16:0x021FA8](../../src/levels/16_multiplayer_01/LEVEL_16_021FA8.c) (accepted 14 November 2026) leaves empty a delay slot in which the retail copies the table pointer.
- **Register order.** [LEVEL_15:0x029980](../../src/levels/15_giant_clank_metalis/CORE/Lightweight/LW_Model/LEVEL_15_029980.c) (accepted 9 November 2026) differs only in the order of two prologue saves under `gnu-ee-trial`; [LEVEL_07:0x1DC8A8](../../src/levels/07_dreamtime/LEVEL_07_1DC8A8.c) (accepted 22 November 2026) swaps the registers of two float constants; [LEVEL_01:0x000A08](../../src/levels/01_pokitaru/LEVEL_01_000A08.c) (accepted 11 November 2026) swaps two table-base loads.
- **Boolean results and addresses.** [LEVEL_18:0x15A048](../../src/levels/18_multiplayer_03/LEVEL_18_15A048.c) (accepted 9 November 2026) and [LEVEL_18:0x159CF0](../../src/levels/18_multiplayer_03/LEVEL_18_159CF0.c) (accepted 14 November 2026) produce a different final flag test; [LEVEL_15:0x137288](../../src/levels/15_giant_clank_metalis/LEVEL_15_137288.c) (accepted 9 November 2026) differs only in the form of one stack temporary address; [LEVEL_22:0x10EE78](../../src/levels/22_skyboard_kalidon/LEVEL_22_10EE78.c) (accepted 9 November 2026) derives its flags pointer from another register.

**ABI holds, separately uncredited.** In the same selection and the extended accepted families, 219 placements in 63 forms link byte-exact but disagree with an accepted callee definition or accepted callers: 78 conflicts differ only between pointer and integer arguments, 64 in the argument count and 49 in whether a value is returned. Many involve shared stubs such as `FRONTEND_0025B0.c` and `FRONTEND_001E08.c`. Reopen them together by reconciling those prototypes while keeping every accepted object hash, then relink each placement and rerun the complete-module gate.

#### USA bounded bodies of 100–200 bytes (9 November 2026)

Parallel attempts covered the 748 relocation-masked forms of 100–200 bytes that had no retained attempt; 124 forms are now accepted. The other attempts stay outside the repository for a measured retry pass and earn no credit.

**ABI holds, separately uncredited.** In this selection 748 placements in 104 forms link byte-exact (102,236 placement bytes) but disagree with an accepted callee definition or accepted callers. Of the 1,007 conflicts, 322 differ in the argument count, 291 only between pointer and integer arguments, 273 in whether a value is returned and 121 in other argument classes. The largest group uses the return value of accepted per-level helpers that are defined as `void` (for example [LEVEL_03_0FB398.c](../../src/levels/03_kalidon/LEVEL_03_0FB398.c)); many others pass arguments to the empty shared stub [FRONTEND_001E08.c](../../src/levels/shared/FRONTEND_001E08.c), which is defined without parameters at 2,219 placements. One representative per form is retained under `nonmatching/levels/`. Reopen them by reconciling those prototypes with the accepted definitions and callers while keeping every accepted object hash, then relink each placement and rerun the complete-module gate.

#### Prototype review of the held 61–200-byte bodies (9 November 2026)

Two rules that keep every linked byte released 142 of the held placements: a caller's `void` declaration of a callee whose accepted definition returns a value now takes that return class, and accepted parameterless constant stubs whose callers pass arguments moved to six typed stub sources at 127 placements. The other **899 byte-exact placements in 175 forms** (108,520 placement bytes) stay held, with one representative each under `nonmatching/levels/`. Most remaining conflicts differ between pointer and integer arguments or in the argument count. Casting at each call would only hide the disagreement: when a caller passes small integer constants where an accepted definition declares pointers, the accepted definition is the likelier error. Reopen them per callee family: recover the parameter types from the callee body and all of its callers, correct the accepted definition and every accepted caller while each keeps its object hash, then relink the held placements and rerun the complete-module gate.

#### Retry passes over open forms of up to 200 bytes (9 November 2026)

Two retry passes restarted from earlier attempts: of 446 forms with a retained attempt, 37 now match, and of 200 forms whose first attempt in the 61–200-byte selections did not match, 29 do. Their 211 retained files left `nonmatching/levels/`; the entries above that cited them are marked accepted and link the accepted sources. The remaining attempts stay outside the repository for a further measured pass and earn no credit.

**ABI holds, separately uncredited.** 294 byte-exact placements in 22 forms (25,784 placement bytes) disagree with an accepted callee definition or accepted callers after the two prototype rules. Their representative sources are under `nonmatching/levels/`; for 16 forms that already had a retained attempt, the byte-exact candidate sits beside it under [`nonmatching/levels/alternatives/`](../../nonmatching/levels/alternatives/) with an `_abi_hold` suffix. Reopen them like the other ABI holds above.

A second retry pass matched 57 more forms; their 112 retained files left `nonmatching/levels/` and the entries above that cited them now link the accepted sources. **ABI holds:** 203 byte-exact placements in 23 forms (18,464 placement bytes) stay held, with representatives under `nonmatching/levels/` or, beside an earlier retained attempt, under `nonmatching/levels/alternatives/` with an `_abi_hold` suffix.

A third retry pass and a review of address variants of accepted sources matched 113 more forms; their 216 retained files left `nonmatching/levels/` and the entries above that cited them now link the accepted sources. **ABI holds:** 228 byte-exact placements in 53 forms (24,660 placement bytes) stay held, with representatives under `nonmatching/levels/` or, beside an earlier retained attempt, under `nonmatching/levels/alternatives/`.

The rest of the third retry pass matched 57 more forms; their 148 retained files left `nonmatching/levels/` and the entries above that cited them now link the accepted sources. **Withdrawn or refused exact C:** [FRONTEND:0x0249D8](../../nonmatching/levels/alternatives/FRONTEND_0249D8_volatile.c) links 140/140 bytes only because a callee's return type points at a `volatile` 64-bit value, which forces the retail 64-bit load; it was accepted in #229 and is withdrawn, with its earlier [attempt](../../src/levels/frontend/FRONTEND_0249D8.c) (accepted 11 November 2026) restored. [FRONTEND:0x012600](../../nonmatching/levels/alternatives/FRONTEND_012600_zero_temp.c) and its 20 level copies link 140/140 bytes only through a local zero temporary in a clamp; the natural `if (quotient < 0) quotient = 0;` links 144 bytes (19 differing words, first at +0x34). Retry both by recovering the natural types and control flow. **ABI holds:** 305 byte-exact placements in 23 forms (35,904 placement bytes) stay held, with representatives under `nonmatching/levels/` or its `alternatives/` directory.

#### USA bounded bodies of 201–600 bytes (9 November 2026)

Never-attempted forms of 201–300 and 401–600 bytes are being worked in parallel; 113 forms are accepted so far, and their nonmatching attempts stay outside the repository for a measured retry. **ABI holds:** 395 byte-exact placements in 49 forms (98,656 placement bytes) disagree with accepted callers or callees — larger bodies call more accepted helpers, so a higher share is held. Their representatives are under `nonmatching/levels/`. Reopen them like the other ABI holds above.

A further 60 of those forms are accepted. **Not yet accepted:** `FRONTEND:0x0233F8` is exact only with the `ee-frozen` assembler route and reconstructs the soft-float packing routine of GNU libgcc's `fp-bit`; it needs a provenance and licence review against the public GNU source, like the boot `__pack_d`, before acceptance; its attempt stays private until then. **ABI holds:** 472 byte-exact placements in 40 forms (146,416 placement bytes) stay held, with representatives under `nonmatching/levels/`.

A further 56 of those forms are accepted. **ABI holds:** 332 byte-exact placements in 44 forms (97,988 placement bytes) stay held, with representatives under `nonmatching/levels/`.

A further 191 forms of up to 800 bytes are accepted, including retries of earlier attempts; the six retained files of those forms left `nonmatching/levels/` and the entries above that cited them now link the accepted sources. **Refused exact C:** [LEVEL_01:0x1413E8](../../src/levels/01_pokitaru/LEVEL_01_1413E8.c) (accepted 10 November 2026) links 164/164 bytes only because the release step of an inline helper is wrapped in `do { ... } while (0)`, whose loop note aligns the else label and emits the retail nop before each call; the same helper without the wrapper links 152 bytes (31 differing words, first at +0x18). Retry with a natural form, for example evidence of a statement macro in the original. **ABI holds:** 631 byte-exact placements in 107 forms (174,560 placement bytes) stay held, with representatives under `nonmatching/levels/`.

Prototype reconciliation of the held forms has started: 421 held placements in 70 forms are accepted after their sources were retyped to agree with the accepted definitions and callers, and 121 retained representatives and attempts of now-accepted placements left `nonmatching/levels/` (eleven of them from its `alternatives/` directory). Two further retyped forms were refused because they replaced a prototype with an empty parameter list while still passing arguments to a callee that the accepted definition gives none; they stay held. For many other held forms the accepted callee's own prototype looks wrong, for example a `void` definition whose callers branch on its return register; those need a change to the accepted definition and to all of its callers. A further 96 forms of up to 1,000 bytes are accepted. **ABI holds:** 733 byte-exact placements in 83 forms (228,468 placement bytes) stay held, with representatives under `nonmatching/levels/` or its `alternatives/` directory.

Prototype reconciliation accepts 993 more held placements in 159 forms; 220 retained representatives and attempts of now-accepted placements left `nonmatching/levels/` (31 of them from its `alternatives/` directory) and the eleven entries above that cited such files now link the accepted sources. Retyped sources were refused when they replaced a prototype with an empty parameter list while still passing arguments, gave a function a non-void type without returning a value, or needed a constant cast to a pointer (`LEVEL_16:0x022010` compares its parameter with `(void *)12`, so its accepted callers may declare the wrong type). A further 58 forms of up to 1,228 bytes are accepted; another exact source that relies on a `do { ... } while (0)` wrapper around a single call was refused and is not published. **ABI holds:** 775 byte-exact placements in 74 forms (246,120 placement bytes) stay held, with representatives under `nonmatching/levels/` or its `alternatives/` directory.

Prototype reconciliation accepts 191 more held placements in 14 forms, and 42 further forms of up to 1,184 bytes are accepted; fourteen retained representatives of now-accepted placements left `nonmatching/levels/`. **ABI holds:** 325 byte-exact placements in 31 forms (167,256 placement bytes) stay held, with representatives under `nonmatching/levels/` or its `alternatives/` directory.

Prototype reconciliation accepts 47 more held placements in seven forms, and 40 further forms of up to 1,688 bytes are accepted; seven retained representatives of now-accepted placements left `nonmatching/levels/`. `FRONTEND:0x0235C8` links exactly but appears to reproduce a soft-float routine of GNU libgcc's `fp-bit`, so it waits for the same provenance review as `FRONTEND:0x0233F8`; its attempt is not published. **ABI holds:** 376 byte-exact placements in 40 forms (147,616 placement bytes) stay held, with representatives under `nonmatching/levels/`.

Prototype reconciliation accepts 62 more held placements in seven forms, and seven further forms are accepted; eight retained representatives of now-accepted placements left `nonmatching/levels/`. **ABI holds:** 118 byte-exact placements in ten forms (46,864 placement bytes) stay held, with representatives under `nonmatching/levels/`.

Following the RAC1 and RAC2 decompilations, the prototype review now treats 32-bit integers and pointers as one register class and lets the integer and floating-point banks be declared independently; a declaration still has to keep each bank's argument order, count and widths and the return contract. Under that rule 585 held placements in 62 forms are accepted, and the remaining holds above are the ones whose accepted and held declarations differ in a return contract, an argument count, a width or a register bank. The same projects allow a nonempty `do { ... } while (0)` group of real operations, so the two refusals for it above are reversed and both bodies are accepted. Two forms that are exact only with the per-source `-fno-gcse` option are accepted, and two earlier holds no longer conflict; 174 retained representatives and attempts of now-accepted placements left `nonmatching/levels/` (32 of them from its `alternatives/` directory). **ABI holds:** 55 byte-exact placements in four forms (20,520 placement bytes) stay held, with representatives under `nonmatching/levels/`.

The prototypes of 105 accepted functions that their retail callers contradict were corrected in 1,215 accepted sources, each still exact at all of its placements, which releases 1,325 held placements in 140 forms; 160 retained representatives of now-accepted placements left `nonmatching/levels/` (15 of them from its `alternatives/` directory) and the two entries above that cited them now link the accepted sources.

A second round of prototype corrections releases 1,059 held placements in 161 forms: 120 more accepted functions were retyped in 1,030 accepted sources, and the byte-exact held callers of 55 accepted functions now declare them as defined. The prototype review previously read an unnamed `long long` parameter as a 32-bit argument and could not resolve a multi-line `typedef struct` return; both are fixed, and the disagreements this had hidden on definitions accepted since 6 November 2026 are corrected. 201 retained representatives of now-accepted placements left `nonmatching/levels/` (24 of them from its `alternatives/` directory).

**Prototype disagreements that stay held (11 November 2026).** Three measured cases keep byte-exact held placements out. The handle getter family of [LEVEL_01:0x1337C8](../../src/levels/01_pokitaru/LEVEL_01_1337C8.c) has twenty held level callers that set `$a0` before the call, but its reviewed family also contains [FRONTEND:0x021168](../../src/levels/frontend/FRONTEND_021168.c), whose caller at `FRONTEND:0x020D40` calls it right after another call without setting `$a0`; one shared source cannot both take and omit the argument, so the getter stays parameterless and the twenty callers stay held. The accepted `int` result of [LEVEL_01:0x0CF4A0](../../src/levels/shared/LEVEL_01_0CF4A0.c) is right (the accepted callers branch on it), but declaring it `int` in the twenty held callers that ignore it moves a temporary loaded after the call from `$v0` to `$v1` (two words), also with a `(void)` cast and under `gnu-ee-trial`. Four held slot callers of [LEVEL_16:0x112E38](../../src/levels/16_multiplayer_01/LEVEL_16_112E38.c) agree with its parameterless definition only under `gnu-ee-trial`, which has no independent cause for those sources yet. Reopen the first with evidence that the FRONTEND member is a different source function, the second with a caller shape that keeps the result register free, and the third with a measured route for the callers.

A third round of prototype corrections releases 113 held placements: 97 more accepted functions were retyped in 255 accepted sources and the byte-exact held callers of 78 more accepted functions now declare them as defined. A second correction of the [LEVEL_01:0x1337C8](../../src/levels/01_pokitaru/LEVEL_01_1337C8.c) getter family to an unused argument was withdrawn for the reason recorded above (its FRONTEND member is called without one), so its twenty held callers stay held. 34 retained representatives of now-accepted placements left `nonmatching/levels/` (three of them from its `alternatives/` directory). About 600 held placements remain, in a long tail of about 420 distinct caller/callee disagreements; the largest is a twenty-level getter family whose held callers declare `void` while its accepted definition returns `int`.

A fourth round of prototype corrections releases 79 held placements: 38 more accepted functions were retyped in 419 accepted sources. A third correction of the [LEVEL_01:0x1337C8](../../src/levels/01_pokitaru/LEVEL_01_1337C8.c) getter family to an unused argument was withdrawn for the reason recorded above. The prototype review now reads `long` and `unsigned long` as 64-bit, as they are under this compiler (`sizeof (long)` is 8 under both profiles), which raises the count of caller/callee disagreements on `master` from 1,691 to 1,753. [LEVEL_01:0x0CAA30](../../src/levels/01_pokitaru/LEVEL_01_0CAA30.c) (accepted 11 November 2026) (2,096 bytes) links exactly at fifteen placements but stays held: it passes three floats to the accepted wrapper at `LEVEL_01:0x0B7B58`, whose definition forwards only three pointers to `LEVEL_01:0x0B7978`. [LEVEL_01:0x063628](../../src/levels/01_pokitaru/LEVEL_01_063628.c) (accepted 26 November 2026) (676 bytes) reproduces all of its function bytes only with the qualified `ps2eeas` route, but that assembler aligns its text section to 8 bytes and pads it to 680, so the gate's section check rejects it; under the base assembler one word differs. The return-0 stub source [FRONTEND:0x0025B0](../../src/levels/shared/FRONTEND_0025B0.c) is accepted at 407 placements that are different retail functions, and their held callers declare them in eight incompatible ways (197 held placements, 54,292 bytes); one shared prototype cannot serve them all, so those placements need typed stub sources per caller class. 36 retained representatives of now-accepted placements left `nonmatching/levels/` (four of them from its `alternatives/` directory). About 560 held placements remain.

A fifth round releases 22 held placements: the byte-exact held callers of 61 more accepted functions now declare them as they are defined. The held caller at `LEVEL_16:0x11D978` is exact with its corrected declaration only under another compiler profile than the one it is held with, and is checked again later. Fourteen newly exact forms of 420–700 bytes (245 placements, 121,616 bytes) are held because their prototypes disagree with accepted code: their callers declare `void` for local callees whose accepted definitions return `int`, pass arguments that the accepted definitions do not take, or are declared otherwise by the accepted callers of their own function. Among them, `LEVEL_01:0x0B7978` takes three floats before its four integer arguments, while the accepted wrapper [LEVEL_01:0x0B7B58](../../src/levels/01_pokitaru/LEVEL_01_0B7B58.c) and its copies in the other levels declare only the four integers and forward no floats; it waits, with [LEVEL_01:0x0CAA30](../../src/levels/01_pokitaru/LEVEL_01_0CAA30.c) (accepted 11 November 2026), for those wrappers to forward the floats that their callers pass. Three retained representatives of now-accepted placements left `nonmatching/levels/`. About 800 held placements remain.

A sixth round releases 130 held placements. `LEVEL_01:0x0B7978` and [LEVEL_01:0x0CAA30](../../src/levels/01_pokitaru/LEVEL_01_0CAA30.c) are accepted now that the wrapper at `LEVEL_01:0x0B7B58` and its copies forward the three floats; the slab clip at `LEVEL_01:0x00BAB0` is accepted now that its callers pass the upper bound they hold in their second float argument; `LEVEL_01:0x0895C8` takes the unused third argument that its callers pass, and three forms only needed their callers to declare `int` callees as `int`. Four newly exact forms (53 placements) stay held: two pass an argument to accepted functions that are defined without parameters (`LEVEL_01:0x0D5C98` and `LEVEL_16:0x0793B8`), one passes two to the return-0 stub, and one declares the accepted `LEVEL_01:0x10F660` with 32-bit arguments and a pointer result where its definition takes three 64-bit arguments and returns nothing. One retained representative of a now-accepted placement left `nonmatching/levels/`. About 720 held placements remain.

A seventh round releases 61 held placements. Three accepted function families that their callers pass arguments to now take those arguments, unused (`LEVEL_01:0x03BEC0`, `LEVEL_01:0x0D5C98` and `LEVEL_16:0x0793B8`, with their copies in the other levels), and the accepted callers of `FRONTEND:0x015308` and of `LEVEL_16:0x09E4A8`, with their copies, now declare the `int` that these functions return. Three newly exact forms (nine placements) stay held: two use the result of accepted callees that are defined as `void` (`LEVEL_16:0x115350` and `LEVEL_01:0x026D38`, with their copies), and the accepted caller of `LEVEL_08:0x001580` declares a pointer result where the definition returns a float. About 620 held placements remain.

An eighth round releases 135 held placements. The 241 placements of the shared stub sources at `FRONTEND:0x001E08` (empty, `void`) and `FRONTEND:0x0025B0` (returns 0) whose callers pass arguments now use seven typed stub sources, one per argument list (one to three integer arguments, or one integer and one float), so the held callers that pass those arguments agree with the definitions. At five more return-0 placements the held callers declare `void`, and at five others, in `LEVEL_16` to `LEVEL_20`, one caller declares a 64-bit result; those stay on the shared source. Four newly exact forms (11 placements) stay held for their prototypes. Fourteen retained representatives of now-accepted placements left `nonmatching/levels/` (one of them from its `alternatives/` directory). About 490 held placements remain.

Copies of accepted shapes at pointer-only and nonzero-tail candidate bodies: 1,163 stay held because their callers or callees disagree with an accepted prototype. Eleven of them were found only by the accepted-tree review, because accepted callers call them by name with two arguments while the copied definition takes none, and one copy at `FRONTEND:0x0249D8` is left out because it would carry a `volatile` from the body it copies. About 1,650 held placements remain.

Pointer-only and nonzero-tail bodies written as new C (11 November 2026): 680 placements in 59 forms stay held because their callers or callees disagree with an accepted prototype; 21 of the forward disagreements involve callees named after their boot twins, which the review saw only once it read definitions of any name. About 2,320 held placements remain.

### Bounded USA level source updates (13 November 2026)

The reviewed C now supplies 123 additional placements of at most 200 bytes,
17,640 bytes by placement. This adds 117 source files, including one explicitly
typed empty callback shared by four previously accepted 8-byte placements;
those four bindings are not new coverage. Sixty-eight accepted sources also
have coherent declarations and layouts with their previous complete object
hashes preserved. The qualifying native Linux build checks 68,624 body
placements from 52,712 sources, 15,543 named import sites and all 21 complete
module files, with no mismatch. The change adds USA credit only.

The 172-byte angle normalizer uses a measured per-source
`-fno-expensive-optimizations` flag: the default common-subexpression lifetime
kept a floating constant across `fmodf`, changing the frame and reload order.
The source retains the real signed-angle and floating-point behavior; no
compiler binary or global optimization setting changes.

One hundred useful unaccepted representatives remain in `nonmatching/levels/`
with their measured size, first differing word and reopening condition. Eight
are byte-exact in isolation but remain uncredited because their contracts or
input domains are not closed. Unmeasured address variants are not promoted or
reported as individually tested. Further constraints established in this scope:

- Wrappers that pass byte IDs other than 255 to an accepted unmasked shift
  helper still need a producer/domain proof of IDs below 32. A byte argument
  alone does not establish that range, even when the wrapper itself is exact.
- The 88-byte table getter's nested five-cell view admits a sixth-cell access.
  Its retained flat view remains nonmatching until the actual backing extent
  and caller index domain are established.
- The `LEVEL_01:0x096B20` return family has 430 accepted caller sources:
  198 declare `void`, 231 `int`, and one declares a pointer and propagates it
  through another pointer-returning wrapper. The reviewed result is a signed
  index or creator index/failure value. Changing only the ignored-return
  declarations leaves that pointer chain open; fourteen exact placements
  therefore remain unaccepted.
- `LEVEL_08:0x1AE3A8` is a composite 180-byte inventory interval with separate
  complete bodies of 152 and 28 bytes, the latter independently referenced.
  Treating the whole interval as one function would be incorrect.

The native build used Wine 10.0 for the pinned SN assembler and a private
`wibo` runtime for the same pinned SN linker. Three real multi-object batches
and a local-library-call control produced completely identical ELF files
under both linker runtimes before the full-module check. Known whole-object
alternatives address only assembler debug metadata, as documented in blocker 15.
The provisional masked-shape denominator and runtime-behavior limitations remain.

#### USA bodies of at most 200 bytes (14 November 2026)

Every open level body of at most 200 bytes (1,154 relocation-masked forms, every
candidate kind) and every open boot interval of at most 200 bytes outside the
sound, wad, camera and mailbox prefixes (265) was attempted once more. **Levels:**
713 forms were exact; 3,951 placements are accepted. 1,165 placements in 89 forms
stay held because a placement declares a callee unlike its accepted definition
(mostly a different argument list) or is defined unlike the declaration of an
accepted caller (mostly an `int` result that the caller declares `void`); one
representative of 71 of these forms is retained under `nonmatching/levels/` with
the disagreement in its header, for a prototype reconciliation that edits the
accepted side. 189 near misses within 30 differing words are retained there too.
**Boot:** 124 bodies were exact; 118 are accepted. Six stay out:
`radfsqrt` is exact only with `-ffast-math`, a per-source option without a
measured cause yet; `sn_dereg_frame` ends 4 bytes past an 8-byte boundary with a
nonzero word after it, so no aligned owner fits; the `sceKernelGetSystemTimeWide__Fv`
interval holds a second, unnamed body at `0x01E863A8`, and one owner may hold only
one catalogued body; `sceScfGetLocalTimefromRTC`, `LoadExecPS2` and
`sceSifInitRebootNotify` end in a tail jump, and the boot gate counts only bodies
that end in a normal return. The 34 nonmatching bodies of `0x01EC8400`-`0x01ED0EE0`
are kernel system-call stubs that no C reproduces. 51 boot near misses within 30
differing words are retained under `nonmatching/boot/`.

#### USA bodies of 201 to 400 bytes (21 November 2026)

Every open level body of 201 to 400 bytes (875 relocation-masked forms, every
candidate kind; forms held for prototypes were left out) was attempted, in two
passes. 333 forms were exact; 1,633 placements are accepted. 588 placements in 73
forms stay held because a placement declares a callee unlike its accepted
definition or is defined unlike an accepted caller's declaration; one
representative of each is retained under `nonmatching/levels/` with the
disagreement in its header. 235 near misses within 30 differing words are
retained there too. Several entries are tail fragments without a prologue (they
read registers set by the preceding interval) and cannot be compiled alone; they
need a boundary review before any retry. The object hashes of the 20 sources added
with `ps2eeas` were first recorded from a full environment and were refreshed on
22 November 2026 (PR #289; see the `Ps2EeAs` note).

#### USA bodies of 801 to 1,500 bytes and near-miss retries (22 November 2026)

Every open level body of 801 to 1,500 bytes (658 relocation-masked forms, every
candidate kind) was attempted, and 30 forms were exact, about one in twenty. Even
after aligning insertions and deletions, only ten misses are within ten words: most
large bodies differ in block structure, not in registers or schedule, and need the
data flow read before any lever applies. Near misses of up to 800 bytes within ten
aligned words were retried with the earlier attempt as the starting point: 67 of
244 became exact, and 53 are accepted here; the others differ under the route
recorded with them. Several retries needed a callee whose accepted definition was
`void` to return the value its tail call leaves in `$v0`; every accepted caller of
such a callee now declares that return type. 116 placements in 11 forms stay held
for prototype disagreements.

A further pass took 302 near misses: 177 retries that had stayed nonmatching, 24
misses of 801 to 1,500 bytes within 30 aligned words or with the retail instruction
sequence, and 101 misses of 401 to 800 bytes at 11 to 30 aligned words. 77 became
exact (45 of the earlier retries, 26 of the 401-800 byte misses and 6 of the large
bodies), and 74 of them are accepted with 364 address variants. One entry is exact
only with a per-file `-fno-force-mem`, which is not a recorded option; it is left out.

#### USA bodies of 401 to 800 bytes (22 November 2026)

Every open level body of 401 to 800 bytes (1,027 relocation-masked forms, every
candidate kind; forms held for prototypes were left out) was attempted, and 112
forms were exact. In the same batch, 27 byte-exact forms held earlier for a callee
prototype disagreement were settled from the callee's retail body: where the callee
ends in a tail call and leaves that call's `$v0` at its `jr $ra`, its definition
returns the value; where it never reads an argument the caller loads, the caller
takes the accepted prototype in another natural form. Seventeen of them are
accepted; the declaration edits of the other ten were not applied in this batch and
those forms stay held. Four near misses are exact under another qualified route.
150 placements in 34 forms stay held; one representative of each, and 101 near
misses within 30 differing words, are retained under `nonmatching/levels/`.

Positional word counts overstate many misses: one extra instruction shifts every
later word. Aligning insertions and deletions puts 83 of the 915 misses within ten
words (46 positionally), and 33 more have the retail instruction sequence with other
registers or constants. A grid of 36 compiler routes (four `cc1` profiles, three
assemblers, `-fno-gcse` and `-mno-check-zero-division`) made none of the 83 exact;
they need source changes.

#### Sister-decompilation twins (22 November 2026)

A scan of every unmatched USA function against the matched C of OpenRAC/rac1,
rac2, rac3, rac4 and Secret Agent Clank, and against this project's own matched C,
found 63 exact relocation-masked twins in sister projects (16.5 KB) and 51 inside
Size Matters; near twins at 95% of masked words are absent, so the games' own code
differs and the twins are almost all runtime and Sony library code. After leaving
out other contributors' reserved boot entries: **27 boot functions** (8,580
bytes) and **19 level placements** are accepted from these ports. Not accepted:
`sceSifInitCmd` is exact but ends in a tail jump; `__throw` and `__rethrow` in the
boot need `-fexceptions`, which adds a `.data` frame table the boot gate does not
take; `VEC_InverseMat4` is exact only under `gnu-ee-trial-divpad`, which is not a
boot route; `sceCdRead` (23 words) and `atexit` (20 words) differ; `sceGsResetPath`,
`sceGsSyncPath` and `sceSifCallRpc` rely on inline assembly in their sister source.
The retained ones are under `nonmatching/`.

### Retained USA boot attempts and reviews (15–17 November 2026)

These reports stood under blocker 17 until 26 November 2026; their order and wording are
unchanged, so "above" and "below" refer to paragraphs of this section.

**Boot draw dispatch and vector-angle timing, 17 November 2026.**
The retained [DRAW_Render](../../nonmatching/boot/DRAW_Render__F10DRAW_LayerT0Ui.c)
reproduces all 316 linked body bytes under rebuilt default GNU, `-O2 -G0`,
GNU assembly and independent SN links. Trial emits 320 bytes, 270 equal
positions in the compared 316-byte prefix, first difference +0x2C. The
following zero word and separate 56-byte initializer are excluded. Separate
original-layer and traversal-cursor lifetimes preserve the helper/callback
order. The partial context view exposes unsigned halfword prefix counts,
20-byte mesh records and callback heads; opaque fields remain opaque.
Observed callers cover layers 0..31 in three ranges, with context zero.
Callback payload is an opaque 32-bit ABI carrier; its historical type,
ignored callback result, helper ignored-argument contracts, live node/storage
and indirect-call domains remain review holds. Local raw equality is not
qualification or accepted C credit.

The retained [VEC_AngleBetweenVectors](../../nonmatching/boot/VEC_AngleBetweenVectors__FPC4VEC3T0b.c)
emits 312 FUNC/text bytes under default GNU and ordinary trial: 174/312 equal
positions, first difference +0x34 against its 316-byte retail body. Apart from
three affected branch displacements, the missing word is a square-root
dependency delay. The known division-padding compiler emits 320 bytes,
216/316 equal positions, first +0x34; it changes both division and square-root
spacing. The known SN assembler does not resolve this difference. No dummy C
or edited compiler output is used. Reopen with independently justified
square-root/division scheduling and regression controls, rather than another
arithmetic spelling. The following zero word and 72 orphan bytes are excluded.
The encoded C++ boolean is represented only by a 32-bit ABI carrier in its
valid 0/1 domain; the sole observed caller supplies zero. The original C++
route and indirect callers remain unproved. Zero-length behavior, inclusive
clamps, the normalization bypass and original float operations are retained;
no unit-vector, host IEEE or repaired-domain assumption is added.

**Boot raw-block parsing and shared quaternion source, 17 November 2026.**
The [TJZIP raw-block parser](../../src/boot/TJZIP_ParseRawDataBlock__FPPUcT0PUi.c)
(accepted on 26 November 2026 from a port of OpenRAC/rac-sac-decomp's matched C, which
supersedes the retained attempt described here) reproduces all 444 linked body bytes under rebuilt default GNU and
`gnu-ee-trial`, with `-O2 -G0`, GNU assembly and independent SN links. Both
actual object and linked FUNC/text extents are 444 bytes; the following zero
alignment word is excluded. The source adapts the repository's accepted level
parser, using the boot callback's proven byte-pointer argument and return
type rather than copying an integer-return declaration. The Decompress
symbol's callback type and all three indirect argument/result flows agree.
Only the named callback, threshold and signature-table globals are required.

Independent instruction/state checks cover 353 cases, including all nonzero
short markers, extended lengths through 65,535, null/mutating callbacks,
header-source redirection, overlapping byte buffers and shared cursor cells.
Original reloads and sequential byte/CRC/cursor effects remain; no bulk-copy,
capacity guard or callback-purity assumption is added. Valid live storage,
capacities, callback contracts and the same-array threshold-minus-32 pointer
domain remain obligations. Local raw equality does not qualify tools or
promote the retained source.

The existing [shared Quat_Slerp source](../../src/levels/shared/Quat_Slerp__FP4QUATPC4QUATT1f.c)
was reused unchanged for the 416-byte boot placement. Its existing
`gnu-ee-trial-divpad` level route reproduces all 416 linked boot bytes, with
the complete object equal to the already accepted level object pin. Default
GNU emits 400 bytes, 259/400 equal positions, first difference +0x8; ordinary
trial emits 408 bytes, 279/408 equal positions, first +0xCC. The exact route
retains one named `acosf` and three `sinf` calls and the observed `f12` input.
There is one authored definition: no boot source duplicate, flag override or
accepted-source change is introduced. The compiler route remains level-only;
this standalone boot measurement is not a complete boot gate or qualification.
Keep explicit placement acceptance separate from the source's directory.
Input snapshots, partial-overlap ordering, unclamped dot products and original
floating-point comparisons are preserved; host IEEE edge cases are not a
substitute for EE runtime evidence.

**Further USA boot attempts, 17 November 2026.** Four retained sources use
`-O2 -G0`, rebuilt GNU tools, GNU assembly and independent SN links. These are
local measurements, not qualification or accepted C credit.

| Source | Default GNU result | Remaining condition |
| --- | --- | --- |
| [Ascii2Sjis](../../nonmatching/boot/Ascii2Sjis__FUc.c) | 232/232 body bytes exact; trial agrees | Review the table access views and original caller domain before promotion. |
| [PAR_PostInit](../../nonmatching/boot/PAR_PostInit__Fv.c) | 248/248 body bytes exact | Storage/capacity, allocation failure and indirect-caller invariants remain. |
| [SIG_CalcCaseInsensitiveSignature](../../nonmatching/boot/SIG_CalcCaseInsensitiveSignature__FPCc.c) | 216 bytes, 121/216 equal positions, first difference +0x6 | Recover cached-control, raw-byte and cursor lifetimes and generated read scheduling. |
| [DRAW_BeginUpdate](../../nonmatching/boot/DRAW_BeginUpdate__Fv.c) | 412 bytes, 247/412 equal positions against 420 retail bytes, first difference +0x62 | Reconcile the material-cache word type with its accepted zero writer. |

For ASCII conversion, an effective punctuation-table index base and a used
16-bit result joining the two lookup paths reproduce the body without register
constraints. Only accessed halfword fields and an opaque remainder are exposed;
no conversion-table initializers are imported. Independent checks cover all
256 input bytes and their table-load traces, with additional synthetic tables.

PAR initialization preserves the unconditional setup call, signed count guard,
count reload after allocation, saved count across the pool calls, later byte and
storage reloads, descriptor-page assignment and final lock store. Its second
pool-count multiplication explicitly uses the observed low-32-bit wrap before
target-int conversion. The existing allocator interface is reused and the two
pool views remain opaque. Five thousand private mutable-helper scenarios
corroborate these effects. Trial emits 252 bytes, 200/248 equal positions,
first difference +0x2C; use default GNU for this local candidate.

The signature function retains its separator lookahead quirk: a local cursor
scans ahead, while the main cursor still advances by one byte. Repeated
separators are not collapsed. Generated read scheduling remains different;
result agreement on valid terminated strings is not an exact-body proof.
Its observed 216-byte body excludes the following 16-byte tail containing
nonzero words. Trial emits 224 bytes, 81/216 equal positions, first +0x6.
Closed cursor/classification and iterator forms did not improve the retained C.

DRAW uses the integer space-count views already established by accepted boot
callers and keeps the accepted `DRAW_EndUpdate` int cache declaration. An
unsigned-cache diagnostic reproduces all 420 bytes, but conflicts with that
declaration and is not the retained boot candidate. A private declaration-only
EndUpdate control preserves its complete pinned object; reviewed cache-word
producers use an unsigned material argument and observed reads use equality.
This supports a separate type-reconciliation review, not a silent change to a
frozen interface. Trial leaves the correctly typed attempt at 416 bytes,
249/416 equal positions, first +0x62. The following zero alignment word is
excluded from the 420-byte observed body. Buffer/toggle/capacity and indirect
entry obligations remain; do not add a dead use or register hint to gain bytes.

**Boot memory-card helpers, 15 November 2026.** Four retained USA boot sources replace the
14 November trials of the same names, measured after an independent SN link at their retail
addresses under the rebuilt default GNU route, `gnu-ee-trial` and `sdk991111`, all with
`-O2 -G0` and the same GNU assembler; the three routes agree on every linked text. Trials that
kept one local copy, one pointer or a bitfield came out short: the setters lost a byte mask
that retail keeps, the header updater lost two pointer copies.

The cause is the source shape, not the compiler. Retail matches code that names the stored
object again in each statement. For the
[Dan-skin setter](../../src/boot/MEMCARD_SetDanSkinUnlocked__FUi.c) and
[widescreen setter](../../src/boot/MEMCARD_SetWideScreenToMemcard__FUi.c),
`flags &= ~BIT;` followed by `flags |= (enabled ? BIT : 0);` on the stored byte itself gives
all 36 bytes: the second statement reuses the value the first one stored, the masked value
therefore has two uses, and the byte extension between the two masks cannot be merged away.
For the [header updater](../../src/boot/MEMCARD_SetHeaderDetail__FUiUiUiUiUi.c), four
assignments that each index the header array again give all 52 bytes: the repeated address
computations become register copies that stay separate. These three were exact local witnesses;
all three were accepted on 26 November 2026. When a small accessor keeps a redundant mask, extension or register
copy, try the repeated-object form before suspecting the compiler.

The [hardcore setter](../../src/boot/MEMCARD_SetHardcoreModeBit__FUib.c) has the same
two statements and is 48 compiled bytes, 30 equal positions, first difference at byte 16. Its
mangled name carries a C++ `bool` parameter. Retail keeps a conditional move on the raw
argument; a C `int` argument turns `enabled ? 1 : 0` into a comparison result that is ORed in.
With a real `bool` parameter, the C++ front ends of three locally available SN packages
(2.9-ee-991111, 2.95.2 and ProDG 2.95.3) each produce all 48 retail bytes from those two
statements. The boot gate has no C++ route; this is the first boot body measured to need one,
and `_GLOBAL_$I$SYSTEMS_memcard_ps2.cppBRcaaa` shows the unit was C++. Superseded on 26 November
2026: the pinned C chain gives all 48 bytes when the bit is cleared in memory first and the flag
byte is read back into an `unsigned char` local (`flags &= ~1; f = flags; v = f | 1; if (!enabled)
v = f; flags = v;`), so the conditional move is on the reloaded byte; the body is accepted.

**Boot mailbox, WAD lookup and sound helpers, 16 November 2026.** Six retained USA boot sources
are exact after an independent SN link at their retail addresses under the rebuilt default GNU
route and `gnu-ee-trial` (`-O2 -G0`, default GNU assembler); a seventh stays a measured trial.
They are local witnesses, not accepted matches. Each one was a near miss or a discarded trial
until its source shape changed:

- [`MBOX_Send`](../../src/boot/MBOX_Send__FiP12HigMsgPacket.c) (accepted on 26 November 2026),
  [`MBOX_Poll`](../../nonmatching/boot/MBOX_Poll__FiPP12HigMsgPacket.c): a range test and a
  one-bit signed flag test written as two early returns lose the negation of the flag and move
  the failure return. Written as one condition, `if (index >= 16 || table[index].flag == 0)
  return error;`, the negation stays and the failure return sits in the middle of the body.
- [`MBOX_Create`](../../nonmatching/boot/MBOX_Create__FPCcUiPv.c): a signed index, a scan loop
  with an empty body and a comparison with the bound after it. The result is a signed `int`:
  a pointer or unsigned result loads the failure constant before the return instead of in its
  delay slot. The accepted caller declares a pointer result and compiles identically either way.
- [`GLOBALWAD_FindAssetsInWadBySignature`](../../nonmatching/boot/GLOBALWAD_FindAssetsInWadBySignature__FP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID.c): when retail copies an
  argument into a scratch register and loads small constants into that register only after each
  call, the source has a second variable that starts as the argument and is assigned again
  after every call, so it never lives across one.
- [`SND_FindVag`](../../nonmatching/boot/SND_FindVag__FPCc.c): a second copy of a failure
  constant at the end of the body, jumped over by the normal return, is a guard that wraps the
  whole body (`if (table != 0) { ...; return found; } return -1;`), not an early return.
- [`SND_Fixup`](../../nonmatching/boot/SND_Fixup__FUiPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER.c): the result is cleared before the call that
  precedes its real assignment, and two adjacent stores are written in the opposite order.
- [`SND_PauseAtrac`](../../nonmatching/boot/SND_PauseAtrac__Fbi.c) is still 160 compiled bytes
  against 168: retail keeps its refusal path in line and one store out of a delay slot. Fifteen
  forms of the refusal test did not change that. Its first parameter is a C++ `bool`.

The [saving query](../../nonmatching/boot/MEMCARD_Saving__Fv.c) is unchanged: retail computes
the comparison in one register and copies it to the result. About sixty C and C++ spellings of
the same test (conditional expressions, `switch`, `goto`, inline helpers, `bool`, wider or
narrower result types) give either the 48-byte form or an early-return form.
`SND_IsATRACPaused__FP13ATRACInstance` has the same extra copy. Reopen with evidence for a
second use of the comparison value or for the original helper structure.

**Retained USA boot sources, 15 November 2026.** Seven sources under
`nonmatching/boot/` reproduce their complete measured bodies in independent
SN links with rebuilt GNU tools, `-O2 -G0`: `SYSTEM_SetDepthWrite__Fb`
(240 bytes), `HIT_fread__FPvUiUiPi` (212), `TEXMGR_Initialize__Fv` (248),
`VRAM_InitGraphics__Fv` (208), `MCPFONT_RegisterFontTextures__Fv` (216),
`VEC_MakeMatFromYawPitchRoll__FP4VEC3N20fff` (208) and
`Spiral_EmitJoint__FP12Spiral_GroupPC12Spiral_Pointb` (260). The last two
need `gnu-ee-trial` for save order; the others also reproduce under the
default route. `HIT_fread` additionally needs the existing
`-mno-check-zero-division` option. These are retained, unaccepted sources;
rebuilt tools do not qualify the profile or earn C credit.

A temporary integration on master `37b245c6b` passed the complete boot gate:
847 exact objects, 498,900 exact text bytes, 809,872 exact raw load bytes and
the complete 856,120-byte ELF exact. Its 820 accepted bodies (108,824 bytes)
were unchanged. The run used `--unpinned-tools`; the temporary integration
and catalogue changes were removed from the retained-source contribution.
Requalification and semantic review remain necessary before promotion.

Useful source constraints: materializing the returned texture before
publishing it resolves `TEXMGR_Initialize`'s address lifetime; member-store
order resolves `VRAM_InitGraphics` (195/208, then 206/208, then exact).
The original font-width attempts remained different: `MCPFONT_FontStringPixelLength`
emits 216 bytes against 208, 63 equal positions in the compared prefix,
first difference +0x1C (hoisted constant and an extra saved register);
`MCP_FontStringPixelLength` emits 216/216 bytes, 202 equal positions,
first difference +0x31 (index/width register allocation). Reopen with new
evidence of those live ranges, rather than repeating the tested local forms.
`PAR_Reset__Fv` emits 232 bytes under the default route and 236 under
`gnu-ee-trial`, against 240 retail bytes; respectively 101/232 and 104/236
compared positions agree, first difference +0x21. Its next useful experiment
is recovery of the list/end-pointer representation, not a global profile change.

A bounded follow-up on 15 November retained the same `PAR_Reset` attempt:
keeping the block base live through direct field accesses and an explicit
next-block value, then two store-order forms, still emits 232/236 bytes with
first difference +0x21. Store order alone does not explain the missing body
bytes or the extra live list-head value. Do not repeat those three forms.

**Font-width resolution, 16 November 2026.** The retained
[`MCPFONT_FontStringPixelLength`](../../nonmatching/boot/MCPFONT_FontStringPixelLength__FPCcUi.c)
and [`MCP_FontStringPixelLength`](../../nonmatching/boot/MCP_FontStringPixelLength__FPCcUi.c)
now reproduce all 208 and 216 bytes, respectively, with rebuilt default GNU
and `gnu-ee-trial`, `-O2 -G0`, GNU assembly and independent SN links.
MCPFONT's authored inline equality predicate removes the loop-held comparison
constant and extra saved register, first reaching 194/208 equal positions.
The source uses ordinary equality, with no explicit XOR or register constraint;
the predicate is fully inlined and emits no extra function.

Both functions then become locally exact by separating the 16-bit stored total
from a wide per-glyph temporary. The temporary holds total + 1 (at most 65536)
across the helper calls; adding the glyph byte then narrows the final sum.
Neither local is exposed to the calls. This preserves wrapping, byte-prefix
consumption, original out-of-count reads and the reviewed helper ABI.
Allocation dumps explain the change: the wide temporary is allocated locally,
while the narrow stored total does not cross either call and can reuse its
register. The global index receives the other register. The prior single wide
accumulator left both values to global allocation, which prioritized the index
(21 weighted references over 66 instructions versus 10 over 32 for the width).
Declaration/initialization changes and equivalent loop rewrites did not fix it.

Independent checks verify actual object and linked text/FUNC sizes, exact raw
body bytes, normal resolution of the two helper references and no absolute-symbol
masks. Source and preprocessed C policy checks pass. A temporary integration
passed with 842 exact objects, all 809,872 load bytes and the complete
856,120-byte ELF exact. Both symbols were real compiled FUNC owners; all 840
baseline replacement records and 820 accepted bodies stayed unchanged. Its
mechanical audit leaves both ready for semantic review with no mechanical
reason. Metadata was archived then restored; the receipt is historical for that
restored checkout. The tools were unpinned: both sources remain in `nonmatching/`
and no qualification or accepted C credit follows.
This supersedes their earlier differing measurements, not the separate semantic
and qualification obligations. Unchanged-body C/C++ frontend checks did not
resolve either original attempt or identify the original compiler.

For `PAR_Reset`, guarding a `do/while` traversal with the initial empty-list test
still emits 232/236 bytes (default/trial), 87/90 equal positions, first difference
+0x21. A later ordinary iterator-object representation resolves the missing
sentinel lifetime. Address-based comparison examines the current and finishing
iterators, and a value-returned previous iterator snapshots the reverse link
before node reset. Combining this with the previously measured two-link-pair
reset order reproduces all 240 bytes under default GNU. `gnu-ee-trial` instead
emits 244 bytes, 191 equal positions, first difference +0x98 at loop padding.
The helpers are fully inlined list operations, with no extra observable use or
register constraint. Independent semantic review found no new regression;
4,096 private differential scenarios corroborate the preserved traversal,
self-links, free-chain rebuild and callback-visible state. Malformed lists,
arbitrary storage/capacity and indirect-entry boundaries remain open. This new
PAR candidate was not covered by the 842-object font experiment above.

A subsequent integration on 16 November includes all thirteen retained boot
candidates: the previous ten plus both font-width functions and `PAR_Reset`.
It passed with 853 exact objects, 498,900 exact text bytes, 809,872 exact load
bytes and the complete 856,120-byte ELF exact. All thirteen candidates were
attributed to real compiled FUNC symbols (2,884 body bytes), without absolute
symbol masks; the separate quaternion initializer stayed in the baseline.
All 840 previous replacement records and 820 accepted bodies stayed unchanged.
The mechanical audit leaves all thirteen ready for semantic review, with no
mechanical reason. The manifest, audit, attribution and integration patch were
archived and all temporary metadata restored. This used unpinned tools, so
qualification and promotion remain separate and no accepted C credit follows.

Two further retained boot sources reproduce their measured bodies after
independent SN links: [`dlib_displist_set_texture_state`](../../nonmatching/boot/dlib_displist_set_texture_state__FP13DLIB_DISPLISTiUlUlUlUl.c)
(204 bytes plus one zero alignment word, default GNU and `gnu-ee-trial`) and
[`AdjustDLISTSize`](../../nonmatching/boot/AdjustDLISTSize__FUiPP6QWdataPUi.c)
(240 bytes, default GNU). Both use `-O2 -G0` and the default GNU assembler;
`AdjustDLISTSize` under `gnu-ee-trial` emits 244 bytes, 113 equal positions
in the compared 240-byte prefix, first difference +0x58 in loop padding.
The buffer-size fallback, optional outputs and original count expression
are preserved. The direct boot path's capacity is corroborated below;
arbitrary inputs and local prefix types still need review.

**Buffer semantics, reviewed 15 November 2026 ([PR #274](https://github.com/OpenRAC/rac5-sm-decomp/pull/274)).** `g_dlibBufferSize` is a
one-list count N of 16-byte elements. The initializer at `0x01E93A68`
allocates 32N bytes with requested 64-byte alignment; its direct boot
initialization chain passes N=`0x16000`. The two direct cache-allocation
sites (`0x01E65DA4`, `0x01E66BA0`) request `0x200000` bytes.
`UpdateBufferCacheState` selects S=`0x6000` elements per list, leaving
exactly that cache tail in the `0x2C0000`-byte allocation, assuming
successful allocation and normal initialization. The optional count output
is nevertheless `0x260000`, overstating that tail by `0x60000`; the reviewed
caller discards it. Preserve the expression and do not describe its result
as remaining capacity. Arbitrary requests can wrap or yield S=0, which
selects the original N-sized lists. Allocation failure, alias writes and
indirect or imported use remain outside this direct-path proof.

**Texture-state storage, reviewed 15 November 2026.** All five direct boot
sites select mode 1 and pass the same four 64-bit payloads. For a well-formed
16-byte-aligned list, the helper advances its cursor by seven quadwords
(112 bytes): two framing words, four payload pairs and a reserved next-tag
slot. Six new quadwords are written; the old chain tag is separately
copied/backpatched, while the final slot is reserved without a store.
The retail stored template gives a four-pair count, but it resides in
writable data; its runtime value is not proved invariant. The helper chain
does not check capacity or previously open packet state. Valid prior tag
storage, a suitable template and caller headroom remain review obligations.
The combined nine-candidate experiment passed a fresh complete boot gate
on the same master: 849 exact objects, 498,900 exact text bytes, 809,872
exact load bytes and the full 856,120-byte ELF exact. The 820 accepted
bodies stayed unchanged. This used unpinned tools; temporary metadata
and flags were restored after archiving and no body was promoted.

[`Quat_ConvertToMatrixInternal<MATRIX4>`](../../nonmatching/boot/Quat_ConvertToMatrixInternal__H1Z7MATRIX4_PX01PC4QUAT_v.c)
is now a **local exact candidate, 15 November 2026**. Adapting the explicit
nine-product order and input snapshot already accepted in
[`LEVEL_06_119B10.c`](../../src/levels/shared/LEVEL_06_119B10.c), with its
packed MATRIX3 outputs mapped to the boot's four-float MATRIX4 stride,
reproduces 184/184 bytes on the first retry. Independent SN links under
rebuilt default GNU and `gnu-ee-trial`, `-O2 -G0`, default GNU assembler,
agree. Both objects and linked ELFs have actual 184-byte text sections and
184-byte non-absolute function symbols; no trimming, relocation or undefined
external is involved. The separately called 56-byte initializer is excluded.

The earlier retained row-order source gave 98/184 equal positions, first
difference at entry; diagonal-first stores gave 81/184, first +2, and
capturing input components alone did not change that object. Those are
superseded measurements, not a reason to alter the compiler. The new
candidate was then included in a temporary complete-boot integration with
the other nine: **850 exact objects, 498,900 exact text bytes, 809,872 exact
load bytes and the complete 856,120-byte ELF exact**. The canonical
quaternion's absolute alias was removed for that experiment; its real
compiled function symbol owns all 184 bytes, while the distinct
`func_1E77FB8` alias and following initializer stay separate. All 840 prior
replacement records and the 820 accepted bodies were unchanged. All ten
candidates passed the mechanical promotion audit as ready for semantic
review. The receipt, manifest, attribution checks and exact integration
patch were archived, then the temporary metadata and flags were restored.
This supersedes the earlier nine-candidate-only gate limit, but still uses
unpinned tools: qualification and promotion remain pending, with no C credit
added.

All four quaternion components are read before the first output store.
The internal body writes slots `0,1,2,4,5,6,8,9,10`; the accepted wrapper
fills the other seven slots, completing all sixteen floats. No normalization
occurs, and this review establishes no unit-norm input invariant. The input
snapshot permits ordinary overlap of valid readable/writable storage at the
machine level; do not invent a disjointness requirement. Storage alignment
and C object-lifetime/effective-type obligations still apply.

Before promotion, review the local prefix types and caller domains.
The seven direct `HIT_fread` callers use nonzero unit sizes, but indirect
callers and extreme size-zero callback results leave division semantics open.

**REL caller follow-up, 16 November 2026.** All 21 USA module hashes were
checked against the catalogue. Their 5,579 named symbols and 85,694 named
relocations contain no `HIT_fread__FPvUiUiPi` symbol or reference, so there
are no named imported calls whose unit-size argument can be classified.
Scans of the catalogued code found no fixed direct jump/call to the boot
entry `0x01E8C858`; aligned payload-word scans found no absolute entry
address either. The twenty numbered modules have separately placed,
accepted local copies; those are not evidence about callers of the boot
body. These bounded pre-relocation scans do not exclude split/constructed
pointers, runtime dispatch or arbitrary indirect use. The divisor-domain
hold therefore remains open; this is not proof that zero is unreachable.

The direct `VRAM_InitGraphics` caller establishes the allocator's initial
state; invalid or indirect entry states remain unproven. `Spiral_EmitJoint`
requires nonempty, sufficiently allocated point storage, whose complete
caller invariant is not yet established. Preserve the one-time font
registration flag and its failed-lookup behavior.

#### USA boot bodies of 112–444 bytes (17 November 2026)

Twenty open boot bodies of 112 to 444 bytes were attempted and are retained
under `nonmatching/boot/`. Twelve reproduce every body byte after an
independent SN link at the retail address: the three transition
`*_StartSound__Fv` bodies, `VID_InitBink__Fv`,
`MCP_FontPrintWindowSetStructDefaults`, `LIGHT_SetupLightsNearPoint`,
`HEROSKIN_Init__Fv`, `TEXMGR_SetColorIndexWithColorTo` and
`MCPTRANS_DREAM_Animate__Ff` under the rebuilt default GNU route and
`gnu-ee-trial`; `WAD_FindAssetsBySignature`, `PS2HEAP_Free__FPv` and (since
26 November) `MCPI_InitializeMcpGlobals__Fv` under the default route only.
Two more became exact on 26 November and are not yet in the gate below:
`PS2HEAP_Malloc__FUi` (both routes) and `UTIL_GS_WRITE_FIFO__FP11DLIB_GIFTAG`
(default route).
On 26 November 2026 a complete boot gate on master `ef75f8a07` with these
twelve bodies linked as provisional owners (default route,
`--unpinned-tools`) passed: 879 exact objects, `.text` and the loaded segment
exact, complete ELF exact; the 847 accepted bodies are unchanged and the
promotion audit lists the twelve as ready for semantic review. The rebuilt
tools are not hash-qualified, so nothing is promoted. A static review of the
retail boot found no direct transfer into the interior of any of the twelve
bodies; the bytes after the shorter bodies are separately called static
initializers or unreachable stack-adjustment fragments, left to the assembly
baseline. Source shapes that mattered:

- `WAD_FindAssetsBySignature`: the entry type is kept in a local that the
  loop exit tests, and the null test after the loop is made on a copy of the
  result pointer; testing the loop pointer directly merges the two exits.
- `MCPTRANS_DREAM_Animate__Ff`: a local pointer assigned only after the
  conditional block, and three adjacent stores written in the reverse of the
  retail order.
- Declarations reconciled on 25 November 2026 (master `ef75f8a07`, all still
  exact on both routes): `VID_InitBink__Fv` returns `int`, and its only direct
  caller, the retained `SND_InitScream__Fv` trial, now declares that result
  and stays 552/552; `HEROSKIN_Init__Fv` stores the byte at `+0x2E0` as
  `signed char`, as the accepted `HEROSKIN_TermSinglePlayer__Fv` does (the
  accepted `HEROSKIN_InitSinglePlayer__Fv` declares that member `int` but
  never accesses it), and places its table pointers at `+0x2D4`/`+0x2D8`
  inside the padding of the accepted layout; the three `*_StartSound__Fv`
  bodies use the callee prototypes of existing sources. The accepted
  `SND_ConstructPositionalSound` definition lists twelve parameters while its
  mangled name and accepted level callers have thirteen (two `bool`); this
  needs its own review.
- Declarations reviewed on 26 November 2026: `MCPI_InitializeMcpGlobals__Fv`
  was parked as a scheduling difference after about twenty source forms, but
  the cause was two declarations. Declaring the callee `HEROSKIN_Init__Fv`
  `void`, as its exact definition is, fixes the order of the table address
  halves (326 to 342 of 344 bytes), and the two remaining bytes were two font
  tables named one 0x10000 page too high (`D_01EEDB20`/`D_01EEDF20` instead of
  the reference symbols `FontTableNormal`/`FontTableJapanNormal`). Before
  calling a difference "scheduling", compare the linked relocation fields and
  the callee declarations with their definitions. `LIGHT_SetupLightsNearPoint`
  is now `void`, as the accepted wrapper declares it (still exact).
  `MCPTRANS_DREAM_Animate__Ff` keeps names only where existing sources or a
  callee give evidence; the other values keep their addresses.
- `UTIL_GS_WRITE_FIFO`: the GIF FIFO at `0x10006000` is a hardware register,
  written through a `volatile` quadword lvalue as accepted boot sources write
  the `0x1000xxxx` registers; that keeps the store out of the loop's delay
  slot, which the compiler then fills with the next load as retail does.
- `PS2HEAP_Malloc__FUi`: register allocation, read from the `.lreg`/`.greg`
  dumps (pass the dump flags one at a time; `-da` overflows a host buffer).
  Global allocation ranks pseudos by references (loop references count
  double) over live length. The size is rounded in place in the argument, and
  the best-fit test records a new best block in two places (first fitting
  block, then any smaller one) instead of one combined condition: the same
  instructions, but the extra references rank the chosen block above the size
  so the two take retail's saved registers. When two values swap saved
  registers, compare their priorities in `.greg` before trying more shapes.
- Remaining differences that point at the compiler rather than the source:
  `SYSTEM_UploadMatrix` needs a 128-bit zero kept in a register (`por`)
  before a quadword store, which our `cc1` always folds into the zero
  register while the `sdk991111` compiler keeps it (that compiler differs
  elsewhere in this body); `MCPFONT_DrawTextureSimpleArea` matches except its
  prologue and epilogue, where retail saves the eight saved registers and the
  register holding the tenth argument as quadwords in ascending order, with
  no 128-bit value in the body.
- `MEMCARD_ProcessClientRequests`: the handler arguments are the same in the
  merged state blocks (the request detail word for the detail handlers,
  none for the others), so differing arguments do not explain why retail keeps
  four flag tests; the flag is the existing `memcard_multiplayer_save`.
- Still open: the update counter `material_current` is compared unsigned in
  `MATERIAL_RegisterForUpdate`, while `MATERIAL_Init` declares it `int`. The
  boot program accesses that word only in these two functions, and
  `MATERIAL_Init` only stores zero, so the unsigned comparison is the only
  evidence of its type; aligning the accepted declaration changes no bytes
  but is left to review of that accepted file.

The six others stay measured trials with their remaining difference in the
header: the quadword-save prologue (`MCPFONT_DrawTextureSimpleArea`), a
128-bit zero kept in a register (`SYSTEM_UploadMatrix`), merged identical
switch states
(`MEMCARD_ProcessClientRequests`), a double comparison constant built in
integer registers by retail but loaded from memory by our output
(`MATERIAL_RegisterForUpdate`), one float register swap
(`MCPTRANS_UpdateStarStreaks`, 264 of 268 bytes under `gnu-ee-trial` since a
flag byte named one 0x10000 page too high was corrected) and division padding
(`dlib_ms_screen_matrix`: exact under `gnu-ee-trial-divpad` since
26 November once its sixteen stores follow the order the dumps require; the
default route lacks only the two nops before the division, blocker 09).

#### USA boot bodies of 164–472 bytes (26 November 2026)

Twenty further boot intervals of 264 to 496 bytes were reserved on
26 November 2026; three of them (`VEC_MultiplyMatrix4`, `MultMatrix`,
`customGsSyncPath`) are original assembly in `config/handwritten_asm.tsv`
(VU0 macro instructions) and were released without C. A fourth,
`dlib_displist_send_dma`, was released too while it was still listed; the
classification below has since removed it, so it is open C work again
(`sync` through `__builtin_rac5_sync` under `sdk991111sync`). A grouped
complete boot gate on master `ef75f8a07` (default
route with the four `gnu-ee-trial` sound bodies selected per file,
`--unpinned-tools`) linked 51 exact retained bodies of this contributor's
reserved scope as provisional owners, including the default-route ones
below and in the previous section: 918 exact objects, `.text`, the loaded
segment and the complete ELF exact, the 847 accepted bodies unchanged, and
the promotion audit lists the 51 as ready for semantic review. It does not
include the bodies exact only under a level profile, nor the two
"extra result copy" bodies. Results after independent SN links at the
retail addresses:

- Exact under the rebuilt default GNU route and `gnu-ee-trial`:
  `MODULE_LoadModule__FPCc` (400), `MODULE_StartModule__FiiPCvi` (456),
  `MCP_UpdateRCPMLoadState__Fi` (a 164-byte body at the start of a 448-byte
  interval), `SYSTEM_ActivateMicrocode__F13PS2_MICROCODE` (460) and
  `VEC_MultiplyMatrix4By3` (432). The last two are the accepted level sources
  of the same functions with their callees and data renamed to the boot
  symbols. `MODULE_LoadModule` stores the address of `lib_main__FiPPc`, which
  the reference symbol table lists as unresolved at address zero, rather than
  a null constant.
- Texture transfer helpers: `readTexPSMCT16__FiiiiiiPv` (444) and
  `writeTexPSMT8__FiiiiiiPv` (456) are exact on both routes;
  `readTexPSMCT32__FiiiiiiPv` is 372 of 408 bytes with the same instructions
  except two swapped argument registers in the inner loop. What mattered: one
  variable per swizzle step (page, offset in the page, block, offset in the
  block, column), each written as a subtraction rather than `%`, so the
  compiler moves the row terms out of the inner loop as retail does; the word
  address accumulated one term at a time (a single expression is regrouped
  and grows by eight bytes); and the last table lookup placed after the word
  address is complete.
- `RIBBON_ClearInactiveJoints` (a 240-byte body in a 384-byte interval) is
  exact under the default route with the existing per-file option
  `-mno-check-zero-division`; the iterator's node is read once into a local
  before the clearing loop. `FOG_Update__FUi` (492) is exact only under
  `gnu-ee-trial-divpad`. `BLOOM_Upsample` (444, two scheduling slots) and the
  two speck emitter updates (456 each, `-fno-gcse`, the order of a dozen
  loads and stores in one block copy) stay measured trials.
- Exact only under `gnu-ee-trial-divpad`: the three `scee::Psp::Gum`
  functions `Perspective` (416), `TexPerspective` (380) and `Ortho` (472).
  Retail pads every float division with two nops, which the default route
  does not do; compiling with the SDK assembler pinned for their accepted Gum
  siblings does not add them, so the padding comes from the compiler. With
  `FOG_Update`, `CAMERA_SetFovX`, `CAMERA_Reset` and `dlib_ms_screen_matrix`
  this makes seven boot bodies that need the division padding of the level
  profiles. `Ortho`
  needed the three reciprocals scaled in place (`ix = ix + ix;` and so on):
  being set twice moves the depth reciprocal from local to global allocation,
  which gives it retail's callee-saved register.
- The "extra result copy" class (`SND_IsATRACPaused`, 72 bytes, and
  `MEMCARD_Saving__Fv`, 52 bytes, previously four bytes short after about
  sixty forms) is exact on both routes when the result is held in a
  one-member struct of one byte. The dumps show why: with any `int`, `char`,
  `short` or enum local, the MIPS target widens the local to a full register
  and CSE merges the comparison into it; a struct local is not widened, so
  the copy from the comparison register survives as in retail. The retail
  boot shows the same comparison-then-copy only in these two bodies and in two
  others that then test the copy as a byte, which fits a one-byte C++ `bool`
  in the original. Whether this plain-C stand-in for `bool` is acceptable is a
  review question; the `int` forms (68 and 48 bytes) are the alternative.
- Declarations to reconcile in review: `MODULE_LoadModule` uses the results
  of `HIT_fseek__FPii9SEEKPARAM` and `HIT_fclose__FPi` (accepted as `void`);
  `MCP_UpdateRCPMLoadState` needs `g_level_index` signed (a signed branch on
  it), while the accepted `MCP_StartLevelModule__Fv` declares it `unsigned`.

### Original assembly classification (26 November 2026)

`config/handwritten_asm.tsv` now lists retail code by the rule OpenRAC/rac1-decomp
states in `docs/game/asm-classification.md`, which rac2-decomp and rac3-decomp
apply with `ASM_FUNC`: a report unit is original assembly when it is one routine
that holds an instruction no pinned C chain emits, or nothing but syscall
trampolines. Inline assembly is not C evidence here, so these bodies have no C
form. `tools/handwritten_asm.py` checks the table against the catalogues in CI
and, with `--retail`, each row's evidence against the retail bytes;
`tools/progress_status.py` counts the rows in a column of their own. They are
finished work but not C: neither the accepted C totals nor the ByteMatch report
count them.

Listed: **86 boot units (13,120 bytes) and 2 level shapes (596 bytes, 40
placements)**. 49 units are syscall trampolines; 17 access coprocessor 0; 13 use
128-bit MMI operations ee-gcc has no pattern for (the eight string routines,
`memchr`, `memset`, `memcmp` and two YUV converters); 8 use VU0 macro
instructions, two of them the level copies of `VEC_MultiplyMatrix4` and
`customGsSyncPath`; `iSetTimerHandler` stores `$gp` itself. 42 rows have a
relocation-masked identical twin that rac1, rac2 or rac3 keeps as handwritten
assembly, and the row names it.

Removed from the previous list:

- `isceSifSendCmd`: accepted C now covers its 60-byte body; the rest of its
  interval is unlabeled code with no such instruction.
- `dlib_displist_send_dma__FP13DLIB_DISPLISTi`: its only special instruction is
  `sync`, which `__builtin_rac5_sync` emits under `sdk991111sync`. It is open C
  work again.
- `scePadSetDmaCallback`: its `$gp` store is in the first of the two functions
  its interval holds (see below).

Left open for review rather than listed:

- Evidence in one of several functions of an interval: `StartTimerSystemTime`,
  `StartThread`, `scePadInit`, `EIntr`, `asyncPs2fioLseek` and
  `scePowerOffHandler` (one `ei` each), `YUV_16_4x2_even` (MMI in the first of
  two functions), `mixtoflat256format` (MMI in its last function) and
  `scePadSetDmaCallback`. A reviewed boundary split would let the function with
  the evidence be listed alone.
- C and trampolines, or an inline `syscall`, in one interval: `Exit`, `kputs`,
  `_InitSys`, `InitTLBFunctions`, `iWakeupThread` and `_exit`.
- 128-bit moves only (`pcpyld`, `por`): `radmemcpy`, `radmemset`,
  `radmemset16`, and 48 compiled units; ee-gcc emits these moves itself.
- `sync` only: `SYSTEM_EndFrame__FbUi`, `sceGsSetDefClear`,
  `sceSifWriteBackDCache` and four level units. rac1 lists its
  `sceSifWriteBackDCache` from the local labels in the SDK library's symbol table,
  evidence this project does not hold.
- `iGetTimerSystemTime`: rac3 keeps an identical twin as handwritten assembly, but
  its 76 bytes hold no instruction outside ee-gcc's output. List it once a reason
  is recorded.
- The five sound-state bodies with a code-1 `break` (blocker 16) remain a
  maintainer decision.

### USA level sources and call contracts (26-27 November 2026)

The source updates cover 1,796 additional placements of 104–284 bytes
(340,996 bytes by placement), carried by 1,574 new C sources.
Independent links cover every new placement and every changed accepted caller.
An additional 107 useful unaccepted C attempts were retained with measured differences
and reopening conditions in `nonmatching/levels/`.

Prototype review must distinguish file-scope declarations from calls inside a
function: `scale * func_026D08()` is an arithmetic expression, not a pointer-return
declaration. Correcting that review error releases candidates whose real float
declarations already agree. Where a declaration changes an ignored return from
`void` to `int`, recompile the caller: even an unused result can change register
allocation. `LEVEL_22:0x0D4738` needs an EE-ABI call-type cast to discard
the result while retaining the callee's correct `int` declaration; an ordinary
`(void)` expression still changes two words.

The further prototype reconciliation releases 86 independently exact placements.
The remaining 133 placements were reconciled on 27 November 2026; none of this
set remains held. GNU runtime typedefs with `__attribute__((mode(DF)))` must be
read as double precision, even when their base token is `float`: the integer-to-double
helpers already agree with their callers. The float packer and `__make_fp`
constructor return `float`; treating their result as an integer is incorrect.

The loader forwarding wrappers take a name pointer and six word arguments,
not seven 64-bit arguments. Their callers now declare those word arguments
consistently, and obsolete matching call-type casts are removed. Node wrappers
forward their three live context arguments. Entry-point float parameters are
also forwarded explicitly to the ring search and update helpers. The vector
rotation and its forwarding wrapper return `void`; their callers consume only
the output vectors. Cache lookups return the record index, and string lookups
return a pointer, with an explicit conversion where an existing caller transports
that pointer as an opaque 64-bit value.

All affected reviewed source-role controls change coherently across their family;
the source-role qualification is regenerated from the disc and the corrected C.
Every changed caller and all 133 new placements reproduce their complete retail
bodies, with no added prototype disagreement. Do not change just one member of a
control family or replace a used float/double return contract by an integer
declaration merely because the isolated body is byte-exact.

Boundary and source-method cases remain separate:

- `LEVEL_01:0x096BE0` was measured at 124 compiled bytes against a 116-byte
  inventory entry. On 27 November 2026, independent flow review established
  the complete `[0x096BE0, 0x096C5C)` loop: four internal mismatch branches
  reach its trailing back edge and delay slot. A fresh, unforced Ghidra function
  recovers all 124 bytes. The module has a direct call to its entry, no observed
  external direct or relocated entry into its interior/tail, and a separate
  called function at `0x096C60`. The intervening four zero alignment bytes are
  excluded. The unchanged retained C reproduces all 124 bytes; the old
  116-byte prefix was not a complete function. Static scans do not establish
  the absence of every possible computed indirect entry.
- `LEVEL_16:0x1167A0` produces 280 bytes for a 276-byte body. The extra alignment
  word is not accepted by widening the body. The qualified per-source
  `-malign-functions=2` option resolves the separate 252-byte
  `LEVEL_01:0x049A88` case, but does not resolve this one.
- The ordinary C attempts at `LEVEL_10:0x176738` and `LEVEL_01:0x059840`, with
  unused frame arrays removed, differ by 8 and 16 words respectively. Recover
  the original frame ownership instead of adding artificial storage.
- The ordinary typed byte-loop endpoint at `LEVEL_03:0x18C090` differs by
  11 words, first at byte 40 (0x28). Reusing an unrelated float pointer only to alter
  alias analysis is retained privately for source-method review, not credited.
