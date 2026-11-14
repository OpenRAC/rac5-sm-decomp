/* LEVEL_03:0x122548 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_122108(void *a0, float *a1, float v);
extern void func_124060(float *out, float *m, float *src);

void func_122548(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_122108)(m, p);
    func_124060(dst, m, src);
}
