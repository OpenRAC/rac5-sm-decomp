# First shared level C placement

`func_00000100` is an independently authored 8-byte C body returning `1`.
The same two retail instructions occupy module offset `0x100` in all twenty
numbered USA `LEVEL_*.REL` files. The source has **one definition** in
[`src/levels/shared/func_00000100.c`](../src/levels/shared/func_00000100.c).
Its name describes the measured offset; its game-level purpose is unknown.

The narrowly scoped [level compiler trial](../config/levels/compiler_trial.json)
reuses the hash-pinned RAC5 GNU EE tools and `-O2 -G0` flags, but accepts
only this shared function. Two independent forms serve as uncounted controls:
an indexed global-array read at `LEVEL_01.REL:0x190` (24 bytes) and a global
store at `FRONTEND.REL:0x2CD8` (12 bytes). Their C remains under
`nonmatching/levels/`. Matching these short forms does not identify the
original compiler or qualify arbitrary level functions.

`tools/level_c_gate.py` recompiles all three sources on a native Linux
filesystem, requires pinned object hashes, links each object at its measured
module offset with the pinned SN linker, and compares every body byte. At all
twenty level placements it checks that offset `0x100` is a direct call target,
the adjacent `0x108` is separately called, no **direct** jump or branch enters
the body interior, and no named or packed relocation touches its eight bytes.
It then replaces those bytes in each complete private SNR2 module and requires
all **20/20 complete module SHA-256 values** to match the pinned disc. The
two control functions also preserve their complete frontend/level 01 files,
and the previously measured relocated-image hashes at those two bases.
The rest of each module is supplied by the pinned retail input. No game bytes,
compiler binaries or linked outputs are committed.

With your own lawful pinned USA disc and matching local tools, run in WSL:

```sh
python3 tools/level_c_gate.py baserom/SCUS_976.15.iso \
  --boot baserom/SCUS_976.15 \
  --cpp /path/to/cpp --cc1 /path/to/cc1 --as /path/to/as \
  --linker /mnt/c/path/to/ld.exe \
  --output-dir /home/you/rac5-level-c-trial
```

The ignored `build/level-c-gate/report.json` starts as `incomplete` with zero
matches on every run. Only a full pass reports one accepted function: **8
compiled body bytes across twenty placements, or 160 placement bytes**. This is a
limited shared-level match, not a verified game-wide percentage. More level
functions require their own boundaries, compiler controls, complete-program
checks and shared-code accounting before ByteMatch publication.
