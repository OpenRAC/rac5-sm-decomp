/* LEVEL_07:0x0CA128 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_00214F0C;
extern unsigned char D_00214EB0;
extern int D_00214F14;
extern void func_1386E0(int *p, int a1);

void func_0CA128(int *o)
{
    if (D_00214F0C == 1) {
        func_1386E0(o, 8);
    } else if (D_00214EB0 != 0) {
        D_00214F14 = 0x1D;
        func_1386E0(o, 0x13);
    } else {
        func_1386E0(o, 0x1E);
    }
}
