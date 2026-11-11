/* LEVEL_07:0x0C8C18 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00214FC0;
extern int D_00214EA0;
extern int func_01AF28(int a0);
extern int func_0BDD90(void);
extern int func_0BEAE0(int a0);
extern int func_0BE460(int a, int b);

void func_0C8C18(void)
{
    int r;

    if (D_00214FC0 != 0) {
        r = func_01AF28(6);
        if (r != 0) {
            r = func_0BDD90();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_00214EA0 = 0;
    r = func_01AF28(6);
    if (r != 0) {
        func_0BEAE0(0x38);
    } else {
        func_0BE460(0x38, 0);
    }
}
