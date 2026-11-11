/* LEVEL_03:0x028480 -- placement copy of LEVEL_01_0285A0.c: reads two counters, then updates a slot pair against a threshold table. */

extern int func_028170(void);
extern unsigned int func_0272E8(unsigned int a0, unsigned int a1);
extern void func_027360(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int D_00225BB8[];

void func_028480(void)
{
    unsigned int s0;
    unsigned int a1;

    if (func_028170() == 0) {
        return;
    }
    s0 = func_0272E8(0x9E, 0xFF);
    a1 = func_0272E8(0x9F, 0xFF) + 1;
    if (s0 < 12 && !(a1 < D_00225BB8[s0])) {
        func_027360(0x9E, (s0 + 1) & 0xFF, 0xFF);
        func_027360(0x9F, 0, 0xFF);
        return;
    }
    func_027360(0x9F, a1 & 0xFF, 0xFF);
}
