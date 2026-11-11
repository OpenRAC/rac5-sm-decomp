/* LEVEL_09:0x0B9568 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0B9E40(void);
extern int func_084800(void);
extern void func_0847A0(int n);
extern struct S0BC2B8 D_003101B0;

void func_0B9568(int mode)
{
    int idx;
    int val;

    idx = func_0B9E40();
    val = func_084800();
    D_003101B0.f20[idx] = val;
    if (mode != 1) {
        func_0847A0(0x200);
    }
}
