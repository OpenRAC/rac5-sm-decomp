/* USA LEVEL_15.REL:0x0E28C0, 300-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 23 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);

int func_0E28C0(float *out, float *p, float *d, float *c, float maxT, float r1, float r2)
{
    float rr = (r1 + r2) * (r1 + r2);
    float dx = p[0] - c[0];
    float dy = p[1] - c[1];
    float dz = p[2] - c[2];
    float b = d[0] * dx + d[1] * dy + d[2] * dz;
    float cc = dx * dx + dy * dy + dz * dz;
    float disc = b * b + rr - cc;
    float s, t;
    if (disc < 0.0f)
        return 0;
    s = sqrtf(disc);
    t = -s - b;
    if (maxT < t)
        return 0;
    if (t >= 0.0f) {
        *out = t;
        return 1;
    }
    if (!(b <= s))
        return 0;
    *out = 0.0f;
    return 1;
}
