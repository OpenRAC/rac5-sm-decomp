/* LEVEL_19:0x0AAF80 -- placement copy of LEVEL_16_0AB6A8.c: stores a helper result into a word table and calls a second helper unless mode is 1. */
struct S0AB6A8 {
    char pad0[0x20];
    int f20[1];
};

extern unsigned int func_0AB8F8(void);
extern unsigned int func_079870(void);
extern void func_079828(unsigned int mask, int index);
extern struct S0AB6A8 D_00276AF0;

void func_0AAF80(int mode)
{
    unsigned int idx;
    unsigned int val;

    idx = func_0AB8F8();
    val = func_079870();
    D_00276AF0.f20[idx] = val;
    if (mode != 1) {
        func_079828(0x200, func_0AB8F8());
    }
}
