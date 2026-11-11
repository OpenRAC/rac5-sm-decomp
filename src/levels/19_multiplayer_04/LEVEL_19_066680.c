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

extern Head D_001EC8B0;
extern Record D_001EC8C0;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_066680(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_001EC8C0;
        D_001EC8B0.a = 0;
        D_001EC8B0.b = 0;
        D_001EC8B0.c = 0;
        D_001EC8B0.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0xFF228800u;
        local.color1 = 0xFF44FF00u;
        local.color2 = 0x00228800u;
        local.color3 = 0x0044FF00u;
        local.first = 15;
        local.second = 30;
        local.f18 = 0.005000000353902578f;
        local.f1C = 0.010000000707805157f;
        local.f20 = 0.4000000059604645f;
        local.f24 = 0.6000000238418579f;
        local.f28 = 0.800000011920929f;
        local.f2C = 0.8999999761581421f;
        local.f30 = 0.05235988274216652f;
        local.f34 = 0.10471976548433304f;
        local.f38 = powf(0.9900000095367432f, 1.0f);
        local.f3C = powf(0.9950000047683716f, 1.0f);
        *destination = local;
    }
}
