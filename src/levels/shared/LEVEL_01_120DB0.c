/* LEVEL_01:0x120DB0 -- closest point to a query point on a segment: writes the point and returns the clamped segment parameter. */
extern float sqrtf(float x);
extern float fabsf(float x);

static __inline__ void Sub3(float *r, float *x, float *y)
{
    r[0] = x[0] - y[0];
    r[1] = x[1] - y[1];
    r[2] = x[2] - y[2];
}

static __inline__ float Dot3(float *x, float *y)
{
    return x[0] * y[0] + x[1] * y[1] + x[2] * y[2];
}

static __inline__ void Copy3(float *r, float *x)
{
    r[0] = x[0];
    r[1] = x[1];
    r[2] = x[2];
}

static __inline__ void Scale3(float *r, float *x, float k)
{
    r[0] = k * x[0];
    r[1] = k * x[1];
    r[2] = k * x[2];
}

static __inline__ void Add3(float *r, float *x)
{
    r[0] = r[0] + x[0];
    r[1] = r[1] + x[1];
    r[2] = r[2] + x[2];
}

float func_120DB0(float *out, float *a, float *b, float *p)
{
    float d[3];
    float e[3];
    float len2;
    float dot;
    float s;
    float t;
    float len;
    float inv;
    float u;

    Sub3(d, b, a);
    Sub3(e, p, a);
    len2 = Dot3(d, d);
    dot = Dot3(d, e);
    if (fabsf(len2) < 0.001f) {
        Copy3(out, a);
        s = 1.0f;
        if (dot < 0.0f) {
            s = -1.0f;
        }
        return s * 0.0001f;
    }
    len = sqrtf(len2);
    inv = 1.0f / len;
    u = dot * inv;
    t = u * inv;
    if (dot < 0.0f) {
        Copy3(out, a);
        return t;
    }
    if (len < u) {
        Copy3(out, b);
        return t;
    }
    Scale3(out, d, t);
    Add3(out, a);
    return t;
}
