/* LEVEL_07:0x0BE318 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0BEBF0(void);
extern int func_089F18(void);
extern void func_089EB8(int n);
extern struct S0BC2B8 D_0033E330;

void func_0BE318(int mode)
{
    int idx;
    int val;

    idx = func_0BEBF0();
    val = func_089F18();
    D_0033E330.f20[idx] = val;
    if (mode != 1) {
        func_089EB8(0x200);
    }
}
