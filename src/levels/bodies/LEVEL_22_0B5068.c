/* LEVEL_22:0x0B5068 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00160040;
extern int D_0015FF20;
extern int func_016E80(int a0);
extern int func_0AA1D8(void);
extern void func_0AAF30(int a0);
extern void func_0AA8A8(int a0, int a1);

void func_0B5068(void)
{
    int r;

    if (D_00160040 != 0) {
        r = func_016E80(6);
        if (r != 0) {
            r = func_0AA1D8();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_0015FF20 = 0;
    r = func_016E80(6);
    if (r != 0) {
        func_0AAF30(0x38);
    } else {
        func_0AA8A8(0x38, 0);
    }
}
