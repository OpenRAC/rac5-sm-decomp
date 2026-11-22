/* USA LEVEL_01.REL:0x1CDBC8, 496-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad -mno-check-zero-division: 22 differing words;
 * first difference at 0x108.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad[0x20];
    float dx;
    float pad24;
    float dz;
    float pad2c;
    float pos[3];
} Obj;

extern float sqrtf(float x);
extern int rand(void);

static __inline__ void Sub3(float *dst, float *a, float *b)
{
    dst[0] = a[0] - b[0];
    dst[1] = a[1] - b[1];
    dst[2] = a[2] - b[2];
}

void func_1CDBC8(float speed, float spread, float *out, Obj *obj, float *from, float *dir, Obj *other)
{
    float len;
    float k;
    float f;
    float inv;

    if (dir != 0) {
        out[0] = dir[0];
        out[1] = dir[1];
        out[2] = dir[2];
        out[3] = dir[3];
    } else {
        if (from != 0) {
            Sub3(out, obj->pos, from);
        } else if (other != 0) {
            Sub3(out, obj->pos, other->pos);
        } else {
            out[0] = -obj->dx;
            out[2] = -obj->dz;
        }
    }
    len = out[0] * out[0] + out[2] * out[2];
    out[1] = 0.0f;
    if (!(len < 2.3841858e-07f)) {
        inv = 1.0f / sqrtf(len);
        out[0] = inv * out[0];
        out[2] = inv * out[2];
    }
    k = (float)rand() * 4.656613e-10f * 0.59999996f + 0.7f;
    f = k * speed;
    out[0] = out[0] * f;
    out[1] = k * spread;
    out[2] = out[2] * f;
    out[5] = 0.0f;
    out[4] = 0.0f;
    out[6] = -1.0f / speed;
}
