/* LEVEL_05:0x0C5160 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001F0040;
extern int D_001EFF20;
extern int func_019E00(int a0);
extern int func_0BA2D8(void);
extern int func_0BB028(int a0);
extern int func_0BA9A8(int a, int b);

void func_0C5160(void)
{
    int r;

    if (D_001F0040 != 0) {
        r = func_019E00(6);
        if (r != 0) {
            r = func_0BA2D8();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001EFF20 = 0;
    r = func_019E00(6);
    if (r != 0) {
        func_0BB028(0x38);
    } else {
        func_0BA9A8(0x38, 0);
    }
}
