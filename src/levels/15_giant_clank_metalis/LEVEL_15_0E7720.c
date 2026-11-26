/* LEVEL_15:0x0E7720 -- fills two arrays of 2D direction/offset pairs from a float Park-Miller generator. */
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

void func_0E7720(float *out1, float *out2, int n, float lo1, float hi1, float lo2, float hi2)
{
    float scale1 = (hi1 - lo1) * 4.656612873077393e-10f;
    float scale2 = (hi2 - lo2) * 4.656612873077393e-10f;
    float state = (float)rand();
    int i;

    for (i = 0; i < n; i++) {
        float r1;
        float r2;
        float r3;
        float ang;
        float val;
        float sval;
        float rad;
        float c1;
        float s1;
        float c2;
        float s2;
        float *p = out1 + i * 2;
        float *q = out2 + i * 2;

        ang = state * 2.925836239953128e-09f + -3.1415927410125732f;
        r1 = RandStep(state);
        val = lo1 + scale1 * r1;
        r2 = RandStep(r1);
        r3 = RandStep(r2);
        sval = val * (1.0f - 2.0f * floorf(r2 * 4.656612873077393e-10f + 0.5f));
        rad = lo2 + scale2 * r3;
        state = r3;
        c1 = cosf(ang);
        s1 = sqrtf(1.0f - c1 * c1);
        if (ang < 0.0f)
            s1 = -s1;
        c2 = cosf(sval);
        s2 = sqrtf(1.0f - c2 * c2);
        if (sval < 0.0f)
            s2 = -s2;
        q[1] = s2;
        q[0] = c2;
        p[0] = c1 * rad;
        p[1] = s1 * rad;
    }
}
