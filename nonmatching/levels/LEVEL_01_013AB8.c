/* USA LEVEL_01.REL:0x013AB8, 1092-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 14 differing words; first difference at 0x3C8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
#define Norm(x0, v) { float l2_ = (x0) * (x0) + (v)[1] * (v)[1] + (v)[2] * (v)[2]; if (!(l2_ < 2.3841858e-07f)) { float len_ = sqrtf(l2_); float inv_ = 1.0f / len_; (x0) *= inv_; (v)[1] *= inv_; (v)[2] *= inv_; } }

typedef struct {
    float a[3];
    float p0;
    float b[3];
    float p1;
    float c[3];
} Basis;

extern float D_001EF29C;
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
    n = (int)(D_001EF29C * 59.998802f);
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

void func_013AB8(Basis *s, float *vel, float *tgt, float *k, float *up)
{
    float *p;
    float *q;
    float *a;
    float *b;
    float *c;
    float l2;
    float inv;
    float len;

    p = s->c;
    q = vel;
    Spring(p, tgt[0], q, k[0], k[1], k[2]);
    Spring(p + 1, tgt[1], q + 1, k[0], k[1], k[2]);
    Spring(p + 2, tgt[2], q + 2, k[0], k[1], k[2]);
    a = s->a;
    b = s->b;
    c = s->c;
    Norm(s->c[0], c);
    s->a[0] = up[1] * c[2] - up[2] * c[1];
    s->a[1] = up[2] * s->c[0] - up[0] * c[2];
    s->a[2] = up[0] * c[1] - up[1] * s->c[0];
    s->p0 = 0.0f;
    Norm(s->a[0], s->a);
    s->b[0] = s->c[1] * s->a[2] - c[2] * s->a[1];
    b[1] = s->c[2] * s->a[0] - c[0] * s->a[2];
    b[2] = s->c[0] * s->a[1] - c[1] * s->a[0];
    s->p1 = 0.0f;
}
