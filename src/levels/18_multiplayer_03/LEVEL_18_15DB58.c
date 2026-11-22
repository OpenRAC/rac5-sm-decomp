/* LEVEL_18:0x15DB58 -- re-aims the object's facing vector: reads a pitch value for the object's target, clamps it to a small band, rebuilds the horizontal part of the target direction so that the vector keeps unit length, stores the normalised result and the cross product of the up vector with it. */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    float *vec;
} Holder;

typedef struct {
    Vec3 dir;
    float pad0C;
    Vec3 right;
    float pad1C;
    Vec3 up;
    char pad2C[0x54 - 0x2C];
    Holder *holder;
} Obj;

extern float fabsf(float x);
extern float sqrtf(float x);
extern float func_159CD0(char *a0);

static __inline__ float *Clamp(float *v, float *lo, float *hi)
{
    if (*v < *lo)
        return lo;
    if (*hi < *v)
        return hi;
    return v;
}

static __inline__ void Cross(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->y * b->z - a->z * b->y;
    d->y = a->z * b->x - a->x * b->z;
    d->z = a->x * b->y - a->y * b->x;
}

void func_15DB58(Obj *o)
{
    Holder *h;
    float c;
    float lo;
    float hi;
    float k;
    float len2;
    float r;
    float *src;
    Vec3 d;

    h = o->holder;
    c = func_159CD0((char *)h->vec) + 0.055f;
    lo = -0.344f;
    hi = 0.109f;
    c = *Clamp(&c, &lo, &hi);
    src = h->vec;
    d.x = src[0];
    d.z = src[2];
    k = 1.0f - fabsf(c);
    len2 = d.x * d.x + d.z * d.z;
    if (!(len2 < 2.3841858e-07f)) {
        len2 = k / sqrtf(len2);
        d.x = len2 * d.x;
        d.z = len2 * d.z;
    }
    d.y = c;
    r = 1.0f / sqrtf(d.x * d.x + d.y * d.y + d.z * d.z);
    o->dir.x = r * d.x;
    o->dir.y = r * d.y;
    o->dir.z = r * d.z;
    Cross(&o->right, &o->up, &o->dir);
}
