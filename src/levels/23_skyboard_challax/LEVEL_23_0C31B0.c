/* LEVEL_23:0x0C31B0 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0A5818(int id, unsigned v, float f);
extern void func_0A5478(int id, Loc *l, float f);
extern int func_09F3F0(Loc *l);
extern int func_123C28(int id);
extern void func_0A1500(short a, short b, int c);
extern void func_0A1C10(short a, short b, int c);
extern void func_0A0630(short a, short b, int c);
extern void func_09FA20(int a);
extern void func_0B11F8(void *p);
extern void func_09FA10(unsigned a);
extern void func_1258D0(int a, Loc *l, unsigned b);
extern char D_002FD458[];

void func_0C31B0(void)
{
    Loc l;

    func_0A5818(0x2D, 0xFFFFFFFF, 0.0f);
    func_0A5478(0x1BB, &l, 0.0f);
    func_0A1500(func_09F3F0(&l), l.fC, func_123C28(0x2BB));
    func_0A5478(0x1BE, &l, 0.0f);
    func_0A1C10(l.f8, l.fC, func_123C28(0x1CA));
    func_0A5478(0x1B7, &l, 0.0f);
    func_0A0630(l.f0, l.fC, func_123C28(0x21B));
    func_09FA20(0);
    func_0B11F8(D_002FD458);
    func_09FA20(1);
    func_09FA10(0xFFFFFFFF);
    func_0A5478(0x1B6, &l, 0.0f);
    func_0A1500(func_09F3F0(&l), l.fC, func_123C28(0x2BB));
    func_0A5478(0x1BC, &l, 0.0f);
    func_0A1500(func_09F3F0(&l), l.fC, func_123C28(0x2CE));
    func_0A5478(0x1BD, &l, 0.0f);
    func_1258D0(0, &l, 0xFFFFFFFF);
}
