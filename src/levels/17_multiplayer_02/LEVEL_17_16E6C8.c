/* LEVEL_17:0x16E6C8 -- builds a collision query from an actor's bounds and flags and submits it, after recording the result of the owner lookup. */
typedef struct { float x, y, z; } V3;
typedef struct { char pad0[0xC]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } E;
typedef struct { char pad0[4]; E *tab; char pad8[0x3F - 8]; unsigned char b3F; } D;
typedef struct {
    char pad0[0x30];
    V3 pos;
    char pad3C[0x40 - 0x3C];
    D *d;
    unsigned char idx;
    char pad45[0x64 - 0x45];
    unsigned flags;
} C;
typedef struct {
    char pad0[3];
    unsigned char b3;
    C *c;
    V3 v8;
    V3 v14;
    unsigned char b20;
    char pad21;
    unsigned short h22;
} A;
typedef struct { char pad0[0x68]; } T;
typedef struct {
    char pad0[0x1C];
    A a;
    char pad_40[0x14];
    unsigned char res_54;
} B;
typedef struct {
    char pad0[0x30];
    void *w30;
} Owner;
typedef struct {
    char pad0[0x54];
    Owner *owner;
    B *b;
} O;

extern T D_001CF6F8[];
extern char D_0016DEB8[];
extern char D_00170790[];
extern void func_086898(T *t, A *a, V3 *p, V3 *q, unsigned f);
extern unsigned char func_144050(void *w, O *o, Owner *owner, char *tab0, char *tab1, float f0, float f1);

static __inline__ void vadd(V3 *d, V3 *s, V3 *t)
{
    d->x = s->x + t->x;
    d->y = s->y + t->y;
    d->z = s->z + t->z;
}

void func_16E6C8(O *o)
{
    A *a;
    B *b;
    C *c;
    D *d;
    E *e;
    V3 p;
    V3 q;
    unsigned f;
    unsigned char k;

    b = o->b;
    b->res_54 = func_144050(o->owner->w30, o, o->owner, D_0016DEB8, D_00170790, 0.5f, 0.5f);
    a = &b->a;
    c = a->c;
    vadd(&p, &a->v8, &c->pos);
    vadd(&q, &a->v14, &c->pos);
    d = c->d;
    e = &d->tab[c->idx];
    f = (c->flags & 0x1420) | 1 | (e->w0C ? 0x80 : 0);
    if (e->w10)
        f |= 0x100;
    if (e->w14)
        f |= 0x200;
    if (d->b3F == 1)
        f |= 0x800;
    if ((c->flags >> 3) & 1)
        f |= 0x400;
    k = a->b20;
    a->b3 = k;
    func_086898(&D_001CF6F8[k], a, &p, &q, f | a->h22);
}
