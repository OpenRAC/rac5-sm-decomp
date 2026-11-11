/* LEVEL_08:0x0151D0 -- placement copy of LEVEL_19_013E48.c: returns a stored float, or computes a difference through a helper when a flag test passes. */
extern char D_002843D0[];
extern float D_0027E984;
extern int func_03DB08(char *a);
extern void func_020EE8(float *a, float *b, float *c, int d, int e, float f);

float func_0151D0(void)
{
    char *s0;
    float *v;
    float a[8];
    float tmp[4];
    float lim;
    float t;

    s0 = D_002843D0;
    if ((unsigned char)func_03DB08(s0)) {
        v = (float *)(s0 + 0x30);
        t = v[1] + 0.2f;
        tmp[0] = *(float *)(s0 + 0x30);
        tmp[1] = t;
        lim = 1000.0f;
        tmp[2] = v[2];
        func_020EE8(&lim, a, tmp, 8, 0, t - D_0027E984);
        return tmp[1] - lim;
    }
    return *(float *)(s0 + 0x2E0);
}
