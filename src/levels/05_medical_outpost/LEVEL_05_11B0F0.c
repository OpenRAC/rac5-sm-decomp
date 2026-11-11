/* LEVEL_05:0x11B0F0 -- placement copy of LEVEL_01_11F450.c: clamps the real roots of a quartic-derived cubic to the interval [0, r]. */
extern float fabsf(float x);
extern int func_11E5C8(float *roots, float a, float b, float c, float d);

int func_11B0F0(float *outHi, float *outLo, float r, float d, float *a, float *b, float *dir, float *c)
{
    float roots[3];
    float dd;
    float k;
    float wx, wy, wz;
    float c3, c2, c1, c0;
    float lo, hi, x, s, t;
    float *p;
    float *end;
    int n;

    dd = dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2];
    wx = a[0] - c[0];
    wy = a[1] - c[1];
    wz = a[2] - c[2];
    c3 = b[0] * dir[0] + b[1] * dir[1] + b[2] * dir[2];
    c2 = wx * dir[0] + wy * dir[1] + wz * dir[2] + (b[0] * b[0] + b[1] * b[1] + b[2] * b[2]);
    c1 = wx * b[0] + wy * b[1] + wz * b[2];
    c1 = c1 + c1;
    c0 = wx * wx + wy * wy + wz * wz - d * d;
    k = 1.0f / dd * 4.0f;
    n = func_11E5C8(roots, k * c3, k * c2, k * c1, k * c0);
    lo = r;
    hi = 0.0f;
    end = roots + n;
    for (p = roots; p != end; p++) {
        x = *p;
        s = fabsf(x - lo);
        t = fabsf(x - hi);
        lo = (lo + x - s) * 0.5f;
        hi = (hi + x + t) * 0.5f;
    }
    if (hi < lo)
        return 0;
    *outHi = (lo + fabsf(lo)) * 0.5f;
    *outLo = (hi + r - fabsf(r - hi)) * 0.5f;
    return 1;
}
