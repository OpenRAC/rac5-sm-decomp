/* LEVEL_01:0x0285A0 -- reads two counters, then updates a slot pair against a threshold table. */

extern int func_028290(void);
extern unsigned int func_027408(unsigned int a0, unsigned int a1);
extern void func_027480(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int D_0020CCB8[];

void func_0285A0(void)
{
    unsigned int s0;
    unsigned int a1;

    if (func_028290() == 0) {
        return;
    }
    s0 = func_027408(0x9E, 0xFF);
    a1 = func_027408(0x9F, 0xFF) + 1;
    if (s0 < 12 && !(a1 < D_0020CCB8[s0])) {
        func_027480(0x9E, (s0 + 1) & 0xFF, 0xFF);
        func_027480(0x9F, 0, 0xFF);
        return;
    }
    func_027480(0x9F, a1 & 0xFF, 0xFF);
}
