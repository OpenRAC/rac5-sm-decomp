/* LEVEL_22:0x0493E0 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_0E8100(unsigned int);
extern int D_00153B4C;
extern int D_00153B50;
extern Rec D_001ED980;

void func_0493E0(void)
{
    D_00153B4C = func_0E8100((D_001ED980.b << 16) | 0xa00010c1U);
    D_00153B50 = func_0E8100((D_001ED980.a << 16) | 0xa00010c1U);
}
