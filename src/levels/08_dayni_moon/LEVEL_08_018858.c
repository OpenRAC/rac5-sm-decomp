/* LEVEL_08:0x018858 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_0027EB70[];
extern int D_0027ED70[];
extern int D_0027ED90[];
extern Slot D_0027EB30;
extern unsigned char D_00237E2C;
extern unsigned int D_00237E28;
extern int D_00237E24;
extern int D_00237E34;
extern unsigned char D_00237F8B;

extern int func_0AB250(int a);
extern void func_0AB228(int a);
extern void func_0ACD60(int a);
extern void func_0AB208(int a);
extern void func_08DF58(Slot *s, int a, int b, unsigned int c);
extern void func_08E580(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_018858(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_0AB250(7) != 0;
    func_0AB228(7);
    func_0ACD60(0);
    func_0AB228(1);
    for (i = 0; i < D_00237E2C; i++) {
        flags = D_00237E28;
        bit = 1 << i;
        if (flags & bit) {
            func_08DF58(&D_0027EB70[i], D_0027ED90[i], D_0027ED70[i], 0xFFFFFFFF);
        }
    }
    func_0ACD60(1);
    func_0AB208(1);
    if (flag != 0) {
        func_0AB208(7);
    }
    if (D_00237F8B != 0) {
        func_08E580(&D_0027EB30, D_00237E24, D_00237E34, 1, 1, 1, 0xFFFFFFFF);
    }
}
