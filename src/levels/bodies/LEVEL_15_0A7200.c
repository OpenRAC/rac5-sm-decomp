/* LEVEL_15:0x0A7200 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00155940;
extern int D_00155820;
extern int func_016A50(int a0);
extern int func_09C378(void);
extern void func_09D0C8(int a0);
extern void func_09CA48(int a0, int a1);

void func_0A7200(void)
{
    int r;

    if (D_00155940 != 0) {
        r = func_016A50(6);
        if (r != 0) {
            r = func_09C378();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_00155820 = 0;
    r = func_016A50(6);
    if (r != 0) {
        func_09D0C8(0x38);
    } else {
        func_09CA48(0x38, 0);
    }
}
