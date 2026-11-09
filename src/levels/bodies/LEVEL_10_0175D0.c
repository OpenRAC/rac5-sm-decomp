/* LEVEL_10:0x0175D0 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_00238CF0[];
extern int D_00238EF0[];
extern int D_00238F10[];
extern Slot D_00238CB0;
extern unsigned char D_001F82AC;
extern unsigned int D_001F82A8;
extern int D_001F82A4;
extern int D_001F82B4;
extern unsigned char D_001F840B;

extern int func_0A1A70(int a);
extern void func_0A1A48(int a);
extern void func_0A3580(int a);
extern void func_0A1A28(int a);
extern void func_086270(Slot *s, int a, int b, unsigned int c);
extern void func_086898(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_0175D0(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_0A1A70(7) != 0;
    func_0A1A48(7);
    func_0A3580(0);
    func_0A1A48(1);
    for (i = 0; i < D_001F82AC; i++) {
        flags = D_001F82A8;
        bit = 1 << i;
        if (flags & bit) {
            func_086270(&D_00238CF0[i], D_00238F10[i], D_00238EF0[i], 0xFFFFFFFF);
        }
    }
    func_0A3580(1);
    func_0A1A28(1);
    if (flag != 0) {
        func_0A1A28(7);
    }
    if (D_001F840B != 0) {
        func_086898(&D_00238CB0, D_001F82A4, D_001F82B4, 1, 1, 1, 0xFFFFFFFF);
    }
}
