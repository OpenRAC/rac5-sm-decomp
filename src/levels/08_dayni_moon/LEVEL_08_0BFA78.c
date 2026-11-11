/* LEVEL_08:0x0BFA78 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_00245228[];
extern void func_0B37B8(int a0, int a1);
extern void func_0B35D8(unsigned int a0);
extern unsigned int func_1439E8(int a0);
extern void func_0B57D8(int a0, int a1, unsigned int a2);

void func_0BFA78(void)
{
    unsigned int r;

    if (*(int *)D_00245228 != 0) {
        func_0B37B8(0, 0);
        func_0B35D8((((unsigned int)*(unsigned char *)D_00245228) << 24) | 0x00FFFFFFu);
        r = func_1439E8(0x2F6);
        func_0B57D8(0x1CC, 0xFC, r);
    }
}
