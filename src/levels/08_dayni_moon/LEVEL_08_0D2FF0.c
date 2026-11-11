/* LEVEL_08:0x0D2FF0 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_00249ACC;
extern unsigned char D_00249A70;
extern int D_00249AD4;
extern void func_146C18(int *p, int a1);

void func_0D2FF0(int *o)
{
    if (D_00249ACC == 1) {
        func_146C18(o, 8);
    } else if (D_00249A70 != 0) {
        D_00249AD4 = 0x1D;
        func_146C18(o, 0x13);
    } else {
        func_146C18(o, 0x1E);
    }
}
