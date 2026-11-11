/* LEVEL_05:0x0B3260 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_001EB6E8[];
extern void func_0A7440(int a0, int a1);
extern void func_0A7260(unsigned int a0);
extern unsigned int func_12DE28(int a0);
extern void func_0A9460(int a0, int a1, unsigned int a2);

void func_0B3260(void)
{
    unsigned int r;

    if (*(int *)D_001EB6E8 != 0) {
        func_0A7440(0, 0);
        func_0A7260((((unsigned int)*(unsigned char *)D_001EB6E8) << 24) | 0x00FFFFFFu);
        r = func_12DE28(0x2F6);
        func_0A9460(0x1CC, 0xFC, r);
    }
}
