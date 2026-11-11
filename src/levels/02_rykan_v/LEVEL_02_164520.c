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

extern Head D_003AAF28;
extern Record D_003AAF38;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_164520(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003AAF38;
        D_003AAF28.a = 0;
        D_003AAF28.b = 0;
        D_003AAF28.c = 0;
        D_003AAF28.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0x80009999u;
        local.color1 = 0x806666FFu;
        local.color2 = 0x00009999u;
        local.color3 = 0x006666FFu;
        local.first = 9;
        local.second = 15;
        local.f18 = 0.10000000894069672f;
        local.f1C = 0.1666666716337204f;
        local.f20 = 0.20000000298023224f;
        local.f24 = 0.30000001192092896f;
        local.f28 = 0.5f;
        local.f2C = 0.6000000238418579f;
        local.f30 = 0.05235988274216652f;
        local.f34 = 0.10471976548433304f;
        local.f38 = powf(1.0f, 1.0f);
        local.f3C = powf(1.0f, 1.0f);
        *destination = local;
    }
}
