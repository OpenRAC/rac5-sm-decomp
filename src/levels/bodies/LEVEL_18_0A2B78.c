/* LEVEL_18:0x0A2B78 -- placement copy of LEVEL_01_0B4CA0.c: when a word at a data symbol is nonzero, calls helpers with a byte-derived mask and a constant. */

extern char D_001AB868[];
extern void func_096550(int a0, int a1);
extern void func_096370(unsigned int a0);
extern unsigned int func_10DFE0(int a0);
extern void func_0985A0(int a0, int a1, unsigned int a2);

void func_0A2B78(void)
{
    unsigned int r;

    if (*(int *)D_001AB868 != 0) {
        func_096550(0, 0);
        func_096370((((unsigned int)*(unsigned char *)D_001AB868) << 24) | 0x00FFFFFFu);
        r = func_10DFE0(0x2F6);
        func_0985A0(0x1CC, 0xFC, r);
    }
}
