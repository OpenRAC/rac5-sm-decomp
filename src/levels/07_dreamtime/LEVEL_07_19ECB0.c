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

extern Head D_003AC758;
extern Record D_003AC768;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_19ECB0(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003AC768;
        D_003AC758.a = 0;
        D_003AC758.b = 0;
        D_003AC758.c = 0;
        D_003AC758.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.f00 = 0.30000001192092896f;
        local.f04 = 0.5f;
        local.f08 = 0.5f;
        local.f0C = 0.75f;
        local.f10 = 15.0f;
        local.f14 = 22.5f;
        local.f18 = 0.03333333507180214f;
        local.f1C = 0.10000000894069672f;
        local.f20 = 0.0011111112544313073f;
        local.f24 = 0.20943953096866608f;
        local.color28 = 0x7F7F7F7Fu;
        local.f2C = powf(0.949999988079071f, 1.0f);
        local.f30 = powf(0.9700000286102295f, 1.0f);
        *destination = local;
    }
}
