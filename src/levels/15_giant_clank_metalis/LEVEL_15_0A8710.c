/* LEVEL_15:0x0A8710 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_0015588C;
extern unsigned char D_00155830;
extern int D_00155894;
extern void func_0F45A8(int *p, int a1);

void func_0A8710(int *o)
{
    if (D_0015588C == 1) {
        func_0F45A8(o, 8);
    } else if (D_00155830 != 0) {
        D_00155894 = 0x1D;
        func_0F45A8(o, 0x13);
    } else {
        func_0F45A8(o, 0x1E);
    }
}
