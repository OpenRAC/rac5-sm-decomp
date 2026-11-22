/* LEVEL_01:0x1200E8 -- clips a parameter interval against one linear or quadratic inequality and reports how many sub-intervals remain. */

extern float sqrtf(float x);
extern float fabsf(float x);

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*b < *a)
        return a;
    return b;
}

static __inline__ float *MinPtr(float *a, float *b)
{
    if (*a < *b)
        return a;
    return b;
}

int func_1200E8(float a, float b, float c, float d, float *range)
{
    float x0, x1, x2, x3;
    float A, B, C;
    float A2, B2, C2;
    float d0, d1, disc, s, inv, u, w, disc2, s2, inv2, u2, w2, lo2, hi2, p, t0, t1, lo1, hi1;
    int n;

    x0 = range[0];
    x2 = range[1];
    if (fabsf(b) < 0.00048828125f) {
        if (0.0f < a) {
            p = a * x2;
            if (p < c)
                return 0;
            if (a * x0 < c)
                x0 = c / a;
            if (d < a * x0)
                return 0;
            if (d < p)
                x2 = d / a;
        } else {
            p = a * x0;
            if (p < c)
                return 0;
            if (a * x2 < c)
                x2 = c / a;
            if (d < a * x2)
                return 0;
            if (d < p)
                x0 = d / a;
        }
        range[0] = x0;
        range[1] = x2;
        return 1;
    }
    if (b < 0.0f) {
        A = -a;
        B = -b;
        C = c;
        A2 = a;
        B2 = b;
        C2 = -d;
    } else {
        A = a;
        B = b;
        C = -d;
        A2 = -A;
        B2 = -B;
        C2 = c;
    }
    disc = A * A - (B + B) * C;
    if (disc < 0.0f)
        return 0;
    s = sqrtf(disc);
    inv = 1.0f / B;
    u = -A * inv;
    w = s * fabsf(inv);
    t0 = u - w;
    t1 = u + w;
    d0 = fabsf(t0 - x0);
    d1 = fabsf(t1 - x2);
    lo1 = (x0 + t0 + d0) * 0.5f;
    hi1 = ((x2 + t1) - d1) * 0.5f;
    if (hi1 <= lo1)
        return 0;
    x0 = lo1;
    x2 = hi1;
    disc2 = A2 * A2 - (B2 + B2) * C2;
    if (disc2 < 0.0f) {
        range[0] = x0;
        range[1] = x2;
        return 1;
    }
    s2 = sqrtf(disc2);
    inv2 = 1.0f / B2;
    u2 = -A2 * inv2;
    w2 = s2 * fabsf(inv2);
    x1 = u2 - w2;
    lo2 = *MaxPtr(&x0, &x1);
    x3 = u2 + w2;
    hi2 = *MinPtr(&x2, &x3);
    if (hi2 <= lo2) {
        range[0] = x0;
        range[1] = x2;
        return 1;
    }
    n = 0;
    if (x0 < lo2) {
        range[0] = x0;
        range[1] = lo2;
        n = 1;
    }
    if (hi2 < x2) {
        range[n * 2] = hi2;
        range[n * 2 + 1] = x2;
        n++;
    }
    return n;
}
