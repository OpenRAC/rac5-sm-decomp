/* LEVEL_03:0x0CC160 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0AE828(int id, unsigned v, float f);
extern void func_0AE488(int id, Loc *l, float f);
extern int func_0A8400(Loc *l);
extern int func_130878(int id);
extern void func_0AA510(short a, short b, int c);
extern void func_0AAC20(short a, short b, int c);
extern void func_0A9640(short a, short b, int c);
extern void func_0A8A30(int a);
extern void func_0BA248(void *p);
extern void func_0A8A20(unsigned a);
extern void func_132520(int a, Loc *l, unsigned b);
extern char D_00346E98[];

void func_0CC160(void)
{
    Loc l;

    func_0AE828(0x2D, 0xFFFFFFFF, 0.0f);
    func_0AE488(0x1BB, &l, 0.0f);
    func_0AA510(func_0A8400(&l), l.fC, func_130878(0x2BB));
    func_0AE488(0x1BE, &l, 0.0f);
    func_0AAC20(l.f8, l.fC, func_130878(0x1CA));
    func_0AE488(0x1B7, &l, 0.0f);
    func_0A9640(l.f0, l.fC, func_130878(0x21B));
    func_0A8A30(0);
    func_0BA248(D_00346E98);
    func_0A8A30(1);
    func_0A8A20(0xFFFFFFFF);
    func_0AE488(0x1B6, &l, 0.0f);
    func_0AA510(func_0A8400(&l), l.fC, func_130878(0x2BB));
    func_0AE488(0x1BC, &l, 0.0f);
    func_0AA510(func_0A8400(&l), l.fC, func_130878(0x2CE));
    func_0AE488(0x1BD, &l, 0.0f);
    func_132520(0, &l, 0xFFFFFFFF);
}
