/* LEVEL_17:0x0BAFB8 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_09C690(int id, unsigned v, float f);
extern void func_09C2F0(int id, Loc *l, float f);
extern int func_096208(Loc *l);
extern int func_10E8A8(int id);
extern void func_098378(short a, short b, int c);
extern void func_098A88(short a, short b, int c);
extern void func_0974A8(short a, short b, int c);
extern void func_096868(int a);
extern void func_0A89F0(void *p);
extern void func_096858(unsigned a);
extern void func_110440(int a, Loc *l, unsigned b);
extern char D_0026B368[];

void func_0BAFB8(void)
{
    Loc l;

    func_09C690(0x2D, 0xFFFFFFFF, 0.0f);
    func_09C2F0(0x1BB, &l, 0.0f);
    func_098378(func_096208(&l), l.fC, func_10E8A8(0x2BB));
    func_09C2F0(0x1BE, &l, 0.0f);
    func_098A88(l.f8, l.fC, func_10E8A8(0x1CA));
    func_09C2F0(0x1B7, &l, 0.0f);
    func_0974A8(l.f0, l.fC, func_10E8A8(0x21B));
    func_096868(0);
    func_0A89F0(D_0026B368);
    func_096868(1);
    func_096858(0xFFFFFFFF);
    func_09C2F0(0x1B6, &l, 0.0f);
    func_098378(func_096208(&l), l.fC, func_10E8A8(0x2BB));
    func_09C2F0(0x1BC, &l, 0.0f);
    func_098378(func_096208(&l), l.fC, func_10E8A8(0x2CE));
    func_09C2F0(0x1BD, &l, 0.0f);
    func_110440(0, &l, 0xFFFFFFFF);
}
