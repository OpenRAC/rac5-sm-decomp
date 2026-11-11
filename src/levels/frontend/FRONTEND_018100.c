/* FRONTEND:0x018100 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_0003048C;
extern unsigned char D_00030438;
extern int D_00030494;
extern void func_0229A0(int *p, int a1);

void func_018100(int *o)
{
    if (D_0003048C == 1) {
        func_0229A0(o, 8);
    } else if (D_00030438 != 0) {
        D_00030494 = 0x1D;
        func_0229A0(o, 0x13);
    } else {
        func_0229A0(o, 0x1E);
    }
}
