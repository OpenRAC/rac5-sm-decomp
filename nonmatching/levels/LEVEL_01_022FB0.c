/* LEVEL_01.REL:0x022FB0: reviewed 280-byte candidate, held for ABI review.
 * Initializes a settings block and resolves its handle table.
 * pinned C with gnu-ee-trial links 280/280 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning int with (int), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int f0, f4, f8, fC, f10, f14;
    char pad0[4];
    int f1C, f20;
    char pad1[4];
    int f28;
    char pad2[4];
    float f30;
    unsigned char b34, b35;
    char pad3[2];
    int f38, f3C;
    char pad4[0xC];
    float f4C;
} Blk;
typedef struct { char pad0[0x998]; Blk blk; } Obj;
typedef struct { char pad0[0x13720]; int a, b, c; } Glob;
extern Glob *D_001F3FAC;
extern int D_001F0F4C;
extern int D_001F0F50[8];
extern unsigned D_0020C788[8];
extern int func_12A068(unsigned key);

void func_022FB0(Obj *o)
{
    Blk *s;
    unsigned i;
    int v;

    s = &o->blk;
    if (D_001F3FAC->a)
        s->fC = D_001F3FAC->a;
    else
        s->fC = 0;
    v = D_001F3FAC->b;
    if (v)
        s->f10 = v;
    else
        s->f10 = 2;
    if (D_001F3FAC->c)
        s->f14 = D_001F3FAC->c;
    else
        s->f14 = 0;
    s->f8 = 1;
    s->f28 = 0;
    s->f1C = 0;
    s->f20 = 0;
    s->f30 = 1.0f;
    s->b34 = 0;
    s->f38 = 1;
    s->f3C = 1;
    s->f0 = 0;
    s->f4 = 0;
    s->b35 = 1;
    s->f4C = 1.0f;
    D_001F0F4C = func_12A068(0xE4F93912);
    for (i = 0; i < 8; i++)
        D_001F0F50[i] = func_12A068(D_0020C788[i]);
}
