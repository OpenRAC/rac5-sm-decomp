/* LEVEL_24:0x0B5B78 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0B6458(void);
extern int func_0810E8(void);
extern void func_081088(int n);
extern struct S0BC2B8 D_002F48F0;

void func_0B5B78(int mode)
{
    int idx;
    int val;

    idx = func_0B6458();
    val = func_0810E8();
    D_002F48F0.f20[idx] = val;
    if (mode != 1) {
        func_081088(0x200);
    }
}
