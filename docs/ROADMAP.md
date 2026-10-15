# Measured starting point and order of work

1. **Qualify the input (done for the supplied USA ZIP).** The complete ISO has
   the declared ISO9660 length and matches a public catalogue SHA-1. Its boot
   ELF is pinned in `config/target.json`. Keep that image as the reference;
   the earlier 150-sector-short copy is excluded.
2. **Map the programs (in progress).** The boot is an ELF32 MIPS R5900 executable with one
   loadable segment, entry `0x01E62508`, and a `.text` section at `0x01E62500`
   (size `0x79CD4`). The disc also has `LVL/FRONTEND.REL` and numbered
   `LVL/LEVEL_*.REL` files. Their SNR2 headers, relocation tables and exported
   symbols have been checked across all 21 modules (`docs/REL-FORMAT.md`).
   The boot's embedded SNR2 table provides 1,803 named symbols
   (`docs/BOOT-SYMBOLS.md`).
   A metadata-only comparison with MultiworldGG's USA PS2 runtime map confirms
   several boot globals and the 12-word loader-site signature
   (`docs/MULTIWORLD-CROSSCHECK.md`); per-level runtime placement is still open.
   Determine the loader's placement and relocation semantics and the code/data
   extents; do not reuse RAC2's WAD layout.
3. **Establish an assembly baseline.** Split the verified boot and level
   programs into local ignored `asm/` and `build/` outputs, then rebuild and
   compare complete loaded bytes. Record the exact assembler/linker used.
4. **Identify compiler profiles.** Mangled C++ exports and ProDG SNR2 modules
   are evidence, not a compiler version (`docs/COMPILER-STATUS.md`). Measure
   signatures on code and SDK-library ranges. Do not copy RAC2's `sdk` or game
   compiler routing without witness functions and baseline controls.
5. **Catalogue functions.** Generate names, boundaries, sizes and placements
   from the verified programs. Commit metadata only; review uncertain splits.
6. **Start C/C++ matching.** Replace an assembly marker with one definition
   under the qualified profile, check every placement, and count it only after
   the full-program byte gate.

The tools complete step 1 and the SNR2 metadata part of step 2. The remaining
loader semantics, assembly baseline, compiler qualification and matching C/C++
are not claimed complete.
