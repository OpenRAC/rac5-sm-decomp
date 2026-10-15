# Provisional RAC5 short-loop compiler trial

The existing reconstructed GNU EE `cc1` produces two `nop` instructions
before the backward `bnel` in `FOG_PreUpdate__Fv` at `0x01E7D4A8`. Its linked
body is 68 bytes, against the pinned retail 64-byte interval. Removing the
compiler's short-loop padding pass in an isolated build produced **zero**
`nop` instructions and a 60-byte body. The retail has **one** there.

[`0001-rac5-short-loop-six.patch`](../tools/compiler/patches/0001-rac5-short-loop-six.patch)
changes both branches of `mips_r5900_pad_loops` from `loop < 7` to
`loop < 6`. It is a **RAC5-only trial**, applied to an isolated copy of the
locally reconstructed source after its existing patch stack. The source
still invokes this pass despite a nearby older comment that says the
assembler handles loop padding; the observed FOG output is the reason to
measure the pass instead of relying on that comment. The source
`gcc/config/mips/mips.c` SHA-256 before this trial was
`c76c0bec5b56c198381ab2a4fc60c161a4287e8312d7d1fdea3d1e6a0e1af614`;
`mips.h` remained unchanged at
`52f470a043ffbba535582e2f08a8353d23bbf6521b1b63e241847f464891d9e6`.
The patch passed a dry run against that source. It was never applied to RAC2's
shared runtime or compiler.

The isolated patched `cc1` SHA-256 was
`9614eceecbcb1f7a64cf3a4ad3c827b3e257ab6b1f934e42fcbc4ded0f0584d6`.
With the same measured `cpp` and assembler, `-O2 -G0` now emits **one**
`nop`. The C source in
[`nonmatching/boot/fog_preupdate.c`](../nonmatching/boot/fog_preupdate.c)
produces object SHA-256
`c2cb485df80e2e548499a984b4d9aeb753393dd8a958069255e42190631fc0f1`;
the isolated linked interval matches **64/64 bytes**, SHA-256
`f8a6560b8960c8d17085570344896f2e51ffea6285580cd0390579b61c6f7abe`.

As a regression control, all thirteen prior C source files were rebuilt by
the patched `cc1` without `RAC5_WITNESS_PADDING`. Their object SHA-256 values
were **identical** to the previous pinned objects, preserving the other
sixteen function witnesses. The full boot was then linked with all fourteen
objects: `.text` **498,900/498,900** and raw `PT_LOAD`
**809,872/809,872** remain exact, as do the ELF entry, program header and
BSS placement. The provisional linked bodies total **380 bytes**, with
**44 zero alignment bytes** across 424 measured placement bytes.

This trial resolves one concrete loop counterexample, but it does not qualify
an original RAC5 compiler profile. Other loop lengths, branches and source
families need independent controls. The GNU source, local compiler binaries,
objects, generated assembly and linked ELF are not distributed here. Keep
this candidate under `nonmatching/` and report **zero** ByteMatch matches
until the repository's full compiler and program gates hold.
