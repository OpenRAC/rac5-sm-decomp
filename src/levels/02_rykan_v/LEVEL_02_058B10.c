/* LEVEL_02:0x058B10 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_10FF68(unsigned int);
extern int D_0020978C;
extern int D_00209790;
extern Rec D_002AF2C0;

void func_058B10(void)
{
    D_0020978C = func_10FF68((D_002AF2C0.b << 16) | 0xa00010c1U);
    D_00209790 = func_10FF68((D_002AF2C0.a << 16) | 0xa00010c1U);
}
