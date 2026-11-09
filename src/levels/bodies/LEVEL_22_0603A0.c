/* LEVEL_22:0x0603A0 -- placement copy of LEVEL_01_06A798.c: integrates a position with a flag-dependent scale of one vector and a fixed pull of another, then runs four update helpers. */

extern char D_00186D40[];

extern int func_02E988(void *p);
extern void func_05F578(void *o);
extern void func_05F7A8(void *o);
extern void func_05F648(void *o);
extern void func_05FBD0(void *o, int a);

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

void func_0603A0(char *o, int arg)
{
    float k;

    if ((func_02E988(D_00186D40) & 0xFF) != 0) {
        k = 0.6f;
    } else {
        k = 1.1f;
    }
    MulAdd3((float *)(o + 0xF20), (float *)(o + 0x30), (float *)(o + 0xE64), k);
    if ((func_02E988(D_00186D40) & 0xFF) != 0) {
        AddScaled3((float *)(o + 0xF20), (float *)(o + 0x20), -0.3f);
    }
    func_05F578(o);
    func_05F7A8(o);
    func_05F648(o);
    func_05FBD0(o, arg);
}
