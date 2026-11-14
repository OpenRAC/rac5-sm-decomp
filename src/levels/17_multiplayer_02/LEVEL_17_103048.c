/* LEVEL_17:0x103048 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_102C98(void *a0, float *a1, float v);
extern void func_103B00(float *out, float *m, float *src);

void func_103048(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_102C98)(m, p);
    func_103B00(dst, m, src);
}
