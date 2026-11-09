/* LEVEL_22:0x0BA8C0 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_09D0B8(int id, unsigned v, float f);
extern void func_09CD18(int id, Loc *l, float f);
extern int func_096C90(Loc *l);
extern int func_109980(int id);
extern void func_098DA0(short a, short b, int c);
extern void func_0994B0(short a, short b, int c);
extern void func_097ED0(short a, short b, int c);
extern void func_0972C0(int a);
extern void func_0A8908(void *p);
extern void func_0972B0(unsigned a);
extern void func_10B628(int a, Loc *l, unsigned b);
extern char D_00281BD8[];

void func_0BA8C0(void)
{
    Loc l;

    func_09D0B8(0x2D, 0xFFFFFFFF, 0.0f);
    func_09CD18(0x1BB, &l, 0.0f);
    func_098DA0(func_096C90(&l), l.fC, func_109980(0x2BB));
    func_09CD18(0x1BE, &l, 0.0f);
    func_0994B0(l.f8, l.fC, func_109980(0x1CA));
    func_09CD18(0x1B7, &l, 0.0f);
    func_097ED0(l.f0, l.fC, func_109980(0x21B));
    func_0972C0(0);
    func_0A8908(D_00281BD8);
    func_0972C0(1);
    func_0972B0(0xFFFFFFFF);
    func_09CD18(0x1B6, &l, 0.0f);
    func_098DA0(func_096C90(&l), l.fC, func_109980(0x2BB));
    func_09CD18(0x1BC, &l, 0.0f);
    func_098DA0(func_096C90(&l), l.fC, func_109980(0x2CE));
    func_09CD18(0x1BD, &l, 0.0f);
    func_10B628(0, &l, 0xFFFFFFFF);
}
