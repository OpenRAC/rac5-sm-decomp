/* LEVEL_01:0x124208 -- builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_123DC8(void *a0, float *a1, float v);
extern void func_125E78(float *out, float *m, float *src);

void func_124208(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_123DC8)(m, p);
    func_125E78(dst, m, src);
}
