/* USA LEVEL_15.REL:0x1032F0, 248-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 24 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float a_00;
    float b_04;
    Vec3 v_08;
    float c_14;
    float d_18;
    float rate_1C;
    float len_20;
    Vec3 dir_24;
    float inv_30;
    float s_34;
} Rec;

extern float sqrtf(float x);
extern void func_0E5A10(float len, float c, float d, float *p, float *q);

void func_1032F0(Rec *r)
{
    Vec3 v;
    float p;
    float q;
    float len;

    r->rate_1C = (r->b_04 - r->a_00) * 4.656612873077393e-10f;
    v.x = r->v_08.x + r->v_08.x;
    v.y = r->v_08.y + r->v_08.y;
    v.z = r->v_08.z + r->v_08.z;
    len = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
    func_0E5A10(len, r->c_14, r->d_18, &p, &q);
    r->len_20 = len;
    r->dir_24 = v;
    r->inv_30 = 1.0f / p;
    r->s_34 = q;
}
