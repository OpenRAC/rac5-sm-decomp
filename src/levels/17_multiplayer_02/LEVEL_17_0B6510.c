/* LEVEL_17:0x0B6510 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001A2284;
extern int D_001A228C;
extern void func_111328(int *p, int a1);

void func_0B6510(int *p)
{
    if (D_001A2284 == 1) {
        func_111328(p, 0x1D);
    } else {
        D_001A228C = 0x11;
        func_111328(p, 0x13);
    }
}
