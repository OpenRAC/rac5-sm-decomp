/* LEVEL_15:0x01BED8 -- placement copy of LEVEL_01_0214B8.c: casts a probe along the segment between two points and reports the scaled hit distance. */

extern float sqrtf(float x);
extern int func_01BBD0(float *hit, float *out, float *p, float *dir, int a4, int a5, int a6, float f12);

static __inline__ void sub3_0214B8(float *o, float *a, float *b)
{
    o[0] = a[0] - b[0];
    o[1] = a[1] - b[1];
    o[2] = a[2] - b[2];
}

int func_01BED8(float *a0, float *a1, float *a2)
{
    float d[3];
    float n[3];
    float tmp[8];
    float hit[4];
    float len2;
    float len;
    float inv;

    sub3_0214B8(d, a0 + 3, a0);
    len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (len2 < 1.00000011e-06f) {
        return 0;
    }
    len = sqrtf(len2);
    inv = 1.0f / len;
    n[0] = inv * d[0];
    n[1] = inv * d[1];
    n[2] = inv * d[2];
    if (func_01BBD0(hit, a2 != 0 ? a2 : tmp, a0, n, 0x28, 0, 0, len) == 0) {
        return 0;
    }
    if (a1 != 0) {
        *a1 = hit[0] * inv;
    }
    return 1;
}
