/* LEVEL_23:0x0B3050 -- placement copy of LEVEL_01_0BC2B8.c: stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0B3930(void);
extern int func_07DD08(void);
extern void func_07DCA8(int n);
extern struct S0BC2B8 D_002F9E70;

void func_0B3050(int mode)
{
    int idx;
    int val;

    idx = func_0B3930();
    val = func_07DD08();
    D_002F9E70.f20[idx] = val;
    if (mode != 1) {
        func_07DCA8(0x200);
    }
}
