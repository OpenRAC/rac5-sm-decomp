# Provisional C compiler witnesses, USA PS2 boot

Eleven small boot functions from several code areas were reconstructed as
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
| `hig_io_read.c` | `0x01E65458`–`0x01E65477` | 1 | 32/32 | `86746200bee52dcb43166ff611e7f723dd37ee204c26758b89a4135a969f9117` |
| `camera_init.c` | `0x01E68630`–`0x01E68657` | 1 | 40/40 | `4ce3a071f1098892e7cddbd6f149546c2abc9804ac1b844e1667cda2fe644621` |
| `fast_mem_copy.c` | `0x01E68EE0`–`0x01E68EFF` | 1 | 32/32 | `fd8428d3a925e06646a38fd352c2c76629c4ed5d49e37bfb17b664b80d9941b7` |
| `mcptrans_is_complete.c` | `0x01E68F00`–`0x01E68F37` | 1 | 56/56 | `9cdb7c1d61aac09eba37aabf4ca5d3ead800fb8b19ae63c19e97e898353a7b1c` |
| `mcptrans_should_fade.c` | `0x01E68F38`–`0x01E68F47` | 1 | 16/16 | `f21c780dbce47a749e53f20d035d49d38309d91f3dd5c87efaf1a94b17fcea3a` |
| `snd_unlock_positional_array.c` | `0x01E91708`–`0x01E9171F` | 1 | 24/24 | `b70d0c2a72b4b88d10dc0d9b44ea595bcabacd7d3118ebab91aafae8a4fd019a` |

The four `MCPI` labels are consecutive 16-byte placements: two setters and
two getters. Where needed, `RAC5_WITNESS_PADDING` adds a **local-only**
function after the candidate body, so the assembler emits its final alignment
bytes. That extra function is neither compared nor asserted to represent
retail code.
The newer `MCPTRANS_IsComplete` candidate covers two conditional branches and
multiple returns; `SND_UnlockPositionalArray` covers a conditional store
whose volatile read generates a branch-likely instruction. These strengthen
the compatibility evidence beyond simple accessors, but are still only local
interval checks.
The new `higIoRead`, `CAMERA_Init` and `FastMemCopy` witnesses exercise a
linked call and return-address save/restore; `FastMemCopy` also shifts an
argument into the call delay slot, while `CAMERA_Init` writes a global before
its call. They add 104 exact local bytes, bringing the trial total to
**280/280 bytes across eleven functions**. This still does not qualify a
whole-program match. A later
[provisional integration witness](BOOT-C-WITNESS.md) linked the
`MEMCARD_Busy__Fv` C object into the entire boot assembly and kept the full
file-backed bytes exact; it remains uncounted under the project gates.

`FOG_PreUpdate__Fv` at `0x01E7D4A8` is a useful **negative control**. The
authored loop in `nonmatching/boot/fog_preupdate.c` reproduces the first 48
bytes, but the trial `cc1` emits two `nop` instructions between a comparison
and backward branch where retail has one. The linked candidate `.text` is 68
bytes against a 64-byte retail interval; positional comparison gives 50/64
equal bytes, SHA-256
`7f222dfa9836b51dac17373be53338ec896830a061516635955f8f9c69ce3a14`.
Archived local compiler builds tried for this one source emitted either zero
or two such `nop` instructions, and none matched. This is evidence of an
unresolved scheduling/padding difference, not authorization to post-process
the object or change a shared compiler.
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
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/hig_io_read.elf 0x01E65458 0x20
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/camera_init.elf 0x01E68630 0x28
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/fast_mem_copy.elf 0x01E68EE0 0x20
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/mcptrans_is_complete.elf 0x01E68F00 0x38
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/mcptrans_should_fade.elf 0x01E68F38 0x10
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/snd_unlock_positional_array.elf 0x01E91708 0x18
```

The `FOG_PreUpdate__Fv` control uses the same compile and link sequence with
`config/boot/witness-fog-preupdate.ld`; its comparison command deliberately
exits with failure:

```sh
python tools/compare_boot_slice.py baserom/SCUS_976.15 build/fog_preupdate.elf 0x01E7D4A8 0x40
```

The checker verifies the boot hash pinned in `config/target.json`, ELF
architecture and requested executable `.text` range, then reports only the
equal-byte count and candidate-slice hash. The complete boot text baseline
and one C-object replacement with exact raw `PT_LOAD` bytes and program
header now exist; compiler/profile, reviewed function catalogue, complete
ELF metadata and runtime checks still prevent a counted match. No ByteMatch
report is warranted yet.
