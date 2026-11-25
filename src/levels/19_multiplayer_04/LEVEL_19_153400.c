/* LEVEL_19:0x153400 -- placement copy of LEVEL_16_159060.c: stores the results of two hashed lookups in globals (the first key mixes in a global id). */
extern int D_0024E4D8;
extern int D_001BEE3C;
extern void func_0D46E8(unsigned int value);
extern int func_107538(unsigned int value);
extern int D_002E53B0;

void func_153400(void)
{
    int *p = &D_002E53B0;

    *p = ((int (*)(unsigned int))func_0D46E8)(((unsigned int)D_0024E4D8 << 16) | 0x80007041u);
    D_001BEE3C = func_107538(0xB51D9411u);
}
