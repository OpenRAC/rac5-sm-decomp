/* LEVEL_07:0x028900 -- placement copy of LEVEL_01_0285A0.c: reads two counters, then updates a slot pair against a threshold table. */

extern int func_0285F0(void);
extern unsigned int func_027768(unsigned int a0, unsigned int a1);
extern void func_0277E0(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int D_002219B8[];

void func_028900(void)
{
    unsigned int s0;
    unsigned int a1;

    if (func_0285F0() == 0) {
        return;
    }
    s0 = func_027768(0x9E, 0xFF);
    a1 = func_027768(0x9F, 0xFF) + 1;
    if (s0 < 12 && !(a1 < D_002219B8[s0])) {
        func_0277E0(0x9E, (s0 + 1) & 0xFF, 0xFF);
        func_0277E0(0x9F, 0, 0xFF);
        return;
    }
    func_0277E0(0x9F, a1 & 0xFF, 0xFF);
}
