/* LEVEL_04:0x06C200 -- placement copy of LEVEL_01_06A798.c: integrates a position with a flag-dependent scale of one vector and a fixed pull of another, then runs four update helpers. */

extern char D_0024F950[];

extern int func_03A080(void *p);
extern void func_06B3D8(void *o);
extern void func_06B608(void *o);
extern void func_06B4A8(void *o);
extern void func_06BA30(void *o, int a);

static __inline__ void MulAdd3(float *dst, float *a, float *b, float k)
{
    dst[0] = a[0] + b[0] * k;
    dst[1] = a[1] + b[1] * k;
    dst[2] = a[2] + b[2] * k;
}

static __inline__ void AddScaled3(float *dst, float *b, float k)
{
    dst[0] = dst[0] + b[0] * k;
    dst[1] = dst[1] + b[1] * k;
    dst[2] = dst[2] + b[2] * k;
}

void func_06C200(char *o, int arg)
{
    float k;

    if ((func_03A080(D_0024F950) & 0xFF) != 0) {
        k = 0.6f;
    } else {
        k = 1.1f;
    }
    MulAdd3((float *)(o + 0xF20), (float *)(o + 0x30), (float *)(o + 0xE64), k);
    if ((func_03A080(D_0024F950) & 0xFF) != 0) {
        AddScaled3((float *)(o + 0xF20), (float *)(o + 0x20), -0.3f);
    }
    func_06B3D8(o);
    func_06B608(o);
    func_06B4A8(o);
    func_06BA30(o, arg);
}
