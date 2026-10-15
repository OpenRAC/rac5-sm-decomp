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
   Candidate code intervals for all 21 placements are backed by exact
   jump-relocation site sets and private assembly comparisons
   (`docs/SNR2-ASSEMBLY-CAMPAIGN.md`). Further review of their boundaries,
   data layout and runtime behavior remains necessary; do not reuse RAC2's
   WAD layout.
3. **Establish an assembly baseline (in progress).** The entire 498,900-byte
   boot `.text` section now reassembles exactly with a measured local SN
   assembler/linker combination (`docs/ASSEMBLY-STATUS.md`). Copying the
   pinned non-code sections into ignored local assembly also reproduces all
   809,872 file-backed boot load bytes. Candidate code intervals in all 21
   SNR2 placements also reassemble exactly (36,341,888 cumulative bytes by
   placement), but their remaining bytes are not independent assembly
   baselines. Verify BSS/runtime behavior
   before calling this a full-program baseline. Non-code copying is not
   decompilation.
4. **Identify compiler profiles.** Mangled C++ exports and ProDG SNR2 modules
   are evidence, not a compiler version (`docs/COMPILER-STATUS.md`). Measure
   signatures on code and SDK-library ranges. Do not copy RAC2's `sdk` or game
   compiler routing without witness functions and baseline controls. One
   [boot C-object integration witness](BOOT-C-WITNESS.md) preserves all
   raw retail `PT_LOAD` bytes and header. A combined trial now preserves them
   with sixteen C functions linked together (`docs/BOOT-C-WITNESS.md`), but does
   not yet qualify the compiler, whole-file identity, or runtime behavior.
   The [VU overlay audit](DVP-OVERLAYS.md) privately reproduces the 31 DVP
   sections while preserving the exact load segment; the full ELF and PCSX2
   executable CRC still differ.
5. **Catalogue functions.** The boot now has generated next-label bounds for
   1,315 distinct code addresses (`config/boot/code_intervals.tsv`). They are
   search limits, not validated function sizes. Sixteen linked C witnesses now
   also have verified candidate body/padding extents
   (`config/boot/witness_boundaries.tsv`). Review remaining boundaries,
   padding, aliases and placements before producing a retail function
   catalogue; commit metadata only.
6. **Start C/C++ matching.** Replace an assembly marker with one definition
   under the qualified profile, check every placement, and count it only after
   the full-program byte gate.

The tools complete step 1, the SNR2 metadata part of step 2, and the boot's
file-backed assembly/load-image part of step 3. Runtime and level-program
baselines, compiler qualification and matching C/C++ remain open.
