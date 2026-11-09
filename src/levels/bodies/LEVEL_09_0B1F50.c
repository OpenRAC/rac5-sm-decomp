/* LEVEL_09:0x0B1F50 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_001E6168[];
extern void func_0A6130(int a0, int a1);
extern void func_0A5F50(unsigned int a0);
extern unsigned int func_12B448(int a0);
extern void func_0A8150(int a0, int a1, unsigned int a2);

void func_0B1F50(void)
{
    unsigned int r;

    if (*(int *)D_001E6168 != 0) {
        func_0A6130(0, 0);
        func_0A5F50((((unsigned int)*(unsigned char *)D_001E6168) << 24) | 0x00FFFFFFu);
        r = func_12B448(0x2F6);
        func_0A8150(0x1CC, 0xFC, r);
    }
}
