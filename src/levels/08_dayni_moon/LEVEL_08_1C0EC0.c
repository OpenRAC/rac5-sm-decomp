/* LEVEL_08:0x1C0EC0 -- starts the object's effect node: asks the shared helper for its slot, clears a counter, submits a collision query built from the owner's bounds and flags, and for state one marks the helper's table entry. */
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
    char pad24[0x28];
    unsigned char b4C;
} A;
typedef struct { char pad0[0x68]; } T;
typedef struct { char pad0[0x18]; unsigned char b18; char pad19[3]; } Row;
typedef struct {
    char pad0[0x58];
    Row *rows;
} Tab;
typedef struct {
    char pad0[0x30];
    Tab *tab;
    int w34;
} Info;
typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0xE];
    Info *info;
    A *a;
} O;

extern T D_0027E978[];
extern int func_183368(Tab *t, O *o, Info *i, float f0, float f1);
extern void func_09D190(T *t, A *a, V3 *p, V3 *q, unsigned f);

static __inline__ void vadd(V3 *d, V3 *s, V3 *t)
{
    d->x = s->x + t->x;
    d->y = s->y + t->y;
    d->z = s->z + t->z;
}

void func_1C0EC0(O *o)
{
    A *a;
    Info *info;
    C *c;
    D *d;
    E *e;
    V3 p;
    V3 q;
    unsigned f;
    unsigned char k;
    Row *row;

    info = o->info;
    a = o->a;
    a->b4C = func_183368(info->tab, o, info, 0.699999988079071f, 0.699999988079071f);
    info->w34 = 0;
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
    func_09D190(&D_0027E978[k], a, &p, &q, f | a->h22);
    if (o->state == 1) {
        row = &info->tab->rows[a->b4C];
        row->b18 |= 4;
    }
}
