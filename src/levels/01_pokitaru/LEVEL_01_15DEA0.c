/* LEVEL_01:0x15DEA0 -- stores the lookup result for a packed id in a global. */
extern int D_002074AC;
extern unsigned int D_00297E14;
extern int func_109DB8(unsigned int);

void func_15DEA0(void)
{
    D_002074AC = func_109DB8((D_00297E14 << 16) | 0xa00010c1u);
}
