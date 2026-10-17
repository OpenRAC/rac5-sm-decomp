/* fp-bit.c, single precision (GCC 2.9 config/fp-bit.c), adapted without
   headers.  Source: D:/RAC2/master/build/sdk-compiler-build/source/ee/gcc/config/fp-bit.c
   FLOAT build: fractype = USItype. */

typedef float SFtype __attribute__ ((mode (SF)));
typedef float DFtype __attribute__ ((mode (DF)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));
typedef unsigned int UHItype __attribute__ ((mode (HI)));
typedef int SItype __attribute__ ((mode (SI)));

typedef USItype fractype;
typedef UHItype halffractype;
typedef SFtype FLO_type;

#define MAX_SI_INT   ((SItype) ((unsigned) (~0)>>1))
#define MAX_USI_INT  ((USItype) ~0)

#define NGARDS 7L
#define GARDROUND 0x3f
#define GARDMASK  0x7f
#define GARDMSB   0x40
#define EXPBITS 8
#define EXPBIAS 127
#define FRACBITS 23
#define EXPMAX (0xff)
#define QUIET_NAN 0x100000L
#define FRAC_NBITS 32
#define FRACHIGH  0x80000000L
#define FRACHIGH2 0xc0000000L
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
      halffractype l[2];
    } fraction;
} fp_number_type;

typedef union
{
  FLO_type value;
  fractype value_raw;
  halffractype words[2];
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

void __unpack_f (FLO_union_type *, fp_number_type *);
extern FLO_type __pack_f ( fp_number_type * );
extern DFtype __make_dp (fp_class_type, unsigned int, int, UDItype frac);


DFtype
fptodp (SFtype arg_a)
{
  fp_number_type in;

  __unpack_f ((FLO_union_type *) & arg_a, &in);
  return __make_dp (in.class, in.sign, in.normal_exp,
		    ((UDItype) in.fraction.ll) << F_D_BITOFF);
}
