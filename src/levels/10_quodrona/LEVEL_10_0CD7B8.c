/* LEVEL_10:0x0CD7B8 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0AFBC0(int id, unsigned v, float f);
extern void func_0AF820(int id, Loc *l, float f);
extern int func_0A9798(Loc *l);
extern int func_130310(int id);
extern void func_0AB8A8(short a, short b, int c);
extern void func_0ABFB8(short a, short b, int c);
extern void func_0AA9D8(short a, short b, int c);
extern void func_0A9DC8(int a);
extern void func_0BB7A8(void *p);
extern void func_0A9DB8(unsigned a);
extern void func_131FD8(int a, Loc *l, unsigned b);
extern char D_00335418[];

void func_0CD7B8(void)
{
    Loc l;

    func_0AFBC0(0x2D, 0xFFFFFFFF, 0.0f);
    func_0AF820(0x1BB, &l, 0.0f);
    func_0AB8A8(func_0A9798(&l), l.fC, func_130310(0x2BB));
    func_0AF820(0x1BE, &l, 0.0f);
    func_0ABFB8(l.f8, l.fC, func_130310(0x1CA));
    func_0AF820(0x1B7, &l, 0.0f);
    func_0AA9D8(l.f0, l.fC, func_130310(0x21B));
    func_0A9DC8(0);
    func_0BB7A8(D_00335418);
    func_0A9DC8(1);
    func_0A9DB8(0xFFFFFFFF);
    func_0AF820(0x1B6, &l, 0.0f);
    func_0AB8A8(func_0A9798(&l), l.fC, func_130310(0x2BB));
    func_0AF820(0x1BC, &l, 0.0f);
    func_0AB8A8(func_0A9798(&l), l.fC, func_130310(0x2CE));
    func_0AF820(0x1BD, &l, 0.0f);
    func_131FD8(0, &l, 0xFFFFFFFF);
}
