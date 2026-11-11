/* LEVEL_16:0x04C630 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_0ED9E8(unsigned int);
extern int D_001A22EC;
extern int D_001A22F0;
extern Rec D_0024E240;

void func_04C630(void)
{
    D_001A22EC = func_0ED9E8((D_0024E240.b << 16) | 0xa00010c1U);
    D_001A22F0 = func_0ED9E8((D_0024E240.a << 16) | 0xa00010c1U);
}
