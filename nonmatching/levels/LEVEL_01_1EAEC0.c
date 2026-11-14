/* USA LEVEL_01.REL:0x1EAEC0 (14 November 2026): exact linked bytes under
 * sdk991111, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller __floatdidf_LEVEL_01.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
/* Adapted from GCC 2.95.3 gcc/config/fp-bit.c.
 * Public upstream: https://github.com/gcc-mirror/gcc/blob/7f236610e99c7a11fb18f056b6446b3c7c40979c/gcc/config/fp-bit.c
 * Public upstream file SHA-256: 9aa27be26b945edde2c6ef81d0289724d1d9ca1e756a1a98230ab58de46091eb
 * Full upstream copyright, GPL and linking exception follow below.
 */
#define FINE_GRAINED_LIBRARIES
#define L_si_to_df
#define FLOAT_BIT_ORDER_MISMATCH
#define US_SOFTWARE_GOFAST
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

typedef float SFtype __attribute__ ((mode (SF)));
typedef float DFtype __attribute__ ((mode (DF)));

typedef int HItype __attribute__ ((mode (HI)));
typedef int SItype __attribute__ ((mode (SI)));
typedef int DItype __attribute__ ((mode (DI)));

/* The type of the result of a fp compare */
#ifndef CMPtype
#define CMPtype SItype
#endif

