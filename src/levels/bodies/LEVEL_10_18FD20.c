/* LEVEL_10:0x18FD20 -- placement copy of LEVEL_08_19F780.c: on a reset request, initializes global state and a tuning table. */
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    float f00, f04, f08, f0C, f10, f14, f18, f1C, f20, f24, f28, f2C;
    float f30, f34, f38, f3C, f40, f44, f48, f4C;
    int i50;
    float f54, f58, f5C, f60, f64;
    int i68, i6C;
    float f70, f74, f78;
} Cfg;

extern Head D_003A0090;
extern Cfg D_003A00A0;
extern void *memset(void *p, int v, unsigned n);
extern float powf(float x, float y);

void func_18FD20(int a, int b)
{
    if (b == 0xFFFF && a) {
        Cfg c;
        Cfg *dst = &D_003A00A0;
        D_003A0090.a = 0;
        D_003A0090.b = 0;
        D_003A0090.c = 0;
        D_003A0090.d = 1.0f;
        memset(&c, 0, sizeof(c));
        c.f00 = 1800.0f;
        c.f04 = 60.0f;
        c.f08 = 0.33333334f;
        c.f0C = 0.5f;
        c.f14 = 0.05235988274216652f;
        c.f18 = 0.41887906193733215f;
        c.f1C = 15.0f;
        c.f20 = -0.0011111112544313073f;
        c.f24 = 30.0f;
        c.f28 = -0.02222222462296486f;
        c.f2C = powf(0.6f, 1.0f);
        c.f30 = 0.8f;
        c.f34 = 0.7f;
        c.f38 = 0.5f;
        c.f3C = 0.6f;
        c.f40 = 0.0066666672937572f;
        c.f44 = 0.99f;
        c.f48 = 0.95f;
        c.f4C = 4.5f;
        c.i50 = 2;
        c.f54 = 3.0f;
        c.f5C = 0.050999999046325684f;
        c.f60 = 10.0f;
        c.f64 = 30.0f;
        c.i68 = 2921;
        c.i6C = 512;
        *dst = c;
    }
}
