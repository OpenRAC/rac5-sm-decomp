/* LEVEL_01:0x017F68 -- runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_0022F8F0[];
extern int D_0022FAF0[];
extern int D_0022FB10[];
extern Slot D_0022F8B0;
extern unsigned char D_001EF2AC;
extern unsigned int D_001EF2A8;
extern int D_001EF2A4;
extern int D_001EF2B4;
extern unsigned char D_001EF40B;

extern int func_0A0950(int a);
extern void func_0A0928(int a);
extern void func_0A2468(int a);
extern void func_0A0908(int a);
extern void func_085F08(Slot *s, int a, int b, unsigned int c);
extern void func_086530(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_017F68(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_0A0950(7) != 0;
    func_0A0928(7);
    func_0A2468(0);
    func_0A0928(1);
    for (i = 0; i < D_001EF2AC; i++) {
        flags = D_001EF2A8;
        bit = 1 << i;
        if (flags & bit) {
            func_085F08(&D_0022F8F0[i], D_0022FB10[i], D_0022FAF0[i], 0xFFFFFFFF);
        }
    }
    func_0A2468(1);
    func_0A0908(1);
    if (flag != 0) {
        func_0A0908(7);
    }
    if (D_001EF40B != 0) {
        func_086530(&D_0022F8B0, D_001EF2A4, D_001EF2B4, 1, 1, 1, 0xFFFFFFFF);
    }
}
