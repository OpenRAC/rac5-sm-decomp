/* LEVEL_24:0x0AE518 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_001CCFE8[];
extern void func_0A26F8(int a0, int a1);
extern void func_0A2518(unsigned int a0);
extern unsigned int func_127FB0(int a0);
extern void func_0A4718(int a0, int a1, unsigned int a2);

void func_0AE518(void)
{
    unsigned int r;

    if (*(int *)D_001CCFE8 != 0) {
        func_0A26F8(0, 0);
        func_0A2518((((unsigned int)*(unsigned char *)D_001CCFE8) << 24) | 0x00FFFFFFu);
        r = func_127FB0(0x2F6);
        func_0A4718(0x1CC, 0xFC, r);
    }
}
