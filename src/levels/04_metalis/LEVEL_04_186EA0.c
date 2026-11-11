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

extern Head D_003B0720;
extern Record D_003B0730;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_186EA0(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003B0730;
        D_003B0720.a = 0;
        D_003B0720.b = 0;
        D_003B0720.c = 0;
        D_003B0720.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0xFF000000u;
        local.color1 = 0xFF440044u;
        local.color3 = 0x00440044u;
        local.first = 25;
        local.second = 30;
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
