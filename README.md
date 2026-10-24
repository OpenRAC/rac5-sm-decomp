<p align="center">
  <img src="docs/images/rac5-logo.webp" alt="RAC5 — Size Matters" width="480">
</p>

# Ratchet & Clank: Size Matters (PS2) Decompilation

<p align="center"><em>Original project artwork; no game assets.</em></p>

[![Website](https://img.shields.io/badge/Website-openrac.dev-ff8a00?logo=googlechrome&logoColor=white)](https://openrac.dev)
[![Discord](https://img.shields.io/badge/Discord-Join%20Community-5865F2?logo=discord&logoColor=white)](https://discord.gg/Sfd2B54PDG)
[![Source checks](https://github.com/OpenRAC/rac5-sm-decomp/actions/workflows/checks.yml/badge.svg)](https://github.com/OpenRAC/rac5-sm-decomp/actions/workflows/checks.yml)
[![Code](https://bytematch.dev/OpenRAC/rac5-sm-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/OpenRAC/rac5-sm-decomp)

A work-in-progress **matching decompilation** of *Ratchet & Clank: Size Matters* (High Impact Games, 2008) for the USA PlayStation 2 release (`SCUS_976.15`, disc version `1.00`), part of the **[OpenRAC](https://openrac.dev)** initiative.

The disc's programs are rebuilt from C and assembly until every byte equals retail:

| Program | What it is | Size | SHA-256 of the retail file |
| --- | --- | ---: | --- |
| `SCUS_976.15` | the boot executable: the engine core and the level loader | 856,120 | `d8f1794a5b4f6bd7f70ca62ae11fb790d1c300c2a877ef1aef4c1855fd6575ac` |
| `LVL/FRONTEND.REL` | the front end (menus), an SNR2 module | 2,052,794 | `81f834bdf092587eb94e6a198fe2ab6181877dbd215f7124b405edda9b1a3daf` |
| `LVL/LEVEL_*.REL` | 20 numbered level modules, SNR2 | 2,204,815 – 4,254,606 | see [`config/levels/modules.tsv`](config/levels/modules.tsv) |

The objective is to recover readable C/C++ that reproduces retail bytes with measured, pinned compiler profiles at reviewed placements. Assembly and copied retail non-code data still support the build; only C/C++ that passes the relevant complete-program gates earns matching credit.

> [!NOTE]
> This repository contains **no game assets, retail executables, or disassembly**. To work on it, you must provide your own legally obtained copy of the game. Please review [`LEGAL.md`](LEGAL.md) before contributing.

---

## Progress

Decompilation progress is tracked live on **[openrac.dev](https://openrac.dev)** and **[bytematch.dev/OpenRAC/rac5-sm-decomp](https://bytematch.dev/OpenRAC/rac5-sm-decomp)**.

| Version | Region | Target ID | Code Matched |
|---|---|---|---|
| v1.00 | USA (En) | `SCUS_976.15` | [![](https://bytematch.dev/OpenRAC/rac5-sm-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/OpenRAC/rac5-sm-decomp) |

<!-- progress:begin (tools/progress_status.py --write-readme) -->
| Scope | Code scope | Accepted C | Accepted functions |
| --- | --- | ---: | ---: |
| Boot `.text` | 498,900 bytes measured | 87,228 bytes (17.48%) | 644 |
| Frontend (`FRONTEND.REL`) | 162,944 candidate bytes | 476 bytes | 1 |
| Levels (20 `LEVEL_*.REL`) | 36,341,888 candidate bytes by placement | 80 bytes (1,600 by placement) | 2 |
| Level bodies (counted separately) | 387,176 unique source bytes | 663,320 bytes by placement | 6,518 |

The ByteMatch estimate divides the **87,784** accepted C bytes by a provisional **6,418,204**-byte denominator: **1.37%**. That denominator combines the 498,900 measured boot `.text` bytes, the 162,944 frontend candidate-code bytes and the 5,756,360 optimistically deduplicated level candidate bytes. It is an estimate over candidate code intervals, not a qualified unique-code size; the snapshot's `overall_percent` stays `null`.
<!-- progress:end -->

This is a **scoped** snapshot, not a game-wide percentage: the boot scope is
measured, the frontend and level scopes are candidate code intervals, and the
level denominator is an optimistic deduplication scenario.
[`progress/README.md`](progress/README.md) explains every count, and
[`docs/ROADMAP.md`](docs/ROADMAP.md) lists what is still open: the original
compiler identity, most function boundaries, the level compiler profiles and
full runtime behavior.

---

## Quick Start

### Prerequisites

- **Python 3.12 or newer** — the tools use only the standard library.
- **Your own lawful copy** of the USA PS2 disc: 1,744,764,928 bytes, SHA-1 `61b9cf7f46b8fc318daa2b98cfc53301654775d6` (also listed in a [public disc catalogue](https://screenscraper.fr/rominfos.php?romid=301580)).
- *(Optional)* your own local SN Systems assembler/linker and the pinned GNU EE compiler tools, for the assembly rebuilds and the gates.

### Setup & Build

1. **Clone the repository:**
   ```bash
   git clone https://github.com/OpenRAC/rac5-sm-decomp.git
   cd rac5-sm-decomp
   ```

2. **Run the checks that need no game data** (the same ones CI runs):
   ```bash
   python -m unittest discover -s tests -v
   python tools/check_repository.py
   python tools/progress_status.py --check
   ```

3. **Verify your own copy of the disc.** Keep the ISO outside Git, for example under the ignored `baserom/` directory:
   ```bash
   python tools/disc.py inspect "/path/to/your-size-matters-us.iso"
   python tools/disc.py verify "/path/to/your-size-matters-us.iso"
   python tools/disc.py extract-boot "/path/to/your-size-matters-us.iso"
   ```
   `verify` checks the complete ISO and the boot executable against [`config/target.json`](config/target.json); `extract-boot` writes only to the ignored `baserom/SCUS_976.15` and refuses a different or incomplete target. A European, Japanese, PSP or differently revised release is a **different target**: do not mix its addresses or code with this USA catalogue.

4. **Inspect the verified programs and check the committed metadata** against your own image:
   ```bash
   python tools/elf.py baserom/SCUS_976.15
   python tools/boot_symbols.py inspect baserom/SCUS_976.15
   python tools/boot_symbols.py catalogue baserom/SCUS_976.15
   python tools/rel.py inspect "/path/to/your-size-matters-us.iso" --boot baserom/SCUS_976.15
   python tools/rel.py catalogue "/path/to/your-size-matters-us.iso"
   ```
   These commands report facts locally; `catalogue` without `--write` checks whether the tracked metadata is current.

5. **Rebuild the baselines and run the gates** (private; needs your own local toolchain):
   ```bash
   python tools/boot_assembly.py --assembler <Ps2EeAs> --linker <ld> baserom/SCUS_976.15
   python tools/snr2_assembly.py --all --assembler <Ps2EeAs> --linker <ld> "/path/to/your-size-matters-us.iso"
   python tools/boot_trial_gate.py --cpp <cpp> --cc1 <cc1> --as <as> \
       --assembler <Ps2EeAs> --linker <ld> --output-dir <build> baserom/SCUS_976.15
   python tools/level_program_gate.py --assembler <Ps2EeAs> --linker <ld> "/path/to/your-size-matters-us.iso"
   python tools/level_c_gate.py --cpp <cpp> --cc1 <cc1> --as <as> \
       --linker <ld> --output-dir <build> "/path/to/your-size-matters-us.iso"
   python tools/progress_status.py --write
   ```
   Every gate's inputs, flags and evidence requirements are in [`docs/`](docs/): the [boot gate](docs/BOOT-TRIAL-GATE.md), the [level program gate](docs/LEVEL-PROGRAM-GATE.md), the [level C gate](docs/LEVEL-C-WITNESS.md) and the [assembly guide](docs/ASSEMBLY-STATUS.md). Game-derived output stays under the ignored `build/` directory.

For more documentation:

- [`docs/ROADMAP.md`](docs/ROADMAP.md) – the measured starting point and the order of work
- [`docs/COMPILER-STATUS.md`](docs/COMPILER-STATUS.md) – what is known about the compiler, and what is not
- [`docs/BOOT-MATCH-SCOPE.md`](docs/BOOT-MATCH-SCOPE.md) – what an accepted boot placement means
- [`docs/LEVEL-FUNCTION-INVENTORY.md`](docs/LEVEL-FUNCTION-INVENTORY.md) – the level function boundaries and the shared-code reviews
- [`docs/REL-FORMAT.md`](docs/REL-FORMAT.md) and [`docs/RELOCATED-IMAGE.md`](docs/RELOCATED-IMAGE.md) – the SNR2 modules and their relocation

---

## Contributing

Contributions are warmly welcome! Whether you are interested in decompiling functions, researching engine quirks, or improving documentation:

- **Set up** your environment and verify your own copy of the disc ([Quick Start](#quick-start)).
- **Choose a scope** and reserve it in the [coordination issue](https://github.com/OpenRAC/rac5-sm-decomp/issues/99), where each contributor keeps one comment listing its own reservations. The walls met while matching are tracked in [`docs/MATCHING-BLOCKERS.md`](docs/MATCHING-BLOCKERS.md).
- **Match** one function at a time: one authored definition in `src/`, a useful but unaccepted attempt in `nonmatching/`. Only a qualified toolchain reproducing the **complete retail program bytes at every applicable placement** counts as a match.
- **Check** with `python -m unittest discover -s tests -v`, `python tools/check_repository.py` and `python tools/progress_status.py --check`. Regenerate metadata and progress with the relevant tool; never edit generated tables or progress claims by hand.
- **Open a pull request** against `master` from a branch of your fork, with the target identity, evidence, commands and remaining limitations in the description. **The maintainer merges manually.**

Read [`AGENTS.md`](AGENTS.md) and [`CONTRIBUTING.md`](CONTRIBUTING.md) first; they hold the rules, the sources you may use and the review steps. Never publish ISO/ELF/REL/WAD bytes, extracted assets, assembly listings, memory dumps, proprietary tools, SDK files, secrets or personal disc paths; see [`LEGAL.md`](LEGAL.md). Join our **[Discord Community](https://discord.gg/Sfd2B54PDG)** to discuss progress, ask questions, and collaborate!

---

## Tools

| Tool | Purpose |
|---|---|
| `tools/disc.py` | Inspect, verify and extract the pinned USA disc |
| `tools/elf.py` | Report the PS2 ELF metadata without publishing executable bytes |
| `tools/rel.py` | The SNR2 level modules: inspect them and regenerate the metadata catalogues |
| `tools/boot_symbols.py` | The boot's embedded SNR2 symbol table and code-label bounds |
| `tools/relocate.py` | Reconstruct a module at a measured load base (private baseline) |
| `tools/boot_assembly.py` | Rebuild the boot `.text` and the file-backed load image |
| `tools/snr2_assembly.py` | Rebuild the candidate code interval of every level placement |
| `tools/boot_trial_gate.py` | The pinned complete-boot C gate |
| `tools/level_program_gate.py` | The complete SNR2 program gate for the frontend and level 01 |
| `tools/level_c_gate.py` | The shared-level, frontend and level-body C gate |
| `tools/progress_status.py` | The scoped progress snapshot and this README's progress table |
| `tools/bytematch_estimate.py` | The labelled ByteMatch estimate |
| `tools/check_repository.py` | The pre-commit check: no game data, build output or toolchain in Git (CI runs it) |

---

## Credits

This project builds upon years of dedicated reverse-engineering research and tooling by the community:

- **[Newlib](https://sourceware.org/newlib/)** and the SunPro fdlibm routines — the public library source used as a research lead for some boot C bodies, with its notices preserved ([`CREDITS.md`](CREDITS.md), [`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md)).
- **[rac1-decomp](https://github.com/OpenRAC/rac1-decomp)**, **[rac3-decomp](https://github.com/OpenRAC/rac3-decomp)** and the [RAC2 project](https://github.com/OpenRAC/rac2-gc-decomp) — the OpenRAC decompilations that set the evidence standard and the repository layout this one follows.
- **[Wrench](https://github.com/chaoticgd/wrench)** by chaoticgd — *Ratchet & Clank* PS2 modding tools and asset format specifications.
- **Decompilation Tooling & Ecosystem**:
  - [splat](https://github.com/ethteck/splat) & [spimdisasm](https://github.com/Decompollaborate/spimdisasm) – Binary splitting and MIPS disassembly.
  - [m2c](https://github.com/matt-kempster/m2c) & [asm-differ](https://github.com/simonlindholm/asm-differ) – Assembly-to-C translation and diffing.
  - [objdiff](https://github.com/encounter/objdiff) – Object diffing tool.
  - [ByteMatch](https://bytematch.dev) & [decomp.wiki](https://decomp.wiki) – Progress tracking and decompilation knowledge base.

---

## License

- Code written for this project is licensed under the [GNU General Public License v3.0](LICENSE).
- Reconstructed libraries and third-party components retain their original licenses (see [`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md) and [`LEGAL.md`](LEGAL.md)).
- *Ratchet & Clank* is a registered trademark of Sony Interactive Entertainment. This project is not affiliated with or endorsed by Sony or Insomniac Games.
