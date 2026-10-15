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
   (`docs/MULTIWORLD-CROSSCHECK.md`).
   The boot loader's two relocation sources and all 21 packed local-fixup
   streams are now mapped (`docs/REL-FORMAT.md`). The complete loaded file
   bytes for the frontend and level 01 have been reproduced and compared
   directly to EE memory before constructors (`docs/RELOCATED-IMAGE.md`).
   A candidate frontend code boundary at `0x27D00` is backed by exact jump
   relocation-site sets (`docs/FRONTEND-ASSEMBLY.md`). Level 01 also has a
   candidate code boundary at `0x1EF180` backed by both relocation sets
   (`docs/LEVEL-01-ASSEMBLY.md`). Compare the other 19 modules and establish
   their code/data extents; do not reuse RAC2's WAD layout.
3. **Establish an assembly baseline (in progress).** The entire 498,900-byte
   boot `.text` section now reassembles exactly with a measured local SN
   assembler/linker combination (`docs/ASSEMBLY-STATUS.md`). Copying the
   pinned non-code sections into ignored local assembly also reproduces all
   809,872 file-backed boot load bytes. Candidate code intervals in the
   frontend (162,944 bytes) and level 01 (2,027,776 bytes) also reassemble
   exactly; their remaining bytes and the other 19 SNR2 modules still need
   assembly baselines. Verify BSS/runtime behavior
   before calling this a full-program baseline. Non-code copying is not
   decompilation.
4. **Identify compiler profiles.** Mangled C++ exports and ProDG SNR2 modules
   are evidence, not a compiler version (`docs/COMPILER-STATUS.md`). Measure
   signatures on code and SDK-library ranges. Do not copy RAC2's `sdk` or game
   compiler routing without witness functions and baseline controls.
5. **Catalogue functions.** Generate names, boundaries, sizes and placements
   from the verified programs. Commit metadata only; review uncertain splits.
6. **Start C/C++ matching.** Replace an assembly marker with one definition
   under the qualified profile, check every placement, and count it only after
   the full-program byte gate.

The tools complete step 1, the SNR2 metadata part of step 2, and the boot's
file-backed assembly/load-image part of step 3. Runtime and level-program
baselines, compiler qualification and matching C/C++ remain open.
