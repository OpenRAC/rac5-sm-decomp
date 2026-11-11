/* LEVEL_24:0x1481C0 -- placement copy of LEVEL_01_151C70.c: normalizes a 2D direction into two fields. */
typedef struct S {
    short f0;
    char pad2[0x1A];
    float f1C;
    char pad20[4];
    float f24;
    char pad28[0x20];
    float v48[4];
    char pad58[0xC];
    float f64;
    float f68;
    float f6C;
} S;
extern void func_02C888(float *a, float *b);
extern float sqrtf(float x);

void func_1481C0(S *p)
{
    float y, x, d, inv;
    p->f0 = 1;
    func_02C888(p->v48, p->v48);
    x = p->f1C;
    y = p->f24;
    d = x * x + y * y;
    if (d < 2.384185791015625e-07f) {
        p->f64 = 0;
        p->f68 = 1.0f;
    } else {
        inv = 1.0f / sqrtf(d);
        p->f64 = x * inv;
        p->f68 = y * inv;
    }
    p->f6C = 0;
}
