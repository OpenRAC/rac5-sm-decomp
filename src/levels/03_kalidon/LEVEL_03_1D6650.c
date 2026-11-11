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
    float f40;
    float f44;
    unsigned char tail[4];
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_003B3870;
extern Record D_003B3880;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_1D6650(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003B3880;
        D_003B3870.a = 0;
        D_003B3870.b = 0;
        D_003B3870.c = 0;
        D_003B3870.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0xAA666666u;
        local.color1 = 0xBB888888u;
        local.color2 = 0x00DDDDDDu;
        local.color3 = 0x00FFFFFFu;
        local.first = 15;
        local.second = 30;
        local.f18 = 0.05000000447034836f;
        local.f1C = 0.05000000447034836f;
        local.f20 = 20.0f;
        local.f24 = 0.029999999329447746f;
        local.f28 = 0.05000000074505806f;
        local.f2C = 0.20000000298023224f;
        local.f30 = 0.30000001192092896f;
        local.f34 = 0.05235988274216652f;
        local.f38 = 0.10471976548433304f;
        local.f3C = 0.39269909262657166f;
        local.f40 = powf(0.8999999761581421f, 1.0f);
        local.f44 = powf(0.949999988079071f, 1.0f);
        local.tail[1] = 2;
        *destination = local;
    }
}
