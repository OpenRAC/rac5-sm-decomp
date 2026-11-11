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
    float f24;
    unsigned int color28;
    float f2C;
    float f30;
    unsigned char flag34;
    unsigned char padding[3];
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_003AC710;
extern Record D_003AC720;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_19D0D0(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003AC720;
        D_003AC710.a = 0;
        D_003AC710.b = 0;
        D_003AC710.c = 0;
        D_003AC710.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.f00 = 2.0f;
        local.f04 = 3.0f;
        local.f08 = 0.10000000149011612f;
        local.f0C = 0.10000000149011612f;
        local.f10 = 30.0f;
        local.f14 = 90.0f;
        local.f18 = 0.05000000447034836f;
        local.f1C = 0.10000000894069672f;
        local.f20 = 0.003000000026077032f;
        local.f24 = 0.10000000894069672f;
        local.color28 = 0xFF555555u;
        local.f2C = powf(0.9700000286102295f, 1.0f);
        local.f30 = powf(0.9900000095367432f, 1.0f);
        *destination = local;
    }
}
