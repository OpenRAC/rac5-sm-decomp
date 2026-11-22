/* USA LEVEL_01.REL:0x021D90, 368-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 6 differing words; first difference at 0x4C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_00206D9C;

extern void func_11EE78(float *a0, float *a1, int a2, int a3, int a4);
extern void func_11EC88(float *a0, float *a1, int a2, int a3, int a4);
extern int func_118478(float *a0, int a1, float *a2, float *a3, int a4, int a5, int a6, float *a7, float *a8,
                       float *a9, int a10, float f12, float f13, float f14);
extern int func_021B10(float *a0, int a1, float *a2, int a3, int a4, int a5, float f12, float *a6, float *a7, float *a8,
                       int a9, int a10, float f13, float f14);

int func_021D90(float *out, int a1, float *a2, int a3, int a4, int a5, int a6, int a7, float f1, float f2)
{
    float m0[4];
    float m1[4];
    float m2[4];
    float u;
    float t;
    int hit;

    t = f2;
    func_11EE78(m0, m1, a3, a4, a5);
    func_11EC88(m2, &u, a3, a4, a5);
    hit = func_118478(&t, a1, a2, a2 + 3, a3, a4, a5, m0, m1, m2, D_00206D9C, f1, t, u);
    if (func_021B10(&t, a1, a2, a3, a4, a5, f1, m0, m1, m2, a6, a7, t, u)) {
        hit = 1;
    }
    if (hit) {
        *out = t;
    }
    return hit;
}
