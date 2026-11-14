/* USA LEVEL_01.REL:0x07C0B8, 140-byte candidate (14 November 2026).
 * Measured gnu-ee-trial-divpad: 8 differing words; first difference at 0x70.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int g_AspectRatioID;
extern float g_AspectRatioMult;
extern float tanf(float f0);
extern float atan2f(float y, float x);

float func_07C0B8(float f12)
{
    float t;
    float r;
    float y;
    float res;

    t = tanf(f12 * 0.5f);
    r = 1.0f / t;
    if (g_AspectRatioID != 0) {
        y = g_AspectRatioMult * 16.0f / 9.0f;
    } else {
        y = g_AspectRatioMult * 4.0f / 3.0f;
    }
    res = atan2f(y, r);
    return res + res;
}
