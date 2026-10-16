# Compiler evidence and a limited boot-only profile

The boot executable is an ELF32 MIPS R5900 image with one loadable segment,
`.text` at `0x01E62500`, entry `0x01E62508` and `$gp = 0x01F300F0` in its
`.reginfo` section. It contains `.sndata` and `.gcc_except_table` sections.
The SNR2 level modules expose the mangled symbol
`lib_main__FiPPc`; several imports have C++-style mangled names. Together with
the SNR2 packaging, this is evidence of C++ and SN ProDG tooling in the
programs. It does **not** identify the exact compiler executable, version,
flags or assembler for each source unit.
The boot also retains 1,803 names in its embedded SNR2 table
([`BOOT-SYMBOLS.md`](BOOT-SYMBOLS.md)); names and address ranges are useful
for selecting witnesses but do not prove a compiler profile.

The current catalogue records **14,936 boot `.text` bytes in 351 C bodies**
across several code areas with one locally reconstructed GNU EE chain and
`-O2 -G0` ([witness evidence](COMPILER-WITNESSES.md)).
All of them link together into the complete boot text while preserving the
retail raw `PT_LOAD` bytes and program header
([combined witness](BOOT-C-WITNESS.md#combined-provisional-c-witness)); the
generated `config/boot/witness_boundaries.tsv` catalogue lists each linked body
with its compiled extent, its following zero alignment and the kind of control
transfer it ends in. Thirty-one reviewed placements (1,064 bytes, starting with
`MEMCARD_Busy__Fv`) are in `src/boot/`; the other bodies remain in
`nonmatching/` pending their own acceptance reviews.
The [boot gate](BOOT-TRIAL-GATE.md) pins the isolated compiler identity,
rebuilds all 406 objects from authored C and checks that full link in one run;
its machine-readable report accepts 31 boot-only placements (1,064 bytes) after
passing, each from its own owned compiled range.
The original trial compiler missed the `FOG_PreUpdate__Fv` loop by one extra
`nop`. An [isolated RAC5 short-loop threshold trial](COMPILER-LOOP-TRIAL.md)
now reproduces that function while leaving all earlier object hashes unchanged.
An independent string-length loop matches at two boot addresses, and a
third short loop with an unfilled branch delay now matches in
`GLOBALWAD_ReleaseTransitionBank__Fv` under the same threshold
([loop evidence](COMPILER-LOOP-TRIAL.md)). Further loop lengths and source
families still need controls before qualifying a general compiler profile.

In particular, RAC2's reconstructed GNU EE-GCC game profile and its Sony SDK
profile have **not** been qualified for Size Matters. The repository now has
a [boot-only compiler profile](../config/boot/compiler_trial.json) accepted
for its 31 reviewed placements and one
[RAC5-only patch](../tools/compiler/patches/0001-rac5-short-loop-six.patch).
Its per-source options live in
[`config/cflags.txt`](../config/cflags.txt); it is not a game-wide C/C++
qualification and publishes no game-wide percentage.

To expand this beyond the accepted boot placements, establish complete
assembly and loaded-program baselines for the applicable level modules, then
compare candidate C++/C toolchains and flags with independent functions and
controls across code families. A local slice alone does not qualify a match.
The [boot-only scope](BOOT-MATCH-SCOPE.md) records the accepted criterion,
exact packaged ELF and remaining source/runtime limitations.
For level modules, a separate
[narrow shared-function trial](LEVEL-C-WITNESS.md) now verifies two functions
(8 and 72 bytes) at all twenty numbered placements, with a 24-byte level 01 and
12-byte frontend control. It does not qualify a general level compiler.

## Changing a compiler profile

A compiler-source patch is not an instruction patch or an artificial C shape.
Before changing tools or flags, identify the first mismatch and explain why it
comes from code generation rather than the recovered ABI, types or source. Record
the public source, patch provenance and intended affected family in the PR.

Keep the previous qualified tool/profile and its known-good C/object controls
privately. Compare old and proposed outputs across the affected families, then
recompile every affected accepted body and rerun its complete-program gates at
all placements. Confirm that altered tools, flags, source pins and missing C
substitutions are rejected. Only then update the reviewed profile and generated
status. Do not pick a compiler or a one-function option merely because it raises
a similarity score, and never change emitted instructions to pass a gate.

An option measured for one source file belongs in
[`config/cflags.txt`](../config/cflags.txt), not in the campaign profile: the
profile keeps its global flags, so the objects of every other file stay pinned
and need no requalification. `tools/cflags.py` owns that file and rejects a
missing, duplicated or non-campaign path; `compile_boot_trial.py` and
`level_c_gate.py` apply the entries they compile, and the complete-gate receipt
is bound to the file's bytes.

Qualification is scoped evidence, not a claim that this is the original compiler
or that all future functions are supported. A failed control invalidates the
proposed expansion; retain the previous accepted profile until repaired.

## Measured limits of the pinned trial profile (2026-10-16)

A second authoring pass over boot bodies of **65-160 bytes** (282 targets, after
setting aside 22 handwritten-assembly ranges that no C source can supply) added
110 more byte-exact intermediate bodies, and measured the following limits. Each
one is a first-mismatch classification with a source-level cause, so a future
profile change can be justified and controlled under the rules above. None of
them is a claim that the pinned profile is wrong for the bodies it already
reproduces.

1. **R5900 register-save stride.** The pinned `cc1` carries the RAC2
   neutralisation `if (0 && TARGET_MIPS5900) mips_reg_mode[0] = TImode;`
   (`config/mips/mips.c`). `GET_MODE_SIZE(mips_reg_mode[0])` is the save-slot
   stride used by `compute_frame_size` and `save_restore_insns`, so the pinned
   chain allocates 8-byte callee-saved slots where retail uses 16-byte ones
   (`sq $s0,0x10($sp)` or `sd $s1,0x10($sp)` beside `sd $ra,0x0($sp)`). The
   detector is "two or more `$sp` saves at offsets that are multiples of 0x10";
   looking only for `sq`/`lq` misses about half of them. **155 of the 304
   candidates in the 65-160 byte range** are affected. Both conventions coexist
   in the retail binary: `0x01E94128-0x01E95CB0` (dlib, sound) uses 8-byte
   slots and matches the pinned chain, while `0x01ECF000-0x01EDA400` (Sony
   prebuilt, libgcc, C++ runtime) and the EH tables use 16-byte slots. A body
   like `sceCdSyncS` reproduces **96 of 108 bytes with an instruction-identical
   body**, differing only in the prologue and epilogue. Any change here needs a
   per-file opt-in, because a global switch would break the bodies that already
   match with 8-byte slots.
2. **Zero-division guard — measured lever, option retained per source.** The
   pinned chain always emits `beql $rt,$zero ; break 0,7` before `div`
   (`mips.md`, `divmodsi4`, under `!TARGET_NO_CHECK_ZERO_DIV`); a sweep of the
   retail `.text` finds **104 of its 111** `div`/`divu` sites unguarded, so the
   retail build used `-mno-check-zero-division`. The option is carried by one
   `config/cflags.txt` entry for
   `nonmatching/boot/dlib_displist_direct_end__FP13DLIB_DISPLIST.c`, the first
   dividing retail body recovered under it. Controls: compiling every campaign
   object with and without the flag gives identical SHA-256 (no pre-existing
   object contains a division, so no pinned object moves), and that body is
   128 bytes and byte-exact only **with** the flag — without it the chain emits
   the 2-instruction guard, the object is 136 bytes, and the trial compiler
   refuses it against its pinned object hash. The requalified gate links the
   406 objects and 351 bodies into the same complete 856,120-byte boot.
3. **Sibling calls.** Retail emits a direct `j` for some tail calls; the pinned
   chain never does (the reconstructed sources comment the option out as
   "retail behaviour" for RAC2). A measured set of bodies ends in an
   unguarded `j`.

Non-profile limits, recorded for triage rather than for a profile change: bodies
whose jump table lives in `.rodata` cannot be checked by the per-body harness
(which places `.text` only); `va_start` from a wrapper needs the two lines of
`gcc/ginclude/stdarg.h` copied in, and the pinned `cpp` has no include path; the
retail lays forwarded stack arguments at 8-byte intervals where the pinned chain
uses 4; and one unlabelled fragment of neighbouring code may follow a compiled
body inside its next-label interval, which the catalogue records as an
uncatalogued span rather than as part of the body.

A span whose compiled object exposes no function symbol in the linked image is
reported by the catalogue tool and left uncatalogued rather than counted; 55 of
the 406 spans are in that state today, and the complete-program gate still
checks their bytes. They are the owners whose name is also listed in
`LINKER_SYMBOLS` (`tools/boot_c_campaign.py`): the linker script definition is
absolute, so the linked image keeps the address but exposes no function symbol
for the catalogue. `dlib_displist_direct_end__FP13DLIB_DISPLIST` reproduced that
state and lost it again when its `LINKER_SYMBOLS` line was dropped, which is
what placed it in the catalogue. Relabelling the remaining 55, and confirming
that none of them is referenced only through that absolute definition, is open
work.
