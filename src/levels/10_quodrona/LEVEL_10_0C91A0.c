/* LEVEL_10:0x0C91A0 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_00209C0C;
extern unsigned char D_00209BB0;
extern int D_00209C14;
extern void func_133560(int *p, int a1);

void func_0C91A0(int *p)
{
    if (D_00209C0C == 1) {
        func_133560(p, 10);
    } else if (D_00209BB0 != 0) {
        D_00209C14 = 0x1D;
        func_133560(p, 0x13);
    } else {
        func_133560(p, 0x1E);
    }
}
