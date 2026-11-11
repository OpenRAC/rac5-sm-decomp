/* LEVEL_15:0x0EB6D0 -- projects a 3-vector onto three axis rows, normalised by the squared length. */

void func_0EB6D0(float *out, float *a, float *w)
{
    float *r1;
    float *r2;
    float inv;
    float n2;
    float t0;
    float t1;
    float t2;

    r1 = a + 3;
    r2 = a + 6;
    n2 = a[0] * a[0] + a[1] * a[1] + a[2] * a[2];
    inv = 1.0f / n2;
    t0 = (w[0] * a[0] + w[1] * a[1] + w[2] * a[2]) * inv;
    t1 = (w[0] * r1[0] + w[1] * r1[1] + w[2] * r1[2]) * inv;
    t2 = (w[0] * r2[0] + w[1] * r2[1] + w[2] * r2[2]) * inv;
    out[0] = t0;
    out[1] = t1;
    out[2] = t2;
}
