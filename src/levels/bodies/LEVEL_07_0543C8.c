/* LEVEL_07:0x0543C8 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_10D2F0(unsigned int);
extern int D_00208ACC;
extern int D_00208AD0;
extern Rec D_002AD6C0;

void func_0543C8(void)
{
    D_00208ACC = func_10D2F0((D_002AD6C0.b << 16) | 0xa00010c1U);
    D_00208AD0 = func_10D2F0((D_002AD6C0.a << 16) | 0xa00010c1U);
}
