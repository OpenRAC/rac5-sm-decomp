/* LEVEL_01:0x126D38 -- rotates a vector by the upper 3x3 of a matrix without translation. */
static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void func_126D38(float *out, float *m, float *v, int flag)
{
    float r0 = Dot3(v, m);
    float r1 = Dot3(v, m + 3);
    float r2 = Dot3(v, m + 6);

    out[0] = r0;
    out[1] = r1;
    out[2] = r2;
}
