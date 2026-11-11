/* LEVEL_10:0x147048 -- on a reset request, initializes global state and a tuning table. */
typedef struct { int a, b, c; float d; } Head;
typedef struct {
    float f00, f04, f08, f0C, f10, f14, f18, f1C, f20;
    int i24;
    unsigned char b28;
    float f2C, f30, f34, f38, f3C, f40;
    int i44;
    unsigned char b48, b49;
    float f4C, f50, f54, f58;
    int i5C;
    int i60;
    float f64, f68, f6C, f70, f74;
    int i78;
    int i7C;
    int i80;
    float f84, f88, f8C, f90;
    unsigned char b94;
    int i98;
    int i9C;
} Cfg;

extern Head D_0039ADE8;
extern Cfg D_0039ADF8;
extern void *memset(void *p, int v, unsigned n);
extern float powf(float x, float y);

void func_147048(int a, int b)
{
    if (b == 0xFFFF && a) {
        Cfg c;
        Cfg *dst = &D_0039ADF8;
        D_0039ADE8.a = 0;
        D_0039ADE8.b = 0;
        D_0039ADE8.c = 0;
        D_0039ADE8.d = 1.0f;
        memset(&c, 0, sizeof(c));
        c.f00 = 0.009999999776482582f;
        c.f04 = 0.20000001788139343f;
        c.f08 = 0.20000000298023224f;
        c.f0C = 0.5f;
        c.f10 = 0.004999999888241291f;
        c.f14 = powf(0.9700000286102295f, 1.0f);
        c.f18 = 20.000398635864258f;
        c.f1C = 30.00059700012207f;
        c.f20 = 6.000119209289551f;
        c.i24 = 1;
        c.b28 = 1;
        c.f2C = 0.5f;
        c.f30 = 0.699999988079071f;
        c.f34 = 7.500149250030518f;
        c.f38 = 1.5000298023223877f;
        c.f3C = 0.15000000596046448f;
        c.f40 = 0.004999999888241291f;
        c.i44 = 3;
        c.b48 = 1;
        c.b49 = 1;
        c.f4C = 0.20000001788139343f;
        c.f50 = 1.0f;
        c.f54 = 0.20000000298023224f;
        c.f58 = 0.5f;
        c.i5C = 3;
        c.f64 = 0.019999999552965164f;
        c.f68 = 0.07999999821186066f;
        c.f6C = 0.30000001192092896f;
        c.f70 = 30.00059700012207f;
        c.f74 = 20.000398635864258f;
        c.i78 = 0x80606060;
        c.i7C = 6;
        c.f84 = 0.699999988079071f;
        c.f88 = 0.4000000059604645f;
        c.f8C = 5.0000996589660645f;
        c.f90 = 2.5000498294830322f;
        c.b94 = 1;
        c.i98 = 10;
        *dst = c;
    }
}
