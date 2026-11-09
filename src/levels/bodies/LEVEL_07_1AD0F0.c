/* LEVEL_07:0x1AD0F0 -- eases the stored height toward its floor, and once settled and facing straight up, rebuilds the object's basis vectors. */

extern float D_0022CB88[];
extern float fabsf(float x);

static __inline__ int Near_1AD0F0(float a, float b, float eps)
{
    return fabsf(a - b) <= eps;
}

static __inline__ void Copy3_1AD0F0(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Cross3_1AD0F0(float *o, float *a, float *b)
{
    o[0] = a[1] * b[2] - a[2] * b[1];
    o[1] = a[2] * b[0] - a[0] * b[2];
    o[2] = a[0] * b[1] - a[1] * b[0];
}

int func_1AD0F0(char *a0, char *a1)
{
    char *st;
    float up;
    float step;

    st = *(char **)(a0 + 0x58);
    up = fabsf(*(float *)(a1 + 0x14));
    step = 0.01f;
    if (up > 0.9f) {
        step = 0.049999997f;
    }
    *(float *)(st + 0x18) = *(float *)(st + 0x18) - step;
    if (*(float *)(st + 0x18) < 0.09000001f) {
        *(float *)(st + 0x18) = 0.09000001f;
    }
    if ((unsigned char)Near_1AD0F0(*(float *)(st + 0x18), 0.09000001f, 1.0e-5f) && (unsigned char)Near_1AD0F0(up, 1.0f, 0.01f)) {
        Copy3_1AD0F0((float *)(a1 + 0x10), D_0022CB88);
        Cross3_1AD0F0((float *)a1, D_0022CB88, (float *)(a1 + 0x20));
        return 1;
    }
    return 0;
}
