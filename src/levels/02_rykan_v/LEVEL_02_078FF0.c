/* LEVEL_02:0x078FF0 -- placement copy of LEVEL_01_072708.c: resets the global effect parameter block to its default tuning values. */
typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    int w24;
    char b28;
    char pad29[3];
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
    float f40;
    int w44;
    char b48;
    char b49;
    char pad4A[2];
    float f4C;
    float f50;
    float f54;
    float f58;
    int w5C;
    char b60;
    char pad61[3];
    float f64;
    float f68;
    float f6C;
    float f70;
    float f74;
    int w78;
    int w7C;
    char pad80[4];
    float f84;
    float f88;
    float f8C;
    float f90;
    char b94;
    char pad95[3];
    int w98;
    char pad9C[4];
} Params;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern Vec4 D_00251250;
extern Params D_00251260;
extern float powf(float, float);

extern void *memset(void *p, int c, int n);

void func_078FF0(int a, int b)
{
    Params p;
    Params *dst;

    if (b == 0xFFFF && a) {
        dst = &D_00251260;
        D_00251250.x = 0.0f;
        D_00251250.y = 0.0f;
        D_00251250.z = 0.0f;
        D_00251250.w = 1.0f;
        memset(&p, 0, sizeof(p));
        p.f00 = 0.009999999776482582f;
        p.f04 = 0.40000003576278687f;
        p.f08 = 0.30000001192092896f;
        p.f0C = 0.6000000238418579f;
        p.f10 = 0.004999999888241291f;
        p.f14 = powf(0.9700000286102295f, 1.0f);
        p.f18 = 30.00059700012207f;
        p.f1C = 45.00089645385742f;
        p.f20 = 6.000119209289551f;
        p.w24 = 1;
        p.b28 = 1;
        p.f2C = 0.6000000238418579f;
        p.f30 = 0.8999999761581421f;
        p.f34 = 10.000199317932129f;
        p.f38 = 2.5000498294830322f;
        p.f3C = 0.15000000596046448f;
        p.f40 = 0.004999999888241291f;
        p.w44 = 2;
        p.b48 = 1;
        p.b49 = 1;
        p.f4C = 0.20000001788139343f;
        p.f50 = 1.0f;
        p.f54 = 0.20000000298023224f;
        p.f58 = 0.5f;
        p.w5C = 3;
        p.b60 = 1;
        p.f64 = 0.019999999552965164f;
        p.f68 = 0.07999999821186066f;
        p.f6C = 0.30000001192092896f;
        p.f70 = 30.00059700012207f;
        p.f74 = 20.000398635864258f;
        p.w78 = (int)0x80606060;
        p.w7C = 6;
        p.f84 = 0.699999988079071f;
        p.f88 = 0.4000000059604645f;
        p.f8C = 5.0000996589660645f;
        p.f90 = 2.5000498294830322f;
        p.b94 = 1;
        p.w98 = 20;
        *dst = p;
    }
}
