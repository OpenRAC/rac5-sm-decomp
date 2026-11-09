/* LEVEL_16.REL:0x16C8C0: reviewed 212-byte candidate, held for ABI review.
 * Sets up an effect on an object and flags it.
 * pinned C with gnu-ee-trial links 212/212 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_16_16C2B0.c declares it returning void with (pointer,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Loc { int a; unsigned b; } Loc;
typedef struct Info { char pad[0x14]; float f14; float f18; float f1C; float f20; } Info;
typedef struct Sub { char pad[0x1C]; float f1C; } Sub;
typedef struct Owner { char pad[0x59C]; int v59C; } Owner;
typedef struct Obj { char pad0[0x45]; char f45; char pad1[0x54 - 0x46]; Sub *p54; char *p58; } Obj;
extern Info *D_001BE0A4;
extern void func_18E008(Loc *l);
extern void func_0CD280(char *p, int c, float f);
extern void func_038290(Owner *o);
extern void func_073518(Obj *o, Info *i, float a, float b, float c, float d, int e, int f, int g, int h, int j, int k);
void func_16C8C0(Obj *self, Owner *o)
{
    Loc loc;
    Sub *s3 = self->p54;
    char *s0;
    loc.a = o->v59C;
    loc.b = 0xFFFF8080;
    s0 = self->p58;
    func_18E008(&loc);
    func_0CD280(s0 + 0x28, 0xFF8080, 1.5f);
    func_038290(o);
    if (D_001BE0A4 != 0)
        func_073518(self, D_001BE0A4, D_001BE0A4->f14, D_001BE0A4->f18, D_001BE0A4->f1C, D_001BE0A4->f20, 0, 0, 0, 0, 0, 1);
    self->f45 = 5;
    s3->f1C = 36.00071716f;
}
