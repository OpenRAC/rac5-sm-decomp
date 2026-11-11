/* LEVEL_24:0x0C5CC0 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0A8320(int id, unsigned v, float f);
extern void func_0A7F80(int id, Loc *l, float f);
extern int func_0A1EF8(Loc *l);
extern int func_127FB0(int id);
extern void func_0A4008(short a, short b, int c);
extern void func_0A4718(short a, short b, int c);
extern void func_0A3138(short a, short b, int c);
extern void func_0A2528(int a);
extern void func_0B3CF0(void *p);
extern void func_0A2518(unsigned a);
extern void func_129C58(int a, Loc *l, unsigned b);
extern char D_002F7ED8[];

void func_0C5CC0(void)
{
    Loc l;

    func_0A8320(0x2D, 0xFFFFFFFF, 0.0f);
    func_0A7F80(0x1BB, &l, 0.0f);
    func_0A4008(func_0A1EF8(&l), l.fC, func_127FB0(0x2BB));
    func_0A7F80(0x1BE, &l, 0.0f);
    func_0A4718(l.f8, l.fC, func_127FB0(0x1CA));
    func_0A7F80(0x1B7, &l, 0.0f);
    func_0A3138(l.f0, l.fC, func_127FB0(0x21B));
    func_0A2528(0);
    func_0B3CF0(D_002F7ED8);
    func_0A2528(1);
    func_0A2518(0xFFFFFFFF);
    func_0A7F80(0x1B6, &l, 0.0f);
    func_0A4008(func_0A1EF8(&l), l.fC, func_127FB0(0x2BB));
    func_0A7F80(0x1BC, &l, 0.0f);
    func_0A4008(func_0A1EF8(&l), l.fC, func_127FB0(0x2CE));
    func_0A7F80(0x1BD, &l, 0.0f);
    func_129C58(0, &l, 0xFFFFFFFF);
}
