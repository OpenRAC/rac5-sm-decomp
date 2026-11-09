/* LEVEL_07:0x0B6D00 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_00210668[];
extern void func_0AAE80(int a0, int a1);
extern void func_0AACA0(unsigned int a0);
extern unsigned int func_1354B0(int a0);
extern void func_0ACEA0(int a0, int a1, unsigned int a2);

void func_0B6D00(void)
{
    unsigned int r;

    if (*(int *)D_00210668 != 0) {
        func_0AAE80(0, 0);
        func_0AACA0((((unsigned int)*(unsigned char *)D_00210668) << 24) | 0x00FFFFFFu);
        r = func_1354B0(0x2F6);
        func_0ACEA0(0x1CC, 0xFC, r);
    }
}
