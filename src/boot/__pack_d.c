/* fp-bit.c, double precision: pack (GCC 2.9 config/fp-bit.c). */
typedef unsigned int USItype;
typedef unsigned long long UDItype;

typedef enum {
    CLASS_SNAN,
    CLASS_QNAN,
    CLASS_ZERO,
    CLASS_NUMBER,
    CLASS_INFINITY
} fp_class_type;

typedef UDItype fractype;
typedef USItype halffractype;
typedef double FLO_type;

typedef struct {
    fp_class_type class;
    unsigned int sign;
    int normal_exp;
    union {
        fractype ll;
        halffractype l[2];
    } fraction;
} fp_number_type;

typedef union {
    FLO_type value;
    fractype value_raw;
    halffractype words[2];
    struct {
        fractype fraction : 52;
        unsigned int exp : 11;
        unsigned int sign : 1;
    } bits;
} FLO_union_type;

#define NGARDS 8L
#define EXPBITS 11
#define EXPBIAS 1023
#define FRACBITS 52
#define EXPMAX (0x7ff)
#define QUIET_NAN 0x8000000000000LL
#define FRAC_NBITS 64
#define GARDROUND 0x7f
#define GARDMASK 0xff
#define GARDMSB 0x80
#define NORMAL_EXPMIN (-(EXPBIAS) + 1)
#define IMPLICIT_1 (1LL << (FRACBITS + NGARDS))
#define IMPLICIT_2 (1LL << (FRACBITS + 1 + NGARDS))

__inline__ static int isnan(fp_number_type *x) {
    return x->class == CLASS_SNAN || x->class == CLASS_QNAN;
}

__inline__ static int isinf(fp_number_type *x) {
    return x->class == CLASS_INFINITY;
}

__inline__ static int iszero(fp_number_type *x) {
    return x->class == CLASS_ZERO;
}

double __pack_d(fp_number_type *src) {
    FLO_union_type dst;
    fractype fraction = src->fraction.ll; /* wasn't unsigned before? */
    int sign = src->sign;
    int exp = 0;

    if (isnan(src)) {
        exp = EXPMAX;
        if (src->class == CLASS_QNAN || 1) {
            fraction |= QUIET_NAN;
        }
    } else if (isinf(src)) {
        exp = EXPMAX;
        fraction = 0;
    } else if (iszero(src)) {
        exp = 0;
        fraction = 0;
    } else if (fraction == 0) {
        exp = 0;
    } else {
        if (src->normal_exp < NORMAL_EXPMIN) {
            /* This number's exponent is too low to fit into the bits
               available in the number, so we'll store 0 in the exponent and
               shift the fraction to the right to make up for it.  */
            int shift = NORMAL_EXPMIN - src->normal_exp;

            exp = 0;

            if (shift > FRAC_NBITS - NGARDS) {
                /* No point shifting, since it's more that 64 out.  */
                fraction = 0;
            } else {
                /* Shift by the value */
                fraction >>= shift;
            }
            fraction >>= NGARDS;
        } else if (src->normal_exp > EXPBIAS) {
            exp = EXPMAX;
            fraction = 0;
        } else {
            exp = src->normal_exp + EXPBIAS;
            /* IF the gard bits are the all zero, but the first, then we're
               half way between two numbers, choose the one which makes the
               lsb of the answer 0.  */
            if ((fraction & GARDMASK) == GARDMSB) {
                if (fraction & (1 << NGARDS)) fraction += GARDROUND + 1;
            } else {
                /* Add a one to the guards to round up */
                fraction += GARDROUND;
            }
            if (fraction >= IMPLICIT_2) {
                fraction >>= 1;
                exp += 1;
            }
            fraction >>= NGARDS;
        }
    }

    /* We previously used bitfields to store the number, but this doesn't
       handle little/big endian systems conveniently, so use shifts and
       masks */
    dst.bits.fraction = fraction;
    dst.bits.exp = exp;
    dst.bits.sign = sign;

    return dst.value;
}

/* Adapted from public GNU GCC 2.95.3 fp-bit.c; full upstream source: https://github.com/gcc-mirror/gcc/blob/7f236610e99c7a11fb18f056b6446b3c7c40979c/gcc/config/fp-bit.c
 * FSF copyright, GPL-2.0-or-later terms and the original linking exception follow. */

/* This is a software floating point library which can be used instead of
   the floating point routines in libgcc1.c for targets without hardware
   floating point.
 Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.

This file is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file with other programs, and to distribute
those programs without any restriction coming from the use of this
file.  (The General Public License restrictions do apply in other
respects; for example, they cover modification of the file, and
distribution when not linked into another program.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */

/* This implements IEEE 754 format arithmetic, but does not provide a
   mechanism for setting the rounding mode, or for generating or handling
   exceptions.

   The original code by Steve Chamberlain, hacked by Mark Eichin and Jim
   Wilson, all of Cygnus Support.  */
