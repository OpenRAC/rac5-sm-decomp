/* LEVEL_09:0x0502D8 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_105C98(unsigned int);
extern int D_001DE5CC;
extern int D_001DE5D0;
extern Rec D_0027F540;

void func_0502D8(void)
{
    D_001DE5CC = func_105C98((D_0027F540.b << 16) | 0xa00010c1U);
    D_001DE5D0 = func_105C98((D_0027F540.a << 16) | 0xa00010c1U);
}
