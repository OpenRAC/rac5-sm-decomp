/* LEVEL_03:0x163568 -- sets up a movement probe along an object direction and stores the hit distance. */
typedef struct { float x, y, z; } Vec3;
typedef struct { int pad0; int a; float dist; int pad0C; int b; float speed; } State;
typedef struct { char pad0[0x20]; Vec3 dir; int pad2C; Vec3 pos; char pad3C[0x18]; State *st; } Obj;
extern float func_026D08(void);
extern int func_10FA38(Vec3 *p, float *t);
static inline void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static inline void Scale3(Vec3 *d, Vec3 *s, float k)
{
    d->x = k * s->x;
    d->y = k * s->y;
    d->z = k * s->z;
}

static inline void Add3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x + b->x;
    d->y = a->y + b->y;
    d->z = a->z + b->z;
}

void func_163568(Obj *o, int a, int b, float scale)
{
    State *st = o->st;
    Vec3 vs[3];
    float t;
    st->a = a;
    st->b = b;
    st->speed = scale * func_026D08();
    scale *= 5.0f;
    Copy3(&vs[0], &o->pos);
    Scale3(&vs[2], &o->dir, scale);
    Add3(&vs[1], &vs[2], &vs[0]);

    t = 0.0f;
    if (func_10FA38(&vs[0], &t) != -1)
        st->dist = t * scale;
    else
        st->dist = 100000.0f;
}
