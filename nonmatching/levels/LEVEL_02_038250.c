/* USA LEVEL_02.REL:0x038250, 224-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 1 differing words; first difference at 0x94.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
extern char D_00222B68[];
extern char D_0024A590[];
extern float sqrtf(float x);
extern void func_0E31B8(void *obj, void *range, int c, Vec3 dir);
extern void func_0E69C0(void *obj, Vec3 *v, void *tbl, float *f);

void func_038250(void *unused, void *obj, Vec3 *v)
{
    float f = 10.0f;
    float inv;
    float len2;
    Vec3 d;

    len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    inv = 1.0f / sqrtf(len2);
    d.x = inv * v->x;
    d.y = inv * v->y;
    d.z = inv * v->z;
    func_0E31B8(obj, D_00222B68, 0, d);
    func_0E69C0(obj, v, D_0024A590, &f);
}
