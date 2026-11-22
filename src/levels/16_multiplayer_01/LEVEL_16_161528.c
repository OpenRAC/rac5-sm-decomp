/* LEVEL_16:0x161528 -- when the target stands roughly level with the object and within about four and a half units horizontally (but not on top of it), and the object's facing is within the cone towards it, notifies the object that handles the target (through its vtable entry 8, with a 25.0 range) and returns 1; returns 0 otherwise. */
typedef struct { float x, y, z; } Vec3;
typedef struct { float x, y, z, w; } Vec4;

struct Ent;
typedef struct {
    char pad00[0x20];
    void (*notify)(float range, struct Ent *e, int a, int b, Vec3 *pos, Vec4 *dir, void *src);
} Vtbl;

typedef struct Ent {
    char pad00[0x40];
    Vtbl *vtbl;
} Ent;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0x100 - 0x3C];
    short kind;
    char pad102[0x59C - 0x102];
    Ent *handler;
} Target;

typedef struct {
    char pad00[0x20];
    Vec3 axis;
    char pad2C[4];
    Vec3 pos;
    char pad3C[0xA4 - 0x3C];
    Target *target;
} State;

typedef struct {
    char pad00[0x58];
    State *state;
} Obj;

extern float fabsf(float x);
extern float sqrtf(float x);
extern int func_1259E8(void);

static __inline__ void Sub3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

static __inline__ float Dot3(Vec3 *a, Vec3 *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

int func_161528(Obj *self)
{
    State *s;
    Target *t;
    Ent *e;
    Ent *h;
    Vec4 d;
    float len2;
    float inv;
    Vtbl *vt;

    d.w = 0.0f;
    s = self->state;
    t = s->target;
    Sub3((Vec3 *)&d, &t->pos, &s->pos);
    if (fabsf(d.y) > 1.3f)
        return 0;
    len2 = d.x * d.x + d.z * d.z;
    if (len2 > 20.25f)
        return 0;
    if (len2 < 0.001f)
        return 0;
    d.y = 0.0f;
    inv = 1.0f / sqrtf(len2);
    d.x = d.x * inv;
    d.y = d.y * inv;
    d.z = d.z * inv;
    if (0.8f <= Dot3((Vec3 *)&d, &s->axis)) {
        if (s->target->kind == 0x41) {
            e = (Ent *)func_1259E8();
            if (e != 0) {
                vt = e->vtbl;
                vt->notify(25.0f, e, 2, 1, &s->pos, &d, self);
            }
        } else {
            h = s->target->handler;
            if (h != 0) {
                vt = h->vtbl;
                vt->notify(25.0f, h, 2, 1, &s->pos, &d, self);
            }
        }
        return 1;
    }
    return 0;
}
