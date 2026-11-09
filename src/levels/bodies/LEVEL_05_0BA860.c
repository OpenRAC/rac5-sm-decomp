/* LEVEL_05:0x0BA860 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0BB138(void);
extern int func_0857A0(void);
extern void func_085740(int n);
extern struct S0BC2B8 D_003148F0;

void func_0BA860(int mode)
{
    int idx;
    int val;

    idx = func_0BB138();
    val = func_0857A0();
    D_003148F0.f20[idx] = val;
    if (mode != 1) {
        func_085740(0x200);
    }
}
