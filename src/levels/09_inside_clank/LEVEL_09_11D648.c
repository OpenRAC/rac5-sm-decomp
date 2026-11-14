/* LEVEL_09:0x11D648 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_11D208(void *a0, float *a1, float v);
extern void func_11EF40(float *out, float *m, float *src);

void func_11D648(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_11D208)(m, p);
    func_11EF40(dst, m, src);
}
