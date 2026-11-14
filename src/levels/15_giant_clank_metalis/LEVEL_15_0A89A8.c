/* LEVEL_15:0x0A89A8 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_0015588C;
extern int D_00155894;
extern void func_0F45A8(int *p, int a1);

void func_0A89A8(int *p)
{
    if (D_0015588C == 1) {
        func_0F45A8(p, 0x1D);
    } else {
        D_00155894 = 0x11;
        func_0F45A8(p, 0x13);
    }
}
