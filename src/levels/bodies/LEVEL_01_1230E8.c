extern float func_000000(float x);

void f(float *out, float *in, float angle)
{
    float h = angle * 0.5f;
    float s = func_000000(h);
    float c = __builtin_sqrtf(1.0f - s * s);

    if (h < 0.0f)
        c = -c;
    out[0] = in[0] * c;
    out[1] = in[1] * c;
    out[2] = in[2] * c;
    out[3] = s;
}
