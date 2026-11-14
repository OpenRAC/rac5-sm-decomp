/* LEVEL_20:0x0DBF70 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_0DBD18(void *a0, float *a1, float v);
extern void func_0DC938(float *out, float *m, float *src);

void func_0DBF70(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_0DBD18)(m, p);
    func_0DC938(dst, m, src);
}
