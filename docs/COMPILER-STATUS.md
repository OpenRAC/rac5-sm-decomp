# Compiler evidence, without a qualified profile

The boot executable is an ELF32 MIPS R5900 image with one loadable segment,
`.text` at `0x01E62500`, entry `0x01E62508` and `$gp = 0x01F300F0` in its
`.reginfo` section. It contains `.sndata` and `.gcc_except_table` sections.
The SNR2 level modules expose the mangled symbol
`lib_main__FiPPc`; several imports have C++-style mangled names. Together with
the SNR2 packaging, this is evidence of C++ and SN ProDG tooling in the
programs. It does **not** identify the exact compiler executable, version,
flags or assembler for each source unit.

In particular, RAC2's reconstructed GNU EE-GCC game profile and its Sony SDK
profile have **not** been qualified for Size Matters. The project has no
`config/cflags.txt`, C/C++ match count, or compiler patch stack yet.

To qualify one, first establish a byte-identical assembly baseline for the
verified boot and loaded level programs. Then use independently reconstructed
witness functions to compare candidate C++/C toolchains and flags against the
game bytes, with controls across several code families. Only a profile that
preserves the complete-program baseline can be used to count C/C++ matches.
