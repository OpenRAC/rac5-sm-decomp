/* LEVEL_17:0x0B4D68 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001A2338;
extern int D_001A2218;
extern int func_018558(int a0);
extern int func_0AA360(void);
extern void func_0AB448(int a0);
extern void func_0AAD48(int a0, int a1);

void func_0B4D68(void)
{
    int r;

    if (D_001A2338 != 0) {
        r = func_018558(6);
        if (r != 0) {
            r = func_0AA360();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001A2218 = 0;
    r = func_018558(6);
    if (r != 0) {
        func_0AB448(0x38);
    } else {
        func_0AAD48(0x38, 0);
    }
}
