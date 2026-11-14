/* LEVEL_23:0x0BF100 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001D400C;
extern int D_001D4014;
extern void func_126E58(int *p, int a1);

void func_0BF100(int *p)
{
    if (D_001D400C == 1) {
        func_126E58(p, 0x1D);
    } else {
        D_001D4014 = 0x11;
        func_126E58(p, 0x13);
    }
}
