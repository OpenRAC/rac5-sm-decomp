/* LEVEL_10:0x0BD600 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0BDEE0(void);
extern int func_0881B0(void);
extern void func_088150(int n);
extern struct S0BC2B8 D_00331E30;

void func_0BD600(int mode)
{
    int idx;
    int val;

    idx = func_0BDEE0();
    val = func_0881B0();
    D_00331E30.f20[idx] = val;
    if (mode != 1) {
        func_088150(0x200);
    }
}
