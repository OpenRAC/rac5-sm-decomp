/* LEVEL_05:0x0C6670 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001EFF8C;
extern unsigned char D_001EFF30;
extern int D_001EFF94;
extern void func_131058(int *p, int a1);

void func_0C6670(int *o)
{
    if (D_001EFF8C == 1) {
        func_131058(o, 8);
    } else if (D_001EFF30 != 0) {
        D_001EFF94 = 0x1D;
        func_131058(o, 0x13);
    } else {
        func_131058(o, 0x1E);
    }
}
