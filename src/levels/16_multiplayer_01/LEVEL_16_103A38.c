/* LEVEL_16:0x103A38 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_103688(void *a0, float *a1, float v);
extern void func_1044F0(float *out, float *m, float *src);

void func_103A38(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_103688)(m, p);
    func_1044F0(dst, m, src);
}
