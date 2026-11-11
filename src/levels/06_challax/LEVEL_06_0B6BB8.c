/* LEVEL_06:0x0B6BB8 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0B7490(void);
extern int func_080CC0(void);
extern void func_080C60(int n);
extern struct S0BC2B8 D_003157B0;

void func_0B6BB8(int mode)
{
    int idx;
    int val;

    idx = func_0B7490();
    val = func_080CC0();
    D_003157B0.f20[idx] = val;
    if (mode != 1) {
        func_080C60(0x200);
    }
}
