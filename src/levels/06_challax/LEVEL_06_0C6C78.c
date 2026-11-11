/* LEVEL_06:0x0C6C78 -- placement copy of LEVEL_01_0CC378.c: runs the scripted sequence of positioned lookups and effect calls. */
typedef struct {
    short f0;
    char pad0[8 - 2];
    short f8;
    char pad1[0xC - 0xA];
    short fC;
    char pad2[2];
} Loc;

extern void func_0A9278(int id, unsigned v, float f);
extern void func_0A8ED8(int id, Loc *l, float f);
extern int func_0A2E50(Loc *l);
extern int func_128B80(int id);
extern void func_0A4F60(short a, short b, int c);
extern void func_0A5670(short a, short b, int c);
extern void func_0A4090(short a, short b, int c);
extern void func_0A3480(int a);
extern void func_0B4D60(void *p);
extern void func_0A3470(unsigned a);
extern void func_12A828(int a, Loc *l, unsigned b);
extern char D_00318D98[];

void func_0C6C78(void)
{
    Loc l;

    func_0A9278(0x2D, 0xFFFFFFFF, 0.0f);
    func_0A8ED8(0x1BB, &l, 0.0f);
    func_0A4F60(func_0A2E50(&l), l.fC, func_128B80(0x2BB));
    func_0A8ED8(0x1BE, &l, 0.0f);
    func_0A5670(l.f8, l.fC, func_128B80(0x1CA));
    func_0A8ED8(0x1B7, &l, 0.0f);
    func_0A4090(l.f0, l.fC, func_128B80(0x21B));
    func_0A3480(0);
    func_0B4D60(D_00318D98);
    func_0A3480(1);
    func_0A3470(0xFFFFFFFF);
    func_0A8ED8(0x1B6, &l, 0.0f);
    func_0A4F60(func_0A2E50(&l), l.fC, func_128B80(0x2BB));
    func_0A8ED8(0x1BC, &l, 0.0f);
    func_0A4F60(func_0A2E50(&l), l.fC, func_128B80(0x2CE));
    func_0A8ED8(0x1BD, &l, 0.0f);
    func_12A828(0, &l, 0xFFFFFFFF);
}
