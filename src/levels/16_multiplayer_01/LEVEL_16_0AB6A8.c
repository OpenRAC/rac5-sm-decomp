/* LEVEL_16:0x0AB6A8 -- stores a helper result into a word table and calls a second helper unless mode is 1. */
struct S0AB6A8 {
    char pad0[0x20];
    int f20[1];
};

extern unsigned int func_0AC020(void);
extern unsigned int func_079388(void);
extern void func_079340(unsigned int mask, int index);
extern struct S0AB6A8 D_00276970;

void func_0AB6A8(int mode)
{
    unsigned int idx;
    unsigned int val;

    idx = func_0AC020();
    val = func_079388();
    D_00276970.f20[idx] = val;
    if (mode != 1) {
        func_079340(0x200, func_0AC020());
    }
}
