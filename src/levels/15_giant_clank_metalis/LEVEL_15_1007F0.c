/* LEVEL_15:0x1007F0 -- writes the unit direction from a looked-up point to a target, if they are apart. */
extern char D_0016FA78[];
extern float sqrtf(float x);
extern void func_0EABF0(float *dst, char *src, char *tbl);

void func_1007F0(float *out, char *src, float *p)
{
    float a[3];
    float d[3];
    float l;
    float inv;

    func_0EABF0(a, src + 0xC0, D_0016FA78);
    d[0] = p[0] - a[0];
    d[1] = p[1] - a[1];
    d[2] = p[2] - a[2];
    l = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (l < 2.384185791015625e-7f)
        return;
    inv = 1.0f / sqrtf(l);
    out[0] = inv * d[0];
    out[1] = inv * d[1];
    out[2] = inv * d[2];
}
