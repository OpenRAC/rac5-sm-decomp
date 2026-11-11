/* LEVEL_20:0x09FD58 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00111418;
extern int D_001112F8;
extern int func_016990(int a0);
extern int func_095350(void);
extern int func_096438(int a0);
extern int func_095D38(int a, int b);

void func_09FD58(void)
{
    int r;

    if (D_00111418 != 0) {
        r = func_016990(6);
        if (r != 0) {
            r = func_095350();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001112F8 = 0;
    r = func_016990(6);
    if (r != 0) {
        func_096438(0x38);
    } else {
        func_095D38(0x38, 0);
    }
}
