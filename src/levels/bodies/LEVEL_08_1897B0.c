/* LEVEL_08:0x1897B0 -- passes a splatted float from the object to a helper, then copies a 3-float vector into the object. */

extern void func_13A0E0(void *a0, int a1, void *a2, float f0, float f1, float f2);

void func_1897B0(char *a0, void *a1, float *a2)
{
    float x;
    float *dst;

    x = *(float *)*(char **)(a0 + 0x58);
    func_13A0E0(a0, 0, a1, x, x, x);
    dst = (float *)(a0 + 0x30);
    *(float *)(a0 + 0x30) = a2[0];
    dst[1] = a2[1];
    dst[2] = a2[2];
}
