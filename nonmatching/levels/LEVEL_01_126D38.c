/* USA LEVEL_01.REL:0x126D38 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_001E20; and is defined
 * unlike the declaration in the accepted caller LEVEL_01_002208.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void func_126D38(float *out, float *m, float *v)
{
    float r0 = Dot3(v, m);
    float r1 = Dot3(v, m + 3);
    float r2 = Dot3(v, m + 6);

    out[0] = r0;
    out[1] = r1;
    out[2] = r2;
}
