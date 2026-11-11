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

extern Head D_00383C20;
extern Record D_00383C30;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_197F48(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_00383C30;
        D_00383C20.a = 0;
        D_00383C20.b = 0;
        D_00383C20.c = 0;
        D_00383C20.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0xAA333333u;
        local.color1 = 0xBB444444u;
        local.color2 = 0x00666666u;
        local.color3 = 0x00888888u;
        local.first = 3;
        local.second = 6;
        local.f18 = 0.01666666753590107f;
        local.f1C = 0.05000000447034836f;
        local.f20 = 0.019999999552965164f;
        local.f24 = 0.07999999821186066f;
        local.f28 = 0.15000000596046448f;
        local.f2C = 0.30000001192092896f;
        local.f30 = 0.05235988274216652f;
        local.f34 = 0.10471976548433304f;
        local.f38 = powf(0.9900000095367432f, 1.0f);
        local.f3C = powf(0.9950000047683716f, 1.0f);
        *destination = local;
    }
}
