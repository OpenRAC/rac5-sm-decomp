/* LEVEL_20:0x045C58 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_0C87D8(unsigned int);
extern int D_001049CC;
extern int D_001049D0;
extern Rec D_00171A80;

void func_045C58(void)
{
    D_001049CC = func_0C87D8((D_00171A80.b << 16) | 0xa00010c1U);
    D_001049D0 = func_0C87D8((D_00171A80.a << 16) | 0xa00010c1U);
}
