/* LEVEL_18:0x0BAA50 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_09C1A8(int id, unsigned v, float f);
extern void func_09BE08(int id, Loc *l, float f);
extern int func_095D20(Loc *l);
extern int func_10DFE0(int id);
extern void func_097E90(short a, short b, int c);
extern void func_0985A0(short a, short b, int c);
extern void func_096FC0(short a, short b, int c);
extern void func_096380(int a);
extern void func_0A8488(void *p);
extern void func_096370(unsigned a);
extern void func_10FB78(int a, Loc *l, unsigned b);
extern char D_0027A3E8[];

void func_0BAA50(void)
{
    Loc l;

    func_09C1A8(0x2D, 0xFFFFFFFF, 0.0f);
    func_09BE08(0x1BB, &l, 0.0f);
    func_097E90(func_095D20(&l), l.fC, func_10DFE0(0x2BB));
    func_09BE08(0x1BE, &l, 0.0f);
    func_0985A0(l.f8, l.fC, func_10DFE0(0x1CA));
    func_09BE08(0x1B7, &l, 0.0f);
    func_096FC0(l.f0, l.fC, func_10DFE0(0x21B));
    func_096380(0);
    func_0A8488(D_0027A3E8);
    func_096380(1);
    func_096370(0xFFFFFFFF);
    func_09BE08(0x1B6, &l, 0.0f);
    func_097E90(func_095D20(&l), l.fC, func_10DFE0(0x2BB));
    func_09BE08(0x1BC, &l, 0.0f);
    func_097E90(func_095D20(&l), l.fC, func_10DFE0(0x2CE));
    func_09BE08(0x1BD, &l, 0.0f);
    func_10FB78(0, &l, 0xFFFFFFFF);
}
