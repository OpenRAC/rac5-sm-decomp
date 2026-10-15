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

Eleven independently authored C candidates now reproduce 280 boot `.text` bytes
across several code areas with one locally reconstructed GNU EE chain and
`-O2 -G0` ([witness evidence](COMPILER-WITNESSES.md)). They remain in
`nonmatching/` because the full-program baseline and compiler profile are
not qualified; this adds no counted matches.
The same candidate misses the `FOG_PreUpdate__Fv` loop by one `nop` before
its backward branch, a concrete counterexample to treating the trial chain
as qualified.

In particular, RAC2's reconstructed GNU EE-GCC game profile and its Sony SDK
profile have **not** been qualified for Size Matters. The project has no
`config/cflags.txt`, C/C++ match count, or compiler patch stack yet.

To qualify one, first establish a byte-identical assembly baseline for the
verified boot and loaded level programs. Then use independently reconstructed
witness functions to compare candidate C++/C toolchains and flags against the
game bytes, with controls across several code families. Only a profile that
preserves the complete-program baseline can be used to count C/C++ matches.
