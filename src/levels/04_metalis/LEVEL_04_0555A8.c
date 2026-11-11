/* LEVEL_04:0x0555A8 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_115EF0(unsigned int);
extern int D_0020DC8C;
extern int D_0020DC90;
extern Rec D_002B25C0;

void func_0555A8(void)
{
    D_0020DC8C = func_115EF0((D_002B25C0.b << 16) | 0xa00010c1U);
    D_0020DC90 = func_115EF0((D_002B25C0.a << 16) | 0xa00010c1U);
}
