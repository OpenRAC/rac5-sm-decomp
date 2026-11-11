/* LEVEL_16:0x0BBA78 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_09D198(int id, unsigned v, float f);
extern void func_09CDF8(int id, Loc *l, float f);
extern int func_096D10(Loc *l);
extern int func_10F330(int id);
extern void func_098E80(short a, short b, int c);
extern void func_099590(short a, short b, int c);
extern void func_097FB0(short a, short b, int c);
extern void func_097370(int a);
extern void func_0A94B0(void *p);
extern void func_097360(unsigned a);
extern void func_110EC8(int a, Loc *l, unsigned b);
extern char D_0027A068[];

void func_0BBA78(void)
{
    Loc l;

    func_09D198(0x2D, 0xFFFFFFFF, 0.0f);
    func_09CDF8(0x1BB, &l, 0.0f);
    func_098E80(func_096D10(&l), l.fC, func_10F330(0x2BB));
    func_09CDF8(0x1BE, &l, 0.0f);
    func_099590(l.f8, l.fC, func_10F330(0x1CA));
    func_09CDF8(0x1B7, &l, 0.0f);
    func_097FB0(l.f0, l.fC, func_10F330(0x21B));
    func_097370(0);
    func_0A94B0(D_0027A068);
    func_097370(1);
    func_097360(0xFFFFFFFF);
    func_09CDF8(0x1B6, &l, 0.0f);
    func_098E80(func_096D10(&l), l.fC, func_10F330(0x2BB));
    func_09CDF8(0x1BC, &l, 0.0f);
    func_098E80(func_096D10(&l), l.fC, func_10F330(0x2CE));
    func_09CDF8(0x1BD, &l, 0.0f);
    func_110EC8(0, &l, 0xFFFFFFFF);
}
