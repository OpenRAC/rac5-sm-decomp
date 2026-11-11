/* LEVEL_07:0x018678 -- placement copy of LEVEL_01_017F68.c: runs a bracketed helper sequence that, for each flagged slot, calls a per-slot helper with table values, then an optional final helper. */

typedef struct {
    char pad_00[0x40];
} Slot;

extern Slot D_002451F0[];
extern int D_002453F0[];
extern int D_00245410[];
extern Slot D_002451B0;
extern unsigned char D_002035AC;
extern unsigned int D_002035A8;
extern int D_002035A4;
extern int D_002035B4;
extern unsigned char D_0020370B;

extern int func_0A2958(int a);
extern void func_0A2930(int a);
extern void func_0A4468(int a);
extern void func_0A2910(int a);
extern void func_087FD8(Slot *s, int a, int b, unsigned int c);
extern void func_088600(Slot *s, int a, int b, int c, int d, int e, unsigned int f);

void func_018678(void)
{
    int flag;
    int i;
    unsigned int bit;
    unsigned int flags;

    flag = func_0A2958(7) != 0;
    func_0A2930(7);
    func_0A4468(0);
    func_0A2930(1);
    for (i = 0; i < D_002035AC; i++) {
        flags = D_002035A8;
        bit = 1 << i;
        if (flags & bit) {
            func_087FD8(&D_002451F0[i], D_00245410[i], D_002453F0[i], 0xFFFFFFFF);
        }
    }
    func_0A4468(1);
    func_0A2910(1);
    if (flag != 0) {
        func_0A2910(7);
    }
    if (D_0020370B != 0) {
        func_088600(&D_002451B0, D_002035A4, D_002035B4, 1, 1, 1, 0xFFFFFFFF);
    }
}
