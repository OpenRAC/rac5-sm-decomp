/* LEVEL_09:0x15CAF8 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_06B020(unsigned int);
extern int D_001F11A0;
extern int D_001F1158;
extern Rec D_0027F540;

void func_15CAF8(void)
{
    D_001F11A0 = func_06B020((D_0027F540.a << 16) | 0x580064c1U);
    D_001F1158 = func_06B020((D_0027F540.a << 16) | 0x580064c1U);
}
