/* LEVEL_02:0x0BB5B0 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_00211328[];
extern void func_0AF790(int a0, int a1);
extern void func_0AF5B0(unsigned int a0);
extern unsigned int func_138860(int a0);
extern void func_0B17B0(int a0, int a1, unsigned int a2);

void func_0BB5B0(void)
{
    unsigned int r;

    if (*(int *)D_00211328 != 0) {
        func_0AF790(0, 0);
        func_0AF5B0((((unsigned int)*(unsigned char *)D_00211328) << 24) | 0x00FFFFFFu);
        r = func_138860(0x2F6);
        func_0B17B0(0x1CC, 0xFC, r);
    }
}
