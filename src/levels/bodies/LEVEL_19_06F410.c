/* LEVEL_19:0x06F410 -- placement copy of LEVEL_16_06F3A8.c: scales an angle by a half, takes a tangent and an aspect-dependent arc tangent, and doubles the result. */
extern int g_AspectRatioID;
extern float D_001A5A08;
extern float tanf(float f0);
extern float atan2f(float y, float x);

float func_06F410(float f12)
{
    float t;
    float r;
    float y;
    float res;

    t = tanf(f12 * 0.5f);
    r = 1.0f / t;
    if (g_AspectRatioID != 0) {
        y = D_001A5A08 * 3.5555555820465088f;
    } else {
        y = D_001A5A08 * 2.6666667461395264f;
    }
    res = atan2f(y, r);
    return res + res;
}
