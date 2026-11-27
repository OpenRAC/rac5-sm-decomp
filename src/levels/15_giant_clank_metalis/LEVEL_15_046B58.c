/* LEVEL_15:0x046B58 -- placement copy of LEVEL_01_0558C8.c: applies a displaced position to a callback, then restores the position. */
struct Vec3 {
    float x, y, z;
};
struct Q {
    struct Vec3 v;
    float w;
};
struct Obj {
    char pad0[0x30];
    struct Vec3 pos;
    char pad3C[0x168 - 0x3C];
    int f168;
    char pad16C[0x2F4 - 0x16C];
    struct Vec3 vel;
};
extern void func_01AED0(struct Q *p, int a, int b, float w);

static __inline__ void Copy3(struct Vec3 *d, struct Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Scale3(struct Vec3 *d, struct Vec3 *s, float k)
{
    d->x = k * s->x;
    d->y = k * s->y;
    d->z = k * s->z;
}

static __inline__ void Add3(struct Vec3 *d, struct Vec3 *s)
{
    d->x = d->x + s->x;
    d->y = d->y + s->y;
    d->z = d->z + s->z;
}

static __inline__ void Sub3(struct Vec3 *r, struct Vec3 *a, struct Vec3 *b)
{
    r->x = a->x - b->x;
    r->y = a->y - b->y;
    r->z = a->z - b->z;
}

void func_046B58(struct Obj *o, float t, float h)
{
    struct Q p;
    struct Vec3 d;

    Copy3(&p.v, &o->pos);
    Scale3(&d, &o->vel, t);
    Add3(&p.v, &d);
    p.w = h;
    if (o->f168 != 0) {
        p.w = h + 0.2f;
    }
    func_01AED0(&p, 0x68, 0, p.w);
    Sub3(&o->pos, &p.v, &d);
}
