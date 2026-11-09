/* LEVEL_22:0x0A3298 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_0015B6E8[];
extern void func_097490(int a0, int a1);
extern void func_0972B0(unsigned int a0);
extern unsigned int func_109980(int a0);
extern void func_0994B0(int a0, int a1, unsigned int a2);

void func_0A3298(void)
{
    unsigned int r;

    if (*(int *)D_0015B6E8 != 0) {
        func_097490(0, 0);
        func_0972B0((((unsigned int)*(unsigned char *)D_0015B6E8) << 24) | 0x00FFFFFFu);
        r = func_109980(0x2F6);
        func_0994B0(0x1CC, 0xFC, r);
    }
}
