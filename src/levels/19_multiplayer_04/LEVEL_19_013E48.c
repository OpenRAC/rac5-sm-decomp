/* LEVEL_19:0x013E48 -- returns a stored float, or computes a difference through a helper when a flag test passes. */
extern char D_001E4210[];
extern float D_001DE584;
extern int func_034150(char *a);
extern void func_01DDE0(float *a, float *b, float *c, int d, int e, float f);

float func_013E48(void)
{
    char *s0;
    float *v;
    float a[8];
    float tmp[4];
    float lim;
    float t;

    s0 = D_001E4210;
    if ((unsigned char)func_034150(s0)) {
        v = (float *)(s0 + 0x30);
        t = v[1] + 0.2f;
        tmp[0] = *(float *)(s0 + 0x30);
        tmp[1] = t;
        lim = 1000.0f;
        tmp[2] = v[2];
        func_01DDE0(&lim, a, tmp, 8, 0, t - D_001DE584);
        return tmp[1] - lim;
    }
    return *(float *)(s0 + 0x2E0);
}
