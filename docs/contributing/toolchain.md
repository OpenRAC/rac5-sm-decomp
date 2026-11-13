# Getting the tools

This page says which tool each part of the work needs, where it comes from and how
to get it. The gates pin every tool by SHA-256 in
[`config/boot/compiler_trial.json`](../../config/boot/compiler_trial.json) and
[`config/levels/compiler_trial.json`](../../config/levels/compiler_trial.json).
The GNU tools are rebuilt from public sources with one script; the SN Systems
tools are proprietary and stay your own.

## Quick start

1. Use x86-64 Linux or WSL with Python 3.12, `make`, `patch`, `curl`, `git` and a gcc
   that can build 32-bit programs (`gcc -m32`; on Debian or Ubuntu install
   `gcc-multilib`).
2. Build the GNU tools:

   ```sh
   bash tools/compiler/build_gnu_ee.sh
   ```

   It downloads the public GNU EE source archive (`gnu-ee-binutils-gcc-1.1`) and
   bison 1.28 to `build/downloads/` and clones the public snapshot of the SDK
   compiler's sources (`SDK_SOURCE=` names a local clone instead), checks their
   SHA-256 and commit, applies the patches in
   [`tools/compiler/patches/`](../../tools/compiler/patches), refuses to build
   when a patched source does not hash as recorded, and writes each tool to
   `build/toolchain/<selector>/` under the name the gates expect (for example
   `build/toolchain/pinned/{cpp,cc1,as}` and `build/toolchain/gnu-ee-trial/cc1`).
   It ends by printing each binary's SHA-256 next to its pin. It takes a few
   minutes; name selectors (`build_gnu_ee.sh build/toolchain pinned`) to build fewer.
3. Compile C the way the gates do, adding the file's flags from
   [`config/cflags.txt`](../../config/cflags.txt) (a level body's compiler and
   assembler are in [`config/levels/body_sources.tsv`](../../config/levels/body_sources.tsv)):

   ```sh
   build/toolchain/pinned/cpp body.c > body.i
   build/toolchain/pinned/cc1 -quiet -O2 -G0 body.i -o body.s
   build/toolchain/pinned/as body.s -o body.o
   ```

4. Run the gates with `--unpinned-tools` (below), and open a pull request. The
   maintainer runs the qualifying gates with the pinned binaries before merging.

## Rebuilt tools have other hashes

A compiler's SHA-256 depends on the machine that built it (the host compiler and its
version), not only on its sources, and the pinned chain's binaries also embed the
path of the work directory (`WORK`, default `/tmp/rac5-gnu-ee`) in their assertion
messages. The script reproduces the pinned `span5` and `span5b` binaries byte for
byte on the host that built them, and other hashes elsewhere. The pinned `cpp`,
`cc1` and `as`, the trial and SDK compilers and `r5900-mfc1` were built in other
build layouts, so the script's binaries differ from those pins wherever they are
built.

What has to be equal is the output. With `--unpinned-tools`,
`tools/boot_trial_gate.py`, `tools/compile_boot_trial.py` and
`tools/level_c_gate.py` record a compiler or per-source assembler whose SHA-256
differs from its pin instead of refusing it, and still require **every** compiled
object to equal its pinned hash. A rebuilt tool that compiles any accepted source
differently still fails the gate. The report then says `"qualifying_tools": false`
and lists the tools in `unpinned_tools`; such a run checks your work but does not
qualify a match: `tools/progress_status.py --write` refuses its report and
`--refresh-bodies` refuses the option. The SN assembler and linker of the link
step always stay pinned.

## The tools

Counts are accepted sources on `master` on 12 November 2026.

