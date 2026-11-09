/* LEVEL_24:0x016BD8 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_001FB7F0[];
extern int D_001FB9F0[];
extern int D_001FBA10[];
extern Slot D_001FB7B0;
extern unsigned char D_001BFF2C;
extern unsigned int D_001BFF28;
extern int D_001BFF24;
extern int D_001BFF34;
extern unsigned char D_001C008B;

extern int func_09A1D0(int a);
extern void func_09A1A8(int a);
extern void func_09BCE0(int a);
extern void func_09A188(int a);
extern void func_07F1A8(Slot *s, int a, int b, unsigned int c);
extern void func_07F7D0(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_016BD8(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_09A1D0(7) != 0;
    func_09A1A8(7);
    func_09BCE0(0);
    func_09A1A8(1);
    for (i = 0; i < D_001BFF2C; i++) {
        flags = D_001BFF28;
        bit = 1 << i;
        if (flags & bit) {
            func_07F1A8(&D_001FB7F0[i], D_001FBA10[i], D_001FB9F0[i], 0xFFFFFFFF);
        }
    }
    func_09BCE0(1);
    func_09A188(1);
    if (flag != 0) {
        func_09A188(7);
    }
    if (D_001C008B != 0) {
        func_07F7D0(&D_001FB7B0, D_001BFF24, D_001BFF34, 1, 1, 1, 0xFFFFFFFF);
    }
}
