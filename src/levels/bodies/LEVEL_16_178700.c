typedef struct {
    unsigned int color0;
    unsigned int color1;
    unsigned int color2;
    unsigned int color3;
    int first;
    int second;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_002E5AA8;
extern Record D_002E5AB8;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_178700(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_002E5AB8;
        D_002E5AA8.a = 0;
        D_002E5AA8.b = 0;
        D_002E5AA8.c = 0;
        D_002E5AA8.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0x44BBBBBBu;
        local.color1 = 0x66CCCCCCu;
        local.color2 = 0x00DDDDDDu;
        local.color3 = 0x00FFFFFFu;
        local.first = 30;
        local.second = 75;
        local.f18 = 0.05000000447034836f;
        local.f1C = 0.10000000894069672f;
        local.f20 = 0.5f;
        local.f24 = 0.8999999761581421f;
        local.f28 = 0.800000011920929f;
        local.f2C = 1.2000000476837158f;
        local.f30 = 0.05235988274216652f;
        local.f34 = 0.10471976548433304f;
        local.f38 = powf(0.9800000190734863f, 1.0f);
        local.f3C = powf(0.9900000095367432f, 1.0f);
        *destination = local;
    }
}
