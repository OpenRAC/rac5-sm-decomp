/* LEVEL_07:0x19A380 -- installs the default effect configuration into the global config block. */
typedef struct {
    float f00, f04, f08, f0C, f10, f14, f18, f1C, f20;
    int w24;
    unsigned char b28;
    float f2C, f30, f34, f38, f3C, f40;
    int w44;
    unsigned char b48, b49;
    float f4C, f50, f54, f58;
    int w5C;
    unsigned char b60;
    float f64, f68, f6C, f70, f74;
    int w78, w7C;
    unsigned char b80;
    float f84, f88, f8C, f90, f94;
    int w98, w9C;
} Cfg;

typedef struct {
    int w0, w4, w8;
    float wC;
} Hdr;

extern Hdr D_003AC570;
extern Cfg D_003AC580;
extern float powf(float x, float y);
extern void *memset(void *, int, unsigned int);

void func_19A380(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Cfg c;
        Cfg *dst = &D_003AC580;

        D_003AC570.w0 = 0;
        D_003AC570.w4 = 0;
        D_003AC570.w8 = 0;
        D_003AC570.wC = 1.0f;
        memset(&c, 0, sizeof(Cfg));
        c.f00 = 0.009999999776482582f;
        c.f04 = 0.20000001788139343f;
        c.f08 = 0.30000001192092896f;
        c.f0C = 0.6000000238418579f;
        c.f10 = 0.004999999888241291f;
        c.f14 = powf(0.9700000286102295f, 1.0f);
        c.f18 = 30.00059700012207f;
        c.f1C = 45.00089645385742f;
        c.f20 = 6.000119209289551f;
        c.w24 = 1;
        c.b28 = 1;
        c.f2C = 4.0f;
        c.f30 = 5.0f;
        c.f34 = 10.000199317932129f;
        c.f38 = 2.5000498294830322f;
        c.f40 = 0.004999999888241291f;
        c.w44 = 2;
        c.b48 = 1;
        c.b49 = 1;
        c.f4C = 0.20000001788139343f;
        c.f50 = 1.0f;
        c.f54 = 0.20000000298023224f;
        c.f58 = 0.5f;
        c.w5C = 3;
        c.b60 = 1;
        c.f64 = 0.019999999552965164f;
        c.f68 = 0.07999999821186066f;
        c.f6C = 0.5f;
        c.f70 = 30.00059700012207f;
        c.f74 = 20.000398635864258f;
        c.w78 = 0x80606060;
        c.w7C = 3;
        c.b80 = 1;
        c.f84 = 0.699999988079071f;
        c.f88 = 0.4000000059604645f;
        c.f8C = 0.0010000000474974513f;
        c.f90 = 2.5000498294830322f;
        c.w98 = 20;
        *dst = c;
    }
}
