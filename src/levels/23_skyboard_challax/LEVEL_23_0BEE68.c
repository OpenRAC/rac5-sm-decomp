/* LEVEL_23:0x0BEE68 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001D400C;
extern unsigned char D_001D3FB0;
extern int D_001D4014;
extern void func_126E58(int *p, int a1);

void func_0BEE68(int *o)
{
    if (D_001D400C == 1) {
        func_126E58(o, 8);
    } else if (D_001D3FB0 != 0) {
        D_001D4014 = 0x1D;
        func_126E58(o, 0x13);
    } else {
        func_126E58(o, 0x1E);
    }
}
