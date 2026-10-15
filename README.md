<p align="center">
  <img src="docs/images/rac5-logo.webp" alt="RAC5 — Size Matters" width="560">
</p>
<p align="center"><strong>Ratchet &amp; Clank: Size Matters</strong></p>

<p align="center"><em>Original project artwork; no game assets.</em></p>

An early matching-decompilation workspace for the **USA PlayStation 2** version
(`SCUS_976.15`, `SYSTEM.CNF` version `1.00`). The layout follows the useful
parts of [OpenRAC's RAC2 project](https://github.com/OpenRAC/rac2-gc-decomp):
authored source belongs in `src/`, game-derived material stays local, and a function
only counts as matched after a byte-identical build. This repository does **not**
yet have a qualified compiler, a function catalogue, or a matching build.

## What is established

The pinned USA image is **1,744,764,928 bytes**, agrees with its ISO9660 volume
length, and has the SHA-1 in a [public disc catalogue](https://screenscraper.fr/rominfos.php?romid=301580).
Its exact SHA-1, SHA-256 and boot-executable hash are in
[`config/target.json`](config/target.json). A shorter, 150-sector-incomplete
image was excluded. The boot is an ELF32 MIPS executable; the disc has 20
level `.REL` modules plus a frontend module in the SNR2 format. The boot's
embedded table provides 1,803 named symbols. See
[`docs/BOOT-SYMBOLS.md`](docs/BOOT-SYMBOLS.md) and
[`docs/REL-FORMAT.md`](docs/REL-FORMAT.md) for what those counts mean.

The loader's complete relocated output for the frontend and level 01 has
been reconstructed locally and compared byte for byte with paused PCSX2
memory ([evidence and commands](docs/RELOCATED-IMAGE.md)). This qualifies
those two **load images**, not a compiler or authored C/C++ source.
One [160-byte assembly witness](docs/ASSEMBLY-STATUS.md) also matched; the
complete assembly rebuild remains open.

**No C or C++ function match is claimed.** The exact compiler and flags, level
relocation/load behavior, complete assembly baseline, and function boundaries
are still under investigation. There is no valid progress percentage yet.
Names, symbol addresses and module hashes are research metadata, not proof of
matching code. The [roadmap](docs/ROADMAP.md) tracks the remaining gates.

## Start contributing

You can contribute tools, tests and documentation **without the game**. To
check findings against the retail programs, obtain your own lawful copy of the
USA PS2 disc and make a local ISO with tools you are permitted to use. The
project cannot supply a disc image, executable, extracted level, Sony SDK or
proprietary compiler. Read [LEGAL.md](LEGAL.md) and
[CONTRIBUTING.md](CONTRIBUTING.md) before submitting work.

1. Fork this repository on GitHub, clone your fork, and create a branch from
   the current `master`. Install Python **3.12 or newer**; the initial tools
   use only its standard library. Replace `YOUR-USERNAME` and `topic` below:

   ```sh
   git clone https://github.com/YOUR-USERNAME/rac5-sm-decomp.git
   cd rac5-sm-decomp
   git remote add upstream https://github.com/llesieur99/rac5-sm-decomp.git
   git fetch upstream
   git switch master
   git merge --ff-only upstream/master
   git switch -c research/topic
   ```

   Run the same checks as CI:

   ```sh
   python -m unittest discover -s tests -v
   python tools/check_repository.py
   ```

2. If your work needs game evidence, keep your ISO outside Git (for example,
   under the ignored `baserom/` directory). Check it against the pinned USA
   target before relying on its addresses or hashes:

   ```sh
   python tools/disc.py inspect "/path/to/your-size-matters-us.iso"
   python tools/disc.py verify "/path/to/your-size-matters-us.iso"
   python tools/disc.py extract-boot "/path/to/your-size-matters-us.iso"
   ```

   `verify` checks the complete ISO and boot against `config/target.json`;
   `extract-boot` writes only to ignored local `baserom/SCUS_976.15` and
   refuses a different or incomplete target. `--allow-short-image` exists for
   diagnosis only and cannot qualify an image for matching. A European,
   Japanese, PSP or differently revised release is a **different target**;
   do not mix its addresses or code with this USA catalogue.

3. Inspect the verified programs and check the committed metadata against
   your own image. These commands report facts locally; `catalogue` without
   `--write` checks whether tracked metadata is current:

   ```sh
   python tools/elf.py baserom/SCUS_976.15
   python tools/boot_symbols.py inspect baserom/SCUS_976.15
   python tools/boot_symbols.py catalogue baserom/SCUS_976.15
   python tools/rel.py inspect "/path/to/your-size-matters-us.iso" --boot baserom/SCUS_976.15
   python tools/rel.py catalogue "/path/to/your-size-matters-us.iso"
   ```

   After measuring a module base in your own run, you can reconstruct its
   private loaded image with `tools/relocate.py` (see the
   [relocation guide](docs/RELOCATED-IMAGE.md)).

4. Before starting substantial research, check open issues and pull requests
   and state your intended scope in an issue or draft PR. There is **no
   reservation or automated matching queue yet**. Current useful work includes
   documenting the boot loader and SNR2 relocation behavior, establishing a
   complete assembly rebuild, identifying compiler profiles with multiple
   witnesses, reviewing function boundaries, and improving independent tools
   with synthetic tests. Use the [roadmap](docs/ROADMAP.md) and existing
   [loader cross-check](docs/MULTIWORLD-CROSSCHECK.md) to avoid repeating work.

5. Make one focused, reviewable change. Regenerate metadata with the relevant
   tool if your verified input establishes that it is stale; never edit
   generated tables or progress claims by hand. Record the target identity,
   method, evidence, uncertainty, and exact validation commands in the PR.
   Run the tests above again, review `git diff` and staged files for private
   material, then push your branch and open a PR against `master`. If `master`
   advanced while you worked, fetch `upstream` and update your branch before
   rerunning affected checks. **The maintainer merges manually.**

Do not publish ISO/ELF/REL/WAD bytes, extracted assets, assembly listings,
memory dumps, proprietary tools, SDK files, secrets, or personal disc paths.
The `.gitignore` covers common local locations, but review your PR diff
yourself. Public documentation and compatible licensed code may be cited or
reused with credit and their required notices; never use leaked or NDA source
or Sony SDK source, headers or samples. See [LEGAL.md](LEGAL.md) for the
repository's distribution boundary.

## What will count as a match

After the program layout, assembly baseline, function catalogue and compiler
profile have been qualified, keep one authored C/C++ definition per function
in `src/`. A useful attempt that does not match belongs in `nonmatching/`.
Only a qualified toolchain reproducing the **complete retail program bytes at
every applicable placement** can establish a match. Compiling successfully,
matching a few instructions, or comparing masked bytes cannot. This project
does not yet provide that build or checker, so current PRs must not claim C
matches or report a percentage. RAC2's compiler configuration is not evidence
for this game ([compiler status](docs/COMPILER-STATUS.md)).

## Repository layout

| Path | Role |
| --- | --- |
| `config/target.json` | Verified identity of the complete USA input |
| `config/boot/`, `config/levels/` | Generated symbol names, addresses, module hashes and export offsets; no matches |
| `tools/`, `tests/` | ISO9660, ELF, SNR2 and local relocation tools, repository guard and synthetic tests |
| `src/` | Authored C/C++ definitions after the matching pipeline is qualified |
| `nonmatching/` | Useful attempts that do not reproduce retail bytes |
| `progress/` | Reserved for measured progress after catalogue and build qualification |
| `baserom/`, `asm/`, `build/`, `toolchain/` | Local-only game inputs and outputs |

## Licence

The independently authored repository material is GPL-3.0; see
[LICENSE](LICENSE). That license does not cover the game, its assets or
proprietary toolchains. Contributions should be original or compatible with
that license, with attribution where required.
