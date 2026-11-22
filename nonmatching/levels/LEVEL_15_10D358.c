/* USA LEVEL_15.REL:0x10D358, 232-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad --as: 27 differing words; first difference at
 * 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad000[0xC0];
    float pos[3];
    char pad0CC[0x158];
    float dir[3];
} Obj;

extern float sqrtf(float x);

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ void Scale3(float *d, float k, float *s)
{
    d[0] = k * s[0];
    d[1] = k * s[1];
    d[2] = k * s[2];
}

void func_10D358(Obj *o, float *target)
{
    float d[3];
    float *pos;
    float *dst;
    float len2;
    float inv;

    pos = o->pos;
    dst = o->dir;
    d[0] = target[0] - pos[0];
    d[1] = target[1] - pos[1];
    d[2] = target[2] - pos[2];
    len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (len2 < 2.384185791015625e-07f) {
        return;
    }
    inv = 1.0f / sqrtf(len2);
    dst[0] = inv * d[0];
    dst[1] = inv * d[1];
    dst[2] = inv * d[2];
}
