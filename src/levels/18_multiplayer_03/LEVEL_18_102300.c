/* LEVEL_18:0x102300 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_101EC0(void *a0, float *a1, float v);
extern void func_102DB8(float *out, float *m, float *src);

void func_102300(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_101EC0)(m, p);
    func_102DB8(dst, m, src);
}
