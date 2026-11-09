/* LEVEL_22:0x0AA760 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0AB040(void);
extern int func_079260(void);
extern void func_079200(int n);
extern struct S0BC2B8 D_0027E5F0;

void func_0AA760(int mode)
{
    int idx;
    int val;

    idx = func_0AB040();
    val = func_079260();
    D_0027E5F0.f20[idx] = val;
    if (mode != 1) {
        func_079200(0x200);
    }
}
