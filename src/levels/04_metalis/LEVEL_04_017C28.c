/* LEVEL_04:0x017C28 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_0024A0F0[];
extern int D_0024A2F0[];
extern int D_0024A310[];
extern Slot D_0024A0B0;
extern unsigned char D_0020842C;
extern unsigned int D_00208428;
extern int D_00208424;
extern int D_00208434;
extern unsigned char D_0020858B;

extern int func_0A5B68(int a);
extern void func_0A5B40(int a);
extern void func_0A7678(int a);
extern void func_0A5B20(int a);
extern void func_0891A0(Slot *s, int a, int b, unsigned int c);
extern void func_0897C8(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_017C28(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_0A5B68(7) != 0;
    func_0A5B40(7);
    func_0A7678(0);
    func_0A5B40(1);
    for (i = 0; i < D_0020842C; i++) {
        flags = D_00208428;
        bit = 1 << i;
        if (flags & bit) {
            func_0891A0(&D_0024A0F0[i], D_0024A310[i], D_0024A2F0[i], 0xFFFFFFFF);
        }
    }
    func_0A7678(1);
    func_0A5B20(1);
    if (flag != 0) {
        func_0A5B20(7);
    }
    if (D_0020858B != 0) {
        func_0897C8(&D_0024A0B0, D_00208424, D_00208434, 1, 1, 1, 0xFFFFFFFF);
    }
}
