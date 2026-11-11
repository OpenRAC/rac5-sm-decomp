/* LEVEL_03:0x0C7B48 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_0021928C;
extern unsigned char D_00219230;
extern int D_00219294;
extern void func_133AA8(int *p, int a1);

void func_0C7B48(int *p)
{
    if (D_0021928C == 1) {
        func_133AA8(p, 10);
    } else if (D_00219230 != 0) {
        D_00219294 = 0x1D;
        func_133AA8(p, 0x13);
    } else {
        func_133AA8(p, 0x1E);
    }
}
