/* LEVEL_16:0x003340 -- placement copy of LEVEL_01_003748.c: computes an angle from a cosine and forwards it. */
typedef struct {
    char pad0[0x54];
    float f54;
    char pad58[4];
    float f5C;
    char pad60[0x6C - 0x60];
    float f6C;
    char pad70[4];
    float f74;
} M;
extern M *D_0019ACDC;
extern float cosf(float x);
extern float sqrtf(float x);
extern float atan2f(float y, float x);
extern void func_0031F8(int a, float c, float d, int b);

void func_003340(int a, float x, float y, int b)
{
    float c;
    float s;
    M *m;
    float u;
    float w;

    c = cosf(x);
    s = sqrtf(1.0f - c * c);
    if (x < 0.0f)
        s = -s;
    m = D_0019ACDC;
    u = c * m->f54 + s * m->f5C;
    w = c * m->f6C + s * m->f74;
    func_0031F8(a, atan2f(w, u), y, b);
}
