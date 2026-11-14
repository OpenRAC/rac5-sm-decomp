/* LEVEL_02:0x12A4A0 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_12A0F0(void *a0, float *a1, float v);
extern void func_12C1D8(float *out, float *m, float *src);

void func_12A4A0(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_12A0F0)(m, p);
    func_12C1D8(dst, m, src);
}
