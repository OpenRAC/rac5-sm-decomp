/* LEVEL_19:0x0B5100 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001AFEB8;
extern int D_001AFD98;
extern int func_0188D8(int a0);
extern int func_0AA6F8(void);
extern void func_0AB7E0(int a0);
extern void func_0AB0E0(int a0, int a1);

void func_0B5100(void)
{
    int r;

    if (D_001AFEB8 != 0) {
        r = func_0188D8(6);
        if (r != 0) {
            r = func_0AA6F8();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001AFD98 = 0;
    r = func_0188D8(6);
    if (r != 0) {
        func_0AB7E0(0x38);
    } else {
        func_0AB0E0(0x38, 0);
    }
}
