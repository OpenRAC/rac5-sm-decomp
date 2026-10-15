# Assembly reconstruction status

One **boot-function witness**, not the complete assembly baseline, has been
reassembled and compared with the pinned USA executable. The witness is
`MCP_LoadLevelModule__Fi` at `0x01E672E0`, spanning `0xA0` (160) bytes up to
the next named function at `0x01E67380`.

The local experiment extracted those bytes from the verified boot `.text`
section, disassembled them as little-endian R5900 instructions with
`spimdisasm 1.42.4`, and assembled **instruction mnemonics throughout** with
SN `Ps2EeAs.exe` version `1.8.19.316` (SHA-256
`c839dd63facabe7b76573c114056be61eaa7b3aa2329dd546930ab8f98898c76`).
Its three external call targets and three referenced addresses were resolved
at their pinned boot values using SN `ld.exe` version `2.9-ee-991111`
(SHA-256 `80f3724a63ce3c77c8b00d075f5c49448636518700ae251e5d6a6c809bbf5f48`).
The linked `.text` section was placed at `0x01E672E0` and matched the retail
function **160 / 160 bytes**, with zero differences. No raw instruction words
or game-derived assembly are distributed in this repository.

This independently verifies that this local assembler/linker combination can
reproduce **one** RAC5 function. It does not identify the original compiler,
qualify C/C++ flags, cover the full boot or any level module, or justify
counting a matched function: the witness is still game-derived assembly, not
authored C/C++. The next gate is to generate private assembly for the whole
boot and loaded modules, link it, and compare every loaded byte with the
pinned references. See the [roadmap](ROADMAP.md).
