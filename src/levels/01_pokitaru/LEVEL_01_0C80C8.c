/* LEVEL_01:0x0C80C8 -- picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_00200C0C;
extern unsigned char D_00200BB0;
extern int D_00200C14;
extern void func_1356E0(int *p, int a1);

void func_0C80C8(int *o)
{
    if (D_00200C0C == 1) {
        func_1356E0(o, 8);
    } else if (D_00200BB0 != 0) {
        D_00200C14 = 0x1D;
        func_1356E0(o, 0x13);
    } else {
        func_1356E0(o, 0x1E);
    }
}
