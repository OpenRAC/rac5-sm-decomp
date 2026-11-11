/* LEVEL_24:0x0C1990 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001D188C;
extern unsigned char D_001D1830;
extern int D_001D1894;
extern void func_12B1E0(int *p, int a1);

void func_0C1990(int *o)
{
    if (D_001D188C == 1) {
        func_12B1E0(o, 8);
    } else if (D_001D1830 != 0) {
        D_001D1894 = 0x1D;
        func_12B1E0(o, 0x13);
    } else {
        func_12B1E0(o, 0x1E);
    }
}
