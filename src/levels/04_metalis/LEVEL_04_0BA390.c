/* LEVEL_04:0x0BA390 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_00215828[];
extern void func_0AE0D0(int a0, int a1);
extern void func_0ADEF0(unsigned int a0);
extern unsigned int func_13E930(int a0);
extern void func_0B00F0(int a0, int a1, unsigned int a2);

void func_0BA390(void)
{
    unsigned int r;

    if (*(int *)D_00215828 != 0) {
        func_0AE0D0(0, 0);
        func_0ADEF0((((unsigned int)*(unsigned char *)D_00215828) << 24) | 0x00FFFFFFu);
        r = func_13E930(0x2F6);
        func_0B00F0(0x1CC, 0xFC, r);
    }
}
