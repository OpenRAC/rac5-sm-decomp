/* LEVEL_22:0x022D88 -- placement copy of LEVEL_01_0285A0.c: reads two counters, then updates a slot pair against a threshold table. */

extern int func_022B28(void);
extern unsigned int func_021D98(unsigned int a0, unsigned int a1);
extern void func_021E10(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int D_0016A138[];

void func_022D88(void)
{
    unsigned int s0;
    unsigned int a1;

    if (func_022B28() == 0) {
        return;
    }
    s0 = func_021D98(0x9E, 0xFF);
    a1 = func_021D98(0x9F, 0xFF) + 1;
    if (s0 < 12 && !(a1 < D_0016A138[s0])) {
        func_021E10(0x9E, (s0 + 1) & 0xFF, 0xFF);
        func_021E10(0x9F, 0, 0xFF);
        return;
    }
    func_021E10(0x9F, a1 & 0xFF, 0xFF);
}
