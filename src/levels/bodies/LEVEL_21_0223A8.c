/* LEVEL_21:0x0223A8 -- placement copy of LEVEL_01_0285A0.c: reads two counters, then updates a slot pair against a threshold table. */

extern int func_022148(void);
extern unsigned int func_0213F8(unsigned int a0, unsigned int a1);
extern void func_021470(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned int D_00161438[];

void func_0223A8(void)
{
    unsigned int s0;
    unsigned int a1;

    if (func_022148() == 0) {
        return;
    }
    s0 = func_0213F8(0x9E, 0xFF);
    a1 = func_0213F8(0x9F, 0xFF) + 1;
    if (s0 < 12 && !(a1 < D_00161438[s0])) {
        func_021470(0x9E, (s0 + 1) & 0xFF, 0xFF);
        func_021470(0x9F, 0, 0xFF);
        return;
    }
    func_021470(0x9F, a1 & 0xFF, 0xFF);
}
