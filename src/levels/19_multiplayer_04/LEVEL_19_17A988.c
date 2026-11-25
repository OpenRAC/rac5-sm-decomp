/* LEVEL_19:0x17A988 -- tests whether any of two players' objects is near an object's position and otherwise runs a collision query. */
typedef struct {
    float x, y, z, w;
} V4;
typedef struct {
    float x, y, z;
} V3;
typedef struct {
    float limit;
    char pad4[0x10];
    char *link;
} Info;
typedef struct {
    char pad0[0x30];
    V4 pos;
    char pad40[0x54 - 0x40];
    Info *info;
    char pad58[0x70 - 0x58];
    float t;
} Obj;
typedef struct {
    char pad0[0x59C];
    Obj *obj;
} Player;

extern Player *func_113490(int i);
extern void func_1262A8(void);
extern int func_01D418(V4 *a, V4 *out, V4 *b, int c, int d, float e);

static __inline__ void Copy4(V4 *d, V4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

static __inline__ void Sub(V3 *r, V4 *a, V4 *b)
{
    r->x = a->x - b->x;
    r->y = a->y - b->y;
    r->z = a->z - b->z;
}

int func_17A988(Obj *o)
{
    Info *info = o->info;
    V4 cur;
    V3 d;
    Player *p;
    Obj *q;
    unsigned int i;

    if (info->limit <= o->t)
        return 1;
    for (i = 0; i < 2; i++) {
        p = func_113490(i);
        if (p == 0)
            continue;
        q = p->obj;
        if (q == 0)
            continue;
        Copy4(&cur, &q->pos);
        cur.y += 0.75f;
        Sub(&d, &cur, &o->pos);
        if (d.x * d.x + d.y * d.y + d.z * d.z < 0.4f)
            return 1;
    }
    ((void (*)(char *, int, int))func_1262A8)(info->link, -1, 8);
    if (func_01D418(&o->pos, &cur, &o->pos, 0x28, 0, 0.2f))
        return 1;
    ((void (*)(char *, int, int))func_1262A8)(info->link, -9, 0);
    return 0;
}
