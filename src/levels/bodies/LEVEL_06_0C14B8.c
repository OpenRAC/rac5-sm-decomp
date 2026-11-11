/* LEVEL_06:0x0C14B8 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001EFBC0;
extern int D_001EFAA0;
extern int func_019068(int a0);
extern int func_0B6630(void);
extern int func_0B7380(int a0);
extern int func_0B6D00(int a, int b);

void func_0C14B8(void)
{
    int r;

    if (D_001EFBC0 != 0) {
        r = func_019068(6);
        if (r != 0) {
            r = func_0B6630();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001EFAA0 = 0;
    r = func_019068(6);
    if (r != 0) {
        func_0B7380(0x38);
    } else {
        func_0B6D00(0x38, 0);
    }
}
