/* LEVEL_17:0x13E878 -- placement copy of LEVEL_16_142E68.c: resolves the two tagged handles built from the shared block's id word and keeps them. */
extern unsigned int D_0023F540[];
extern int D_001B0EB4;
extern int D_001B0EB8;
extern int func_0EC910(unsigned int id);
extern void func_140180(unsigned int id);

void func_13E878(void)
{
    D_001B0EB4 = func_0EC910((D_0023F540[0xB0 / 4] << 16) | 0x580034C1U);
    D_001B0EB8 = ((int (*)(unsigned int))func_140180)((D_0023F540[0xB0 / 4] << 16) | 0x580030C1U);
}
