/* LEVEL_15:0x0E9DF0 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_0E9A40(void *a0, float *a1, float v);
extern void func_0EAA88(float *out, float *m, float *src);

void func_0E9DF0(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_0E9A40)(m, p);
    func_0EAA88(dst, m, src);
}
