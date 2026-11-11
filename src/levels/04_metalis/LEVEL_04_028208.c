/* LEVEL_04:0x028208 -- placement copy of LEVEL_01_0285A0.c: reads two counters, then updates a slot pair against a threshold table. */

extern int func_027EF8(void);
extern unsigned int func_027098(unsigned int a0, unsigned int a1);
extern void func_027110(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int D_00226638[];

void func_028208(void)
{
    unsigned int s0;
    unsigned int a1;

    if (func_027EF8() == 0) {
        return;
    }
    s0 = func_027098(0x9E, 0xFF);
    a1 = func_027098(0x9F, 0xFF) + 1;
    if (s0 < 12 && !(a1 < D_00226638[s0])) {
        func_027110(0x9E, (s0 + 1) & 0xFF, 0xFF);
        func_027110(0x9F, 0, 0xFF);
        return;
    }
    func_027110(0x9F, a1 & 0xFF, 0xFF);
}
