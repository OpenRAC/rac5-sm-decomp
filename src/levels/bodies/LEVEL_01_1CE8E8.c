/* LEVEL_01:0x1CE8E8 -- steps a two-axis spring toward a target and rebuilds an orthonormal frame from it. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[0x24];
    float px;
    float py;
    float vx;
    float vy;
} Obj;

typedef struct {
    Vec3 a;
    float pada;
    Vec3 b;
    float padb;
    Vec3 c;
} Frame;

extern float D_001EF29C;
extern float sqrtf(float x);
extern void func_125BA0(Vec3 *out, Obj *o, float *pos);

static inline int *MinPtr(int *a, int *b)
{
    return (*a < *b) ? a : b;
}

static inline void SpringStep(float t, float *pos, float *vel, float *k)
{
    int b;
    int a;
    int *p;
    int n;
    float v;
    float k0;
    float k1;
    float k2;

    b = 2;
    a = (int)(D_001EF29C * 59.998802185058594f);
    p = (b <= a) ? &b : &a;
    n = *p;
    k0 = k[0];
    k1 = k[1];
    k2 = k[2];
    if (n > 0) do {
        v = (t - *pos) * k0 - *vel * k1;
        *vel = v;
        if (k2 < v) {
            *vel = k2;
        } else if (v < -k2) {
            *vel = -k2;
        }
        *pos = *pos + *vel;
        n--;
    } while (n != 0);
}

static inline void SpringStep2(float t, float *pos, float *vel, float *k)
{
    int b;
    int a;
    int *p;
    int n;
    float v;
    float k0;
    float k1;
    float k2;

    b = 2;
    a = (int)(D_001EF29C * 59.998802185058594f);
    p = MinPtr(&a, &b);
    n = *p;
    k0 = k[0];
    k1 = k[1];
    k2 = k[2];
    if (n > 0) do {
        v = (t - *pos) * k0 - *vel * k1;
        *vel = v;
        if (k2 < v) {
            *vel = k2;
        } else if (v < -k2) {
            *vel = -k2;
        }
        *pos = *pos + *vel;
        n--;
    } while (n != 0);
}

static inline void Vec3Cross(Vec3 *o, Vec3 *a, Vec3 *b)
{
    o->x = a->y * b->z - a->z * b->y;
    o->y = a->z * b->x - a->x * b->z;
    o->z = a->x * b->y - a->y * b->x;
}

static inline void Vec2Normalize(float *v)
{
    float t;

    t = v[0] * v[0] + v[1] * v[1];
    if (t < 2.384185791015625e-07f) {
        return;
    }
    t = 1.0f / sqrtf(t);
    v[0] = t * v[0];
    v[1] = t * v[1];
}

static inline void Vec3Normalize(Vec3 *v)
{
    float len2;
    float inv;

    len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    if (len2 < 2.384185791015625e-07f) {
        return;
    }
    inv = 1.0f / sqrtf(len2);
    v->x = v->x * inv;
    v->y = v->y * inv;
    v->z = v->z * inv;
}

void func_1CE8E8(Obj *o, Frame *f, float *tgt, float *k)
{
    Vec3 s;

    SpringStep(tgt[0], &o->px, &o->vx, k);
    SpringStep2(tgt[1], &o->py, &o->vy, k);
    Vec2Normalize(&o->px);
    func_125BA0(&s, o, &o->px);
    Vec3Cross(&f->a, &f->b, &s);
    Vec3Normalize(&f->a);
    Vec3Cross(&f->c, &f->a, &f->b);
}
