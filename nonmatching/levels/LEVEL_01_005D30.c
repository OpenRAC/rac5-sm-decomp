/* USA LEVEL_01.REL:0x005D30, 216-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad --as: 22 differing words; first difference at
 * 0x74.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float func_01E928(float *p, float *q, int a, int b, int c, float f0, float f1, float f2);

float func_005D30(float *pos, float *dir, float total, float t, float lo, float hi)
{
    float p[3];
    float r;

    p[0] = pos[0] + dir[0] * t;
    p[1] = pos[1] + dir[1] * t;
    p[2] = pos[2] + dir[2] * t;
    r = func_01E928(p, dir, 0x1020, 0, 0x10, total - t, (hi - lo) * (t / total) + lo, hi) + t;
    if (r < total - 0.009999999776482582f) {
        return r - 0.10000000149011612f;
    }
    return total;
}
