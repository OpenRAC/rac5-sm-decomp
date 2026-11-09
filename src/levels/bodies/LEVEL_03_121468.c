/* LEVEL_03:0x121468 -- placement copy of LEVEL_01_1230E8.c. */
extern float cosf(float x);

void f(float *out, float *in, float angle)
{
    float h = angle * 0.5f;
    float s = cosf(h);
    float c = __builtin_sqrtf(1.0f - s * s);

    if (h < 0.0f)
        c = -c;
    out[0] = in[0] * c;
    out[1] = in[1] * c;
    out[2] = in[2] * c;
    out[3] = s;
}
