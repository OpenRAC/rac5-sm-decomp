/* LEVEL_21:0x0EB828 -- placement copy of LEVEL_15_0EB828.c: transforms a point offset from a base by the three matrix rows, scaled by the reciprocal squared length of the first row. */
static inline void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static inline float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void func_0EB828(float *out, float *m, float *b, int unused)
{
    float d[3];
    float s;
    float x;
    float y;
    float z;

    Sub3(d, b, m + 9);
    s = 1.0f / Dot3(m, m);
    x = Dot3(d, m);
    y = Dot3(d, m + 3);
    z = Dot3(d, m + 6);
    out[0] = x * s;
    out[1] = y * s;
    out[2] = z * s;
}
