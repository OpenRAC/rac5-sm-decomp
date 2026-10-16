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

Independently authored C candidates now reproduce **11,252 boot `.text` bytes**
across several code areas with one locally reconstructed GNU EE chain and
`-O2 -G0` ([witness evidence](COMPILER-WITNESSES.md)).
All of them link together into the complete boot text while preserving the
retail raw `PT_LOAD` bytes and program header
([combined witness](BOOT-C-WITNESS.md#combined-provisional-c-witness)); the
generated `config/boot/witness_boundaries.tsv` catalogue lists each linked body
with its compiled extent, its following zero alignment and the kind of control
transfer it ends in. The reviewed `MEMCARD_Busy__Fv` placement is in
`src/boot/`; the other bodies remain in `nonmatching/` pending their own
acceptance reviews.
The [boot gate](BOOT-TRIAL-GATE.md) pins the isolated compiler identity,
rebuilds all 395 objects from authored C and checks that full link in one run;
its machine-readable report accepts one 16-byte boot-only match after passing.
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
for one reviewed placement and one
[RAC5-only patch](../tools/compiler/patches/0001-rac5-short-loop-six.patch).
It has no general `config/cflags.txt` or game-wide C/C++ percentage.

To expand this beyond the accepted boot placement, establish complete
assembly and loaded-program baselines for the applicable level modules, then
compare candidate C++/C toolchains and flags with independent functions and
controls across code families. A local slice alone does not qualify a match.
The [boot-only scope](BOOT-MATCH-SCOPE.md) records the accepted criterion,
exact packaged ELF and remaining source/runtime limitations.
For level modules, a separate
[narrow shared-function trial](LEVEL-C-WITNESS.md) now verifies one 8-byte
function at all twenty numbered placements, with a 24-byte level 01 and
12-byte frontend control. It does not qualify a general level compiler.
