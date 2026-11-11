/* LEVEL_15:0x0A8C88 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_0015588C;
extern void func_0F45A8(int *p, int a1);

void func_0A8C88(int *p)
{
    if (D_0015588C == 1) {
        func_0F45A8(p, 8);
    } else {
        func_0F45A8(p, 0x1D);
    }
}
