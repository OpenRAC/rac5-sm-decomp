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

extern Head D_0039FFD0;
extern Record D_0039FFE0;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_18C090(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_0039FFE0;
        D_0039FFD0.a = 0;
        D_0039FFD0.b = 0;
        D_0039FFD0.c = 0;
        D_0039FFD0.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.f00 = 0.5f;
        local.f04 = 0.6000000238418579f;
        local.f08 = 1.0f;
        local.f0C = 1.2000000476837158f;
        local.f10 = 45.0f;
        local.f14 = 60.0f;
        local.f18 = 0.15000000596046448f;
        local.f1C = 0.30000001192092896f;
        local.f20 = 0.0033333338797092438f;
        local.f24 = 0.10471976548433304f;
        local.color28 = 0x7F7F7F7Fu;
        local.f2C = powf(0.8500000238418579f, 1.0f);
        local.f30 = powf(0.8700000047683716f, 1.0f);
        *destination = local;
    }
}
