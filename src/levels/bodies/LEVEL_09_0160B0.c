/* LEVEL_09:0x0160B0 -- placement copy of LEVEL_10_0160C8.c: steps a damped, clamped spring on a direction vector and re-orthonormalises the basis. */
#define Norm(x0, v) { float l2_ = (x0) * (x0) + (v)[1] * (v)[1] + (v)[2] * (v)[2]; if (!(l2_ < 2.3841858e-07f)) { float len_ = sqrtf(l2_); float inv_ = 1.0f / len_; (x0) *= inv_; (v)[1] *= inv_; (v)[2] *= inv_; } }

typedef struct {
    float a[3];
    float p0;
    float b[3];
    float p1;
    float c[3];
} Basis;

extern float D_001D909C;
extern float sqrtf(float);

static inline const int *MinRef(const int *x, const int *y)
{
    return *x < *y ? x : y;
}

static inline void Spring(float *pos, float tgt, float *vel, float k0, float k1, float k2)
{
    int n;
    int two;
    int cnt;
    float v;

    two = 2;
    n = (int)(D_001D909C * 59.998802f);
    cnt = *MinRef(&n, &two);
    if (cnt > 0) {
        do {
            v = (tgt - *pos) * k0 - *vel * k1;
            *vel = v;
            if (v > k2)
                *vel = k2;
            else if (v < -k2)
                *vel = -k2;
            *pos += *vel;
        } while (--cnt);
    }
}

void func_0160B0(Basis *s, float *tgt, float *vel, float *k)
{
    float *p;
    float *q;
    float *b;
    float *c;
    float l2;
    float inv;
    float len;

    p = s->b;
    q = vel;
    Spring(p, tgt[0], q, k[0], k[1], k[2]);
    Spring(p + 1, tgt[1], q + 1, k[0], k[1], k[2]);
    Spring(p + 2, tgt[2], q + 2, k[0], k[1], k[2]);
    b = s->b;
    c = s->c;
    Norm(s->b[0], b);
    s->c[0] = s->a[1] * b[2] - s->a[2] * b[1];
    c[1] = s->a[2] * s->b[0] - s->a[0] * b[2];
    c[2] = s->a[0] * b[1] - s->a[1] * s->b[0];
    Norm(s->c[0], c);
    s->a[0] = b[1] * c[2] - b[2] * c[1];
    s->a[1] = b[2] * s->c[0] - s->b[0] * c[2];
    s->a[2] = s->b[0] * c[1] - b[1] * s->c[0];
}
