/* LEVEL_01:0x014858 -- placement copy of LEVEL_19_013E48.c: returns a stored float, or computes a difference through a helper when a flag test passes. */
extern char D_00235140[];
extern float D_0022F704;
extern int func_038A38(char *a);
extern void func_020570(float *a, float *b, float *c, int d, int e, float f);

float func_014858(void)
{
    char *s0;
    float *v;
    float a[8];
    float tmp[4];
    float lim;
    float t;

    s0 = D_00235140;
    if ((unsigned char)func_038A38(s0)) {
        v = (float *)(s0 + 0x30);
        t = v[1] + 0.2f;
        tmp[0] = *(float *)(s0 + 0x30);
        tmp[1] = t;
        lim = 1000.0f;
        tmp[2] = v[2];
        func_020570(&lim, a, tmp, 8, 0, t - D_0022F704);
        return tmp[1] - lim;
    }
    return *(float *)(s0 + 0x2E0);
}
