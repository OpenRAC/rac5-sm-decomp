/* USA LEVEL_01.REL:0x126DC8 (21 November 2026): exact linked bytes under gnu-
 * ee-trial-divpad, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_154620.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
static inline void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static inline float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void func_126DC8(float *out, float *m, float *b)
{
    float d[3];
    float x;
    float y;
    float z;
    float inv;

    Sub3(d, b, m + 12);
    inv = 1.0f / Dot3(m, m);
    x = Dot3(d, m) * inv;
    y = Dot3(d, m + 4) * inv;
    z = Dot3(d, m + 8) * inv;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
