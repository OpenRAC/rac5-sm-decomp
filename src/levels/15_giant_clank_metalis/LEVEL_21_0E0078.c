/* LEVEL_21:0x0E0078 -- placement copy of LEVEL_01_11C300.c: builds three helper vectors, calls the solver and, on success, writes back the normalized result. */
extern float sqrtf(float x);
extern int func_0DF890(void *a0, float *out, void *a2, float *u, void *a3, float *x,
                       float *t1, float *t2, float *t3, float f12, float f13);

int func_0E0078(void *a0, float *out, void *a2, void *a3, float *p4, float *p5,
                float *p6, float *p7, float f12, float scale)
{
    float u[3];
    float x[3];
    float w[3];
    float inv;
    float *pu = u;

    pu[0] = -p5[1];
    pu[1] = -p6[1];
    pu[2] = -p7[1];
    x[0] = scale * p4[0];
    x[1] = scale * p4[1];
    x[2] = scale * p4[2];
    if (func_0DF890(a0, w, a2, pu, a3, x, p5, p6, p7, f12, scale) == 0)
        return 0;
    inv = 1.0f / sqrtf(scale);
    out[0] = inv * w[0];
    out[1] = inv * w[1];
    out[2] = inv * w[2];
    return 1;
}
