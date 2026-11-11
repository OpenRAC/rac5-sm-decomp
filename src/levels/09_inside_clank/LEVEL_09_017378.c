/* LEVEL_09:0x017378 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_00217070[];
extern int D_00217270[];
extern int D_00217290[];
extern Slot D_00217030;
extern unsigned char D_001D90AC;
extern unsigned int D_001D90A8;
extern int D_001D90A4;
extern int D_001D90B4;
extern unsigned char D_001D920B;

extern int func_09DC08(int a);
extern void func_09DBE0(int a);
extern void func_09F718(int a);
extern void func_09DBC0(int a);
extern void func_0828C0(Slot *s, int a, int b, unsigned int c);
extern void func_082EE8(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_017378(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_09DC08(7) != 0;
    func_09DBE0(7);
    func_09F718(0);
    func_09DBE0(1);
    for (i = 0; i < D_001D90AC; i++) {
        flags = D_001D90A8;
        bit = 1 << i;
        if (flags & bit) {
            func_0828C0(&D_00217070[i], D_00217290[i], D_00217270[i], 0xFFFFFFFF);
        }
    }
    func_09F718(1);
    func_09DBC0(1);
    if (flag != 0) {
        func_09DBC0(7);
    }
    if (D_001D920B != 0) {
        func_082EE8(&D_00217030, D_001D90A4, D_001D90B4, 1, 1, 1, 0xFFFFFFFF);
    }
}
