/* LEVEL_01:0x1BEE10 -- builds a collision query from an actor's bounds and flags, then second function seeds a position. */
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
    char pad24[0x78 - 0x24];
    unsigned char b78;
} A;
typedef struct { char pad0[0x68]; } T;
typedef struct Obj Obj;
typedef struct Owner Owner;
typedef struct {
    Obj *self;
    float f4[1];
    char pad8[0x4C - 8];
    int w4C;
} B;
typedef struct {
    char pad0[0x54];
    B *b;
    A *a;
} O;
extern T D_0022F6F8[];
extern void func_095270(T *t, A *a, V3 *p, V3 *q, unsigned f);
extern int func_16CDE8(Obj *self, Owner *owner, int extra, float f10, float f14);
extern void func_1BEE10(O *o);

static __inline__ void vadd(V3 *d, V3 *s, V3 *t)
{
    d->x = s->x + t->x;
    d->y = s->y + t->y;
    d->z = s->z + t->z;
}

void func_1BEE10(O *o)
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

    a = o->a;
    b = o->b;
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
    func_095270(&D_0022F6F8[k], a, &p, &q, f | a->h22);
    a->b78 = func_16CDE8(b->self, (Owner *)o, (int)b->f4, 0.5f, 1.0f);
    b->w4C = 0;
}

void func_1BEF80(O *o, V3 *v)
{
    B *b;

    b = o->b;
    func_1BEE10(o);
    *(float *)((char *)b + 4) = v->x;
    *(float *)((char *)b + 8) = v->z;
    *(int *)((char *)b + 0x30) = 0;
}
