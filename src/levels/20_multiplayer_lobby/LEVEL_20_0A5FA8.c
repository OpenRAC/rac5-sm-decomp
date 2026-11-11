/* LEVEL_20:0x0A5FA8 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_087890(int id, unsigned v, float f);
extern void func_0874F0(int id, Loc *l, float f);
extern int func_081408(Loc *l);
extern int func_0E2118(int id);
extern void func_083578(short a, short b, int c);
extern void func_083C88(short a, short b, int c);
extern void func_0826A8(short a, short b, int c);
extern void func_081A68(int a);
extern void func_0939E0(void *p);
extern void func_081A58(unsigned a);
extern void func_0E3CB0(int a, Loc *l, unsigned b);
extern char D_0019D8A8[];

void func_0A5FA8(void)
{
    Loc l;

    func_087890(0x2D, 0xFFFFFFFF, 0.0f);
    func_0874F0(0x1BB, &l, 0.0f);
    func_083578(func_081408(&l), l.fC, func_0E2118(0x2BB));
    func_0874F0(0x1BE, &l, 0.0f);
    func_083C88(l.f8, l.fC, func_0E2118(0x1CA));
    func_0874F0(0x1B7, &l, 0.0f);
    func_0826A8(l.f0, l.fC, func_0E2118(0x21B));
    func_081A68(0);
    func_0939E0(D_0019D8A8);
    func_081A68(1);
    func_081A58(0xFFFFFFFF);
    func_0874F0(0x1B6, &l, 0.0f);
    func_083578(func_081408(&l), l.fC, func_0E2118(0x2BB));
    func_0874F0(0x1BC, &l, 0.0f);
    func_083578(func_081408(&l), l.fC, func_0E2118(0x2CE));
    func_0874F0(0x1BD, &l, 0.0f);
    func_0E3CB0(0, &l, 0xFFFFFFFF);
}
