/* LEVEL_18:0x0B4800 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_001B01B8;
extern int D_001B0098;
extern int func_018220(int a0);
extern int func_0A9DF8(void);
extern void func_0AAEE0(int a0);
extern void func_0AA7E0(int a0, int a1);

void func_0B4800(void)
{
    int r;

    if (D_001B01B8 != 0) {
        r = func_018220(6);
        if (r != 0) {
            r = func_0A9DF8();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_001B0098 = 0;
    r = func_018220(6);
    if (r != 0) {
        func_0AAEE0(0x38);
    } else {
        func_0AA7E0(0x38, 0);
    }
}
