/* LEVEL_01:0x0BC2B8 -- stores a helper result into a word table, calls a second helper unless mode is 1. */
struct S0BC2B8 {
    char pad0[0x20];
    int f20[1];
};

extern int func_0BCB90(void);
extern int func_087E48(void);
extern void func_087DE8(int n);
extern struct S0BC2B8 D_00328A30;

void func_0BC2B8(int mode)
{
    int idx;
    int val;

    idx = func_0BCB90();
    val = func_087E48();
    D_00328A30.f20[idx] = val;
    if (mode != 1) {
        func_087DE8(0x200);
    }
}
