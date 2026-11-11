/* LEVEL_16:0x013D40 -- tests whether another object lies within a height band, a horizontal range and a view cone around this object's heading. */

struct Obj013D40 {
    char pad00[0x20];
    float dir20[3];
    char pad2C[0x04];
    float pos30[3];
};

extern float fabsf(float x);
extern float sqrtf(float x);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Sub3(float *dst, float *src)
{
    dst[0] = dst[0] - src[0];
    dst[1] = dst[1] - src[1];
    dst[2] = dst[2] - src[2];
}

static __inline__ void Scale3(float *dst, float k)
{
    dst[0] = dst[0] * k;
    dst[1] = dst[1] * k;
    dst[2] = dst[2] * k;
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

int func_013D40(struct Obj013D40 *a, struct Obj013D40 *b, float dymax, float d2max, float cosmin)
{
    float d[3];
    float dist2;
    float len;

    Copy3(d, b->pos30);
    Sub3(d, a->pos30);
    if (fabsf(d[1]) > dymax) {
        return 0;
    }
    dist2 = d[0] * d[0] + d[2] * d[2];
    if (dist2 > d2max) {
        return 0;
    }
    d[1] = 0.0f;
    len = sqrtf(dist2);
    Scale3(d, 1.0f / len);
    return cosmin <= Dot3(d, a->dir20);
}
