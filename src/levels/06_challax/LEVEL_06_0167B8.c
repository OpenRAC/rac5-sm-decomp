/* LEVEL_06:0x0167B8 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_0021C670[];
extern int D_0021C870[];
extern int D_0021C890[];
extern Slot D_0021C630;
extern unsigned char D_001DE1AC;
extern unsigned int D_001DE1A8;
extern int D_001DE1A4;
extern int D_001DE1B4;
extern unsigned char D_001DE30B;

extern int func_09B128(int a);
extern void func_09B100(int a);
extern void func_09CC38(int a);
extern void func_09B0E0(int a);
extern void func_07ED80(Slot *s, int a, int b, unsigned int c);
extern void func_07F3A8(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_0167B8(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_09B128(7) != 0;
    func_09B100(7);
    func_09CC38(0);
    func_09B100(1);
    for (i = 0; i < D_001DE1AC; i++) {
        flags = D_001DE1A8;
        bit = 1 << i;
        if (flags & bit) {
            func_07ED80(&D_0021C670[i], D_0021C890[i], D_0021C870[i], 0xFFFFFFFF);
        }
    }
    func_09CC38(1);
    func_09B0E0(1);
    if (flag != 0) {
        func_09B0E0(7);
    }
    if (D_001DE30B != 0) {
        func_07F3A8(&D_0021C630, D_001DE1A4, D_001DE1B4, 1, 1, 1, 0xFFFFFFFF);
    }
}
