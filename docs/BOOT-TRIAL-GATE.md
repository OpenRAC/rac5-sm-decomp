# Reproducible boot C trial gate

The pinned [compiler trial](../config/boot/compiler_trial.json) identifies the
locally reconstructed GNU EE `cpp`/`cc1`/`as` binaries by SHA-256, the
RAC5-only short-loop patch, and the exact `-O2 -G0` flags. It is a measured
**boot-only candidate**, not an identified original compiler or an approved
matching profile. The source and all twenty function bodies remain under
`nonmatching/`.

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
program header and BSS placement. The non-code loaded sections still come
from the user's pinned boot; generated game-derived material and tool binaries
are never committed.

The result is in ignored `build/boot-trial-gate/report.json`. A passing report
has `status: "passed_provisional"`, `raw_load_and_header_exact: true`,
`whole_elf_exact: false` and `counted_matches: 0`. Each run overwrites an old
report with `status: "incomplete"` before checking tools, so a failed run
cannot leave a stale pass. An isolated test with the original, unpatched
`cc1` rejected that compiler hash; a rerun with the pinned RAC5 trial passed.

This gate makes the candidate build **repeatable and falsifiable**, but it
does not by itself settle whether the boot may be qualified independently of
the level programs, prove the original compiler identity, or validate full
gameplay. The full ELF and PCSX2 executable CRC still differ for the
[documented DVP and section-layout reasons](DVP-OVERLAYS.md). Before moving a
function to `src/` or reporting progress, review the boot-only acceptance
scope, compiler controls, function boundaries and applicable runtime checks
under [`AGENTS.md`](../AGENTS.md). No ByteMatch percentage follows from this
trial report.

An isolated PCSX2 smoke test of a stripped ELF linked from all twenty C
witnesses and the pinned disc reached the frontend module's `SNR2` header at
EE address `0x00F97B80`; its first 32 bytes there matched a retail run. The
reconstructed ELF reported CRC `FA686353`, versus `8661F7BA` for retail,
because the full files still differ outside the load segment. This confirms
boot-to-frontend progress only. It does not verify full gameplay or identical
CRC-specific emulator patches. The isolated emulator was stopped afterward.

The smallest acceptance review is `MEMCARD_Busy__Fv`: one measured boot
placement, a 16-byte C body, no trailing alignment and an exact whole-boot
load image. A follow-up promotion should decide explicitly whether the
boot's exact `PT_LOAD` plus entry/BSS is the complete-program byte gate for
boot-only functions, while `.DVP` packaging and PCSX2 CRC remain separate
file-level concerns. If the maintainers accept that scope and compiler
evidence, move this one definition to `src/` and generate the first measured
progress claim. Until that review, the machine-readable gate reports zero.
