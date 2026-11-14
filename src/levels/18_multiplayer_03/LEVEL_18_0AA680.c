/* LEVEL_18:0x0AA680 -- placement copy of LEVEL_16_0AB6A8.c: stores a helper result into a word table and calls a second helper unless mode is 1. */
struct S0AB6A8 {
    char pad0[0x20];
    int f20[1];
};

extern unsigned int func_0AAFF8(void);
extern unsigned int func_078D08(void);
extern void func_078CC0(unsigned int mask, int index);
extern struct S0AB6A8 D_00276CF0;

void func_0AA680(int mode)
{
    unsigned int idx;
    unsigned int val;

    idx = func_0AAFF8();
    val = func_078D08();
    D_00276CF0.f20[idx] = val;
    if (mode != 1) {
        func_078CC0(0x200, func_0AAFF8());
    }
}
