/* USA LEVEL_10.REL:0x1673D0, 364-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 23 differing words; first difference at 0x24.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x30];
    float x;
    float y;
    float z;
} Obj;

extern void func_019938(float *out);
extern int func_167540(Obj *o, float *dir, float len);
extern void func_165CA0(Obj *o, int kind);
extern float sqrtf(float x);

int func_1673D0(Obj *o)
{
    float v[3];
    float len2;
    float len;
    float *p;

    p = &o->x;
    func_019938(v);
    v[0] = v[0] - o->x;
    v[1] = v[1] - p[1];
    v[2] = v[2] - p[2];
    len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (len2 < 2.384185791015625e-7f) {
        len = 0.0f;
    } else {
        len = sqrtf(len2);
        v[0] *= 1.0f / len;
        v[1] *= 1.0f / len;
        v[2] *= 1.0f / len;
    }
    if (func_167540(o, v, len)) {
        return 1;
    }
    if (len > 5.0f) {
        func_165CA0(o, 7);
        return 1;
    }
    if (len < 2.0f) {
        func_165CA0(o, 6);
        return 1;
    }
    return 0;
}
