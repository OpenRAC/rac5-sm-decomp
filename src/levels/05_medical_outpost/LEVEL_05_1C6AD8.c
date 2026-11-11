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

extern Head D_0038FFA8;
extern Record D_0038FFB8;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_1C6AD8(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_0038FFB8;
        D_0038FFA8.a = 0;
        D_0038FFA8.b = 0;
        D_0038FFA8.c = 0;
        D_0038FFA8.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0x22009154u;
        local.color1 = 0x8811D7BAu;
        local.color2 = 0x00009154u;
        local.color3 = 0x0011D7BAu;
        local.first = 5;
        local.second = 10;
        local.f18 = 0.009999999776482582f;
        local.f1C = 0.019999999552965164f;
        local.f20 = 0.05000000074505806f;
        local.f24 = 0.15000000596046448f;
        local.f28 = 0.25f;
        local.f2C = 0.30000001192092896f;
        local.f30 = 0.05235988274216652f;
        local.f34 = 0.10471976548433304f;
        local.f38 = powf(0.9900000095367432f, 1.0f);
        local.f3C = powf(0.9950000047683716f, 1.0f);
        *destination = local;
    }
}
