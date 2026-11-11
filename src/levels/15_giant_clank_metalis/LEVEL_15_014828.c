/* LEVEL_15:0x014828 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_00177A70[];
extern int D_00177C70[];
extern int D_00177C90[];
extern Slot D_00177A30;
extern unsigned char D_00143F14;
extern unsigned int D_00143F10;
extern int D_00143F0C;
extern int D_00143F1C;
extern unsigned char D_00144073;

extern int func_0812B8(int a);
extern void func_081290(int a);
extern void func_082D60(int a);
extern void func_081270(int a);
extern void func_06A5E8(Slot *s, int a, int b, unsigned int c);
extern void func_06AC10(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_014828(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_0812B8(7) != 0;
    func_081290(7);
    func_082D60(0);
    func_081290(1);
    for (i = 0; i < D_00143F14; i++) {
        flags = D_00143F10;
        bit = 1 << i;
        if (flags & bit) {
            func_06A5E8(&D_00177A70[i], D_00177C90[i], D_00177C70[i], 0xFFFFFFFF);
        }
    }
    func_082D60(1);
    func_081270(1);
    if (flag != 0) {
        func_081270(7);
    }
    if (D_00144073 != 0) {
        func_06AC10(&D_00177A30, D_00143F0C, D_00143F1C, 1, 1, 1, 0xFFFFFFFF);
    }
}
