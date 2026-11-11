/* LEVEL_16:0x0B6D38 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001AEC84;
extern unsigned char D_001AEC28;
extern int D_001AEC8C;
extern void func_111DB0(int *p, int a1);

void func_0B6D38(int *o)
{
    if (D_001AEC84 == 1) {
        func_111DB0(o, 8);
    } else if (D_001AEC28 != 0) {
        D_001AEC8C = 0x1D;
        func_111DB0(o, 0x13);
    } else {
        func_111DB0(o, 0x1E);
    }
}
