/* LEVEL_21:0x044E78 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_0D30F0(unsigned int);
extern int D_0014944C;
extern int D_00149450;
extern Rec D_001AFE00;

void func_044E78(void)
{
    D_0014944C = func_0D30F0((D_001AFE00.b << 16) | 0xa00010c1U);
    D_00149450 = func_0D30F0((D_001AFE00.a << 16) | 0xa00010c1U);
}
