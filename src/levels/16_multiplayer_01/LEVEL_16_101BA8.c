/* LEVEL_16:0x101BA8 -- placement copy of LEVEL_01_1217E8.c: fills four floats with the damped-oscillation terms for a decay, a frequency and a time: the exponential envelope divided by the frequency scales a cosine/sine pair. */
extern float expf(float);
extern float cosf(float);
extern float sqrtf(float);

void func_101BA8(float *out, float w, float k, float t)
{
    float h;
    float a;
    float e;
    float c;
    float s;
    float u;
    float v;

    h = k * -0.5f;
    a = w * t;
    e = expf(h * t) / w;
    c = cosf(a);
    s = sqrtf(1.0f - c * c);
    if (a < 0.0f) {
        s = -s;
    }
    u = w * c;
    v = h * s;
    out[0] = e * (u - v);
    out[3] = e * (u + v);
    out[1] = e * s;
    out[2] = e * -s * (h * h + w * w);
}
