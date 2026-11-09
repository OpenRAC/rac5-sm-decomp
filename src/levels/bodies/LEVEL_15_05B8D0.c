/* LEVEL_15:0x05B8D0 -- placement copy of LEVEL_01_06A798.c: integrates a position with a flag-dependent scale of one vector and a fixed pull of another, then runs four update helpers. */

extern char D_0017D2C0[];

extern int func_02E170(void *p);
extern void func_05AAA8(void *o);
extern void func_05ACD8(void *o);
extern void func_05AB78(void *o);
extern void func_05B100(void *o, int a);

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

void func_05B8D0(char *o, int arg)
{
    float k;

    if ((func_02E170(D_0017D2C0) & 0xFF) != 0) {
        k = 0.6f;
    } else {
        k = 1.1f;
    }
    MulAdd3((float *)(o + 0xF20), (float *)(o + 0x30), (float *)(o + 0xE64), k);
    if ((func_02E170(D_0017D2C0) & 0xFF) != 0) {
        AddScaled3((float *)(o + 0xF20), (float *)(o + 0x20), -0.3f);
    }
    func_05AAA8(o);
    func_05ACD8(o);
    func_05AB78(o);
    func_05B100(o, arg);
}
