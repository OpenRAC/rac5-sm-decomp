/* USA LEVEL_15.REL:0x0DB078, 240-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 9 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_0DADE0(unsigned char *buf, int a, int b, int c, int d, int e, int f, int g, int h);
extern void func_0EA938(Vec3 *out, float *matrix, Vec3 *in);
extern float sqrtf(float x);

int func_0DB078(int a, int b, int c, Vec3 *v, int d, int e, int f, float *m, int h)
{
    unsigned char buf[16];
    int r;
    float len, inv;

    r = func_0DADE0(buf, a, b, c, d, e, f, (int)m, h);
    if (r == 0) {
        return 0;
    }
    func_0EA938(v, m, (Vec3 *)(r + 8));
    len = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    inv = 1.0f / len;
    v->x = inv * v->x;
    v->y = inv * v->y;
    v->z = inv * v->z;
    return 1;
}
