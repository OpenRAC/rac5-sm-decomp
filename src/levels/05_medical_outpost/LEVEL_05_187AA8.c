/* LEVEL_05:0x187AA8 -- tests whether a global position is within range of an object's box and triggers it. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec187AA8;

typedef struct {
    Vec187AA8 a;
    Vec187AA8 pad10[2];
    Vec187AA8 b;
    Vec187AA8 c;
    Vec187AA8 d;
} Frame187AA8;

typedef struct {
    char pad0[0x30];
    Vec187AA8 pos;
} Glob187AA8;

extern Glob187AA8 D_00220E40;
extern float func_07A658(void *o, Frame187AA8 *f, int a);
extern void func_187D88(void *o);

static __inline__ float DistXZ2(Vec187AA8 *a, Vec187AA8 *b)
{
    float dx = a->x - b->x;
    float dz = a->z - b->z;
    return dx * dx + dz * dz;
}

int func_187AA8(void *o, int arg)
{
    Frame187AA8 f;
    Glob187AA8 *g;
    Vec187AA8 *pv;

    func_07A658(o, &f, arg);
    g = &D_00220E40;
    pv = &g->pos;
    f.c.x = f.b.x + f.a.x * 0.5f;
    f.c.y = f.b.y + f.a.y * 0.5f;
    f.c.z = f.b.z + f.a.z * 0.5f;
    f.d.x = g->pos.x;
    f.d.y = pv->y;
    f.d.z = pv->z;
    if (pv->y + 0.5f < f.c.y)
        return 0;
    if (!(DistXZ2(pv, &f.c) < 12.25f)) {
        if (!(DistXZ2(pv, &f.b) <= 12.25f))
            return 0;
    }
    func_187D88(o);
    return 1;
}
