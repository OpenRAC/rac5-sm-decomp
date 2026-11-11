/* LEVEL_16:0x0B69D0 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_001AEC84;
extern unsigned char D_001AEC28;
extern int D_001AEC8C;
extern void func_111DB0(int *p, int a1);

void func_0B69D0(int *p)
{
    if (D_001AEC84 == 1) {
        func_111DB0(p, 10);
    } else if (D_001AEC28 != 0) {
        D_001AEC8C = 0x1D;
        func_111DB0(p, 0x13);
    } else {
        func_111DB0(p, 0x1E);
    }
}
