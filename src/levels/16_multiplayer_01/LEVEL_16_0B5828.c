/* LEVEL_16:0x0B5828 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001AED38;
extern int D_001AEC18;
extern int func_018BD8(int a0);
extern int func_0AAE20(void);
extern int func_0ABF08(int a0);
extern int func_0AB808(int a, int b);

void func_0B5828(void)
{
    int r;

    if (D_001AED38 != 0) {
        r = func_018BD8(6);
        if (r != 0) {
            r = func_0AAE20();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001AEC18 = 0;
    r = func_018BD8(6);
    if (r != 0) {
        func_0ABF08(0x38);
    } else {
        func_0AB808(0x38, 0);
    }
}
