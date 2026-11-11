/* LEVEL_04:0x752C0 -- starts at a fixed position and jitters it along two direction vectors by random amounts within the given ranges. */
extern float D_002317D8[];
extern int rand(void);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void AddScaled(float *d, float *v, float s)
{
    d[0] = d[0] + v[0] * s;
    d[1] = d[1] + v[1] * s;
    d[2] = d[2] + v[2] * s;
}

static __inline__ float RandRange(float lo, float hi)
{
    float range;

    range = hi - lo;
    return lo + range * ((float)rand() * 4.656612873077393e-10f);
}

void func_0752C0(float *dst, char *src, float *p)
{
    Copy3(dst, D_002317D8);
    AddScaled(dst, (float *)(src + 0x24), RandRange(-p[6], p[6]));
    AddScaled(dst, *(float **)(src + 0x20), RandRange(p[5], p[4]));
}
