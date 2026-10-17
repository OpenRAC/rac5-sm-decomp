/* fp-bit.c, double precision (GCC 2.9 config/fp-bit.c), adapted without
   headers.  Source: D:/RAC2/master/build/sdk-compiler-build/source/ee/gcc/config/fp-bit.c */

typedef float DFtype __attribute__ ((mode (DF)));
typedef float SFtype __attribute__ ((mode (SF)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));
typedef int SItype __attribute__ ((mode (SI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));

typedef UDItype fractype;
typedef DFtype FLO_type;
typedef SItype CMPtype;

#define MAX_SI_INT   ((SItype) ((unsigned) (~0)>>1))
#define MAX_USI_INT  ((USItype) ~0)

#define NGARDS 8L
#define GARDROUND 0x7f
#define GARDMASK  0xff
#define GARDMSB   0x80
#define EXPBITS 11
#define EXPBIAS 1023
#define FRACBITS 52
#define EXPMAX (0x7ff)
#define QUIET_NAN 0x8000000000000LL
#define FRAC_NBITS 64
#define FRACHIGH  0x8000000000000000LL
#define FRACHIGH2 0xc000000000000000LL
#define F_D_BITOFF (52+8-(23+7))
#define IMPLICIT_1 (1LL<<(FRACBITS+NGARDS))
#define IMPLICIT_2 (1LL<<(FRACBITS+1+NGARDS))

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
  fp_class_type class;
  unsigned int sign;
  int normal_exp;

  union
    {
      fractype ll;
      unsigned int l[2];
    } fraction;
} fp_number_type;

typedef union
{
  FLO_type value;
  fractype value_raw;
  unsigned int words[2];
}
FLO_union_type;

__inline__ static int
isnan ( fp_number_type *  x)
{
  return x->class == CLASS_SNAN || x->class == CLASS_QNAN;
}

__inline__ static int
isinf ( fp_number_type *  x)
{
  return x->class == CLASS_INFINITY;
}

__inline__ static int
iszero ( fp_number_type *  x)
{
  return x->class == CLASS_ZERO;
}

void __unpack_d (FLO_union_type *, fp_number_type *);
extern FLO_type __pack_d ( fp_number_type * );
extern SFtype __make_fp (fp_class_type, unsigned int, int, USItype);
extern int __fpcmp_parts_d (fp_number_type *, fp_number_type *);


SFtype
dptofp (DFtype arg_a)
{
  fp_number_type in;
  USItype sffrac;

  __unpack_d ((FLO_union_type *) & arg_a, &in);

  sffrac = in.fraction.ll >> F_D_BITOFF;

  /* We set the lowest guard bit in SFFRAC if we discarded any non
     zero bits.  */
  if ((in.fraction.ll & (((USItype) 1 << F_D_BITOFF) - 1)) != 0)
    sffrac |= 1;

  return __make_fp (in.class, in.sign, in.normal_exp, sffrac);
}
