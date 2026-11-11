/* LEVEL_04:0x0D1C10 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0B3CF8(int id, unsigned v, float f);
extern void func_0B3958(int id, Loc *l, float f);
extern int func_0AD890(Loc *l);
extern int func_13E930(int id);
extern void func_0AF9E0(short a, short b, int c);
extern void func_0B00F0(short a, short b, int c);
extern void func_0AEB10(short a, short b, int c);
extern void func_0ADF00(int a);
extern void func_0BFC40(void *p);
extern void func_0ADEF0(unsigned a);
extern void func_1405D8(int a, Loc *l, unsigned b);
extern char D_00346818[];

void func_0D1C10(void)
{
    Loc l;

    func_0B3CF8(0x2D, 0xFFFFFFFF, 0.0f);
    func_0B3958(0x1BB, &l, 0.0f);
    func_0AF9E0(func_0AD890(&l), l.fC, func_13E930(0x2BB));
    func_0B3958(0x1BE, &l, 0.0f);
    func_0B00F0(l.f8, l.fC, func_13E930(0x1CA));
    func_0B3958(0x1B7, &l, 0.0f);
    func_0AEB10(l.f0, l.fC, func_13E930(0x21B));
    func_0ADF00(0);
    func_0BFC40(D_00346818);
    func_0ADF00(1);
    func_0ADEF0(0xFFFFFFFF);
    func_0B3958(0x1B6, &l, 0.0f);
    func_0AF9E0(func_0AD890(&l), l.fC, func_13E930(0x2BB));
    func_0B3958(0x1BC, &l, 0.0f);
    func_0AF9E0(func_0AD890(&l), l.fC, func_13E930(0x2CE));
    func_0B3958(0x1BD, &l, 0.0f);
    func_1405D8(0, &l, 0xFFFFFFFF);
}
