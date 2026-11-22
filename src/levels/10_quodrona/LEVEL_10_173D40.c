/* LEVEL_10:0x173D40 -- projects the offset (-a, -b) along the first and third rows of the current basis (or of the default basis when none is current) onto two rows of the given matrix, stores the unit direction in out and returns how far the offset reaches, capped at one (zero when the projection vanishes). */
typedef struct { float x, y, z; } Vec3;

extern char *func_000F68(void);
extern char D_00220D40[];
extern float fabsf(float x);
extern float sqrtf(float x);

static __inline__ void Scale3(Vec3 *d, float *a, float k)
{
    d->x = k * a[0];
    d->y = k * a[1];
    d->z = k * a[2];
}

static __inline__ void Mad3(Vec3 *d, float *a, float k)
{
    d->x += a[0] * k;
    d->y += a[1] * k;
    d->z += a[2] * k;
}

static __inline__ float Dot3(Vec3 *a, float *b)
{
    return a->x * b[0] + a->y * b[1] + a->z * b[2];
}

static __inline__ int Normalise(float *out, float len2)
{
    float inv;
    int r;

    if (len2 < 2.3841858e-07f) {
        r = 0;
    } else {
        inv = 1.0f / sqrtf(len2);
        out[0] = inv * out[0];
        out[1] = inv * out[1];
        r = 1;
    }
    return r;
}

float func_173D40(float a, float b, float *out, float *m)
{
    float *p;
    Vec3 v;
    float u;
    float w;
    float len2;
    float l;
    float ret;
    unsigned char ok;

    p = (float *)(func_000F68() != 0 ? func_000F68() : D_00220D40);
    Scale3(&v, p, -a);
    Mad3(&v, p + 8, -b);
    u = Dot3(&v, m);
    w = Dot3(&v, m + 6);
    len2 = u * u + w * w;
    out[0] = u;
    out[1] = w;
    ok = Normalise(out, len2);
    if (ok) {
        l = sqrtf(a * a + b * b);
        ret = ((l + 1.0f) - fabsf(1.0f - l)) * 0.5f;
    } else {
        ret = 0.0f;
    }
    return ret;
}
