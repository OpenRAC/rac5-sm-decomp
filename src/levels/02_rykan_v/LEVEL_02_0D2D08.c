/* LEVEL_02:0x0D2D08 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0B53B8(int id, unsigned v, float f);
extern void func_0B5018(int id, Loc *l, float f);
extern int func_0AEF90(Loc *l);
extern int func_138860(int id);
extern void func_0B10A0(short a, short b, int c);
extern void func_0B17B0(short a, short b, int c);
extern void func_0B01D0(short a, short b, int c);
extern void func_0AF5C0(int a);
extern void func_0C0D70(void *p);
extern void func_0AF5B0(unsigned a);
extern void func_13A508(int a, Loc *l, unsigned b);
extern char D_00343518[];

void func_0D2D08(void)
{
    Loc l;

    func_0B53B8(0x2D, 0xFFFFFFFF, 0.0f);
    func_0B5018(0x1BB, &l, 0.0f);
    func_0B10A0(func_0AEF90(&l), l.fC, func_138860(0x2BB));
    func_0B5018(0x1BE, &l, 0.0f);
    func_0B17B0(l.f8, l.fC, func_138860(0x1CA));
    func_0B5018(0x1B7, &l, 0.0f);
    func_0B01D0(l.f0, l.fC, func_138860(0x21B));
    func_0AF5C0(0);
    func_0C0D70(D_00343518);
    func_0AF5C0(1);
    func_0AF5B0(0xFFFFFFFF);
    func_0B5018(0x1B6, &l, 0.0f);
    func_0B10A0(func_0AEF90(&l), l.fC, func_138860(0x2BB));
    func_0B5018(0x1BC, &l, 0.0f);
    func_0B10A0(func_0AEF90(&l), l.fC, func_138860(0x2CE));
    func_0B5018(0x1BD, &l, 0.0f);
    func_13A508(0, &l, 0xFFFFFFFF);
}
