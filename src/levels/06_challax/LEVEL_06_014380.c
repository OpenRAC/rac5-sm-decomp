/* LEVEL_06:0x014380 -- placement copy of LEVEL_19_013E48.c: returns a stored float, or computes a difference through a helper when a flag test passes. */
extern char D_00221EC0[];
extern float D_0021C484;
extern int func_035488(char *a);
extern void func_01ED70(float *a, float *b, float *c, int d, int e, float f);

float func_014380(void)
{
    char *s0;
    float *v;
    float a[8];
    float tmp[4];
    float lim;
    float t;

    s0 = D_00221EC0;
    if ((unsigned char)func_035488(s0)) {
        v = (float *)(s0 + 0x30);
        t = v[1] + 0.2f;
        tmp[0] = *(float *)(s0 + 0x30);
        tmp[1] = t;
        lim = 1000.0f;
        tmp[2] = v[2];
        func_01ED70(&lim, a, tmp, 8, 0, t - D_0021C484);
        return tmp[1] - lim;
    }
    return *(float *)(s0 + 0x2E0);
}
