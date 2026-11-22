/* USA LEVEL_01.REL:0x11B618, 288-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float fabsf(float x);

void func_11B618(float *lo, float *hi, float *c, float *s, float *x, float *y, float *z)
{
    float cx = c[0];
    float cy = c[1];
    float cz = c[2];
    float ex = fabsf(x[0]) * s[0] + fabsf(y[0]) * s[1];
    float ey = fabsf(x[1]) * s[0] + fabsf(y[1]) * s[1];
    float ez = fabsf(x[2]) * s[0] + fabsf(y[2]) * s[1];
    float zx = z[0] * s[2];
    float zy = z[1] * s[2];
    float zz = z[2] * s[2];
    float lx = zx - ex;
    float ly = zy - ey;
    float lz = zz - ez;
    float hx = zx + ex;
    float hy = zy + ey;
    float hz = zz + ez;

    lo[0] = cx + (lx - fabsf(lx)) * 0.5f;
    lo[1] = cy + (ly - fabsf(ly)) * 0.5f;
    lo[2] = cz + (lz - fabsf(lz)) * 0.5f;
    hi[0] = cx + (hx + fabsf(hx)) * 0.5f;
    hi[1] = cy + (hy + fabsf(hy)) * 0.5f;
    hi[2] = cz + (hz + fabsf(hz)) * 0.5f;
}
