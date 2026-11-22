/* USA LEVEL_01.REL:0x094EA0, 300-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 26 differing words; first difference at 0x9C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float ceilf(float x);

void func_094EA0(float f, float *lo, float *hi, float *inv, int *cnt, float *c, float *d, float *h)
{
    float hy;
    float dx;
    float dz;

    hy = f * 0.5f;
    lo[0] = c[0] - h[0] * 0.5f;
    lo[1] = c[1] - hy;
    lo[2] = c[2] - h[1] * 0.5f;
    hi[0] = d[0] + h[0] * 0.5f;
    hi[1] = d[1] + hy;
    hi[2] = d[2] + h[1] * 0.5f;
    inv[0] = 1.0f / h[0];
    inv[1] = 1.0f / h[1];
    dx = hi[0] - lo[0];
    dz = hi[2] - lo[2];
    cnt[0] = (int)ceilf(dx * inv[0]);
    if (cnt[0] <= 0) {
        cnt[0] = 1;
    }
    cnt[1] = (int)ceilf(dz * inv[1]);
    if (cnt[1] <= 0) {
        cnt[1] = 1;
    }
}
