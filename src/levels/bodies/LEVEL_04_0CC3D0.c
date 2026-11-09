/* LEVEL_04:0x0CC3D0 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_0021A180;
extern int D_0021A060;
extern int func_01A4E8(int a0);
extern int func_0C1540(void);
extern void func_0C2298(int a0);
extern void func_0C1C10(int a0, int a1);

void func_0CC3D0(void)
{
    int r;

    if (D_0021A180 != 0) {
        r = func_01A4E8(6);
        if (r != 0) {
            r = func_0C1540();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_0021A060 = 0;
    r = func_01A4E8(6);
    if (r != 0) {
        func_0C2298(0x38);
    } else {
        func_0C1C10(0x38, 0);
    }
}
