/* LEVEL_04:0x130070 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_12FC30(void *a0, float *a1, float v);
extern void func_132058(float *out, float *m, float *src);

void func_130070(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_12FC30)(m, p);
    func_132058(dst, m, src);
}
