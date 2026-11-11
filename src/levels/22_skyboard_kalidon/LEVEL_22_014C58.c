/* LEVEL_22:0x014C58 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_001814F0[];
extern int D_001816F0[];
extern int D_00181710[];
extern Slot D_001814B0;
extern unsigned char D_0014E62C;
extern unsigned int D_0014E628;
extern int D_0014E624;
extern int D_0014E634;
extern unsigned char D_0014E78B;

extern int func_08EFD0(int a);
extern void func_08EFA8(int a);
extern void func_090A78(int a);
extern void func_08EF88(int a);
extern void func_077320(Slot *s, int a, int b, unsigned int c);
extern void func_077948(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_014C58(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_08EFD0(7) != 0;
    func_08EFA8(7);
    func_090A78(0);
    func_08EFA8(1);
    for (i = 0; i < D_0014E62C; i++) {
        flags = D_0014E628;
        bit = 1 << i;
        if (flags & bit) {
            func_077320(&D_001814F0[i], D_00181710[i], D_001816F0[i], 0xFFFFFFFF);
        }
    }
    func_090A78(1);
    func_08EF88(1);
    if (flag != 0) {
        func_08EF88(7);
    }
    if (D_0014E78B != 0) {
        func_077948(&D_001814B0, D_0014E624, D_0014E634, 1, 1, 1, 0xFFFFFFFF);
    }
}
