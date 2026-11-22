/* LEVEL_04:0x195EB8 -- arms a placed object: registers its bounds in the pool from the type record, copies the object's matrix into its state and queues the follow-up callback. */
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
    float m[16];
    char pad64[0x64 - 0x24 - 0x40];
    int w64;
} A;
typedef struct { char pad0[0x68]; } T;
typedef struct {
    float m[16];
    int w40;
    char pad44;
    unsigned char b45;
    char pad46[0x58 - 0x46];
    A *a;
} O;

extern T D_00249EF8[];
extern char D_0023CC18[];
extern void func_196368(void);
extern void func_013200(A *a, O *o, int mode, int val);
extern void func_098368(T *t, A *a, V3 *p, V3 *q, unsigned f);
extern void func_1A5CE8(void *a, void *b, void *key, void *d);

static __inline__ void vadd(V3 *d, V3 *s, V3 *t)
{
    d->x = s->x + t->x;
    d->y = s->y + t->y;
    d->z = s->z + t->z;
}

int func_195EB8(O *o)
{
    A *a;
    C *c;
    D *d;
    E *e;
    V3 p;
    V3 q;
    unsigned f;
    unsigned char k;
    float *d2;

    a = o->a;
    func_013200(a, o, 0, 0x10);
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
    func_098368(&D_00249EF8[k], a, &p, &q, f | a->h22);
    d2 = a->m;
    d2[8] = o->m[8];
    d2[9] = o->m[9];
    d2[10] = o->m[10];
    d2[11] = o->m[11];
    a->m[0] = o->m[0];
    d2[1] = o->m[1];
    d2[2] = o->m[2];
    d2[3] = o->m[3];
    d2[4] = o->m[4];
    d2[5] = o->m[5];
    d2[6] = o->m[6];
    d2[7] = o->m[7];
    d2[12] = o->m[12];
    d2[13] = o->m[13];
    d2[14] = o->m[14];
    d2[15] = o->m[15];
    a->w64 = 0;
    func_1A5CE8((void *)func_196368, 0, (void *)o->w40, D_0023CC18);
    o->b45 = 0;
    return 1;
}
