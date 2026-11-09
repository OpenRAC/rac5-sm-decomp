/* LEVEL_01:0x10C220 -- fills a float triple with random values in [-v, v) per component. */
extern int rand(void);

static inline float RandRange(float lo, float hi)
{
    float range = hi - lo;
    return lo + range * ((float)rand() * 4.656612873077393e-10f);
}

void func_10C220(float *out, float *in)
{
    out[0] = RandRange(-in[0], in[0]);
    out[1] = RandRange(-in[1], in[1]);
    out[2] = RandRange(-in[2], in[2]);
}
