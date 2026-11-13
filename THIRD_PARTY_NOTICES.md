# Third-party source notices

This project uses only public, compatibly licensed source as a research lead.
The RAC5 adaptations below are checked against the pinned retail program;
the source and linker gates determine matching credit. Sony SDK source is not
a permitted reference.

## Newlib 1.9.0 / fdlibm

The functions below adapt the public Newlib 1.9.0 files at commit
`039e8a3c16964d02838b204b72bfdd4b7529107c`. The corresponding local research copies were compared to
this public release; the original files are byte-identical. The per-file
Sun Microsystems permission notice is retained in each adapted C file.
The public [`newlib/libc/include/math.h`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libc/include/math.h)
and [`newlib/libm/common/fdlibm.h`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/common/fdlibm.h)
supplied the shared math types and accessors. Their relevant declarations were
compared with the public release; RAC5-specific addresses and scalar references were
verified against the retail boot, not imported from an SDK header.

| RAC5 source | Public upstream |
| --- | --- |
| `nonmatching/boot/__ieee754_acosf.c` | [`newlib/libm/math/ef_acos.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/ef_acos.c) |
| `nonmatching/boot/__ieee754_rem_pio2.c` | [`newlib/libm/math/e_rem_pio2.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/e_rem_pio2.c) |
| `nonmatching/boot/__ieee754_rem_pio2f.c` | [`newlib/libm/math/ef_rem_pio2.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/ef_rem_pio2.c) |
| `nonmatching/boot/__ieee754_sqrt.c` | [`newlib/libm/math/e_sqrt.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/e_sqrt.c) |
| `nonmatching/boot/__ieee754_sqrtf.c` | [`newlib/libm/math/ef_sqrt.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/ef_sqrt.c) |
| `nonmatching/boot/__kernel_cos.c` | [`newlib/libm/math/k_cos.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/k_cos.c) |
| `nonmatching/boot/__kernel_rem_pio2.c` | [`newlib/libm/math/k_rem_pio2.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/k_rem_pio2.c) |
| `nonmatching/boot/__kernel_rem_pio2f.c` | [`newlib/libm/math/kf_rem_pio2.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/kf_rem_pio2.c) |
| `nonmatching/boot/acosf.c` | [`newlib/libm/math/wf_acos.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/wf_acos.c) |
| `nonmatching/boot/asinf.c` | [`newlib/libm/math/wf_asin.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/wf_asin.c) |
| `nonmatching/boot/atan2f.c` | [`newlib/libm/math/wf_atan2.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/wf_atan2.c) |
| `nonmatching/boot/atanf.c` | [`newlib/libm/math/sf_atan.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/sf_atan.c) |
| `nonmatching/boot/ceilf.c` | [`newlib/libm/math/sf_ceil.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/sf_ceil.c) |
| `nonmatching/boot/copysignf.c` | [`newlib/libm/common/sf_copysign.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/common/sf_copysign.c) |
| `nonmatching/boot/cosf.c` | [`newlib/libm/math/sf_cos.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/sf_cos.c) |
| `nonmatching/boot/expf.c` | [`newlib/libm/math/wf_exp.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/wf_exp.c) |
| `nonmatching/boot/fabs.c` | [`newlib/libm/math/s_fabs.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/s_fabs.c) |
| `nonmatching/boot/fabsf.c` | [`newlib/libm/math/sf_fabs.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/sf_fabs.c) |
| `nonmatching/boot/finitef.c` | [`newlib/libm/common/sf_finite.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/common/sf_finite.c) |
| `nonmatching/boot/floorf.c` | [`newlib/libm/math/sf_floor.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/sf_floor.c) |
| `nonmatching/boot/fmodf.c` | [`newlib/libm/math/wf_fmod.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/wf_fmod.c) |
| `nonmatching/boot/isnan.c` | [`newlib/libm/math/s_isnan.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/s_isnan.c) |
| `nonmatching/boot/isnanf.c` | [`newlib/libm/math/sf_isnan.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/sf_isnan.c) |
| `nonmatching/boot/logf.c` | [`newlib/libm/math/wf_log.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/wf_log.c) |
| `nonmatching/boot/sin.c` | [`newlib/libm/math/s_sin.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/s_sin.c) |
| `nonmatching/boot/sinf.c` | [`newlib/libm/math/sf_sin.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/sf_sin.c) |
| `nonmatching/boot/sqrt.c` | [`newlib/libm/math/w_sqrt.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/w_sqrt.c) |
| `nonmatching/boot/sqrtf.c` | [`newlib/libm/math/wf_sqrt.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/wf_sqrt.c) |
| `nonmatching/boot/tanf.c` | [`newlib/libm/math/sf_tan.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libm/math/sf_tan.c) |

The original source notice permits use, copying, modification and
distribution provided that the Sun Microsystems notice is preserved.
The files in this table are modified for the RAC5 ABI, symbols and pool
placement; they are not verbatim copies of the upstream translation units.

## Newlib mprec.c (one adapted helper)

`nonmatching/boot/_i2b.c` adapts the `i2b` helper from public
[Newlib 1.9.0 `newlib/libc/stdlib/mprec.c`](https://github.com/mirror/newlib-cygwin/blob/039e8a3c16964d02838b204b72bfdd4b7529107c/newlib/libc/stdlib/mprec.c).
The relevant helper body is unchanged between that public release
and the local research copy. The original David M. Gay / AT&T
permission notice is retained in the adapted source. RAC5-specific
structure offsets were checked against the pinned retail boot.

## Vendored newlib 1.8.2 headers

`third_party/newlib-1.8.2/` carries the public newlib 1.8.2 headers
(`newlib/libc/include/`, the `newlib/libc/stdio/` private headers `local.h`,
`floatio.h`, `fvwrite.h`) and the release's `COPYING.NEWLIB`, unmodified. The
files come from the public release tarball
`https://sourceware.org/pub/newlib/newlib-1.8.2.tar.gz`
(SHA-256 `e52667ed78595dd1919f4a303f8b658b1d57b926e085e8021851b279143cf3ef`).

`nonmatching/boot/__svfscanf.c` is the verbatim `newlib/libc/stdio/vfscanf.c`
lines 20-801 from that release (diff empty against the public tarball); its
file header records the equivalence and the MB_CAPABLE define the Sony EE libc
was built with. The vendored headers are used only at preprocess time by the
private boot gate through repository-relative `-I` flags.

## GCC 2.95.3 `fp-bit.c` (software floating-point multiplication)

The level and frontend C files listed below adapt the public Free Software
Foundation source [`gcc/config/fp-bit.c` from GCC 2.95.3 at commit
`7f236610e99c7a11fb18f056b6446b3c7c40979c`](https://github.com/gcc-mirror/gcc/blob/7f236610e99c7a11fb18f056b6446b3c7c40979c/gcc/config/fp-bit.c).
The unmodified upstream file has SHA-256
`9aa27be26b945edde2c6ef81d0289724d1d9ca1e756a1a98230ab58de46091eb`.
It is licensed under GNU GPL version 2 or any later version and carries the
file's original linking permissions and special exception. Each adapted C file
preserves the complete upstream copyright, GPL, and exception notices.

The adaptations retain the double-precision multiplication path, its active
types and predicates, and the public `FINE_GRAINED_LIBRARIES`, `L_mul_df`,
`FLOAT_BIT_ORDER_MISMATCH`, and `US_SOFTWARE_GOFAST` selections. They omit
unrelated routines, declare the external unpack helper, replace the unpack,
pack, and multiplication names with the reviewed module-local symbols, and
refer to each module's existing NaN object rather than defining a new static
one. The compiler emits `__muldi3` for 64-bit multiplications; that helper's
module-local targets were checked privately. No Sony SDK source, headers, or
samples are included in these adaptations.

Adapted files:

- `src/levels/frontend/FRONTEND_0238C8.c`
- `src/levels/01_pokitaru/LEVEL_01_1EA948.c`
- `src/levels/02_rykan_v/LEVEL_02_1FF5E0.c`
- `src/levels/03_kalidon/LEVEL_03_202FD8.c`
- `src/levels/04_metalis/LEVEL_04_203B08.c`
- `src/levels/05_medical_outpost/LEVEL_05_1D9D40.c`
- `src/levels/06_challax/LEVEL_06_1D9890.c`
- `src/levels/07_dreamtime/LEVEL_07_1FECC0.c`
- `src/levels/08_dayni_moon/LEVEL_08_2334D0.c`
- `src/levels/09_inside_clank/LEVEL_09_1D47B0.c`
- `src/levels/10_quodrona/LEVEL_10_1F39A0.c`
- `src/levels/15_giant_clank_metalis/LEVEL_15_13F640.c` (also placed in LEVEL_21)
- `src/levels/16_multiplayer_01/LEVEL_16_1963E8.c`
- `src/levels/17_multiplayer_02/LEVEL_17_189A30.c`
- `src/levels/18_multiplayer_03/LEVEL_18_197888.c`
- `src/levels/19_multiplayer_04/LEVEL_19_1975B0.c`
- `src/levels/20_multiplayer_lobby/LEVEL_20_0F8B18.c`
- `src/levels/22_skyboard_kalidon/LEVEL_22_149D00.c`
- `src/levels/23_skyboard_challax/LEVEL_23_1BDD88.c`
- `src/levels/24_treehouse/LEVEL_24_1BB620.c`

## GNU EE compiler patches (`tools/compiler/`)

The patches in `tools/compiler/` modify the public GNU EE source archive
`gnu-ee-binutils-gcc-1.1` (GCC and GNU binutils, Copyright the Free Software
Foundation, GNU GPL version 2 or any later version). The archive is not
redistributed here: `tools/compiler/build_gnu_ee.sh` downloads it and checks its
SHA-256 (`1f518043e252d6eda726386971d52eda26541ab936ea73a9783d73712b595f92`), and
the patched files keep their FSF notices.

- `patches/lombyte/0020-gas-absolute-unknown-symbol.patch` and
  `patches/lombyte/0027-gas-inline-float-literals.patch` are unchanged copies of
  patches of [Lombyte](https://github.com/lombyte-project/Lombyte)'s `sce-991111b`
  stack, as carried by [OpenRAC/rac2-decomp](https://github.com/OpenRAC/rac2-decomp).
  MIT License, Copyright (c) 2026 Mateusz Kłysz.
- `patches/0000-rac5-pinned-base.patch` combines that stack (same notice) with the
  compiler and assembler edits of OpenRAC/rac2-decomp, licensed GPL-3.0; the notice of
  that project's earlier MIT releases is in its `THIRD_PARTY_NOTICES.md`.
  `patches/0007-rac5-gnu-ee-trial.patch` and `patches/0008-rac5-gas-r5900-mfc1.patch`
  carry further edits of that project, from its recipes at commits `7fccf735` and
  `e07c4844`, under the same terms.
- `patches/sdk/bison-grammar.patch` comes from OpenRAC/rac2-decomp's SDK compiler
  recipe (`tools/compiler/sdk/`), under the same terms as that project's other edits.
- The other patches in `tools/compiler/` are this project's, under its GPL-3.0
  license.

The SDK compiler selectors build Sony EE-GCC 2.9-ee-991111-01 from the public
snapshot [SSXModding/ps2-ee-toolchain](https://github.com/SSXModding/ps2-ee-toolchain)
at commit `b595ded606227e93b8c4a447446c1d2ac093827d`: GNU GCC and binutils trees
(Free Software Foundation and Cygnus, GNU GPL version 2 or any later version, with
their COPYING files). `tools/compiler/build_gnu_ee.sh` clones it at that commit; none
of it is redistributed here.

The MIT permission notice of the Lombyte patches:

```
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
