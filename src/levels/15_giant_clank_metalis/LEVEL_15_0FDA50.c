/* LEVEL_15:0x0FDA50 -- transforms and renormalizes an orientation record through a matrix, then copies it out. */
typedef struct {
    char pad0[8];
    float c2;
    float c3;
    float c4;
    float c5;
} M;
typedef struct {
    M *m;
    float ax, ay, az;
    float bx, by, bz;
} S;
extern float sqrtf(float x);
extern void func_0EBEC0(float *out0, float *out1, float *a);

void func_0FDA50(float *out, S *s)
{
    M *m;
    float *p;
    float *q;
    float *r;
    float t, u, w, n, inv, x;
    float s1, s2, s3, s4, s5, s6;

    m = s->m;
    q = &m->c2;
    s1 = s->ax;
    s4 = s->bx;
    t = m->c2 * s1 + q[1] * s4;
    s->bx = q[2] * s1 + q[3] * s4;
    s5 = s->by;
    s2 = s->ay;
    s3 = s->az - 1.0f;
    s6 = s->bz;
    u = m->c2 * s2 + q[1] * s5;
    s->by = q[2] * s2 + q[3] * s5;
    x = m->c2 * s3 + q[1] * s6 + 1.0f;
    s->bz = q[2] * s3 + q[3] * s6;
    w = (x + 0.5f + __builtin_fabsf(0.5f - x)) * 0.5f;
    n = t * t + u * u + w * w;
    inv = 1.0f / sqrtf(n);
    p = &s->ax;
    s->ax = t * inv;
    p[1] = u * inv;
    p[2] = w * inv;
    func_0EBEC0(out, out + 3, p);
    r = out + 6;
    r[0] = s->ax;
    r[1] = p[1];
    r[2] = p[2];
}
