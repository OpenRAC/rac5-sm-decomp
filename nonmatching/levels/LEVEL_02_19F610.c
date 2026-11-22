/* USA LEVEL_02.REL:0x19F610, 504-byte candidate (22 November 2026).
 * Measured pinned --as: 9 differing words; first difference at 0x88.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    char pad00[0x14];
    float scale;
    char pad18[0x1D - 0x18];
    unsigned char tall;
} State;

typedef struct {
    char pad00[0x20];
    Vec3 axis;
    char pad2C[4];
    Vec3 pos;
    char pad3C[0x54 - 0x3C];
    State *state;
} Obj;

extern float sqrtf(float x);
extern float fabsf(float x);

static __inline__ void Sub3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Scale3(Vec3 *d, Vec3 *s, float k)
{
    d->x = k * s->x;
    d->y = k * s->y;
    d->z = k * s->z;
}

static __inline__ void Cross(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->y * b->z - a->z * b->y;
    d->y = a->z * b->x - a->x * b->z;
    d->z = a->x * b->y - a->y * b->x;
}

int func_19F610(Obj *a, Obj *b)
{
    State *st;
    Vec3 d;
    Vec3 c;
    Vec3 e;
    float l;
    float y;
    float len2;
    float th;

    st = a->state;
    Sub3(&d, &b->pos, &a->pos);
    y = d.y;
    if (st->tall == 0)
        y += 0.4f;
    d.y = y;
    if (st->tall != 0)
        l = fabsf(y);
    else
        l = sqrtf(d.x * d.x + d.z * d.z);
    if (l > 1.0f || l < 0.0f)
        return 0;
    if (st->scale == 1.0f)
        Copy3(&e, &a->axis);
    else
        Scale3(&e, &a->axis, 1.0f / st->scale);
    Cross(&c, &d, &e);
    len2 = c.x * c.x + c.y * c.y + c.z * c.z;
    if (st->tall != 0)
        return len2 <= 0.36f;
    return len2 <= 1.1025002f;
}
