/* LEVEL_05:0x11FED0 -- placement copy of LEVEL_01_124208.c: builds a 4x4 matrix from the point and transforms the source vector by it into the destination. */
extern void func_11FA90(void *a0, float *a1, float v);
extern void func_121920(float *out, float *m, float *src);

void func_11FED0(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))func_11FA90)(m, p);
    func_121920(dst, m, src);
}
