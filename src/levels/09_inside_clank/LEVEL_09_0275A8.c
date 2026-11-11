/* LEVEL_09:0x0275A8 -- placement copy of LEVEL_01_0285A0.c: reads two counters, then updates a slot pair against a threshold table. */

extern int func_027298(void);
extern unsigned int func_026410(unsigned int a0, unsigned int a1);
extern void func_026488(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int D_001F68B8[];

void func_0275A8(void)
{
    unsigned int s0;
    unsigned int a1;

    if (func_027298() == 0) {
        return;
    }
    s0 = func_026410(0x9E, 0xFF);
    a1 = func_026410(0x9F, 0xFF) + 1;
    if (s0 < 12 && !(a1 < D_001F68B8[s0])) {
        func_026488(0x9E, (s0 + 1) & 0xFF, 0xFF);
        func_026488(0x9F, 0, 0xFF);
        return;
    }
    func_026488(0x9F, a1 & 0xFF, 0xFF);
}
