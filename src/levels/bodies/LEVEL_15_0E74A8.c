/* LEVEL_15:0x0E74A8 -- fills two arrays of (cos, sin) pairs from a float Park-Miller generator. */
extern int rand(void);
extern float floorf(float);
extern float cosf(float);
extern float sqrtf(float);
extern float fabsf(float);

static inline float RandStep(float x)
{
    float q = (float)(int)(x * 7.826379260222893e-06f);

    return fabsf((x - q * 127773.0f) * 16807.0f - q * 2836.0f);
}

void func_0E74A8(float *out1, float *out2, int n, float lo, float hi)
{
    float scale = (hi - lo) * 4.656612873077393e-10f;
    float state = (float)rand();


    int i;

    for (i = 0; i < n; i++) {
        float r1;
        float r2;
        float ang;
        float val;
        float sval;
        float c;
        float s;
        float *p = out1 + i * 2;
        float *q = out2 + i * 2;

        ang = state * 2.925836239953128e-09f + -3.1415927410125732f;
        r1 = RandStep(state);
        val = lo + scale * r1;
        r2 = RandStep(r1);
        sval = val * (1.0f - 2.0f * floorf(r2 * 4.656612873077393e-10f + 0.5f));
        state = r2;
        c = cosf(ang);
        s = sqrtf(1.0f - c * c);
        if (ang < 0.0f)
            s = -s;
        p[0] = c;
        p[1] = s;
        c = cosf(sval);
        s = sqrtf(1.0f - c * c);
        if (sval < 0.0f)
            s = -s;
        q[1] = s;
        q[0] = c;
    }
}
