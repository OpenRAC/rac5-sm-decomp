/* LEVEL_16:0x1385A0 -- builds a collision query from an actor's bounds and flags, submits it, then asks a helper for a result byte. */
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
typedef struct {
    char pad0[0x10];
    A a;
    char pad24[0x70 - 0x10 - sizeof(A)];
    unsigned char b70;
} Outer;
typedef struct { char pad0[0x68]; } T;
typedef struct {
    int w[0x34 / 4];
} B;
typedef struct {
    char pad0[0x54];
    B *b;
    Outer *out;
} O;
extern T D_001DE3F8[];
extern char D_00137E10[];
extern char D_00139C70[];
extern void func_085E58(T *t, A *a, V3 *p, V3 *q, unsigned f);
extern unsigned char func_14AF78(int a0, O *o, B *b, char *s, char *t, float f12, float f13);

static __inline__ void vadd(V3 *d, V3 *s, V3 *t)
{
    d->x = s->x + t->x;
    d->y = s->y + t->y;
    d->z = s->z + t->z;
}

void func_1385A0(O *o)
{
    Outer *out;
    A *a;
    B *b;
    C *c;
    D *d;
    E *e;
    V3 p;
    V3 q;
    unsigned f;
    unsigned char k;

    out = o->out;
    b = o->b;
    a = &out->a;
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
    func_085E58(&D_001DE3F8[k], a, &p, &q, f | a->h22);
    if (b->w[12] != 0) {
        out->b70 = func_14AF78(b->w[12], o, b, D_00137E10, D_00139C70, 0.6f, 1.0f);
    }
}
