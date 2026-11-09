/* LEVEL_03:0x0B4A88 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_002149E8[];
extern void func_0A8C00(int a0, int a1);
extern void func_0A8A20(unsigned int a0);
extern unsigned int func_130878(int a0);
extern void func_0AAC20(int a0, int a1, unsigned int a2);

void func_0B4A88(void)
{
    unsigned int r;

    if (*(int *)D_002149E8 != 0) {
        func_0A8C00(0, 0);
        func_0A8A20((((unsigned int)*(unsigned char *)D_002149E8) << 24) | 0x00FFFFFFu);
        r = func_130878(0x2F6);
        func_0AAC20(0x1CC, 0xFC, r);
    }
}
