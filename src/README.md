# Authored matching source

`boot/memcard_busy.c` is the first boot-only accepted C definition. Its pinned
compiler, 16-byte body and complete boot load image are checked by
`tools/boot_trial_gate.py` with a lawful local ELF. See
`docs/BOOT-MATCH-SCOPE.md` for the exact acceptance scope and limitations.
Other candidates remain in `nonmatching/` until independently reviewed.
`levels/frontend/func_00002F80.c` reconstructs one 476-byte frontend New Game
initializer. The level C gate checks its complete SNR2 module and measured
relocated image; the source keeps unnamed structure fields as offsets where
their original names and layouts are not established.
`levels/shared/func_00000100.c` is one additional 8-byte function accepted
at all twenty numbered level placements by the
[shared level C gate](../docs/LEVEL-C-WITNESS.md).
