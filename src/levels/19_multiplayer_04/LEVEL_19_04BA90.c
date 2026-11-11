/* LEVEL_19:0x04BA90 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_0ED5B8(unsigned int);
extern int D_001A346C;
extern int D_001A3470;
extern Rec D_0024E3C0;

void func_04BA90(void)
{
    D_001A346C = func_0ED5B8((D_0024E3C0.b << 16) | 0xa00010c1U);
    D_001A3470 = func_0ED5B8((D_0024E3C0.a << 16) | 0xa00010c1U);
}
