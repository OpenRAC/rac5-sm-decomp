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
    unsigned int color24;
    float f28;
    float f2C;
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_003EB3E0;
extern Record D_003EB3F0;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_20DB70(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003EB3F0;
        D_003EB3E0.a = 0;
        D_003EB3E0.b = 0;
        D_003EB3E0.c = 0;
        D_003EB3E0.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.f00 = 0.05000000074505806f;
        local.f04 = 0.10000000149011612f;
        local.f08 = 0.10000000149011612f;
        local.f0C = 0.20000000298023224f;
        local.f10 = 6.0f;
        local.f14 = 8.0f;
        local.f18 = 0.13333334028720856f;
        local.f1C = 0.20000001788139343f;
        local.f20 = 0.523598849773407f;
        local.color24 = 0x30FFFFFFu;
        local.f28 = powf(0.8999999761581421f, 1.0f);
        local.f2C = powf(0.949999988079071f, 1.0f);
        *destination = local;
    }
}
