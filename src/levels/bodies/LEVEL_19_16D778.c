/* LEVEL_19:0x16D778 -- placement copy of LEVEL_16_16C8C0.c: sets up an effect on an object and flags it. */
typedef struct Loc { int a; unsigned b; } Loc;
typedef struct Info { char pad[0x14]; float f14; float f18; float f1C; float f20; } Info;
typedef struct Sub { char pad[0x1C]; float f1C; } Sub;
typedef struct Owner { char pad[0x59C]; int v59C; } Owner;
typedef struct Obj { char pad0[0x45]; char f45; char pad1[0x54 - 0x46]; Sub *p54; char *p58; } Obj;
extern Info *D_001BF2D4;
extern void func_18D070(Loc *l);
extern void func_0CCB58(char *p, int c, float f);
extern void func_037520(Owner *o);
extern void func_073660(Obj *o, Info *i, float a, float b, float c, float d, int e, int f, int g, int h, int j, int k);
void func_16D778(Obj *self, int handle)
{
    Owner *o = (Owner *)handle;
    Loc loc;
    Sub *s3 = self->p54;
    char *s0;
    loc.a = o->v59C;
    loc.b = 0xFFFF8080;
    s0 = self->p58;
    func_18D070(&loc);
    func_0CCB58(s0 + 0x28, 0xFF8080, 1.5f);
    func_037520(o);
    if (D_001BF2D4 != 0)
        func_073660(self, D_001BF2D4, D_001BF2D4->f14, D_001BF2D4->f18, D_001BF2D4->f1C, D_001BF2D4->f20, 0, 0, 0, 0, 0, 1);
    self->f45 = 5;
    s3->f1C = 36.00071716f;
}
