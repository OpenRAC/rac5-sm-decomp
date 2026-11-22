/* USA LEVEL_07.REL:0x1698E8, 368-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 27 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);
extern int func_0213A0(float len, float *t, float *hit, float *start, float *dir, int mask, int a, int b);

typedef struct {
    char pad_00[0x38];
    float z_38;
    char pad_3C[0x34];
    float x_70;
} Src;

typedef struct {
    char pad_00[0xA0];
    float p[3];
    char pad_AC[0x20];
    float o[3];
} Out;

void func_1698E8(Src *src, Out *out)
{
    float start[4];
    float d[4];
    float hit[8];
    float t;
    float len;
    float len2;
    float inv;
    float *p;
    float *q;

    p = out->p;
    q = out->o;
    out->p[0] = src->x_70;
    p[1] = 26.0f;
    p[2] = src->z_38;
    start[0] = q[0];
    d[0] = out->p[0] - q[0];
    start[1] = q[1];
    d[1] = p[1] - q[1];
    start[2] = q[2];
    d[2] = p[2] - q[2];
    len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (len2 < 2.384185791015625e-07f) {
        len = 0.0f;
    } else {
        len = sqrtf(len2);
        inv = 1.0f / len;
        d[0] = d[0] * inv;
        d[2] = d[2] * inv;
        d[1] = d[1] * inv;
    }
    t = 0.0f;
    if (func_0213A0(len, &t, hit, start, d, 0x868, 0, 0)) {
        p[0] = start[0] + d[0] * t;
        p[1] = start[1] + d[1] * t;
        p[2] = start[2] + d[2] * t;
    }
}
