# Compiler evidence, without a qualified profile

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

Twenty independently authored C candidates now reproduce 648 boot `.text` bytes
across several code areas with one locally reconstructed GNU EE chain and
`-O2 -G0` ([witness evidence](COMPILER-WITNESSES.md)). They remain in
`nonmatching/` because the full-program baseline and compiler profile are
not qualified; this adds no counted matches.
All twenty now also link together into the complete boot text while preserving
the retail raw `PT_LOAD` bytes and program header
([combined witness](BOOT-C-WITNESS.md#combined-provisional-c-witness)).
The [boot trial gate](BOOT-TRIAL-GATE.md) pins the isolated compiler identity,
rebuilds all 17 objects from authored C and checks that full link in one run;
its machine-readable report remains provisional with zero counted matches.
The original trial compiler missed the `FOG_PreUpdate__Fv` loop by one extra
`nop`. An [isolated RAC5 short-loop threshold trial](COMPILER-LOOP-TRIAL.md)
now reproduces that function while leaving all earlier object hashes unchanged.
An independent string-length loop matches at two boot addresses, and a
third short loop with an unfilled branch delay now matches in
`GLOBALWAD_ReleaseTransitionBank__Fv` under the same threshold
([loop evidence](COMPILER-LOOP-TRIAL.md)). Further loop lengths and source
families still need controls before qualifying the compiler profile.

In particular, RAC2's reconstructed GNU EE-GCC game profile and its Sony SDK
profile have **not** been qualified for Size Matters. The repository now has
a [provisional boot compiler trial](../config/boot/compiler_trial.json) and one
[RAC5-only patch](../tools/compiler/patches/0001-rac5-short-loop-six.patch),
but no qualified `config/cflags.txt` or C/C++ match count.

To qualify one, first establish a byte-identical assembly baseline for the
verified boot and loaded level programs. Then use independently reconstructed
witness functions to compare candidate C++/C toolchains and flags against the
game bytes, with controls across several code families. Only a profile that
preserves the complete-program baseline can be used to count C/C++ matches.
