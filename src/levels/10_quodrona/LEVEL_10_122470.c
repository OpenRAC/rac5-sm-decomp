/* LEVEL_10:0x122470 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_122030(void *a0, float *a1, float v);
extern void func_123D68(float *out, float *m, float *src);

void func_122470(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_122030)(m, p);
    func_123D68(dst, m, src);
}
