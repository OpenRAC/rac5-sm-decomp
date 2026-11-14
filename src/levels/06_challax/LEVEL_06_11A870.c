/* LEVEL_06:0x11A870 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_11A430(void *a0, float *a1, float v);
extern void func_11C388(float *out, float *m, float *src);

void func_11A870(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_11A430)(m, p);
    func_11C388(dst, m, src);
}
