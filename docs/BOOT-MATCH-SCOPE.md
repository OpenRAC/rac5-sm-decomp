# First accepted boot C placement

`MEMCARD_Busy__Fv` at `0x01E627C0`–`0x01E627D0` is the first narrowly
accepted C match for the pinned USA PS2 boot `SCUS_976.15`. It has one known
boot placement. The reviewed linked symbol is 16 bytes, ends with `jr $ra`
and its delay slot inside that extent, has no trailing alignment bytes, and
has no direct branch or jump target into its interval. This is a reviewed
placement claim, not a complete retail function catalogue.

The project qualifies the [hash-pinned compiler trial](../config/boot/compiler_trial.json)
**for this boot placement only**. Its independently authored C compiles to the
pinned object without byte rewriting. The same toolchain recompiles 17 objects
covering 20 C witnesses, including distinct conditional, call, copy and
short-loop shapes; the other 19 functions remain unaccepted. The linker
replaces the candidate interval in the complete private boot assembly.
`tools/boot_trial_gate.py` requires the reconstructed `.text` to match all
498,900 retail bytes and the raw file-backed `PT_LOAD` to match all 809,872
bytes, with identical entry, complete program header and BSS location/size.
The non-code loaded sections still originate from the user's hash-pinned
retail executable. A source-slice comparison alone cannot pass this gate.

The [ELF packaging tool](../tools/boot_elf_pack.py) now takes the C-linked
`PT_LOAD`, independently regenerates the 31 non-loaded `.DVP` sections and
tables from public metadata, and emits the header, `.reginfo`, section names
and section headers from a numeric [layout catalogue](../config/boot/elf_layout.json).
The resulting **856,120-byte ELF matches the entire pinned file** by SHA-256.
The direct SN-linker output still has a different section layout; the
packaging step repairs that difference without copying the retail ELF file.
The non-code **loaded** sections are still derived from the user's pinned
retail executable, so this is not a wholly source-derived game build.

The full-file equality also gives the same measured executable CRC,
`8661F7BA`, for this pinned boot, although the packaged ELF has not been run through full
gameplay. The earlier isolated smoke test used a stripped, different-CRC
candidate and reached the frontend's `SNR2` header. The original compiler
executable and all level compiler profiles remain unidentified.

The gate writes a private `build/boot-trial-gate/report.json` only after every
check succeeds, with `counted_matches: 1`, `counted_bytes: 16`, and
`accepted_functions: ["MEMCARD_Busy__Fv"]`. It initializes the report as
`incomplete` with zero matches before checking anything. This report is
evidence for the one boot placement; no game-wide percentage or ByteMatch
report has been published. If a source, compiler, linker, boundary or boot
input changes, rerun the full gate, including ELF packaging. If it fails,
remove the counted claim and
repair the source or move it back to `nonmatching/` until it passes again.

Further promotions require a separate placement and boundary review. Exact
bytes in the current multi-object witness are a useful starting point, but
do not automatically accept the remaining nineteen C bodies.
