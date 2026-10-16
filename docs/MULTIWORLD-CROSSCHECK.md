# Cross-check against the public Size Matters PS2 address map

This is a **metadata-only** comparison of our pinned USA boot executable
(`SCUS_976.15`, SHA-256 in `config/target.json`) with the public
[MultiworldGG Size Matters address map](https://github.com/MultiworldGG/MultiworldGG/blob/c3a271b329e39e795a97927b7c155dc27511b101/worlds/rac_size_matters/core/address_maps/us_addresses.py)
and its [loader gate](https://github.com/MultiworldGG/MultiworldGG/blob/c3a271b329e39e795a97927b7c155dc27511b101/worlds/rac_size_matters/core/patches/loader_gate.py),
at upstream commit `c3a271b329e39e795a97927b7c155dc27511b101`.
No third-party code or game bytes are imported.

| MultiworldGG USA address | Its role | Local independent evidence | Status |
| --- | --- | --- | --- |
| `0x01EDDAB8` | loader state | Boot `.sndata` names it `g_substate`, in `.data`. | Exact address/name correspondence; behavior still needs a trace. |
| `0x01EDDAD4` | transition gate | Boot name `g_FadeLevel`, in `.data`. | Exact correspondence. |
| `0x01EDDAE4` | target/loading planet | Boot name `g_LevelToLaunch`, in `.data`. | Exact correspondence. |
| `0x01EDDAE8` | load thread | Boot name `g_GameLoadThread`, in `.data`. | Exact correspondence. |
| `0x01FBE750` | loaded-module table | Boot name `modules`, in `.bss`. | Exact correspondence; entry stride and fields are not verified here. |
| `0x01F4A744` | new-planet start load | Four bytes after boot name `g_McpGlobals` (`0x01F4A740`), in `.bss`. | Offset correspondence only; field meaning unverified. |
| `0x01F4C768`–`0x01F4C770` | bolt count/current planet/load request | Inside boot `.bss`, without individual names in the exported table. | Address range only; meanings unverified locally. |
| `0x00F805C0`, `0x00F80E2C` | Pokitaru player state/health | Outside boot ELF sections. | Likely resident level memory; no static REL-to-RAM mapping has been established. |

The loader-gate source also records a 12-word signature at `0x01E66400`,
including the instruction at `0x01E66414` (`0x24040005`). Reading the pinned
boot's `.text` bytes through its ELF section offset shows **all 12 words
agree exactly**. This confirms that this specific MultiworldGG USA loader site
applies to our boot. It does not validate the gate's runtime behavior or the
rest of the address map. The `0x01E66414` site lies in boot `.text`; the
boot symbol table does not name the containing function at that address.

The public [Size Matters New Game hook](https://github.com/Panguu/Archipelago-RaCSM/blob/SM-Main/worlds/rac_size_matters/core/patches/starting_planet.py)
also identifies `FRONTEND.REL` module offset `0x2F80` as an initializer and
`0x3024` as a state-write site inside it. Its first 12 bytes agree with our
pinned USA frontend module. An independent Ghidra pass identifies a contiguous
476-byte candidate body at `0x2F80`; the [level C gate](LEVEL-C-WITNESS.md)
checks independently authored C at that placement against the complete module
and measured relocated-image hash. The external hook was a research lead;
no patch instructions or Archipelago code are imported.

MultiworldGG selects maps for US `SCUS-97615`, EU `SCES-55019`, and JP
`SCPS-15120` in its [address-map selector](https://github.com/MultiworldGG/MultiworldGG/blob/c3a271b329e39e795a97927b7c155dc27511b101/worlds/rac_size_matters/core/address_maps/__init__.py).
The other regions are useful comparisons, but our matching target remains the
verified USA image. Their addresses cannot be substituted into it.

## Reproduction and next check

Regenerate the local names with `python tools/boot_symbols.py catalogue
baserom/SCUS_976.15`; compare the addresses above with
`config/boot/symbols.tsv`. Inspect the pinned boot with `python tools/elf.py
baserom/SCUS_976.15 --json` to locate `.text`, `.data` and `.bss`. The
12-word signature was checked as little-endian words read at the `.text` file
offset corresponding to `0x01E66400`.

Next, trace the boot loader on a locally owned disc image: record the REL
handle, load base, resident size and entrypoint for at least the frontend and
one level, then compare the address map's per-level locations with those
measured bounds. A static address coincidence is not a function match, a
verified C definition, or evidence for a compiler profile.
