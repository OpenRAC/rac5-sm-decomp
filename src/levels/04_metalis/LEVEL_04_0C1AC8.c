/* LEVEL_04:0x0C1AC8 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0C23A8(void);
extern int func_08B0E0(void);
extern void func_08B080(int n);
extern struct S0BC2B8 D_00343230;

void func_0C1AC8(int mode)
{
    int idx;
    int val;

    idx = func_0C23A8();
    val = func_08B0E0();
    D_00343230.f20[idx] = val;
    if (mode != 1) {
        func_08B080(0x200);
    }
}
