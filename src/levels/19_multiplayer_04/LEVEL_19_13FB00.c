/* LEVEL_19:0x13FB00 -- placement copy of LEVEL_16_142E68.c: resolves the two tagged handles built from the shared block's id word and keeps them. */
extern unsigned int D_0024E3C0[];
extern int D_001BEA34;
extern int D_001BEA38;
extern int func_0ED5B8(unsigned int id);
extern void func_141408(unsigned int id);

void func_13FB00(void)
{
    D_001BEA34 = func_0ED5B8((D_0024E3C0[0xB0 / 4] << 16) | 0x580034C1U);
    D_001BEA38 = ((int (*)(unsigned int))func_141408)((D_0024E3C0[0xB0 / 4] << 16) | 0x580030C1U);
}
