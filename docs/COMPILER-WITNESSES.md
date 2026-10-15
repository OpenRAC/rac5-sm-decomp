# Provisional C compiler witnesses, USA PS2 boot

Six small boot functions from three code families were reconstructed as
independently authored C in `nonmatching/boot/`. The pinned boot's `.text`
intervals and each local candidate ELF were compared at the same virtual
addresses, with no relocation masking. This is evidence that one **candidate**
toolchain and `-O2 -G0` can produce these limited intervals. It neither
identifies the original compiler nor qualifies a complete matching build.
These sources stay in `nonmatching/` and contribute **zero** to progress.

| Source | Boot interval | Functions | Exact slice | Candidate slice SHA-256 |
| --- | --- | ---: | ---: | --- |
| `memcard_busy.c` | `0x01E627C0`–`0x01E627CF` | 1 | 16/16 | `9a09682cfc1e09f8c9a452d2e7035b6a6767223d7f834cb0683b8554de576c07` |
| `mcpi_msgboxes.c` | `0x01E64FE8`–`0x01E65027` | 4 | 64/64 | `784aa6333dbb2cbfcc6bfdaf07a64a906ad78f8489b64a796bdc935067f2a211` |
| `mcptrans_should_fade.c` | `0x01E68F38`–`0x01E68F47` | 1 | 16/16 | `f21c780dbce47a749e53f20d035d49d38309d91f3dd5c87efaf1a94b17fcea3a` |

The four `MCPI` labels are consecutive 16-byte placements: two setters and
two getters. `RAC5_WITNESS_PADDING` adds a **local-only** function after the
candidate bodies, so the assembler emits their final alignment bytes. That
extra function is neither compared nor asserted to represent retail code.
The globals' current names and types in the C files are hypotheses; their
link-time addresses are measured from the pinned instructions and recorded in
`config/boot/witness-*.ld`. The table deliberately contains no code bytes.

The experiment used the locally reconstructed GNU EE `cpp`/`cc1`/`as` chain
also available for RAC2 research, with SHA-256 respectively
`2ac3d8d3ca177e6705ac2cbdd1bd9e9a7181ac3e40f6230dea6875c3218ec155`,
`37704f483fba7269791576879b3573445cd455ce0473e6d58a3bcceb45105f95`,
and `c71a15dba889fc273b0b699986de7316d056b94ae2155ad2c2573eaa62b8d902`.
SN `ld.exe` SHA-256 was
`80f3724a63ce3c77c8b00d075f5c49448636518700ae251e5d6a6c809bbf5f48`.
These are **trial tool identities**, not a claim about the original retail
compiler. Do not distribute proprietary binaries.

To reproduce with your own lawful pinned USA executable, compile each C file
locally through `cpp -DRAC5_WITNESS_PADDING`, `cc1 -quiet -O2 -G0`, then `as`.
Link each resulting object with SN `ld -T config/boot/witness-*.ld`, matching
the C source and linker script names. Keep every object and ELF in ignored
`build/`. The `cc1` source and object must reside on the Linux filesystem if
your 32-bit chain cannot stat files under `/mnt/d`. Then run:

```sh
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/memcard_busy.elf 0x01E627C0 0x10
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/mcpi_msgboxes.elf 0x01E64FE8 0x40
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/mcptrans_should_fade.elf 0x01E68F38 0x10
```

The checker verifies the boot hash pinned in `config/target.json`, ELF
architecture and requested executable `.text` range, then reports only the
equal-byte count and candidate-slice hash. The decisive next gates remain a
complete byte-identical assembly baseline, broader compiler controls and a
full-program C replacement check. No ByteMatch report is warranted yet.
