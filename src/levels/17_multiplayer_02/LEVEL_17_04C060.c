/* LEVEL_17:0x04C060 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_0EC910(unsigned int);
extern int D_001958EC;
extern int D_001958F0;
extern Rec D_0023F540;

void func_04C060(void)
{
    D_001958EC = func_0EC910((D_0023F540.b << 16) | 0xa00010c1U);
    D_001958F0 = func_0EC910((D_0023F540.a << 16) | 0xa00010c1U);
}
