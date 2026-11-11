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
    float f28;
    float f2C;
    float f30;
    float f34;
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_003E8930;
extern Record D_003E8940;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_1C38E8(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003E8940;
        D_003E8930.a = 0;
        D_003E8930.b = 0;
        D_003E8930.c = 0;
        D_003E8930.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.f00 = 0.20000000298023224f;
        local.f04 = 0.3499999940395355f;
        local.f08 = 0.029999999329447746f;
        local.f0C = 0.10000000149011612f;
        local.f10 = 0.2666666805744171f;
        local.f14 = 0.40000003576278687f;
        local.f18 = 0.008888890035450459f;
        local.f1C = powf(0.949999988079071f, 1.0f);
        local.f20 = powf(0.949999988079071f, 1.0f);
        local.f24 = 0.5f;
        local.f28 = 0.1745329350233078f;
        local.f2C = 0.5235987901687622f;
        local.f30 = 0.06666667014360428f;
        local.f34 = 0.20000001788139343f;
        *destination = local;
    }
}
