/* LEVEL_07:0x198210 -- builds a normalized direction to a fixed point and crosses it with an axis. */
typedef struct { float x, y, z; } V3;
typedef struct { char pad0[0x30]; V3 p; } G;
typedef struct { char pad0[0x30]; V3 pos; } O;
typedef struct { char pad0[0x20]; V3 d; } S;
typedef struct { char pad0[0x54]; O **po; S *s; } A;
extern G D_0024AA40;
extern V3 D_0022CB88;
extern float sqrtf(float x);

void func_198210(A *a)
{
    V3 t;
    O *o;
    S *s;
    V3 *d;
    V3 *c;
    V3 *v;
    V3 *pp;
    V3 *pd;
    G *g;
    float l;
    float il;

    o = *a->po;
    s = a->s;
    g = &D_0024AA40;
    pd = &g->p;
    t.y = pd->y;
    t.z = pd->z;
    t.x = g->p.x;
    t.y = o->pos.y;
    s->d.x = t.x - o->pos.x;
    pp = &o->pos;
    v = &s->d;
    v->y = t.y - pp->y;
    v->z = t.z - pp->z;
    l = s->d.x * s->d.x + v->y * v->y + v->z * v->z;
    if (!(l < 2.384185791015625e-07f)) {
        il = sqrtf(l);
        il = 1.0f / il;
        s->d.x = s->d.x * il;
        v->y = v->y * il;
        v->z = v->z * il;
    }
    c = &D_0022CB88;
    d = &s->d;
    t.x = d->y * c->z - d->z * c->y;
    t.y = d->z * c->x - d->x * c->z;
    t.z = d->x * c->y - d->y * c->x;
    d->x = t.x;
    d->y = t.y;
    d->z = t.z;
}
