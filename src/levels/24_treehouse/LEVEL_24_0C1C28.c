/* LEVEL_24:0x0C1C28 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001D188C;
extern int D_001D1894;
extern void func_12B1E0(int *p, int a1);

void func_0C1C28(int *p)
{
    if (D_001D188C == 1) {
        func_12B1E0(p, 0x1D);
    } else {
        D_001D1894 = 0x11;
        func_12B1E0(p, 0x13);
    }
}
