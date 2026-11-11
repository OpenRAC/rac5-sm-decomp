/* LEVEL_23:0x0BEB00 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_001D400C;
extern unsigned char D_001D3FB0;
extern int D_001D4014;
extern void func_126E58(int *p, int a1);

void func_0BEB00(int *p)
{
    if (D_001D400C == 1) {
        func_126E58(p, 10);
    } else if (D_001D3FB0 != 0) {
        D_001D4014 = 0x1D;
        func_126E58(p, 0x13);
    } else {
        func_126E58(p, 0x1E);
    }
}
