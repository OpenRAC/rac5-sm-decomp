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


DItype
__fixunsdfdi (DFtype a)
{
  DFtype b;
  UDItype v;

  if (a < 0)
    return 0;

  /* Compute high word of result, as a flonum.  */
  b = (a / HIGH_WORD_COEFF);
  /* Convert that to fixed (but not to DItype!),
     and shift it into the high word.  */
  v = (USItype) b;
  v <<= WORD_SIZE;
  /* Remove high part from the DFtype, leaving the low part as flonum.  */
  a -= (DFtype)v;
  /* Convert that to fixed (but not to DItype!) and add it in.
     Sometimes A comes out negative.  This is significant, since
     A has more bits than a long int does.  */
  if (a < 0)
    v -= (USItype) (- a);
  else
    v += (USItype) a;
  return v;
}
