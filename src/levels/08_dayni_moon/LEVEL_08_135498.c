/* LEVEL_08:0x135498 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_135058(void *a0, float *a1, float v);
extern void func_137108(float *out, float *m, float *src);

void func_135498(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_135058)(m, p);
    func_137108(dst, m, src);
}
