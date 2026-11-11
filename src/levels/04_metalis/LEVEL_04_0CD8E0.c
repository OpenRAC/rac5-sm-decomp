/* LEVEL_04:0x0CD8E0 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_0021A0CC;
extern unsigned char D_0021A070;
extern int D_0021A0D4;
extern void func_141B60(int *p, int a1);

void func_0CD8E0(int *o)
{
    if (D_0021A0CC == 1) {
        func_141B60(o, 8);
    } else if (D_0021A070 != 0) {
        D_0021A0D4 = 0x1D;
        func_141B60(o, 0x13);
    } else {
        func_141B60(o, 0x1E);
    }
}
