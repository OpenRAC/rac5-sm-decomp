/* LEVEL_02:0x014EC0 -- placement copy of LEVEL_01_014478.c: tests whether the object faces the reference point: the vector from the object (+0x30) to the point must be within the height band and the squared planar distance within the limit, and its planar direction must have a dot product with the object's facing (+0x20, +0x28) of at least the threshold. */
extern float sqrtf(float);
extern float fabsf(float);

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern void func_01AC80(Vec4 *a0);

static __inline__ void Sub3(float *d, float *a)
{
    d[0] = d[0] - a[0];
    d[1] = d[1] - a[1];
    d[2] = d[2] - a[2];
}

static __inline__ void Scale3(float *d, float s)
{
    d[0] = d[0] * s;
    d[1] = d[1] * s;
    d[2] = d[2] * s;
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

int func_014EC0(char *object, float height, float limit2, float threshold)
{
    Vec4 v;
    float *p;
    float d2;

    func_01AC80(&v);
    p = &v.x;
    Sub3(p, (float *)(object + 0x30));
    if (height < fabsf(p[1]) || (d2 = p[0] * p[0] + p[2] * p[2], limit2 < d2)) {
        return 0;
    }
    p[1] = 0.0f;
    Scale3(p, 1.0f / sqrtf(d2));
    return threshold <= Dot3(p, (float *)(object + 0x20));
}
