/* LEVEL_23:0x1134F0 -- placement copy of LEVEL_01_122680.c: returns the real root of the cubic x^3 + a x^2 + b x + c. */
extern float sqrtf(float x);
extern float acosf(float x);
extern float cosf(float x);
extern float fabsf(float x);
extern float func_1133B0(float x);

float func_1134F0(float a, float b, float c)
{
    float d;
    float r;
    float q;
    float u;
    float t;
    float s;
    float x;
    float x2;
    float x3;
    float x4;

    q = (a * a - b * 3.0f) * 0.1111111119389534f;
    r = (a * (a * a - b * 4.5f) + c * 13.5f) * 0.03703703731298447f;
    d = q * q * q - r * r;
    if (2.384185791015625e-07f < d) {
        x = r / sqrtf(q * q * q);
        if (0.8500000238418579f < fabsf(x)) {
            t = cosf(acosf(x) / 3.0f);
        } else {
            x2 = x * x;
            x3 = x * x2;
            x4 = x2 * x2;
            t = x * 0.1666666716337204f + 0.8660253882408142f + x2 * -0.048112522810697556f + x3 * 0.02469135820865631f
                + x4 * -0.015592020936310291f + x2 * x3 * 0.010973936878144741f + x3 * x3 * -0.008257996290922165f
                + x3 * x4 * 0.006503073498606682f + x4 * x4 * -0.005292327143251896f;
        }
        s = sqrtf(q) * -2.0f * t;
    } else {
        u = (fabsf(d) - d) * 0.5f;
        s = func_1133B0(sqrtf(u) + fabsf(r));
        s = q / s + s;
        if (!(r < 0.0f))
            s = -s;
    }
    return s - a * 0.3333333432674408f;
}
