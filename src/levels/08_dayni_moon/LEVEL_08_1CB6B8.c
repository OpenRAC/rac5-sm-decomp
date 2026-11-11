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

extern Head D_003E8B68;
extern Record D_003E8B78;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_1CB6B8(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003E8B78;
        D_003E8B68.a = 0;
        D_003E8B68.b = 0;
        D_003E8B68.c = 0;
        D_003E8B68.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0xAACCCCCCu;
        local.color1 = 0xBBFFFFFFu;
        local.color2 = 0x00FF9090u;
        local.color3 = 0x00FFAAAAu;
        local.first = 30;
        local.second = 60;
        local.f18 = 0.01666666753590107f;
        local.f1C = 0.02500000223517418f;
        local.f20 = 0.15000000596046448f;
        local.f24 = 0.20000000298023224f;
        local.f28 = 0.5f;
        local.f2C = 0.6000000238418579f;
        local.f30 = 0.05235988274216652f;
        local.f34 = 0.10471976548433304f;
        local.f38 = powf(0.9900000095367432f, 1.0f);
        local.f3C = powf(0.9950000047683716f, 1.0f);
        *destination = local;
    }
}
