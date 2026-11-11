/* LEVEL_10:0x0C9508 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_00209C0C;
extern unsigned char D_00209BB0;
extern int D_00209C14;
extern void func_133560(int *p, int a1);

void func_0C9508(int *o)
{
    if (D_00209C0C == 1) {
        func_133560(o, 8);
    } else if (D_00209BB0 != 0) {
        D_00209C14 = 0x1D;
        func_133560(o, 0x13);
    } else {
        func_133560(o, 0x1E);
    }
}
