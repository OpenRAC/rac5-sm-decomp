/* LEVEL_07:0x127588 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_127148(void *a0, float *a1, float v);
extern void func_128E80(float *out, float *m, float *src);

void func_127588(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_127148)(m, p);
    func_128E80(dst, m, src);
}
