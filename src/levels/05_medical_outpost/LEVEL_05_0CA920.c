/* LEVEL_05:0x0CA920 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0AD068(int id, unsigned v, float f);
extern void func_0ACCC8(int id, Loc *l, float f);
extern int func_0A6C40(Loc *l);
extern int func_12DE28(int id);
extern void func_0A8D50(short a, short b, int c);
extern void func_0A9460(short a, short b, int c);
extern void func_0A7E80(short a, short b, int c);
extern void func_0A7270(int a);
extern void func_0B8A08(void *p);
extern void func_0A7260(unsigned a);
extern void func_12FAD0(int a, Loc *l, unsigned b);
extern char D_00317ED8[];

void func_0CA920(void)
{
    Loc l;

    func_0AD068(0x2D, 0xFFFFFFFF, 0.0f);
    func_0ACCC8(0x1BB, &l, 0.0f);
    func_0A8D50(func_0A6C40(&l), l.fC, func_12DE28(0x2BB));
    func_0ACCC8(0x1BE, &l, 0.0f);
    func_0A9460(l.f8, l.fC, func_12DE28(0x1CA));
    func_0ACCC8(0x1B7, &l, 0.0f);
    func_0A7E80(l.f0, l.fC, func_12DE28(0x21B));
    func_0A7270(0);
    func_0B8A08(D_00317ED8);
    func_0A7270(1);
    func_0A7260(0xFFFFFFFF);
    func_0ACCC8(0x1B6, &l, 0.0f);
    func_0A8D50(func_0A6C40(&l), l.fC, func_12DE28(0x2BB));
    func_0ACCC8(0x1BC, &l, 0.0f);
    func_0A8D50(func_0A6C40(&l), l.fC, func_12DE28(0x2CE));
    func_0ACCC8(0x1BD, &l, 0.0f);
    func_12FAD0(0, &l, 0xFFFFFFFF);
}
