/* LEVEL_20:0x095BD8 -- placement copy of LEVEL_16_0AB6A8.c: stores a helper result into a word table and calls a second helper unless mode is 1. */
struct S0AB6A8 {
    char pad0[0x20];
    int f20[1];
};

extern unsigned int func_096550(void);
extern unsigned int func_066FF8(void);
extern void func_066FB0(unsigned int mask, int index);
extern struct S0AB6A8 D_0019A1B0;

void func_095BD8(int mode)
{
    unsigned int idx;
    unsigned int val;

    idx = func_096550();
    val = func_066FF8();
    D_0019A1B0.f20[idx] = val;
    if (mode != 1) {
        func_066FB0(0x200, func_096550());
    }
}
