# Ratchet & Clank: Size Matters (PS2) decompilation

![Original RAC5 research artwork showing a planet and abstract circuitry](docs/images/rac5-banner.webp)

*Original project artwork; no game assets.*

An early matching-decompilation workspace for the **USA PlayStation 2** version
(`SCUS_976.15`, `SYSTEM.CNF` version `1.00`). The layout follows the useful
parts of [OpenRAC's RAC2 project](https://github.com/OpenRAC/rac2-gc-decomp):
authored source belongs in `src/`, game-derived material stays local, and a function
only counts as matched after a byte-identical build. This repository does **not**
yet have a qualified compiler, a function catalogue, or a matching build.

## Disc status

The USA image extracted from the supplied ZIP is complete: its
1,744,764,928-byte length matches the ISO9660 volume declaration, its archive
passes an integrity test, and its SHA-1 matches the [public catalogue entry](https://screenscraper.fr/rominfos.php?romid=301580)
for `SCUS-97615`. The executable has SHA-256
`d8f1794a5b4f6bd7f70ca62ae11fb790d1c300c2a877ef1aef4c1855fd6575ac`.
The measured image hashes and other facts are in
[`config/target.json`](config/target.json). This qualifies the input image;
compiler and complete-program matching are separate, unfinished gates. An
earlier loose ISO was missing its last 150 sectors and is not the pinned input.

## Inspect your disc locally

Python 3.12 or newer is enough for the initial tools; they use only the standard
library. Supply your own legally obtained PS2 image. These commands never copy
game bytes into tracked files:

```sh
python tools/disc.py inspect /path/to/your-size-matters-us.iso
python tools/disc.py verify /path/to/your-size-matters-us.iso
python tools/disc.py extract-boot /path/to/your-size-matters-us.iso
python tools/elf.py baserom/SCUS_976.15
python tools/boot_symbols.py inspect baserom/SCUS_976.15
python tools/boot_symbols.py catalogue baserom/SCUS_976.15
python tools/rel.py inspect /path/to/your-size-matters-us.iso
python tools/rel.py catalogue /path/to/your-size-matters-us.iso
python -m unittest discover -s tests
python tools/check_repository.py
```

`extract-boot` refuses a short image by default. Its
`--allow-short-image` option is only for local diagnosis of incomplete dumps;
it does not qualify one for matching. Extraction verifies the boot executable
against the hash in `config/target.json`.

## Layout and next steps

| Path | Role |
| --- | --- |
| `config/target.json` | Verified identity of the complete USA input |
| `config/boot/` | Generated boot symbol names and addresses, not matched functions |
| `config/levels/` | Generated SNR2 module hashes and export offsets, not function matches |
| `tools/` | ISO9660, ELF and SNR2 inspection; later, matching-build tools |
| `src/` | One authored C/C++ definition per verified function, when matching begins |
| `nonmatching/` | Useful source attempts that do not reproduce retail bytes |
| `progress/` | No percentage until function boundaries and the build are verified |
| `baserom/`, `asm/`, `build/`, `toolchain/` | Local-only game inputs and outputs |

The disc contains 21 `LVL/*.REL` level programs. Their SNR2 metadata is now
documented in [`docs/REL-FORMAT.md`](docs/REL-FORMAT.md); the actual loader and
matching compiler remain open. The boot's embedded symbol table is documented
in [`docs/BOOT-SYMBOLS.md`](docs/BOOT-SYMBOLS.md). See
[`docs/COMPILER-STATUS.md`](docs/COMPILER-STATUS.md)
and [`docs/ROADMAP.md`](docs/ROADMAP.md).
