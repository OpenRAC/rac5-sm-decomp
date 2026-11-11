/* LEVEL_21:0x01D438 -- placement copy of LEVEL_01_022FB0.c: initializes a settings block and resolves its handle table. */
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
extern Glob *D_00148C2C;
extern int D_00145BCC;
extern int D_00145BD0[8];
extern unsigned D_00160F08[8];
extern int func_0EDE90(unsigned key);

void func_01D438(Obj *o)
{
    Blk *s;
    unsigned i;
    int v;

    s = &o->blk;
    if (D_00148C2C->a)
        s->fC = D_00148C2C->a;
    else
        s->fC = 0;
    v = D_00148C2C->b;
    if (v)
        s->f10 = v;
    else
        s->f10 = 2;
    if (D_00148C2C->c)
        s->f14 = D_00148C2C->c;
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
    D_00145BCC = func_0EDE90(0xE4F93912);
    for (i = 0; i < 8; i++)
        D_00145BD0[i] = func_0EDE90(D_00160F08[i]);
}
