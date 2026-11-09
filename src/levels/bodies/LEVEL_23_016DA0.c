/* LEVEL_23:0x016DA0 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_001FCD70[];
extern int D_001FCF70[];
extern int D_001FCF90[];
extern Slot D_001FCD30;
extern unsigned char D_001C26AC;
extern unsigned int D_001C26A8;
extern int D_001C26A4;
extern int D_001C26B4;
extern unsigned char D_001C280B;

extern int func_097698(int a);
extern void func_097670(int a);
extern void func_0991A8(int a);
extern void func_097650(int a);
extern void func_07BDC8(Slot *s, int a, int b, unsigned int c);
extern void func_07C3F0(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_016DA0(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_097698(7) != 0;
    func_097670(7);
    func_0991A8(0);
    func_097670(1);
    for (i = 0; i < D_001C26AC; i++) {
        flags = D_001C26A8;
        bit = 1 << i;
        if (flags & bit) {
            func_07BDC8(&D_001FCD70[i], D_001FCF90[i], D_001FCF70[i], 0xFFFFFFFF);
        }
    }
    func_0991A8(1);
    func_097650(1);
    if (flag != 0) {
        func_097650(7);
    }
    if (D_001C280B != 0) {
        func_07C3F0(&D_001FCD30, D_001C26A4, D_001C26B4, 1, 1, 1, 0xFFFFFFFF);
    }
}
