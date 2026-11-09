/* LEVEL_17:0x0A3060 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_0019D9E8[];
extern void func_096A38(int a0, int a1);
extern void func_096858(unsigned int a0);
extern unsigned int func_10E8A8(int a0);
extern void func_098A88(int a0, int a1, unsigned int a2);

void func_0A3060(void)
{
    unsigned int r;

    if (*(int *)D_0019D9E8 != 0) {
        func_096A38(0, 0);
        func_096858((((unsigned int)*(unsigned char *)D_0019D9E8) << 24) | 0x00FFFFFFu);
        r = func_10E8A8(0x2F6);
        func_098A88(0x1CC, 0xFC, r);
    }
}
