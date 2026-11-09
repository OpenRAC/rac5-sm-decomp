/* LEVEL_23:0x0ABA80 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_001CF768[];
extern void func_09FBF0(int a0, int a1);
extern void func_09FA10(unsigned int a0);
extern unsigned int func_123C28(int a0);
extern void func_0A1C10(int a0, int a1, unsigned int a2);

void func_0ABA80(void)
{
    unsigned int r;

    if (*(int *)D_001CF768 != 0) {
        func_09FBF0(0, 0);
        func_09FA10((((unsigned int)*(unsigned char *)D_001CF768) << 24) | 0x00FFFFFFu);
        r = func_123C28(0x2F6);
        func_0A1C10(0x1CC, 0xFC, r);
    }
}
