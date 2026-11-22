/* LEVEL_16:0x135EC8 -- one-shot trigger: on first use primes shared state, otherwise nudges the object, resets its record and submits a collision query built from the actor bounds and flags. */
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
    int w0;
    A a;
    int w28;
    char pad_2C[4];
    float f30;
} B;
typedef struct {
    char pad0[0x34];
    float f34;
    char pad38[0x20];
    B *b;
    char pad5C[0x14];
    float f70;
    char pad74[3];
    unsigned char b77;
} O;

extern unsigned char D_001BD6FC;
extern int D_001BD704;
extern T D_001DE3F8[];
extern int func_112E00(void);
extern void func_1367F8(void);
extern int func_106E98(unsigned int key);
extern void func_012DD0(A *a, O *o, int x, int y);
extern void func_085E58(T *t, A *a, V3 *p, V3 *q, unsigned f);

static __inline__ void vadd(V3 *d, V3 *s, V3 *t)
{
    d->x = s->x + t->x;
    d->y = s->y + t->y;
    d->z = s->z + t->z;
}

int func_135EC8(O *o)
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

    if (func_112E00() != 0) {
        if (D_001BD6FC == 0) {
            func_1367F8();
            D_001BD6FC = 1;
        }
        return -1;
    }
    if (D_001BD704 == 0) {
        D_001BD704 = func_106E98(0x49209707);
    }
    o->f34 += 0.25f;
    b = o->b;
    o->f70 = 10.000199317932129f;
    a = &b->a;
    b->w28 = 0;
    b->w0 = 0;
    b->f30 = o->f34;
    func_012DD0(a, o, 1, 0);
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
    o->b77 = 0x20;
    return 1;
}
