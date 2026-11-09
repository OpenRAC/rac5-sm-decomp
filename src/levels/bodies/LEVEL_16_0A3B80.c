/* LEVEL_16:0x0A3B80 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_001AA3E8[];
extern void func_097540(int a0, int a1);
extern void func_097360(unsigned int a0);
extern unsigned int func_10F330(int a0);
extern void func_099590(int a0, int a1, unsigned int a2);

void func_0A3B80(void)
{
    unsigned int r;

    if (*(int *)D_001AA3E8 != 0) {
        func_097540(0, 0);
        func_097360((((unsigned int)*(unsigned char *)D_001AA3E8) << 24) | 0x00FFFFFFu);
        r = func_10F330(0x2F6);
        func_099590(0x1CC, 0xFC, r);
    }
}
