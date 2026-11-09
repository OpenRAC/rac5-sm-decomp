/* LEVEL_24:0x0C0480 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001D1940;
extern int D_001D1820;
extern int func_018E58(int a0);
extern int func_0B55F0(void);
extern void func_0B6348(int a0);
extern void func_0B5CC0(int a0, int a1);

void func_0C0480(void)
{
    int r;

    if (D_001D1940 != 0) {
        r = func_018E58(6);
        if (r != 0) {
            r = func_0B55F0();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001D1820 = 0;
    r = func_018E58(6);
    if (r != 0) {
        func_0B6348(0x38);
    } else {
        func_0B5CC0(0x38, 0);
    }
}
