/* LEVEL_23:0x0262D0 -- placement copy of LEVEL_01_0285A0.c: reads two counters, then updates a slot pair against a threshold table. */

extern int func_025FC0(void);
extern unsigned int func_025160(unsigned int a0, unsigned int a1);
extern void func_0251D8(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int D_001DFE38[];

void func_0262D0(void)
{
    unsigned int s0;
    unsigned int a1;

    if (func_025FC0() == 0) {
        return;
    }
    s0 = func_025160(0x9E, 0xFF);
    a1 = func_025160(0x9F, 0xFF) + 1;
    if (s0 < 12 && !(a1 < D_001DFE38[s0])) {
        func_0251D8(0x9E, (s0 + 1) & 0xFF, 0xFF);
        func_0251D8(0x9F, 0, 0xFF);
        return;
    }
    func_0251D8(0x9F, a1 & 0xFF, 0xFF);
}
