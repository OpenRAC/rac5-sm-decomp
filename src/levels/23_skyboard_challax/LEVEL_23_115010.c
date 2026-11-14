/* LEVEL_23:0x115010 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_114BD0(void *a0, float *a1, float v);
extern void func_116B28(float *out, float *m, float *src);

void func_115010(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_114BD0)(m, p);
    func_116B28(dst, m, src);
}
