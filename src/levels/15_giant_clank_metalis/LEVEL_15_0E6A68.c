/* LEVEL_15:0x0E6A68 -- writes a random vector into out: a random direction on the unit sphere (polar cosine from one rand() step, azimuth from a float Park-Miller step) scaled by sqrt of a value drawn between lo and hi. */

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);
extern float fabsf(float x);

static __inline__ float Step(float x)
{
    return fabsf((x - (float)(int)(x * 7.826379e-06f) * 127773.0f) * 16807.0f - (float)(int)(x * 7.826379e-06f) * 2836.0f);
}

void func_0E6A68(float lo, float hi, float *out)
{
    int r;
    float x;
    float u;
    float w;
    float ang;
    float c;
    float s;
    float rr;
    float v;
    float d;
    float a;
    float b;

    r = rand();
    x = (float)r;
    u = x * 9.313226e-10f + -1.0f;
    w = Step(x);
    ang = w * 2.9258362e-09f + -3.1415927f;
    v = lo + (hi - lo) * 4.656613e-10f * Step(w);
    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f) {
        s = -s;
    }
    rr = sqrtf(1.0f - u * u);
    b = c * rr;
    a = s * rr;
    d = sqrtf(v);
    out[0] = b * d;
    out[1] = a * d;
    out[2] = u * d;
}
