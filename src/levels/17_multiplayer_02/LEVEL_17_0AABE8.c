/* LEVEL_17:0x0AABE8 -- placement copy of LEVEL_16_0AB6A8.c: stores a helper result into a word table and calls a second helper unless mode is 1. */
struct S0AB6A8 {
    char pad0[0x20];
    int f20[1];
};

extern unsigned int func_0AB560(void);
extern unsigned int func_079E00(void);
extern void func_079DB8(unsigned int mask, int index);
extern struct S0AB6A8 D_00267C70;

void func_0AABE8(int mode)
{
    unsigned int idx;
    unsigned int val;

    idx = func_0AB560();
    val = func_079E00();
    D_00267C70.f20[idx] = val;
    if (mode != 1) {
        func_079DB8(0x200, func_0AB560());
    }
}
