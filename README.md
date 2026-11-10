<p align="center">
  <a href="https://openrac.dev/">
    <picture>
      <source media="(prefers-color-scheme: dark)" srcset="docs/assets/openrac-logo-dark.svg">
      <img src="docs/assets/openrac-logo-light.svg" alt="OpenRAC" width="360">
    </picture>
  </a>
</p>

<h3 align="center">Ratchet &amp; Clank: Size Matters decompilation project</h3>

<p align="center">
  <a href="https://bytematch.dev/OpenRAC/rac5-sm-decomp"><img src="https://bytematch.dev/OpenRAC/rac5-sm-decomp.svg?mode=shield&label=Code&measure=matched_code_percent" alt="Code matched"></a>
  <a href="https://github.com/OpenRAC/rac5-sm-decomp/actions/workflows/checks.yml"><img src="https://github.com/OpenRAC/rac5-sm-decomp/actions/workflows/checks.yml/badge.svg" alt="Source checks"></a>
  <a href="https://openrac.dev/"><img src="https://img.shields.io/badge/website-openrac.dev-e8a317" alt="openrac.dev"></a>
  <a href="https://discord.gg/Sfd2B54PDG"><img src="https://img.shields.io/badge/Discord-join%20us-5865F2?logo=discord&logoColor=white" alt="Discord"></a>
</p>

<p align="center">
  A work-in-progress, matching decompilation of <i>Ratchet &amp; Clank: Size Matters</i> (2008) for PlayStation 2.<br>
  The boot executable, the front end and 20 level modules, rebuilt as C that compiles back to the same bytes as retail.
</p>

> [!WARNING]
> This repository has no game data, executables, disc images or proprietary toolchains.
> You need your own copy of the game. Read [LEGAL.md](LEGAL.md) before contributing.

## Progress

A scoped snapshot written by `tools/progress_status.py`, not a game-wide percentage: the boot is measured, the
front end and levels are candidate code intervals. [progress/README.md](progress/README.md) explains every count and
[docs/contributing/roadmap.md](docs/contributing/roadmap.md) lists what is still open. Live numbers are on
[ByteMatch](https://bytematch.dev/OpenRAC/rac5-sm-decomp).

<!-- progress:begin (tools/progress_status.py --write-readme) -->
| Scope | Code scope | Accepted C | Accepted functions |
| --- | --- | ---: | ---: |
| Boot `.text` | 498,900 bytes measured | 88,948 bytes (17.83%) | 693 |
| Frontend (`FRONTEND.REL`) | 162,944 candidate bytes | 476 bytes | 1 |
| Levels (20 `LEVEL_*.REL`) | 36,341,888 candidate bytes by placement | 80 bytes (1,600 by placement) | 2 |
| Level bodies (counted separately) | 3,964,964 unique source bytes | 4,790,160 bytes by placement | 35,799 |

The ByteMatch estimate divides the **4,054,468** accepted C bytes by a provisional **6,418,204**-byte denominator: **63.17%**. That denominator combines the 498,900 measured boot `.text` bytes, the 162,944 frontend candidate-code bytes and the 5,756,360 optimistically deduplicated level candidate bytes. It is an estimate over candidate code intervals, not a qualified unique-code size; the snapshot's `overall_percent` stays `null`.
<!-- progress:end -->

## Supported versions

| Release | Region | Boot executable | Code | Notes |
| --- | --- | --- | --- | --- |
| v1.00 | NTSC-U | `SCUS_976.15` | [![Code](https://bytematch.dev/OpenRAC/rac5-sm-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/OpenRAC/rac5-sm-decomp) | Primary version |
| v1.00 | PAL | `SCES_550.19` | [![Code](https://bytematch.dev/OpenRAC/rac5-sm-decomp.svg?mode=shield&label=Code&measure=matched_code_percent&version=SCES_550.19)](https://bytematch.dev/OpenRAC/rac5-sm-decomp/SCES_550.19) | Tracked, compared with USA by `tools/version_check.py` |

Expected SHA-1 of the primary disc image (1,744,764,928 bytes):

```text
61b9cf7f46b8fc318daa2b98cfc53301654775d6
```

The programs, their hashes and the PAL disc: [docs/build/building.md](docs/build/building.md).

## Quick setup

Python 3.12 or newer is all the checks need; they use only the standard library.

```sh
git clone https://github.com/OpenRAC/rac5-sm-decomp.git && cd rac5-sm-decomp
python -m unittest discover -s tests -v
python tools/check_repository.py
python3 tools/versions.py dump --version us --image /path/to/your-disc.iso
python3 tools/versions.py check
```

The assembly rebuilds and the gates need your own SN Systems assembler and linker and the pinned GNU EE compiler:
[docs/build/building.md](docs/build/building.md).

## Contributing

Start with [CONTRIBUTING.md](CONTRIBUTING.md) and [AGENTS.md](AGENTS.md). Reserve your scope in the
[coordination issue](https://github.com/OpenRAC/rac5-sm-decomp/issues/99) first. All docs are listed in [docs/README.md](docs/README.md):

- [docs/build/](docs/build) - building, the assembly rebuilds, SNR2 modules and their relocation
- [docs/gates/](docs/gates) - the boot and level gates, and what an accepted placement means
- [docs/compiler/](docs/compiler) - what is known about the compiler, and the trials
- [docs/contributing/](docs/contributing) - matching blockers and the roadmap
- [docs/research/](docs/research) - level function boundaries and the public address map

Keep the build matching retail. Never commit game images, extracted game data or proprietary tool binaries.

## Credits

- [Newlib](https://sourceware.org/newlib/) and the SunPro fdlibm routines - library source used as a lead for some boot C bodies
  ([CREDITS.md](CREDITS.md), [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md)).
- [rac1-decomp](https://github.com/OpenRAC/rac1-decomp), [rac3-decomp](https://github.com/OpenRAC/rac3-decomp) and
  [rac2-decomp](https://github.com/OpenRAC/rac2-decomp) - the evidence standard and the repository layout.
- [Wrench](https://github.com/chaoticgd/wrench) by chaoticgd - modding tools and asset formats.
- [splat](https://github.com/ethteck/splat), [spimdisasm](https://github.com/Decompollaborate/spimdisasm),
  [m2c](https://github.com/matt-kempster/m2c), [asm-differ](https://github.com/simonlindholm/asm-differ),
  [objdiff](https://github.com/encounter/objdiff) and [ByteMatch](https://bytematch.dev).

## License

Code written for this project is under the [GNU General Public License v3.0](LICENSE). Code reconstructed from
third-party binaries belongs to its copyright holders; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
