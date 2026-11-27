/* LEVEL_01:0x1ECBD0 -- merges two sorted lists of frame records into the first list (copy of accepted FRONTEND_025958, libgcc frame.c fde_merge; ported from rac2-decomp src/core/001235C8.c). */
/* libgcc frame.c: fde_merge (GPL version 2-or-later with the libgcc linking
   exception; the same public source the qualified compiler is built from,
   gnu-ee-binutils-gcc-1.1, gcc/frame.c). Merge the two sorted FDE vectors V1
   and V2, leaving the result in V1. fde_compare is the file's static inline,
   (saddr) x->pc_begin - (saddr) y->pc_begin. */

typedef struct
{
  unsigned int length;
  int CIE_delta;
  void *pc_begin;
  unsigned int pc_range;
} fde;

typedef struct
{
  fde **array;
  unsigned int count;
} fde_vector;

static __inline__ int fde_compare(fde *x, fde *y) {
    return (int)x->pc_begin - (int)y->pc_begin;
}

void func_1ECBD0(fde_vector *v1, const fde_vector *v2) {
    unsigned int i1, i2;
    fde *fde2;

    i2 = v2->count;
    if (i2 > 0) {
        i1 = v1->count;
        do {
            i2--;
            fde2 = v2->array[i2];
            while (i1 > 0 && fde_compare(v1->array[i1 - 1], fde2) > 0) {
                v1->array[i1 + i2] = v1->array[i1 - 1];
                i1--;
            }
            v1->array[i1 + i2] = fde2;
        } while (i2 > 0);
        v1->count += v2->count;
    }
}

/* Corresponding public GCC frame.c notice:
 * https://raw.githubusercontent.com/gcc-mirror/gcc/7f236610e99c7a11fb18f056b6446b3c7c40979c/gcc/frame.c
 * This placement adapts the already qualified frontend FDE-vector merge.
 */
/* Copyright (C) 1997, 1998, 2000 Free Software Foundation, Inc.
   Contributed by Jason Merrill <jason@cygnus.com>.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */
