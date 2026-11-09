/* LEVEL_08:0x0C71D8 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0C7AB8(void);
extern int func_08FE98(void);
extern void func_08FE38(int n);
extern struct S0BC2B8 D_00377CB0;

void func_0C71D8(int mode)
{
    int idx;
    int val;

    idx = func_0C7AB8();
    val = func_08FE98();
    D_00377CB0.f20[idx] = val;
    if (mode != 1) {
        func_08FE38(0x200);
    }
}
