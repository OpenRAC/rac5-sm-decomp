/* LEVEL_24:0x0C1628 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_001D188C;
extern unsigned char D_001D1830;
extern int D_001D1894;
extern void func_12B1E0(int *p, int a1);

void func_0C1628(int *p)
{
    if (D_001D188C == 1) {
        func_12B1E0(p, 10);
    } else if (D_001D1830 != 0) {
        D_001D1894 = 0x1D;
        func_12B1E0(p, 0x13);
    } else {
        func_12B1E0(p, 0x1E);
    }
}
