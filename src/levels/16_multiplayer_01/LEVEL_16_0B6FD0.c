/* LEVEL_16:0x0B6FD0 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001AEC84;
extern int D_001AEC8C;
extern void func_111DB0(int *p, int a1);

void func_0B6FD0(int *p)
{
    if (D_001AEC84 == 1) {
        func_111DB0(p, 0x1D);
    } else {
        D_001AEC8C = 0x11;
        func_111DB0(p, 0x13);
    }
}
