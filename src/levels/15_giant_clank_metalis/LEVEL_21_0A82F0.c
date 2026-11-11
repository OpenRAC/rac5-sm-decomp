/* LEVEL_21:0x0A82F0 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_0015588C;
extern void func_0F45A8(int *p, int a1);

void func_0A82F0(int *p)
{
    if (D_0015588C == 1) {
        func_0F45A8(p, 0x1D);
    } else {
        func_0F45A8(p, 0x1F);
    }
}
