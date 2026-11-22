/* USA LEVEL_01.REL:0x057100, 308-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x68.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct {
    char pad[8];
    float *arr;
    char pad2[4];
    float len;
    unsigned short n;
} Curve;

extern int func_015990(Curve *c, float eps);
extern float func_0570C8(Curve *c, int i);
extern int func_015598(Vec3 *out, Curve *c, float *a, int *b, float *d, int z, float t);

int func_057100(Vec3 *out, float t, float a, int idx, Curve *c, float d)
{
    Vec3 v;
    float f0;
    float f1;
    int n;

    if (func_015990(c, 0.0625f) != 0) {
        if (c->len <= t) {
            t = t - c->len;
            idx = 0;
            a = 0.0f;
            d = t;
        } else if (t < 0.0f) {
            f0 = func_0570C8(c, c->n - 2);
            a = f0;
            n = c->n;
            f1 = f0 + c->arr[n - 1];
            idx = n - 2;
            t = t + f1;
            d = t - f0;
        }
    } else if (c->len <= t) {
        return 0;
    }
    if (func_015598(&v, c, &a, &idx, &d, 0, t) == 3)
        return 0;
    *out = v;
    return 1;
}
