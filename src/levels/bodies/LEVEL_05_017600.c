/* LEVEL_05:0x017600 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_0021B5F0[];
extern int D_0021B7F0[];
extern int D_0021B810[];
extern Slot D_0021B5B0;
extern unsigned char D_001DE62C;
extern unsigned int D_001DE628;
extern int D_001DE624;
extern int D_001DE634;
extern unsigned char D_001DE78B;

extern int func_09EF08(int a);
extern void func_09EEE0(int a);
extern void func_0A0A28(int a);
extern void func_09EEC0(int a);
extern void func_083860(Slot *s, int a, int b, unsigned int c);
extern void func_083E88(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_017600(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_09EF08(7) != 0;
    func_09EEE0(7);
    func_0A0A28(0);
    func_09EEE0(1);
    for (i = 0; i < D_001DE62C; i++) {
        flags = D_001DE628;
        bit = 1 << i;
        if (flags & bit) {
            func_083860(&D_0021B5F0[i], D_0021B810[i], D_0021B7F0[i], 0xFFFFFFFF);
        }
    }
    func_0A0A28(1);
    func_09EEC0(1);
    if (flag != 0) {
        func_09EEC0(7);
    }
    if (D_001DE78B != 0) {
        func_083E88(&D_0021B5B0, D_001DE624, D_001DE634, 1, 1, 1, 0xFFFFFFFF);
    }
}
