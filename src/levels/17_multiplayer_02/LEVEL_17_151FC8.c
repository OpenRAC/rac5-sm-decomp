/* LEVEL_17:0x151FC8 -- placement copy of LEVEL_16_159060.c: stores the results of two hashed lookups in globals (the first key mixes in a global id). */
extern int D_0023F658;
extern int D_001B11E4;
extern void func_0D40E0(unsigned int value);
extern int func_106410(unsigned int value);
extern int D_002D64C8;

void func_151FC8(void)
{
    int *p = &D_002D64C8;

    *p = ((int (*)(unsigned int))func_0D40E0)(((unsigned int)D_0023F658 << 16) | 0x80007041u);
    D_001B11E4 = func_106410(0xB51D9411u);
}
