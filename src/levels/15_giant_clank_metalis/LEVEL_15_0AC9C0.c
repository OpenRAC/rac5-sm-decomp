/* LEVEL_15:0x0AC9C0 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_08F370(int id, unsigned v, float f);
extern void func_08EFD0(int id, Loc *l, float f);
extern int func_088F48(Loc *l);
extern int func_0F1378(int id);
extern void func_08B058(short a, short b, int c);
extern void func_08B768(short a, short b, int c);
extern void func_08A188(short a, short b, int c);
extern void func_089578(int a);
extern void func_09AAA8(void *p);
extern void func_089568(unsigned a);
extern void func_0F3020(int a, Loc *l, unsigned b);
extern char D_00243858[];

void func_0AC9C0(void)
{
    Loc l;

    func_08F370(0x2D, 0xFFFFFFFF, 0.0f);
    func_08EFD0(0x1BB, &l, 0.0f);
    func_08B058(func_088F48(&l), l.fC, func_0F1378(0x2BB));
    func_08EFD0(0x1BE, &l, 0.0f);
    func_08B768(l.f8, l.fC, func_0F1378(0x1CA));
    func_08EFD0(0x1B7, &l, 0.0f);
    func_08A188(l.f0, l.fC, func_0F1378(0x21B));
    func_089578(0);
    func_09AAA8(D_00243858);
    func_089578(1);
    func_089568(0xFFFFFFFF);
    func_08EFD0(0x1B6, &l, 0.0f);
    func_08B058(func_088F48(&l), l.fC, func_0F1378(0x2BB));
    func_08EFD0(0x1BC, &l, 0.0f);
    func_08B058(func_088F48(&l), l.fC, func_0F1378(0x2CE));
    func_08EFD0(0x1BD, &l, 0.0f);
    func_0F3020(0, &l, 0xFFFFFFFF);
}
