/* libgcc2.c (GCC 2.9 ee), adapted without headers.
   Source: D:/RAC2/master/build/sdk-compiler-build/source/ee/gcc/libgcc2.c */

typedef int SItype __attribute__ ((mode (SI)));
typedef int DItype __attribute__ ((mode (DI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));
typedef float SFtype __attribute__ ((mode (SF)));
typedef float DFtype __attribute__ ((mode (DF)));

typedef union
{
  struct
    {
      SItype low, high;
    } s;
  DItype ll;
} DIunion;

#define WORD_SIZE (sizeof (SItype) * 8)
#define HIGH_WORD_COEFF (((UDItype) 1) << WORD_SIZE)
#define HIGH_HALFWORD_COEFF (((UDItype) 1) << (WORD_SIZE / 2))


DFtype
__floatdidf (DItype u)
{
  DFtype d;

  d = (SItype) (u >> WORD_SIZE);
  d *= HIGH_HALFWORD_COEFF;
  d *= HIGH_HALFWORD_COEFF;
  d += (USItype) (u & (HIGH_WORD_COEFF - 1));

  return d;
}
