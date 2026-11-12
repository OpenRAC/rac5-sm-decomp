# Building

The disc's programs are rebuilt from C and assembly until every byte equals retail:

| Program | Release | What it is | Size | SHA-256 of the retail file |
| --- | --- | --- | ---: | --- |
| `SCUS_976.15` | USA (v1.00) | Boot executable: engine core and level loader | 856,120 | `d8f1794a5b4f6bd7f70ca62ae11fb790d1c300c2a877ef1aef4c1855fd6575ac` |
| `SCES_550.19` | Europe (v1.00) | Boot executable: engine core and level loader | 856,888 | `2b33e2d66e144ceb63fd8348ba85f560abace4449c3109ee54719c9e3e462c1f` |
| `LVL/FRONTEND.REL` | Both | Front end (menus), SNR2 module | 2,052,794 / 1,794,103 | see [`config/levels/modules.tsv`](../../config/levels/modules.tsv) |
| `LVL/LEVEL_*.REL` | Both | 20 numbered level modules, SNR2 | 1,036,928 – 4,260,355 | see [`config/levels/modules.tsv`](../../config/levels/modules.tsv) |

## Setup

### Prerequisites

- **Python 3.12 or newer** — the tools use only the standard library.
- **Your own lawful copy** of the game:
  - **USA PS2 disc**: 1,744,764,928 bytes, SHA-1 `61b9cf7f46b8fc318daa2b98cfc53301654775d6` (`SCUS_976.15`)
  - **Europe PS2 disc**: 1,982,988,288 bytes, SHA-1 `da06cadf3c022d146d113c797311a435a941655b` (`SCES_550.19`)
- *(Optional)* the GNU EE compiler tools, rebuilt from public sources by `tools/compiler/build_gnu_ee.sh`, and your own SN Systems assembler and linker, for the assembly rebuilds and the gates: [getting the tools](../contributing/toolchain.md).

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
   python tools/gen_progress_report.py --check
   ```

3. **Verify your own copy of the disc.** Keep the ISO outside Git, for example under the ignored `baserom/` directory:
   ```bash
   # Inspect and verify your USA disc:
   python3 tools/disc.py inspect "/path/to/size-matters-us.iso"
   python3 tools/disc.py verify "/path/to/size-matters-us.iso"
   python3 tools/disc.py extract-boot "/path/to/size-matters-us.iso"

   # Inspect and verify your Europe disc:
   python3 tools/disc.py inspect "/path/to/size-matters-pal.iso"
   python3 tools/disc.py verify "/path/to/size-matters-pal.iso"
   python3 tools/disc.py extract-boot "/path/to/size-matters-pal.iso" --out baserom/pal/SCES_550.19

   # Or dump and verify all programs for a version automatically:
   python3 tools/versions.py dump --version us --image "/path/to/size-matters-us.iso"
   python3 tools/versions.py dump --version pal --image "/path/to/size-matters-pal.iso"
   python3 tools/versions.py check
   ```
   `verify` checks the complete ISO and the boot executable against the target configuration; `extract-boot` writes only to the ignored `baserom/` directory.

4. **Inspect the verified programs and check the committed metadata** against your own image:
   ```bash
   python tools/elf.py baserom/SCUS_976.15
   python tools/boot_symbols.py inspect baserom/SCUS_976.15
   python tools/boot_symbols.py catalogue baserom/SCUS_976.15
   python tools/rel.py inspect "/path/to/your-size-matters-us.iso" --boot baserom/SCUS_976.15
   python tools/rel.py catalogue "/path/to/your-size-matters-us.iso"
   ```
   These commands report facts locally; `catalogue` without `--write` checks whether the tracked metadata is current.

5. **Rebuild the baselines and run the gates** (private; needs the tools of [getting the tools](../contributing/toolchain.md); add `--unpinned-tools` to a gate run with rebuilt GNU tools):
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
   Every gate's inputs, flags and evidence requirements are in [`docs/`](../README.md): the [boot gate](../gates/boot-trial-gate.md), the [level program gate](../gates/level-program-gate.md), the [level C gate](../gates/level-c-witness.md) and the [assembly guide](assembly-status.md). Game-derived output stays under the ignored `build/` directory.

## More

- [roadmap.md](../contributing/roadmap.md) - the measured starting point and the order of work
- [compiler-status.md](../compiler/compiler-status.md) - what is known about the compiler, and what is not
- [boot-match-scope.md](../gates/boot-match-scope.md) - what an accepted boot placement means
- [level-function-inventory.md](../research/level-function-inventory.md) - the level function boundaries and the shared-code reviews
- [rel-format.md](rel-format.md) and [relocated-image.md](relocated-image.md) - the SNR2 modules and their relocation
