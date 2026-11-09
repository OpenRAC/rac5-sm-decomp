/* LEVEL_05:0x0517C0 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_107F80(unsigned int);
extern int D_001E3B4C;
extern int D_001E3B50;
extern Rec D_00283C80;

void func_0517C0(void)
{
    D_001E3B4C = func_107F80((D_00283C80.b << 16) | 0xa00010c1U);
    D_001E3B50 = func_107F80((D_00283C80.a << 16) | 0xa00010c1U);
}
