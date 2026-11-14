/* LEVEL_19:0x103970 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_103530(void *a0, float *a1, float v);
extern void func_104C00(float *out, float *m, float *src);

void func_103970(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_103530)(m, p);
    func_104C00(dst, m, src);
}
