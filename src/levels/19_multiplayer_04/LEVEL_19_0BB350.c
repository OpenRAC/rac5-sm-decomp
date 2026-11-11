/* LEVEL_19:0x0BB350 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_09CA28(int id, unsigned v, float f);
extern void func_09C688(int id, Loc *l, float f);
extern int func_0965A0(Loc *l);
extern int func_10F9D0(int id);
extern void func_098710(short a, short b, int c);
extern void func_098E20(short a, short b, int c);
extern void func_097840(short a, short b, int c);
extern void func_096C00(int a);
extern void func_0A8D88(void *p);
extern void func_096BF0(unsigned a);
extern void func_111568(int a, Loc *l, unsigned b);
extern char D_0027A1E8[];

void func_0BB350(void)
{
    Loc l;

    func_09CA28(0x2D, 0xFFFFFFFF, 0.0f);
    func_09C688(0x1BB, &l, 0.0f);
    func_098710(func_0965A0(&l), l.fC, func_10F9D0(0x2BB));
    func_09C688(0x1BE, &l, 0.0f);
    func_098E20(l.f8, l.fC, func_10F9D0(0x1CA));
    func_09C688(0x1B7, &l, 0.0f);
    func_097840(l.f0, l.fC, func_10F9D0(0x21B));
    func_096C00(0);
    func_0A8D88(D_0027A1E8);
    func_096C00(1);
    func_096BF0(0xFFFFFFFF);
    func_09C688(0x1B6, &l, 0.0f);
    func_098710(func_0965A0(&l), l.fC, func_10F9D0(0x2BB));
    func_09C688(0x1BC, &l, 0.0f);
    func_098710(func_0965A0(&l), l.fC, func_10F9D0(0x2CE));
    func_09C688(0x1BD, &l, 0.0f);
    func_111568(0, &l, 0xFFFFFFFF);
}
