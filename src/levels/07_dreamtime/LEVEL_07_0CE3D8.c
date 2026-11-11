/* LEVEL_07:0x0CE3D8 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0B0AA8(int id, unsigned v, float f);
extern void func_0B0708(int id, Loc *l, float f);
extern int func_0AA680(Loc *l);
extern int func_1354B0(int id);
extern void func_0AC790(short a, short b, int c);
extern void func_0ACEA0(short a, short b, int c);
extern void func_0AB8C0(short a, short b, int c);
extern void func_0AACB0(int a);
extern void func_0BC4C0(void *p);
extern void func_0AACA0(unsigned a);
extern void func_137158(int a, Loc *l, unsigned b);
extern char D_00341918[];

void func_0CE3D8(void)
{
    Loc l;

    func_0B0AA8(0x2D, 0xFFFFFFFF, 0.0f);
    func_0B0708(0x1BB, &l, 0.0f);
    func_0AC790(func_0AA680(&l), l.fC, func_1354B0(0x2BB));
    func_0B0708(0x1BE, &l, 0.0f);
    func_0ACEA0(l.f8, l.fC, func_1354B0(0x1CA));
    func_0B0708(0x1B7, &l, 0.0f);
    func_0AB8C0(l.f0, l.fC, func_1354B0(0x21B));
    func_0AACB0(0);
    func_0BC4C0(D_00341918);
    func_0AACB0(1);
    func_0AACA0(0xFFFFFFFF);
    func_0B0708(0x1B6, &l, 0.0f);
    func_0AC790(func_0AA680(&l), l.fC, func_1354B0(0x2BB));
    func_0B0708(0x1BC, &l, 0.0f);
    func_0AC790(func_0AA680(&l), l.fC, func_1354B0(0x2CE));
    func_0B0708(0x1BD, &l, 0.0f);
    func_137158(0, &l, 0xFFFFFFFF);
}
