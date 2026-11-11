/* LEVEL_23:0x0BD958 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001D40C0;
extern int D_001D3FA0;
extern int func_019378(int a0);
extern int func_0B2AC8(void);
extern int func_0B3820(int a0);
extern int func_0B3198(int a, int b);

void func_0BD958(void)
{
    int r;

    if (D_001D40C0 != 0) {
        r = func_019378(6);
        if (r != 0) {
            r = func_0B2AC8();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001D3FA0 = 0;
    r = func_019378(6);
    if (r != 0) {
        func_0B3820(0x38);
    } else {
        func_0B3198(0x38, 0);
    }
}
