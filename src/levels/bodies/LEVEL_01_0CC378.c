/* LEVEL_01:0x0CC378 -- runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0AEAA8(int id, unsigned v, float f);
extern void func_0AE708(int id, Loc *l, float f);
extern int func_0A8680(Loc *l);
extern int func_1324B0(int id);
extern void func_0AA790(short a, short b, int c);
extern void func_0AAEA0(short a, short b, int c);
extern void func_0A98C0(short a, short b, int c);
extern void func_0A8CB0(int a);
extern void func_0BA460(void *p);
extern void func_0A8CA0(unsigned a);
extern void func_134158(int a, Loc *l, unsigned b);
extern char D_0032C018[];

void func_0CC378(void)
{
    Loc l;

    func_0AEAA8(0x2D, 0xFFFFFFFF, 0.0f);
    func_0AE708(0x1BB, &l, 0.0f);
    func_0AA790(func_0A8680(&l), l.fC, func_1324B0(0x2BB));
    func_0AE708(0x1BE, &l, 0.0f);
    func_0AAEA0(l.f8, l.fC, func_1324B0(0x1CA));
    func_0AE708(0x1B7, &l, 0.0f);
    func_0A98C0(l.f0, l.fC, func_1324B0(0x21B));
    func_0A8CB0(0);
    func_0BA460(D_0032C018);
    func_0A8CB0(1);
    func_0A8CA0(0xFFFFFFFF);
    func_0AE708(0x1B6, &l, 0.0f);
    func_0AA790(func_0A8680(&l), l.fC, func_1324B0(0x2BB));
    func_0AE708(0x1BC, &l, 0.0f);
    func_0AA790(func_0A8680(&l), l.fC, func_1324B0(0x2CE));
    func_0AE708(0x1BD, &l, 0.0f);
    func_134158(0, &l, 0xFFFFFFFF);
}
