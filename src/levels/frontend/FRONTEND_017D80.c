/* FRONTEND:0x017D80 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_0003048C;
extern unsigned char D_00030438;
extern int D_00030494;
extern void func_0229A0(int *p, int a1);

void func_017D80(int *p)
{
    if (D_0003048C == 1) {
        func_0229A0(p, 10);
    } else if (D_00030438 != 0) {
        D_00030494 = 0x1D;
        func_0229A0(p, 0x13);
    } else {
        func_0229A0(p, 0x1E);
    }
}
