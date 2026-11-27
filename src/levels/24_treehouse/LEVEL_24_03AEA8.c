/* LEVEL_24:0x03AEA8 -- placement copy of LEVEL_01_041EC0.c: advances the blend phase, builds the unit direction from a position to a stored point and updates the stored direction. */
extern float D_00204AB0;
extern float D_00204A60[3];
extern float D_00204A90[3];
extern char D_00204A30[];
extern char D_00204A70[];
extern float sqrtf(float value);
extern void func_11F008(float t, float *out, char *a, float *dir);
extern void func_11CC10(char *a, char *b, float *c, char *d, char *e);

static __inline__ float *Min(float *a, float *b)
{
    if (*a < *b) {
        return a;
    }
    return b;
}

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ void NormOr(float *out, float *v, float *fallback)
{
    float len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (len2 < 2.3841858e-07f) {
        out[0] = fallback[0];
        out[1] = fallback[1];
        out[2] = fallback[2];
    } else {
        float k = 1.0f / sqrtf(len2);
        out[0] = k * v[0];
        out[1] = k * v[1];
        out[2] = k * v[2];
    }
}

void func_03AEA8(char *obj)
{
    float d[3];
    float dir[3];
    float out[3];
    float a;
    float b;
    float t;
    float *dst;

    a = D_00204AB0 + 0.06666667f;
    b = 1.0f;
    t = *Min(&a, &b);
    D_00204AB0 = t;
    Sub3(d, (float *)(obj + 0x30), D_00204A60);
    NormOr(dir, d, D_00204A90);
    func_11F008(t, out, D_00204A30 + 0x20, dir);
    func_11CC10(D_00204A70, D_00204A70 + 0x10, out, D_00204A30 + 0x10, D_00204A30);
    dst = (float *)(D_00204A70 + 0x20);
    dst[0] = out[0];
    dst[1] = out[1];
    dst[2] = out[2];
}
