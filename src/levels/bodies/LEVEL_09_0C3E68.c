/* LEVEL_09:0x0C3E68 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001EAAC0;
extern int D_001EA9A0;
extern int func_019C58(int a0);
extern int func_0B8FE0(void);
extern void func_0B9D30(int a0);
extern void func_0B96B0(int a0, int a1);

void func_0C3E68(void)
{
    int r;

    if (D_001EAAC0 != 0) {
        r = func_019C58(6);
        if (r != 0) {
            r = func_0B8FE0();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001EA9A0 = 0;
    r = func_019C58(6);
    if (r != 0) {
        func_0B9D30(0x38);
    } else {
        func_0B96B0(0x38, 0);
    }
}
