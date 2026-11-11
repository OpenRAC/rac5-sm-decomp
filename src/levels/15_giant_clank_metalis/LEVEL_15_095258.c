/* LEVEL_15:0x095258 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_00150FE8[];
extern void func_089748(int a0, int a1);
extern void func_089568(unsigned int a0);
extern unsigned int func_0F1378(int a0);
extern void func_08B768(int a0, int a1, unsigned int a2);

void func_095258(void)
{
    unsigned int r;

    if (*(int *)D_00150FE8 != 0) {
        func_089748(0, 0);
        func_089568((((unsigned int)*(unsigned char *)D_00150FE8) << 24) | 0x00FFFFFFu);
        r = func_0F1378(0x2F6);
        func_08B768(0x1CC, 0xFC, r);
    }
}
