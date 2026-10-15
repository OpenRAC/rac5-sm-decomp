# Measured starting point and order of work

1. **Qualify the input (done for the supplied USA ZIP).** The complete ISO has
   the declared ISO9660 length and matches a public catalogue SHA-1. Its boot
   ELF is pinned in `config/target.json`. Keep that image as the reference;
   the earlier 150-sector-short copy is excluded.
2. **Map the programs.** The boot is an ELF32 MIPS R5900 executable with one
   loadable segment, entry `0x01E62508`, and a `.text` section at `0x01E62500`
   (size `0x79CD4`). The disc also has `LVL/FRONTEND.REL` and numbered
   `LVL/LEVEL_*.REL` files. Determine their loader, relocations and code/data
   extents from this game's evidence; do not reuse RAC2's WAD layout.
3. **Establish an assembly baseline.** Split the verified boot and level
   programs into local ignored `asm/` and `build/` outputs, then rebuild and
   compare complete loaded bytes. Record the exact assembler/linker used.
4. **Identify compiler profiles.** Measure signatures on code and SDK-library
   ranges. Do not copy RAC2's `sdk` or game compiler routing without witness
   functions and baseline controls.
5. **Catalogue functions.** Generate names, boundaries, sizes and placements
   from the verified programs. Commit metadata only; review uncertain splits.
6. **Start plain-C matching.** Replace an assembly marker with one C definition,
   check every placement, and count it only after the full-program byte gate.

The initial tools implement step 1 and boot metadata inspection. Steps 2–6 are
not claimed complete by this repository's creation.
