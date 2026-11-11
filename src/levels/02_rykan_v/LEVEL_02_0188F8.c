/* LEVEL_02:0x0188F8 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_00246DF0[];
extern int D_00246FF0[];
extern int D_00247010[];
extern Slot D_00246DB0;
extern unsigned char D_00203F2C;
extern unsigned int D_00203F28;
extern int D_00203F24;
extern int D_00203F34;
extern unsigned char D_0020408B;

extern int func_0A7268(int a);
extern void func_0A7240(int a);
extern void func_0A8D78(int a);
extern void func_0A7220(int a);
extern void func_08C838(Slot *s, int a, int b, unsigned int c);
extern void func_08CE60(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_0188F8(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_0A7268(7) != 0;
    func_0A7240(7);
    func_0A8D78(0);
    func_0A7240(1);
    for (i = 0; i < D_00203F2C; i++) {
        flags = D_00203F28;
        bit = 1 << i;
        if (flags & bit) {
            func_08C838(&D_00246DF0[i], D_00247010[i], D_00246FF0[i], 0xFFFFFFFF);
        }
    }
    func_0A8D78(1);
    func_0A7220(1);
    if (flag != 0) {
        func_0A7220(7);
    }
    if (D_0020408B != 0) {
        func_08CE60(&D_00246DB0, D_00203F24, D_00203F34, 1, 1, 1, 0xFFFFFFFF);
    }
}
