/* LEVEL_01:0x001BF0 -- builds a direction triple from two angles and two weights, taking sines from cosines. */

extern float floorf(float x);
extern float cosf(float x);
extern float sqrtf(float x);

void func_001BF0(float *out, float a, float b, float c, float d)
{
    float c1;
    float s1;
    float c2;
    float s2;
    float t0;
    float t1;

    a = a - floorf(a * 0.15915494f + 0.5f) * 6.2831855f;
    c1 = cosf(a);
    s1 = sqrtf(1.0f - c1 * c1);
    if (a < 0.0f) {
        s1 = -s1;
    }
    c2 = cosf(b);
    s2 = sqrtf(1.0f - c2 * c2);
    if (b < 0.0f) {
        s2 = -s2;
    }
    t0 = d * s2 + c * c2;
    t1 = d * c2 - c * s2;
    out[0] = t0 * c1;
    out[1] = t1;
    out[2] = t0 * s1;
}
