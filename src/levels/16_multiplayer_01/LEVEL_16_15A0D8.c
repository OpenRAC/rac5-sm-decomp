/* LEVEL_16:0x15A0D8 -- copies the target position raised by the global offset, builds the radius and dispatches on the entry type to one of two probes. */
typedef struct Q {
    unsigned char b0;
    char pad1[3];
    int f4;
} Q;
typedef struct E {
    char pad0[0x4];
    int f4;
    char pad8[0x8];
    Q *f10;
    int f14;
    char pad18[8];
    unsigned f20;
    char pad24[0x10];
} E;
typedef struct T {
    int f0;
    E *e;
} T;
typedef struct A {
    char pad0[0x40];
    T *f40;
    unsigned char f44;
} A;
typedef struct V {
    float x, y, z;
} V;
typedef struct B {
    char pad0[0x30];
    V p;
    char pad3C[0x12C];
    int f168;
} B;
extern float D_001C2E28;
extern float D_001C2E2C;
extern float D_001C2E30;
extern int func_01D4A0(float x, V *a, int items, int n, void *v);
extern unsigned char func_0F3740(V *v, int a, A *o, float r);

static __inline__ void CopyV(V *d, V *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

unsigned char func_15A0D8(A *a, B *b)
{
    V v;
    float r;
    E *e;
    CopyV(&v, &b->p);
    v.y += D_001C2E2C;
    r = D_001C2E28 + 0.3f;
    if (b->f168)
        r += D_001C2E30;
    e = (E *)((int)a->f44 * 0x34 + (int)a->f40->e);
    if (e->f20 == 0x412B2915)
        return func_01D4A0(r, &v, e->f10->f4, e->f10->b0, a);
    if (e->f20 == 0xD8C94F14)
        return func_0F3740(&v, e->f14, a, r);
    return 0;
}
