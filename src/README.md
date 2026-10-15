# Authored matching source

`boot/memcard_busy.c` is the first boot-only accepted C definition. Its pinned
compiler, 16-byte body and complete boot load image are checked by
`tools/boot_trial_gate.py` with a lawful local ELF. See
`docs/BOOT-MATCH-SCOPE.md` for the exact acceptance scope and limitations.
Other candidates remain in `nonmatching/` until independently reviewed.
