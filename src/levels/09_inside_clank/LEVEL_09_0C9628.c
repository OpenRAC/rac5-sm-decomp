/* LEVEL_09:0x0C9628 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0ABD58(int id, unsigned v, float f);
extern void func_0AB9B8(int id, Loc *l, float f);
extern int func_0A5930(Loc *l);
extern int func_12B448(int id);
extern void func_0A7A40(short a, short b, int c);
extern void func_0A8150(short a, short b, int c);
extern void func_0A6B70(short a, short b, int c);
extern void func_0A5F60(int a);
extern void func_0B7710(void *p);
extern void func_0A5F50(unsigned a);
extern void func_12D0F0(int a, Loc *l, unsigned b);
extern char D_00313798[];

void func_0C9628(void)
{
    Loc l;

    func_0ABD58(0x2D, 0xFFFFFFFF, 0.0f);
    func_0AB9B8(0x1BB, &l, 0.0f);
    func_0A7A40(func_0A5930(&l), l.fC, func_12B448(0x2BB));
    func_0AB9B8(0x1BE, &l, 0.0f);
    func_0A8150(l.f8, l.fC, func_12B448(0x1CA));
    func_0AB9B8(0x1B7, &l, 0.0f);
    func_0A6B70(l.f0, l.fC, func_12B448(0x21B));
    func_0A5F60(0);
    func_0B7710(D_00313798);
    func_0A5F60(1);
    func_0A5F50(0xFFFFFFFF);
    func_0AB9B8(0x1B6, &l, 0.0f);
    func_0A7A40(func_0A5930(&l), l.fC, func_12B448(0x2BB));
    func_0AB9B8(0x1BC, &l, 0.0f);
    func_0A7A40(func_0A5930(&l), l.fC, func_12B448(0x2CE));
    func_0AB9B8(0x1BD, &l, 0.0f);
    func_12D0F0(0, &l, 0xFFFFFFFF);
}
