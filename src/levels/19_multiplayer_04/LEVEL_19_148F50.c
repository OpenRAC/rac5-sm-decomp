/* LEVEL_19:0x148F50 -- keeps or reacquires a tracked target based on distance. */
typedef struct { float x, y, z; } Vec3;
typedef struct { int first; } Inner;
typedef struct { char pad0[0x30]; Vec3 pos; char pad1[0x1C]; Inner *inner; char pad2[0x540]; int next; } Tgt;
typedef struct { char pad0[4]; Tgt *cur; } State;
typedef struct { char pad0[0x30]; Vec3 pos; char pad1[0x1C]; State *st; } Obj;
extern int func_037638(int a);
extern Tgt *func_112F38(Vec3 *pos, Vec3 *out);

static inline float dist2(Vec3 *a, Vec3 *b)
{
    float dx, dy, dz;

    dx = a->x - b->x;
    dy = a->y - b->y;
    dz = a->z - b->z;
    return dx * dx + dy * dy + dz * dz;
}

int func_148F50(Obj *o)
{
    State *s;
    Tgt *r;
    Vec3 v;

    s = o->st;
    if (s->cur) {
        if (func_037638(s->cur->inner->first))
            s->cur = 0;
        else if (2500.0f <= dist2(&o->pos, &s->cur->pos))
            s->cur = 0;
    }
    if (s->cur)
        return 1;
    r = func_112F38(&o->pos, &v);
    if (r) {
        if (v.x < 1225.0f)
            s->cur = (Tgt *)r->next;
    }
    return s->cur != 0;
}
