/* LEVEL_08:0x0D1AE0 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00249B80;
extern int D_00249A60;
extern int func_01B1E0(int a0);
extern int func_0C6C50(void);
extern int func_0C79A8(int a0);
extern int func_0C7320(int a, int b);

void func_0D1AE0(void)
{
    int r;

    if (D_00249B80 != 0) {
        r = func_01B1E0(6);
        if (r != 0) {
            r = func_0C6C50();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_00249A60 = 0;
    r = func_01B1E0(6);
    if (r != 0) {
        func_0C79A8(0x38);
    } else {
        func_0C7320(0x38, 0);
    }
}
