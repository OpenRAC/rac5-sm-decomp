/* LEVEL_17:0x1503C0 -- settles the object onto the ground under it: probes from its position (1.4 range), records the unit direction to the hit point as its velocity (zero when nothing is hit), looks up the floor entry below, lifts the target height by the part of 2.2 not covered when that floor type is flagged, and eases the object's height a fifth of the way towards it while snapping x and z. */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    char pad00[0x28];
    Vec3 vel;
} State;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0x58 - 0x3C];
    State *state;
} Obj;

typedef struct {
    char pad00[0x0C];
    char *entries;
} Table;

extern float sqrtf(float x);
extern int func_01D240(float range, Vec3 *from, Vec3 *to, Vec3 *from2, int a, int b);
extern int func_0F1828(Vec3 *from, float *res);
extern unsigned int func_0F0F30(void);

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Sub3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

static __inline__ void Scale3(Vec3 *v, float k)
{
    v->x = v->x * k;
    v->y = v->y * k;
    v->z = v->z * k;
}

static __inline__ void Clear3(Vec3 *v)
{
    v->x = 0.0f;
    v->y = 0.0f;
    v->z = 0.0f;
}

static __inline__ void Normalize3(Vec3 *v)
{
    float len2;
    float inv;

    len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    if (!(len2 < 2.3841858e-07f)) {
        inv = 1.0f / sqrtf(len2);
        Scale3(v, inv);
    }
}

void func_1503C0(Obj *self)
{
    State *st;
    Vec3 from;
    Vec3 to;
    float res[4];
    Table *tab;
    int idx;
    float y;

    Copy3(&from, &self->pos);
    st = self->state;
    if (func_01D240(1.4f, &from, &to, &from, 0x28, 0) != 0) {
        Sub3(&st->vel, &to, &from);
        Normalize3(&st->vel);
    } else {
        Clear3(&st->vel);
    }
    idx = func_0F1828(&from, res);
    if (idx >= 0) {
        tab = (Table *)func_0F0F30();
        if ((*(unsigned short *)(tab->entries + idx * 0x4C + 0x48) & 8) != 0) {
            if (res[0] < 2.2f)
                from.y = from.y + (2.2f - res[0]);
        }
    }
    y = self->pos.y;
    self->pos.x = from.x;
    self->pos.z = from.z;
    self->pos.y = y + (from.y - y) * 0.2f;
}
