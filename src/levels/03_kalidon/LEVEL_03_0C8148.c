/* LEVEL_03:0x0C8148 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_0021928C;
extern int D_00219294;
extern void func_133AA8(int *p, int a1);

void func_0C8148(int *p)
{
    if (D_0021928C == 1) {
        func_133AA8(p, 0x1D);
    } else {
        D_00219294 = 0x11;
        func_133AA8(p, 0x13);
    }
}
