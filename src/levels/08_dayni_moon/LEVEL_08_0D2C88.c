/* LEVEL_08:0x0D2C88 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_00249ACC;
extern unsigned char D_00249A70;
extern int D_00249AD4;
extern void func_146C18(int *p, int a1);

void func_0D2C88(int *p)
{
    if (D_00249ACC == 1) {
        func_146C18(p, 10);
    } else if (D_00249A70 != 0) {
        D_00249AD4 = 0x1D;
        func_146C18(p, 0x13);
    } else {
        func_146C18(p, 0x1E);
    }
}
