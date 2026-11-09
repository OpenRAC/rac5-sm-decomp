/* LEVEL_08:0x0D7320 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0B93E0(int id, unsigned v, float f);
extern void func_0B9040(int id, Loc *l, float f);
extern int func_0B2F78(Loc *l);
extern int func_1439E8(int id);
extern void func_0B50C8(short a, short b, int c);
extern void func_0B57D8(short a, short b, int c);
extern void func_0B41F8(short a, short b, int c);
extern void func_0B35E8(int a);
extern void func_0C5350(void *p);
extern void func_0B35D8(unsigned a);
extern void func_145690(int a, Loc *l, unsigned b);
extern char D_0037B298[];

void func_0D7320(void)
{
    Loc l;

    func_0B93E0(0x2D, 0xFFFFFFFF, 0.0f);
    func_0B9040(0x1BB, &l, 0.0f);
    func_0B50C8(func_0B2F78(&l), l.fC, func_1439E8(0x2BB));
    func_0B9040(0x1BE, &l, 0.0f);
    func_0B57D8(l.f8, l.fC, func_1439E8(0x1CA));
    func_0B9040(0x1B7, &l, 0.0f);
    func_0B41F8(l.f0, l.fC, func_1439E8(0x21B));
    func_0B35E8(0);
    func_0C5350(D_0037B298);
    func_0B35E8(1);
    func_0B35D8(0xFFFFFFFF);
    func_0B9040(0x1B6, &l, 0.0f);
    func_0B50C8(func_0B2F78(&l), l.fC, func_1439E8(0x2BB));
    func_0B9040(0x1BC, &l, 0.0f);
    func_0B50C8(func_0B2F78(&l), l.fC, func_1439E8(0x2CE));
    func_0B9040(0x1BD, &l, 0.0f);
    func_145690(0, &l, 0xFFFFFFFF);
}
