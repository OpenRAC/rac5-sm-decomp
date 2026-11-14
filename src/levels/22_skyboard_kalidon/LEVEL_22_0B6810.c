/* LEVEL_22:0x0B6810 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_0015FF8C;
extern int D_0015FF94;
extern void func_10CBB0(int *p, int a1);

void func_0B6810(int *p)
{
    if (D_0015FF8C == 1) {
        func_10CBB0(p, 0x1D);
    } else {
        D_0015FF94 = 0x11;
        func_10CBB0(p, 0x13);
    }
}
