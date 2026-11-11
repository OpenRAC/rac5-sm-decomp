/* LEVEL_15:0x0EB910 -- transforms a point offset from a base by a 3x3 matrix row set. */

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

void func_0EB910(float *out, float *m, float *b, int unused)
{
    float d[3];
    float x;
    float y;
    float z;

    Sub3(d, b, m + 9);
    x = Dot3(d, m);
    y = Dot3(d, m + 3);
    z = Dot3(d, m + 6);
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
