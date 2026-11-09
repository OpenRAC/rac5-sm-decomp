/* LEVEL_03:0x0C69A0 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00219340;
extern int D_00219220;
extern int func_01A5D0(int a0);
extern int func_0BBB18(void);
extern void func_0BC868(int a0);
extern void func_0BC1E8(int a0, int a1);

void func_0C69A0(void)
{
    int r;

    if (D_00219340 != 0) {
        r = func_01A5D0(6);
        if (r != 0) {
            r = func_0BBB18();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_00219220 = 0;
    r = func_01A5D0(6);
    if (r != 0) {
        func_0BC868(0x38);
    } else {
        func_0BC1E8(0x38, 0);
    }
}
