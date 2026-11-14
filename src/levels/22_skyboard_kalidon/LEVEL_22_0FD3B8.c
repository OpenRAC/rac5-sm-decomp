/* LEVEL_22:0x0FD3B8 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_0FCF78(void *a0, float *a1, float v);
extern void func_0FE030(float *out, float *m, float *src);

void func_0FD3B8(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_0FCF78)(m, p);
    func_0FE030(dst, m, src);
}
