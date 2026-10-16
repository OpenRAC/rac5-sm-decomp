# Reproducible boot C trial gate

The pinned [compiler trial](../config/boot/compiler_trial.json) identifies the
locally reconstructed GNU EE `cpp`/`cc1`/`as` binaries by SHA-256, the
RAC5-only short-loop patch, and the exact `-O2 -G0` flags. It is accepted
**only for one reviewed boot placement** under the full loaded-byte criterion
([scope](BOOT-MATCH-SCOPE.md)); the original compiler is not identified.
`MEMCARD_Busy__Fv` is in `src/boot/`. Every other body remains under
`nonmatching/`.

The current campaign contains 342 compiler-produced C objects. Its verified
catalogue records 325 global function bodies (9,912 bytes plus 576 zero alignment
bytes); 20 object spans without usable global-function extents remain uncatalogued.
These counts are distinct from the one accepted 16-byte boot placement.

Both original and preprocessed C inputs must pass `tools/c_source_policy.py`:
no instruction assembly, fixed registers or raw instruction words. The standalone
linking campaign also checks its source inputs. Hybrid experiments are kept
privately and excluded from the C substitutions; their original intervals stay
in the assembly baseline. C may still call platform services normally. A PC port
will need platform-specific service implementations, a separate task from proving
the original PS2 bytes.

With your own lawful copy of the pinned USA boot and matching local tools,
run this in WSL from the repository checkout. The compiler intermediates must
be on WSL's **Linux filesystem**; the SN executables can run through WSL's
Windows interop when that is available:

```sh
python3 tools/boot_trial_gate.py baserom/SCUS_976.15 \
  --cpp /path/to/cpp --cc1 /path/to/cc1 --as /path/to/as \
  --assembler /mnt/c/path/to/Ps2EeAs.exe \
  --linker /mnt/c/path/to/ld.exe \
  --output-dir /home/you/rac5-boot-trial
```

The command checks the patch and tool identities, copies each public C source
to the Linux work directory, compiles **every campaign object**, and requires
their object hashes to match the measured campaign. It exports only the objects to
ignored `build/boot-compiled-objects/`, then checks the committed boot symbol
and DVP metadata, links the objects into the complete private boot assembly,
and rechecks every candidate body boundary the catalogue records. It requires exact boot
`.text` (**498,900/498,900**), raw `PT_LOAD` (**809,872/809,872**), entry,
program header and BSS placement. It then regenerates the ELF container from
[`config/boot/elf_layout.json`](../config/boot/elf_layout.json) and the DVP
catalogue, and requires exact full-file SHA-256 (**856,120/856,120 bytes**).
Witness counts come from the verified boundary catalogue, not a second frozen
compiler-profile counter. The `exit` column records the observed terminal transfer:
`call` does not establish that its callee never returns or qualify a function boundary.
The non-code loaded sections still come
from the user's pinned boot; generated game-derived material and tool binaries
are never committed.

The result is in ignored `build/boot-trial-gate/report.json`. A passing report
has `status: "passed_boot_only"`, `raw_load_and_header_exact: true`,
`whole_elf_exact: true`, `counted_matches: 1` and `counted_bytes: 16`.
Each run overwrites an old report with `status: "incomplete"` before checking
tools, so a failed run cannot leave a stale pass. The packer also removes its
old output before rebuilding. The original, unpatched `cc1` was rejected;
a one-byte-corrupted linked ELF was also rejected without leaving an exact
output. A rerun with the pinned tools passed.

This gate makes the limited boot build **repeatable and falsifiable**. The
accepted match is scoped to the pinned boot and reviewed placement; it does
not prove original compiler identity, other boot functions, level programs,
or full gameplay. The [DVP and section-layout gap](DVP-OVERLAYS.md) is
resolved by packaging; the original loaded non-code sections are still inputs.
The private report is not yet a ByteMatch percentage. Any later source or toolchain
change must rerun this gate; a failure withdraws the match until repaired.

An earlier isolated PCSX2 smoke test of a stripped ELF linked from all twenty C
witnesses and the pinned disc reached the frontend module's `SNR2` header at
EE address `0x00F97B80`; its first 32 bytes there matched a retail run. The
stripped ELF reported CRC `FA686353`, versus `8661F7BA` for retail. This
confirms boot-to-frontend progress only. The newly packaged ELF is file-exact
and has the measured retail CRC `8661F7BA`, but full gameplay has not been retested.
The isolated emulator was stopped afterward.

The first acceptance is `MEMCARD_Busy__Fv`: one measured boot placement,
a 16-byte C body, no trailing alignment and an exact complete boot ELF.
Its acceptance rationale and rollback rule are in
[`BOOT-MATCH-SCOPE.md`](BOOT-MATCH-SCOPE.md). The other linked C
bodies remain provisional until each receives its own boundary and scope
review, even though they participate in this exact load-image build.
