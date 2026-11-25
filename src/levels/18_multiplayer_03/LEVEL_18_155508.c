/* LEVEL_18:0x155508 -- placement copy of LEVEL_16_159060.c: stores the results of two hashed lookups in globals (the first key mixes in a global id). */
extern int D_0024E6D8;
extern int D_001BF0BC;
extern void func_0D3DE8(unsigned int value);
extern int func_105B48(unsigned int value);
extern int D_002E54B8;

void func_155508(void)
{
    int *p = &D_002E54B8;

    *p = ((int (*)(unsigned int))func_0D3DE8)(((unsigned int)D_0024E6D8 << 16) | 0x80007041u);
    D_001BF0BC = func_105B48(0xB51D9411u);
}
