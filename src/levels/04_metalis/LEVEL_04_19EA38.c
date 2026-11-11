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

extern Head D_003B19B0;
extern Record D_003B19C0;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_19EA38(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003B19C0;
        D_003B19B0.a = 0;
        D_003B19B0.b = 0;
        D_003B19B0.c = 0;
        D_003B19B0.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0xFFFFFFFFu;
        local.color1 = 0xFFFFCC99u;
        local.color2 = 0x00FFFFFFu;
        local.color3 = 0x00FFCC99u;
        local.first = 25;
        local.second = 30;
        local.f20 = 0.15000000596046448f;
        local.f24 = 0.25f;
        local.f28 = 0.3499999940395355f;
        local.f2C = 0.4000000059604645f;
        local.f30 = 0.05235988274216652f;
        local.f34 = 0.10471976548433304f;
        local.f38 = powf(0.9900000095367432f, 1.0f);
        local.f3C = powf(0.9950000047683716f, 1.0f);
        *destination = local;
    }
}
