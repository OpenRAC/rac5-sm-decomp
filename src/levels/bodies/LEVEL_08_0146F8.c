/* LEVEL_08:0x0146F8 -- placement copy of LEVEL_01_013F00.c: moves an actor by a delta and resolves collision. */
typedef struct {
    float x, y, z, w;
} Vec4_t;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    int f14;
    int f18;
    int f1C;
} Hit_t;

typedef struct {
    float x, y, z, w;
} Pos_t;

extern int func_020520(Vec4_t *a, Vec4_t *b, Vec4_t *c, Vec4_t *d, Vec4_t *e, Hit_t *f, void *g, int h, int i, int j, float w);

int func_0146F8(Pos_t *o, Vec4_t *v, int a2, int a3, float dy)
{
    Vec4_t p0;
    Hit_t hit;
    Vec4_t p1, p2, p3, p4;

    v->y = v->y - dy;
    o->x = o->x + v->x;
    o->y = o->y + v->y;
    o->z = o->z + v->z;
    hit.f14 = 0;
    if (func_020520(&p0, &p1, &p2, &p3, &p4, &hit, o, a2, a3, 0, o->w)) {
        int r;
        Vec4_t *q;

        r = 1;
        q = &p0;
        o->x = p0.x;
        o->y = q->y;
        o->z = q->z;
        if (!(0.9f <= hit.f04))
            r = 0;
        return r;
    }
    return 0;
}
