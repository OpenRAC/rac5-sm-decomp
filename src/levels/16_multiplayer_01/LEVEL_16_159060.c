/* LEVEL_16:0x159060 -- stores the results of two hashed lookups in globals (the first key mixes in a global id). */
extern int D_0024E358;
extern int D_001BDC0C;
extern void func_0D4E10(unsigned int value);
extern int func_106E98(unsigned int value);
extern int D_002E5250;

void func_159060(void)
{
    int *p = &D_002E5250;

    *p = ((int (*)(unsigned int))func_0D4E10)(((unsigned int)D_0024E358 << 16) | 0x80007041u);
    D_001BDC0C = func_106E98(0xB51D9411u);
}
