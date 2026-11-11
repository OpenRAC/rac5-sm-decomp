/* LEVEL_17:0x143A18 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_05E7F8(unsigned int);
extern int D_001B0F40;
extern int D_001B0EF8;
extern Rec D_0023F540;

void func_143A18(void)
{
    D_001B0F40 = func_05E7F8((D_0023F540.a << 16) | 0x580064c1U);
    D_001B0EF8 = func_05E7F8((D_0023F540.a << 16) | 0x580064c1U);
}