| Tool (selector) | Used by | Source | How to get it |
| --- | --- | --- | --- |
| `cpp`, `cc1`, `as` (pinned chain) | the `cc1` of 533 boot and 47,709 level sources; the `as` of 624 boot and 52,325 level sources | the public archive with [`0000-rac5-pinned-base.patch`](../../tools/compiler/patches/0000-rac5-pinned-base.patch) and [`0001-rac5-short-loop-six.patch`](../../tools/compiler/patches/0001-rac5-short-loop-six.patch) | `build_gnu_ee.sh pinned` |
| `span5` assembler | 4 boot sources | the archive with Lombyte's [`0020`](../../tools/compiler/patches/lombyte/0020-gas-absolute-unknown-symbol.patch) and [`0027`](../../tools/compiler/patches/lombyte/0027-gas-inline-float-literals.patch) gas patches and [`0005-rac5-gas-span5.patch`](../../tools/compiler/patches/0005-rac5-gas-span5.patch) | `build_gnu_ee.sh span5` |
| `span5b` assembler | 1 boot source | the archive with `0005` and [`0006-rac5-gas-span5b.patch`](../../tools/compiler/patches/0006-rac5-gas-span5b.patch) | `build_gnu_ee.sh span5b` |
| `gnu-ee-trial` | 4 boot sources, 2,449 level sources | the `cc1` of OpenRAC/rac2-decomp's compiler recipe at `7fccf735`: the archive with `0000` and [`0007-rac5-gnu-ee-trial.patch`](../../tools/compiler/patches/0007-rac5-gnu-ee-trial.patch) ([trial chain](../compiler/compiler-status.md#a-third-gnu-chain-the-pre-patch-trial-cc1)) | `build_gnu_ee.sh gnu-ee-trial` |
| `gnu-ee-trial-divpad` | 1,324 level sources | the pinned chain with [`0002`](../../tools/compiler/patches/0002-rac5-div-pad.patch) and [`0003`](../../tools/compiler/patches/0003-rac5-upstream-saves-divpad.patch), which also reverts the ascending-save edit | `build_gnu_ee.sh gnu-ee-trial-divpad` |
| `gnu-ee-trial-divpad-blockmove` | 248 level sources | `gnu-ee-trial-divpad` with [`0004`](../../tools/compiler/patches/0004-rac5-blockmove-loopcount.patch) | `build_gnu_ee.sh gnu-ee-trial-divpad-blockmove` |
| `sdk991111` | 127 boot sources, 825 level sources | Sony EE-GCC 2.9-ee-991111-01: the GPL sources of the SDK's GNU toolchain in the public snapshot [SSXModding/ps2-ee-toolchain](https://github.com/SSXModding/ps2-ee-toolchain) at `b595ded`, with [`sdk/bison-grammar.patch`](../../tools/compiler/patches/sdk/bison-grammar.patch), built like OpenRAC/rac2-decomp's `tools/compiler/sdk/build.py` | `build_gnu_ee.sh sdk991111` |
| `sdk991111sync`, `sdk991111sq`, `sdk-divpad` | 3 boot and 40 level, 1 boot, 10 boot sources | `sdk991111` with [`rac5-sync`](../../tools/compiler/rac5-sync), [`rac5-sq`](../../tools/compiler/rac5-sq) or `0002` | `build_gnu_ee.sh` with that selector |
| `r5900-mfc1` assembler | 151 level sources | the pinned chain's assembler with [`0008-rac5-gas-r5900-mfc1.patch`](../../tools/compiler/patches/0008-rac5-gas-r5900-mfc1.patch), the assembler of OpenRAC/rac2-decomp's recipe at `e07c4844` | `build_gnu_ee.sh r5900-mfc1` |
| `ee-sdk` assembler | 59 boot sources | the GNU assembler of the Sony EE SDK (2.9-ee-991111). `span5` assembles 57 of these sources to the same objects, all but `__kernel_rem_pio2` (one `nop` moved) and `__svfscanf` (16 more bytes); the public archive's own assembler, 33 (12 November 2026) | not available |
| `ee-frozen` assembler | 3 level sources | a privately recovered EE assembler | not available |
| `prodg2953` | 35 boot sources | SN Systems ProDG for PlayStation 2 3.01 | your own copy |
| `ps2eeas` (Ps2EeAs 1.8.19.316) | 25 boot and 116 level sources, the assembly baselines | SN Systems ProDG 2.0 | your own copy |
| SN linker (`ee-ld.exe`) | the gates and the assembly baselines | SN Systems | your own copy |

For the boot gate, `--extra-bin gnu-ee-trial=DIR` takes a directory that holds
`build/toolchain/sdk991111/xgcc`, `build/toolchain/pinned/cpp` and
`build/toolchain/gnu-ee-trial/cc1`; the level gate takes the `cc1` alone
(`--extra-cc1 gnu-ee-trial=build/toolchain/gnu-ee-trial/cc1`). The SDK compilers'
directories serve `--extra-bin` as they are (`--extra-bin
sdk991111=build/toolchain/sdk991111`).

A gate compiles every accepted source, so it needs every route that some source
selects: the complete gates still need the `ee-sdk` (boot) and `ee-frozen` (level)
assemblers, which have no public source, and your own SN tools. Writing and
compiling new C needs only the pinned chain; say in the pull request which tools
you used.

## Where the patches come from

`0000-rac5-pinned-base.patch` turns the public archive into the exact sources of the
pinned chain: Lombyte's `sce-991111b` stack and the source edits of
OpenRAC/rac2-decomp as of October 2026, which the RAC2 history does not keep at this
state. It reproduces the recorded `mips.c` (`c76c0bec…`), `mips.h` (`52f470a0…`) and
the pinned assembler's `tc-mips.c` (`b22dfff8…`), so it keeps a few RAC2 comments
in French. `0007` gives the four `gcc` sources of OpenRAC/rac2-decomp's compiler
recipe at its public commit `7fccf735` (its `build.sh` checks the same hashes) and
`0008` the `tc-mips.c` of its recipe at `e07c4844`: an `mfc1` that is exempt from
the coprocessor-load delay on the R5900. `0004` was written against a copy whose
surrounding lines moved, so the script applies it with fuzz 3 and checks the result.
`0005` and `0006` are this project's R5900 assembler rules: short-loop
padding to a five-word target-to-branch span, the load-to-base `nop` at a branch
target, the `dli` form of `Ps2EeAs` and a `jal` that does not suppress the padding.
`sdk/bison-grammar.patch` is the one of RAC2's SDK compiler recipe: it adds the type
tag of four mid-rule actions in `gcc/c-parse.in`, which newer bisons require, and
changes no generated code.
The build script lists the hash of every patched source it checks.

The SDK compiler's sources are GNU GCC and binutils as Cygnus modified them for the
SDK, under the GPL: their files carry the FSF GPL notices and the trees their
`COPYING` files. The snapshot holds those GPL toolchain trees only, no SDK
libraries, headers or samples. The script fetches them and builds them locally:
none of their source, and no binary, is in this repository.
