/* USA LEVEL_01.REL:0x013768, 272-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad --as: 10 differing words; first difference at
 * 0x74.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x20];
    float hx;
    char pad24[4];
    float hz;
    char pad2C[4];
    float x;
    char pad34[4];
    float z;
} Obj;

extern float sqrtf(float x);
extern void func_013878(Obj *o, int a, int b, float *dir, int c);

float func_013768(Obj *o, int a, int b, float *target, int c)
{
    float d[3];
    float len2;
    float inv;

    d[0] = target[0] - o->x;
    d[1] = 0.0f;
    d[2] = target[2] - o->z;
    len2 = d[0] * d[0] + d[2] * d[2];
    if (!(len2 < 2.384185791015625e-07f)) {
        inv = 1.0f / sqrtf(len2);
        d[0] *= inv;
        d[2] *= inv;
    }
    func_013878(o, a, b, d, c);
    return d[0] * o->hx + d[2] * o->hz;
}
