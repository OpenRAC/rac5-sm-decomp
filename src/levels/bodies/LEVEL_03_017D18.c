/* LEVEL_03:0x017D18 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_0024A770[];
extern int D_0024A970[];
extern int D_0024A990[];
extern Slot D_0024A730;
extern unsigned char D_0020792C;
extern unsigned int D_00207928;
extern int D_00207924;
extern int D_00207934;
extern unsigned char D_00207A8B;

extern int func_0A06D8(int a);
extern void func_0A06B0(int a);
extern void func_0A21E8(int a);
extern void func_0A0690(int a);
extern void func_085D60(Slot *s, int a, int b, unsigned int c);
extern void func_086388(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_017D18(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_0A06D8(7) != 0;
    func_0A06B0(7);
    func_0A21E8(0);
    func_0A06B0(1);
    for (i = 0; i < D_0020792C; i++) {
        flags = D_00207928;
        bit = 1 << i;
        if (flags & bit) {
            func_085D60(&D_0024A770[i], D_0024A990[i], D_0024A970[i], 0xFFFFFFFF);
        }
    }
    func_0A21E8(1);
    func_0A0690(1);
    if (flag != 0) {
        func_0A0690(7);
    }
    if (D_00207A8B != 0) {
        func_086388(&D_0024A730, D_00207924, D_00207934, 1, 1, 1, 0xFFFFFFFF);
    }
}
