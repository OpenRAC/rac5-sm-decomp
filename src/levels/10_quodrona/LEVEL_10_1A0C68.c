/* LEVEL_10:0x1A0C68 -- casts a probe from the origin towards the object: when something other than the object itself or the ignored object is hit first, records it in the hit record as the blocker; otherwise measures the clear distance along the direction, rejects the result when it is the object or the ignored object, and stores the contact point (origin plus direction times distance) in the record. */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
} Obj;

typedef struct {
    char pad00[0x10];
    Obj *blocker;
    int kind;
    Vec3 pos;
    float dist;
} Hit;

extern float sqrtf(float x);
extern Obj *func_01C048(Vec3 *org, Vec3 *dir, float len, int a, int b, int c, int d);
extern int func_0204E0(float len, float *out, Hit *hit, Vec3 *org, Vec3 *dir, int a, int b, int c);

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

static __inline__ void AddScaled(Vec3 *d, Vec3 *a, Vec3 *b, float k)
{
    d->x = a->x + b->x * k;
    d->y = a->y + b->y * k;
    d->z = a->z + b->z * k;
}

int func_1A0C68(Obj *self, Hit *hit, Vec3 *org, Obj *skip)
{
    Obj *o;
    Vec3 d;
    float len2;
    float len;
    float inv;
    float r;

    Sub3(&d, &self->pos, org);
    len2 = d.x * d.x + d.y * d.y + d.z * d.z;
    if (len2 < 2.3841858e-07f) {
        len = 0.0f;
    } else {
        r = sqrtf(len2);
        inv = 1.0f / r;
        Scale3(&d, inv);
        len = r;
    }
    o = func_01C048(org, &d, len, 0x129, 0x101, 0xFFFF, 1);
    if (o != 0 && o != self && o != skip) {
        hit->blocker = o;
        hit->kind = 2;
        return 1;
    }
    if (func_0204E0(len, &hit->dist, hit, org, &d, 0x28, 0, 0) != 0
        && (hit->kind != 2 || (hit->blocker != self && hit->blocker != skip))) {
        AddScaled(&hit->pos, org, &d, hit->dist);
        return 1;
    }
    return 0;
}
