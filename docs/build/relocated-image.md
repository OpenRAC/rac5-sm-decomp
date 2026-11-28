# Local SNR2 relocated-image baseline

[`tools/relocate.py`](../../tools/relocate.py) applies the **pinned USA boot
loader's** SNR2 pointer adjustments, symbol resolution, packed local fixups
and named-symbol relocations to a personally supplied `LVL/*.REL` module. It
uses Python's standard library, verifies the complete disc and boot hashes,
and writes the resulting **game-derived bytes only under ignored `build/`**.
Nothing in that output belongs in Git or a pull request.

Supply the module base measured in your own run; it is not a permanent
address. These commands reproduce the three measured baselines:

```sh
python tools/relocate.py baserom/SCUS_976.15.iso FRONTEND.REL --base 0xF97B80
python tools/relocate.py baserom/SCUS_976.15.iso LEVEL_01.REL --base 0xD4B380
python tools/relocate.py baserom/SCUS_976.15.iso LEVEL_20.REL --base 0xF72B80
```

An existing output with different bytes is refused rather than overwritten.
The tool reports unresolved external symbol names; the frontend's
`PAUSEMODE_GetCurrentPauseScreen__Fv` resolves to zero in the measured run.
Other modules may need symbols from another loaded module, so a produced file
alone does **not** prove runtime equality.

As a format check, the tool processed all 21 pinned modules at a synthetic
128-byte-aligned base of `0x01000000` without a parser or relocation error.
Only the frontend reported a missing external name. This synthetic check
provides format coverage for all 21 modules.

## What was verified

In runs of the pinned USA disc (CRC `8661F7BA`), PCSX2 was stopped at boot
address `0x01E9BBA4`, immediately after `snDllLoaded` relocated the module
and **before its constructor call**. The frontend and level 01 measurements
used PCSX2 `d75a0ad` and obtained the base from the `modules` table and the
`s2` register. The multiplayer lobby measurement on 28 November 2026 used
PCSX2 2.8.2 with OpenPS2BIOS 0.5. It obtained the base from `s2` and read EE
main memory from the save state at the breakpoint. Each comparison covered
the entire file in 4,096-byte chunks, including the final partial chunk.

| Module | Observed base | Bytes compared | Matching chunks | Reconstructed SHA-256 |
| --- | ---: | ---: | ---: | --- |
| `FRONTEND.REL` | `0x00F97B80` | 2,052,794 | 502 / 502 | `9d97396dbc8dca5d26b139d303fefdc9a7001eadb308a819bf49fb35f545d6d6` |
| `LEVEL_01.REL` | `0x00D4B380` | 3,901,822 | 953 / 953 | `a64703fde6edcd09007421bcc93a17fc02929477f6f07f5918d468db6aed3407` |
| `LEVEL_20.REL` | `0x00F72B80` | 2,204,815 | 539 / 539 | `eeb305b009b653be9cfb96ff4a2a427c82c8139dab91cbeacedc6c0ae81a7764` |

The direct comparisons found **zero differing bytes**. The level 01 test
exposed the named relocation's 24-bit symbol index: 17 final pointer sites
refer to symbols numbered 256 or higher. The pinned boot reads the full
index, not just its low byte ([format notes](rel-format.md)). All named
imports resolved in the lobby reconstruction. No instruction listings, retail
executables, relocated images or RAM dumps are committed.

This establishes the **loader output** for three modules at the measured
bases. The remaining 18 module placements still need runtime comparison. See the
[roadmap](../contributing/roadmap.md) for the next gates.

Later [frontend](frontend-assembly.md) and
[level 01](level-01-assembly.md) assembly experiments rebuilt candidate
pre-relocation code intervals byte for byte. They did not repeat runtime
memory comparisons or establish complete REL assembly builds.
The later [21-placement campaign](snr2-assembly-intervals.md) extends this
pre-relocation interval check to the other modules; it does not extend the
paused-memory evidence.
The [shared level C gate](../gates/level-c-witness.md) preserves the measured
frontend and level 01 hashes after C integration. The level 20 comparison
provides an independent loader reference for a future gate comparison.
