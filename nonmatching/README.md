# Nonmatching C

Keep useful C/C++ hypotheses here until the compiler and complete-program byte
gate accept them. Some local boot slices now reproduce their reference bytes
(`docs/COMPILER-WITNESSES.md`), but their placement and acceptance reviews
are not complete. These candidates do not count toward progress.
The accepted boot-only `MEMCARD_Busy__Fv` definition now lives in `src/boot/`.
All other boot witnesses remain provisional here. Instruction assembly, raw encoded
instructions and fixed-register bindings are excluded from public C attempts and
from the compiler witness campaigns. Preserve such experiments privately; leave
their retail intervals in the assembly baseline without C credit. Symbol-only
declaration labels for retail ELF names are allowed and emit no instructions.
The two short level C controls under `nonmatching/levels/` have exact linked
bodies, but they are not accepted matches; see
[`docs/LEVEL-C-WITNESS.md`](../docs/LEVEL-C-WITNESS.md).
