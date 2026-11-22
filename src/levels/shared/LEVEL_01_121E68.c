/* LEVEL_01:0x121E68 -- picks a random planar offset: a random direction (cosine and sine of an angle in -pi..pi) scaled by a random length between the two given bounds. */
extern int rand(void);
extern float cosf(float);
extern float sqrtf(float);
extern float fabsf(float x);

static inline float Step(float x)
{
    int hi;

    hi = (int)(x * 7.826379260222893e-06f);
    return fabsf((x - (float)hi * 127773.0f) * 16807.0f - (float)hi * 2836.0f);
}

void func_121E68(float lo, float hi, float *out)
{
    float x;
    float a;
    float c;
    float s;
    float r;

    x = (float)rand();
    a = x * (3.1415927f / 1073741824.0f) + (-3.1415927f);
    r = lo + (hi - lo) * (Step(x) * 4.656612873077393e-10f);
    c = cosf(a);
    s = sqrtf(1.0f - c * c);
    if (a < 0.0f) {
        s = -s;
    }
    out[0] = c * r;
    out[1] = s * r;
}
