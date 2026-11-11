/* LEVEL_03:0x014758 -- placement copy of LEVEL_19_013E48.c: returns a stored float, or computes a difference through a helper when a flag test passes. */
extern char D_0024FFC0[];
extern float D_0024A584;
extern int func_036C78(char *a);
extern void func_0202D8(float *a, float *b, float *c, int d, int e, float f);

float func_014758(void)
{
    char *s0;
    float *v;
    float a[8];
    float tmp[4];
    float lim;
    float t;

    s0 = D_0024FFC0;
    if ((unsigned char)func_036C78(s0)) {
        v = (float *)(s0 + 0x30);
        t = v[1] + 0.2f;
        tmp[0] = *(float *)(s0 + 0x30);
        tmp[1] = t;
        lim = 1000.0f;
        tmp[2] = v[2];
        func_0202D8(&lim, a, tmp, 8, 0, t - D_0024A584);
        return tmp[1] - lim;
    }
    return *(float *)(s0 + 0x2E0);
}
