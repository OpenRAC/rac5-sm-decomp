/* LEVEL_02:0x17AF40 -- tests whether the marker is within a small radius of the object and in front of its facing. */
extern float sqrtf(float x);
extern void func_01AC80(float *out);

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ void Scale3(float *d, float k)
{
    d[0] = d[0] * k;
    d[1] = d[1] * k;
    d[2] = d[2] * k;
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

int func_17AF40(char *o)
{
    float v[4];
    float d2;
    float len;

    func_01AC80(v);
    Sub3(v, v, (float *)(o + 0x30));
    if (v[1] > 0.15000000596046448f) {
        return 0;
    }
    d2 = v[0] * v[0] + v[2] * v[2];
    if (d2 > 0.04000000283122063f) {
        return 0;
    }
    v[1] = 0.0f;
    len = sqrtf(d2);
    Scale3(v, 1.0f / len);
    return Dot3(v, (float *)(o + 0x20)) >= 0.5f;
}
