# Reproducible boot C trial gate

The pinned [compiler trial](../config/boot/compiler_trial.json) identifies the
locally reconstructed GNU EE `cpp`/`cc1`/`as` binaries by SHA-256, the
RAC5-only short-loop patch, and the exact `-O2 -G0` flags. It is accepted
**only for one reviewed boot placement** under the full loaded-byte criterion
([scope](BOOT-MATCH-SCOPE.md)); the original compiler is not identified.
`MEMCARD_Busy__Fv` is in `src/boot/`. The other nineteen functions remain
under `nonmatching/`.

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
to the Linux work directory, compiles **17 objects**, and requires their
object hashes to match the measured campaign. It exports only the objects to
ignored `build/boot-compiled-objects/`, then checks the committed boot symbol
and DVP metadata, links the objects into the complete private boot assembly,
and rechecks the twenty candidate body boundaries. It requires exact boot
`.text` (**498,900/498,900**), raw `PT_LOAD` (**809,872/809,872**), entry,
program header and BSS placement. It then regenerates the ELF container from
[`config/boot/elf_layout.json`](../config/boot/elf_layout.json) and the DVP
catalogue, and requires exact full-file SHA-256 (**856,120/856,120 bytes**).
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
[`BOOT-MATCH-SCOPE.md`](BOOT-MATCH-SCOPE.md). The other nineteen linked C
bodies remain provisional until each receives its own boundary and scope
review, even though they participate in this exact load-image build.
