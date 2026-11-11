/* LEVEL_21:0x09C900 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_09D1D8(void);
extern int func_06C528(void);
extern void func_06C4C8(int n);
extern struct S0BC2B8 D_00240270;

void func_09C900(int mode)
{
    int idx;
    int val;

    idx = func_09D1D8();
    val = func_06C528();
    D_00240270.f20[idx] = val;
    if (mode != 1) {
        func_06C4C8(0x200);
    }
}
