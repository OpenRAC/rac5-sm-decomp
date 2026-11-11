/* LEVEL_03:0x0C7EB0 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_0021928C;
extern unsigned char D_00219230;
extern int D_00219294;
extern void func_133AA8(int *p, int a1);

void func_0C7EB0(int *o)
{
    if (D_0021928C == 1) {
        func_133AA8(o, 8);
    } else if (D_00219230 != 0) {
        D_00219294 = 0x1D;
        func_133AA8(o, 0x13);
    } else {
        func_133AA8(o, 0x1E);
    }
}
