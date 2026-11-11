/* LEVEL_08:0x1B6DD8 -- placement copy of LEVEL_08_1B5E08.c: on the 0xFFFF event resets one record and loads a default parameter block. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} R;
typedef struct {
    float f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24;
    int i28;
    float f2C, f30;
    unsigned char c34;
} P;
extern R D_003E7FA8;
extern P D_003E7FB8;
extern float powf(float x, float y);
extern void *memset(void *s, int c, unsigned n);

void func_1B6DD8(int a, int b)
{
    P p;
    P *dst;

    if (b == 0xFFFF && a != 0) {
        D_003E7FA8.a = 0;
        D_003E7FA8.b = 0;
        D_003E7FA8.c = 0;
        D_003E7FA8.d = 1.0f;
        memset(&p, 0, sizeof(P));
        dst = &D_003E7FB8;
        p.f0 = 0.4f;
        p.f4 = 0.6f;
        p.f8 = 0.8f;
        p.fC = 1.2f;
        p.f10 = 30.0f;
        p.f14 = 37.5f;
        p.f18 = 0.200000018f;
        p.f1C = 0.3f;
        p.f20 = 0.0133333355f;
        p.f24 = 0.104719765f;
        p.i28 = 0x7F7F7F7F;
        p.f2C = powf(0.85f, 1.0f);
        p.f30 = powf(0.87f, 1.0f);
        p.c34 = 1;
        *dst = p;
    }
}
