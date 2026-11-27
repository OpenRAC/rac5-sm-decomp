/* LEVEL_02:0x052038 -- placement copy of LEVEL_01_04D110.c: turns an orientation toward a target angle and renormalizes the heading. */
typedef struct { float x, y, z, w; } Vec4;
typedef struct {
    char pad0[0x2F4];
    Vec4 pos;
    Vec4 dir;
    float rate;
    char pad1[0x324 - 0x318];
    float kp;
    float kd;
    float lim;
} Turner;

extern float D_00203F1C;
extern float sqrtf(float x);
extern int func_1FFF10(float v);
extern void func_04D7A0(Vec4 *pos, Vec4 *v, Vec4 *dir, float ang);

static __inline__ const unsigned *MinRef(const unsigned *x, const unsigned *y)
{
    return (*x < *y) ? x : y;
}

static __inline__ unsigned MinU(unsigned a, unsigned b)
{
    return *MinRef(&a, &b);
}

void func_052038(Turner *obj, float target)
{
    Vec4 v;
    float ang;
    unsigned i, n;
    float *pa;
    float *pr;
    float d, acc, x, inv;
    Vec4 *pp = &obj->pos;
    Vec4 *q;
    float lim = obj->lim;
    float kp = obj->kp;
    float kd = obj->kd;

    pr = &obj->rate;
    v.x = pp->x + 0.001f;
    v.y = pp->y + 0.001f;
    v.z = pp->z + 0.001f;
    v.w = 0.0f;
    pp = &v;
    ang = v.w;
    pa = &ang;
    n = MinU(func_1FFF10(D_00203F1C * 59.998802f), 2);
    for (i = 0; i < n; i++) {
        d = target - *pa;
        if (d > 3.1415927f)
            d -= 6.2831855f;
        else if (d < -3.1415927f)
            d += 6.2831855f;
        acc = d * kp - *pr * kd;
        *pr = acc;
        if (acc > lim)
            *pr = lim;
        else if (acc < -lim)
            *pr = -lim;
        x = *pa + *pr;
        *pa = x;
        if (x > 3.1415927f)
            *pa = x - 6.2831855f;
        else if (x < -3.1415927f)
            *pa = x + 6.2831855f;
    }
    q = &obj->pos;
    func_04D7A0(q, pp, &obj->dir, ang);
    if (!(q->x * q->x + q->y * q->y + q->z * q->z < 2.3841858e-7f)) {
        inv = 1.0f / sqrtf(q->x * q->x + q->y * q->y + q->z * q->z);
        q->x = q->x * inv;
        q->y = q->y * inv;
        q->z = q->z * inv;
    }
}
