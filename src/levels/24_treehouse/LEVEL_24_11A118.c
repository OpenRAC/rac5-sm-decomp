/* LEVEL_24:0x11A118 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_119CD8(void *a0, float *a1, float v);
extern void func_11BA10(float *out, float *m, float *src);

void func_11A118(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_119CD8)(m, p);
    func_11BA10(dst, m, src);
}
