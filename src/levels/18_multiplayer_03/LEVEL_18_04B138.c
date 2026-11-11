/* LEVEL_18:0x04B138 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_0EB7A8(unsigned int);
extern int D_001A376C;
extern int D_001A3770;
extern Rec D_0024E5C0;

void func_04B138(void)
{
    D_001A376C = func_0EB7A8((D_0024E5C0.b << 16) | 0xa00010c1U);
    D_001A3770 = func_0EB7A8((D_0024E5C0.a << 16) | 0xa00010c1U);
}