typedef unsigned int UHItype __attribute__ ((mode (HI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));

#define MAX_SI_INT   ((SItype) ((unsigned) (~0)>>1))
#define MAX_USI_INT  ((USItype) ~0)


#ifdef FLOAT_ONLY
#define NO_DI_MODE
#endif

#ifdef FLOAT
#	define NGARDS    7L
#	define GARDROUND 0x3f
#	define GARDMASK  0x7f
#	define GARDMSB   0x40
#	define EXPBITS 8
#	define EXPBIAS 127
#	define FRACBITS 23
#	define EXPMAX (0xff)
#	define QUIET_NAN 0x100000L
#	define FRAC_NBITS 32
#	define FRACHIGH  0x80000000L
#	define FRACHIGH2 0xc0000000L
#	define pack_d __pack_f
#	define unpack_d __unpack_f
#	define __fpcmp_parts __fpcmp_parts_f
	typedef USItype fractype;
	typedef UHItype halffractype;
	typedef SFtype FLO_type;
	typedef SItype intfrac;

#else
#	define PREFIXFPDP dp
#	define PREFIXSFDF df
#	define NGARDS 8L
#	define GARDROUND 0x7f
#	define GARDMASK  0xff
#	define GARDMSB   0x80
#	define EXPBITS 11
#	define EXPBIAS 1023
#	define FRACBITS 52
#	define EXPMAX (0x7ff)
#	define QUIET_NAN 0x8000000000000LL
#	define FRAC_NBITS 64
#	define FRACHIGH  0x8000000000000000LL
#	define FRACHIGH2 0xc000000000000000LL
#	define pack_d func_1EA478
#	define unpack_d func_1EA5A8
#	define __fpcmp_parts __fpcmp_parts_d
	typedef UDItype fractype;
	typedef USItype halffractype;
	typedef DFtype FLO_type;
	typedef DItype intfrac;
#endif

#ifdef US_SOFTWARE_GOFAST
#	ifdef FLOAT
#		define add 		fpadd
#		define sub 		fpsub
#		define multiply 	fpmul
#		define divide 		fpdiv
#		define compare 		fpcmp
#		define si_to_float 	sitofp
#		define float_to_si 	fptosi
#		define float_to_usi 	fptoui
#		define negate 		__negsf2
#		define sf_to_df		fptodp
#		define dptofp 		dptofp
#else
#		define add 		dpadd
#		define sub 		dpsub
#		define multiply func_1EA948
#		define divide 		dpdiv
#		define compare 		dpcmp
#		define si_to_float 	func_1EAEC0
#		define float_to_si 	dptoli
#		define float_to_usi 	dptoul
#		define negate 		__negdf2
#		define df_to_sf 	dptofp
#endif
#else
#	ifdef FLOAT
#		define add 		__addsf3
#		define sub 		__subsf3
#		define multiply 	__mulsf3
#		define divide 		__divsf3
#		define compare 		__cmpsf2
#		define _eq_f2 		__eqsf2
#		define _ne_f2 		__nesf2
#		define _gt_f2 		__gtsf2
#		define _ge_f2 		__gesf2
#		define _lt_f2 		__ltsf2
#		define _le_f2 		__lesf2
#		define si_to_float 	__floatsisf
#		define float_to_si 	__fixsfsi
#		define float_to_usi 	__fixunssfsi
#		define negate 		__negsf2
#		define sf_to_df		__extendsfdf2
#else
#		define add 		__adddf3
#		define sub 		__subdf3
#		define multiply 	__muldf3
#		define divide 		__divdf3
#		define compare 		__cmpdf2
#		define _eq_f2 		__eqdf2
#		define _ne_f2 		__nedf2
#		define _gt_f2 		__gtdf2
#		define _ge_f2 		__gedf2
#		define _lt_f2 		__ltdf2
#		define _le_f2 		__ledf2
#		define si_to_float 	__floatsidf
#		define float_to_si 	__fixdfsi
#		define float_to_usi 	__fixunsdfsi
#		define negate 		__negdf2
#		define df_to_sf		__truncdfsf2
#	endif
#endif


#ifndef INLINE
#define INLINE __inline__
#endif

/* Preserve the sticky-bit when shifting fractions to the right.  */
#define LSHIFT(a) { a = (a & 1) | (a >> 1); }

/* numeric parameters */
/* F_D_BITOFF is the number of bits offset between the MSB of the mantissa
   of a float and of a double. Assumes there are only two float types.
   (double::FRAC_BITS+double::NGARDS-(float::FRAC_BITS-float::NGARDS))
 */
#define F_D_BITOFF (52+8-(23+7))


#define NORMAL_EXPMIN (-(EXPBIAS)+1)
#define IMPLICIT_1 (1LL<<(FRACBITS+NGARDS))
#define IMPLICIT_2 (1LL<<(FRACBITS+1+NGARDS))

/* common types */

typedef enum
{
  CLASS_SNAN,
  CLASS_QNAN,
  CLASS_ZERO,
  CLASS_NUMBER,
  CLASS_INFINITY
} fp_class_type;

typedef struct
{
#ifdef SMALL_MACHINE
  char class;
  unsigned char sign;
  short normal_exp;
#else
  fp_class_type class;
  unsigned int sign;
  int normal_exp;
#endif

  union
    {
      fractype ll;
      halffractype l[2];
    } fraction;
} fp_number_type;

typedef union
{
  FLO_type value;
  fractype value_raw;

#ifndef FLOAT
  halffractype words[2];
#endif

#ifdef FLOAT_BIT_ORDER_MISMATCH
  struct
    {
      fractype fraction:FRACBITS __attribute__ ((packed));
      unsigned int exp:EXPBITS __attribute__ ((packed));
      unsigned int sign:1 __attribute__ ((packed));
    }
  bits;
#endif

#ifdef _DEBUG_BITFLOAT
  struct
    {
      unsigned int sign:1 __attribute__ ((packed));
      unsigned int exp:EXPBITS __attribute__ ((packed));
      fractype fraction:FRACBITS __attribute__ ((packed));
    }
  bits_big_endian;

  struct
    {
      fractype fraction:FRACBITS __attribute__ ((packed));
      unsigned int exp:EXPBITS __attribute__ ((packed));
      unsigned int sign:1 __attribute__ ((packed));
    }
  bits_little_endian;
#endif
}
FLO_union_type;


/* IEEE "special" number predicates */

#ifdef NO_NANS

#define nan() 0
#define isnan(x) 0
#define isinf(x) 0
#else

INLINE
static fp_number_type *
nan ()
{
  extern fp_number_type D_00398F08;

  return &D_00398F08;
}

INLINE
static int
isnan ( fp_number_type *  x)
{
  return x->class == CLASS_SNAN || x->class == CLASS_QNAN;
}

INLINE
static int
isinf ( fp_number_type *  x)
{
  return x->class == CLASS_INFINITY;
}

#endif

INLINE
static int
iszero ( fp_number_type *  x)
{
  return x->class == CLASS_ZERO;
}

INLINE
static void
flip_sign ( fp_number_type *  x)
{
  x->sign = !x->sign;
}

extern FLO_type pack_d ( fp_number_type * );

extern void unpack_d (FLO_union_type *, fp_number_type *);
#if defined(L_si_to_sf) || defined(L_si_to_df)
FLO_type
si_to_float (SItype arg_a)
{
  fp_number_type in;

  in.class = CLASS_NUMBER;
  in.sign = arg_a < 0;
  if (!arg_a)
    {
      in.class = CLASS_ZERO;
    }
  else
    {
      in.normal_exp = FRACBITS + NGARDS;
      if (in.sign)
	{
	  if (arg_a == (SItype) 0x80000000)
	    {
	      return -2147483648.0;
	    }
	  in.fraction.ll = (-arg_a);
	}
      else
	in.fraction.ll = arg_a;

      while (in.fraction.ll < (1LL << (FRACBITS + NGARDS)))
	{
	  in.fraction.ll <<= 1;
	  in.normal_exp -= 1;
	}
    }
  return pack_d (&in);
}
#endif
