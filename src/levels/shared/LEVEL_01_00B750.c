/* LEVEL_01:0x00B750 -- finds the point where a circle of given radius around a pole meets a plane, if it does, using an in-plane basis from the plane normal. */

extern float sqrtf(float x);

static __inline__ void Cross(float *o, float *a, float *b)
{
    o[0] = a[1] * b[2] - a[2] * b[1];
    o[1] = a[2] * b[0] - a[0] * b[2];
    o[2] = a[0] * b[1] - a[1] * b[0];
}

static __inline__ float Dot(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ int Normalize3(float *v)
{
    float len2;
    float inv;

    len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (len2 < 2.3841858e-07f)
        return 0;
    inv = 1.0f / sqrtf(len2);
    v[0] = inv * v[0];
    v[1] = inv * v[1];
    v[2] = inv * v[2];
    return 1;
}

int func_00B750(float p1, float p2, float r, float *out, float *P, float *Q, float *N)
{
    float c[3];
    float d[3];
    float ox, oy, oz, h, dd, A, B, disc, s, k0, k1, inv, len2, rr;
    unsigned char ok;

    dd = 0.0f - Dot(P, N);
    rr = r * r - dd * dd;
    Cross(c, N, P);
    ok = Normalize3(c);
    if (!ok)
        return 0;
    Cross(d, N, c);
    B = Dot(Q, c);
    A = Dot(Q, d);
    h = (p1 - Dot(Q, P)) + p2;
    len2 = B * B + A * A;
    disc = len2 * rr - h * h;
    if (disc < 0.0f || len2 < 1.0000001e-06f)
        return 0;
    s = sqrtf(disc);
    if (B < 0.0f) {
        k1 = B * h + A * s;
        k0 = A * h - B * s;
    } else {
        k1 = B * h - A * s;
        k0 = A * h + B * s;
    }
    inv = 1.0f / len2;
    k1 = k1 * inv;
    k0 = k0 * inv;
    ox = P[0] + k1 * c[0] + k0 * d[0];
    oy = P[1] + k1 * c[1] + k0 * d[1];
    oz = P[2] + k1 * c[2] + k0 * d[2];
    out[0] = ox;
    out[1] = oy;
    out[2] = oz;
    return 1;
}
