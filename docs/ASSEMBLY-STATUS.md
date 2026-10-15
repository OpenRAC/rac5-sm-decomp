# Assembly reconstruction status

The complete pinned USA boot **`.text` section** at `0x01E62500`, size
`0x79CD4` (498,900 bytes), has been rebuilt from private R5900 assembly and
compared byte for byte with the retail ELF: **498,900 / 498,900 bytes equal**.
The linked candidate `.text` SHA-256 is
`8dab904fd9dd57e1c3774c92b07fe0872445a99775e85dc62229e857a1a6830c`.
This expands the earlier 160-byte `MCP_LoadLevelModule__Fi` witness; it is
still an assembly baseline, **not** an authored C/C++ match.

The tool also copies the pinned boot's `.data`, `.sndata`, `.rodata` and
`.gcc_except_table` into **ignored local assembly**, links them at their
measured addresses, and reconstructs the zero-filled alignment gaps. The
byte sequence reconstructed from those linked sections matches all
**809,872 / 809,872 file-backed PT_LOAD bytes** of the original segment,
SHA-256
`4f4fb8fe218317dbd7a2f65ca4e64934d743d03e673dbd75220937cfc6fd47fb`.
Those non-code sections are copied reference bytes, not independently
decompiled source.

[`tools/boot_assembly.py`](../tools/boot_assembly.py) verifies the pinned boot
hash, decodes all 124,725 text words with optional `rabbitizer 1.16.2` in
R5900 mode, writes all game-derived source only under ignored
`build/boot-assembly/`, and assembles and links it at the measured addresses.
The local SN
`Ps2EeAs.exe` version `1.8.19.316` has SHA-256
`c839dd63facabe7b76573c114056be61eaa7b3aa2329dd546930ab8f98898c76`;
SN `ld.exe` version `2.9-ee-991111` has SHA-256
`80f3724a63ce3c77c8b00d075f5c49448636518700ae251e5d6a6c809bbf5f48`.
The tool checks both hashes before running either binary. No game-derived
assembly, ELF, object, disc image or proprietary tool is distributed.

Two measured decoder/assembler differences need explicit handling:

- `rabbitizer` does not name 50 R5900 two-register `sqrt.s` instructions;
  their exact encoding is mapped to `sqrt.s` mnemonics. A two-instruction
  local assembler probe confirmed the encoding, and the complete text
  comparison checks all 50 in place.
- SN's assembler inserts a retail-absent hazard `nop` before six COP1
  branches immediately following floating-point comparisons. Those six
  branches are emitted as exact `.word` values in the **ignored private
  assembly**. The other 124,719 words are emitted as instruction mnemonics.
  Without this narrow fallback, the linked `.text` is 24 bytes too long and
  fails the byte comparison. This does not change the shared assembler or any
  C compiler.

On Windows, with your own verified USA boot and locally available measured
tools, install optional `rabbitizer==1.16.2` in a Python environment and run:

```sh
python tools/boot_assembly.py baserom/SCUS_976.15 \
  --assembler /path/to/Ps2EeAs.exe --linker /path/to/ld.exe
```

The BSS and live runtime memory have **not** been compared, and none of the
21 SNR2 modules has a **complete** assembly baseline. The exact file-backed boot image is
not proof that the game's non-code data was independently reconstructed.
Complete runtime and level-program baselines, plus a qualified compiler
profile, remain prerequisites for a full-program C/C++ replacement check; no
ByteMatch progress is claimed from this assembly result.

The first module interval has since been tested separately: the candidate
`FRONTEND.REL` code region at offsets `0x80`–`0x27D00` reassembles
**162,944 / 162,944 bytes** from private mnemonics. Its jump sites agree
exactly with both SNR2 relocation sources
([frontend evidence](FRONTEND-ASSEMBLY.md)). This is not yet the whole REL
assembly baseline.

`LEVEL_01.REL` now has a separate, much larger candidate code interval at
`0x80`–`0x1EF180`: **2,027,776 / 2,027,776 bytes** reassemble exactly,
with complete local and named jump-site correspondence
([level 01 evidence](LEVEL-01-ASSEMBLY.md)). Neither result rebuilds a
complete REL. The same guarded procedure has since reproduced candidate
code intervals for **all 21 SNR2 placements**
([campaign evidence](SNR2-ASSEMBLY-CAMPAIGN.md)). Those bytes are counted by
placement, not as unique code or C progress.

A [provisional C integration witness](BOOT-C-WITNESS.md) has also replaced
the 16-byte boot body `MEMCARD_Busy__Fv` with a linked GNU EE C object while
preserving the entire boot `.text` and logical file-backed load image. It is
still under `nonmatching/` because the remaining compiler, ELF layout,
catalogue and runtime gates have not been completed.
