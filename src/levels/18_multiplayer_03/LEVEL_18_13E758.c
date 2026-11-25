/* LEVEL_18:0x13E758 -- placement copy of LEVEL_16_142E68.c: resolves the two tagged handles built from the shared block's id word and keeps them. */
extern unsigned int D_0024E5C0[];
extern int D_001BED44;
extern int D_001BED48;
extern int func_0EB7A8(unsigned int id);
extern void func_140060(unsigned int id);

void func_13E758(void)
{
    D_001BED44 = func_0EB7A8((D_0024E5C0[0xB0 / 4] << 16) | 0x580034C1U);
    D_001BED48 = ((int (*)(unsigned int))func_140060)((D_0024E5C0[0xB0 / 4] << 16) | 0x580030C1U);
}
