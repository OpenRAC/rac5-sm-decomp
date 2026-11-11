/* LEVEL_04:0x02A728 -- advances a clamped radius/height spiral and accumulates its planar offset. */
extern float floorf(float x);
extern float cosf(float x);
extern float sqrtf(float x);

static inline float *clampp(float *lo, float *v, float *hi)
{
    if (*v < *lo)
        return lo;
    if (*hi < *v)
        return hi;
    return v;
}

void func_02A728(float *s, float *out, unsigned n, float *b)
{
    unsigned i;
    float ang, r, h, t, u, w, c, sn, a;

    out[0] = s[0];
    out[1] = s[1];
    ang = s[2];
    r = s[3];
    h = s[5];
    for (i = 0; i < n; i++) {
        t = r + s[8];
        r = *clampp(&b[0], &t, &b[1]);
        u = h + s[10];
        h = *clampp(&b[8], &u, &b[9]);
        w = ang + h;
        a = w - floorf(w * 0.159154937f + 0.5f) * 6.28318548f;
        ang = a;
        c = cosf(a);
        sn = sqrtf(1.0f - c * c);
        if (a < 0.0f)
            sn = -sn;
        out[0] += r * c;
        out[1] += r * sn;
    }
}
