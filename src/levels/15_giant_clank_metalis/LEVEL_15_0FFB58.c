/* LEVEL_15:0x0FFB58 -- samples an interpolated position and direction from a two-mode emitter descriptor. */
extern int rand(void);
extern float sqrtf(float);

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Mat0FFB58 {
    unsigned char pad00[0x18];
    Vec3 v18;
} Mat0FFB58;

typedef struct Desc0FFB58 {
    int type;
    union {
        struct {
            Vec3 v04;
            Vec3 v10;
        } m0;
        struct {
            float lo;
            float hi;
            float spread;
            Vec3 base;
        } m1;
    } u;
} Desc0FFB58;

extern Mat0FFB58 D_002F3D68[];

extern void func_0E9DA8(Vec3 *out, Vec3 *base, float angle);
extern void func_0EABF0(Vec3 *out, Mat0FFB58 *m, Vec3 *in);
extern void func_0EA938(Vec3 *out, Mat0FFB58 *m, Vec3 *in);

static __inline__ unsigned char Vec3Normalize(Vec3 *dst, Vec3 *src)
{
    float d2 = src->x * src->x + src->y * src->y + src->z * src->z;

    if (d2 < 2.384185791015625e-07f) {
        return 0;
    }
    {
        float inv = 1.0f / sqrtf(d2);
        dst->x = inv * src->x;
        dst->y = inv * src->y;
        dst->z = inv * src->z;
    }
    return 1;
}

static __inline__ void Vec3Neg(Vec3 *dst, Vec3 *src)
{
    dst->x = -src->x;
    dst->y = -src->y;
    dst->z = -src->z;
}

void func_0FFB58(Vec3 *out0, Vec3 *out1, Desc0FFB58 *src, float t)
{
    switch (src->type) {
    case 0:
        *out0 = src->u.m0.v04;
        *out1 = src->u.m0.v10;
        break;
    case 1:
        {
            float base = (src->u.m1.hi - src->u.m1.lo) * t + src->u.m1.lo;
            float neg = -src->u.m1.spread;
            float span = src->u.m1.spread - neg;
            float ang = base + (neg + span * ((float)rand() * 4.656612873077393e-10f));
            Vec3 tmp;
            Vec3 norm;
            Mat0FFB58 *m;

            if (ang > 3.1415927410125732f) {
                ang -= 6.2831854820251465f;
            } else if (ang < -3.1415927410125732f) {
                ang += 6.2831854820251465f;
            }

            m = D_002F3D68;
            func_0E9DA8(&tmp, &src->u.m1.base, ang);
            func_0EABF0(out0, m, &tmp);
            if (Vec3Normalize(&norm, &tmp)) {
                func_0EA938(out1, m, &norm);
            } else {
                Vec3Neg(out1, &m->v18);
            }
        }
        break;
    }
}
