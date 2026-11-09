/* LEVEL_02:0x0C2BC8 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0C34A0(void);
extern int func_08E778(void);
extern void func_08E718(int n);
extern struct S0BC2B8 D_0033FF30;

void func_0C2BC8(int mode)
{
    int idx;
    int val;

    idx = func_0C34A0();
    val = func_08E778();
    D_0033FF30.f20[idx] = val;
    if (mode != 1) {
        func_08E718(0x200);
    }
}
