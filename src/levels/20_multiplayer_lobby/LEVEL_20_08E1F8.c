/* LEVEL_20:0x08E1F8 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_0010CAC8[];
extern void func_081C38(int a0, int a1);
extern void func_081A58(unsigned int a0);
extern unsigned int func_0E2118(int a0);
extern void func_083C88(int a0, int a1, unsigned int a2);

void func_08E1F8(void)
{
    unsigned int r;

    if (*(int *)D_0010CAC8 != 0) {
        func_081C38(0, 0);
        func_081A58((((unsigned int)*(unsigned char *)D_0010CAC8) << 24) | 0x00FFFFFFu);
        r = func_0E2118(0x2F6);
        func_083C88(0x1CC, 0xFC, r);
    }
}
