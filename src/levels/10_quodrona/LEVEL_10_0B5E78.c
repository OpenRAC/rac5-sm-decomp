/* LEVEL_10:0x0B5E78 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_00205368[];
extern void func_0A9F98(int a0, int a1);
extern void func_0A9DB8(unsigned int a0);
extern unsigned int func_130310(int a0);
extern void func_0ABFB8(int a0, int a1, unsigned int a2);

void func_0B5E78(void)
{
    unsigned int r;

    if (*(int *)D_00205368 != 0) {
        func_0A9F98(0, 0);
        func_0A9DB8((((unsigned int)*(unsigned char *)D_00205368) << 24) | 0x00FFFFFFu);
        r = func_130310(0x2F6);
        func_0ABFB8(0x1CC, 0xFC, r);
    }
}
