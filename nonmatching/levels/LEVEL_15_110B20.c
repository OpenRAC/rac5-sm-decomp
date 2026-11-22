/* USA LEVEL_15.REL:0x110B20, 260-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 8 differing words; first difference at 0xCC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char D_001702E0[];
extern float sqrtf(float x);
extern void func_0EABF0(float *dst, char *src, char *tbl);

void func_110B20(char *obj, float *p)
{
    float a[3];
    float d[3];
    float l;
    float inv;
    float *out;

    func_0EABF0(a, obj + 0xDC, D_001702E0);
    out = (float *)(obj + 0x238);
    d[0] = p[0] - a[0];
    d[1] = p[1] - a[1];
    d[2] = p[2] - a[2];
    l = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (l < 2.384185791015625e-7f)
        return;
    inv = 1.0f / sqrtf(l);
    out[0] = inv * d[0];
    out[1] = inv * d[1];
    out[2] = inv * d[2];
}
