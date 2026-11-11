/* LEVEL_22:0x0B6578 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_0015FF8C;
extern unsigned char D_0015FF30;
extern int D_0015FF94;
extern void func_10CBB0(int *p, int a1);

void func_0B6578(int *o)
{
    if (D_0015FF8C == 1) {
        func_10CBB0(o, 8);
    } else if (D_0015FF30 != 0) {
        D_0015FF94 = 0x1D;
        func_10CBB0(o, 0x13);
    } else {
        func_10CBB0(o, 0x1E);
    }
}
