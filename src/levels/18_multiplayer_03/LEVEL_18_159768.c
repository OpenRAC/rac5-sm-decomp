/* LEVEL_18:0x159768 -- when the target is within about 14 units, tests the three attachment points of the object (those whose slot is free) against the target and returns 1 with the first point that is closer than 6 units and lies on the far side of the target's own offset. */
typedef struct { float x, y, z; } Vec3;
typedef struct { float m[16]; } Mat4;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
} Ent;

typedef struct {
    int used;
    char pad04[0x70];
} Slot;

typedef struct {
    char pad00[0x48];
    Slot slots[3];
} State;

typedef struct {
    char pad00[0x0C];
    Mat4 *mat;
} Owner;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0x54 - 0x3C];
    Owner *owner;
    State *state;
} Obj;

typedef struct {
    Ent *target;
} TState;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0x58 - 0x3C];
    TState *state;
} Other;

extern Vec3 D_001D6300[];

extern void func_102DB8(Vec3 *dst, Mat4 *mat, Vec3 *v);

static __inline__ float Dist2(Vec3 *a, Vec3 *b)
{
    float dx;
    float dy;
    float dz;

    dx = b->x - a->x;
    dy = b->y - a->y;
    dz = b->z - a->z;
    return dx * dx + dy * dy + dz * dz;
}

static __inline__ void Sub3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

int func_159768(Obj *obj, Other *other, unsigned char *out)
{
    Ent *tgt;
    State *st;
    Owner *own;
    Vec3 p;
    Vec3 v1;
    Vec3 v2;
    unsigned char i;
    float lim;
    float zero;

    tgt = other->state->target;
    st = obj->state;
    own = obj->owner;
    if (tgt == 0)
        return 0;
    if (Dist2(&obj->pos, &other->pos) > 190.0f)
        return 0;
    lim = 36.0f;
    zero = 0.0f;
    for (i = 0; i < 3; i++) {
        if (st->slots[i].used == 0) {
            func_102DB8(&p, own->mat, &D_001D6300[i]);
            Sub3(&v1, &p, &other->pos);
            Sub3(&v2, &tgt->pos, &other->pos);
            if (v1.x * v1.x + v1.y * v1.y + v1.z * v1.z < lim
                && v1.x * v2.x + v1.y * v2.y + v1.z * v2.z < zero) {
                *out = i;
                return 1;
            }
        }
    }
    return 0;
}
