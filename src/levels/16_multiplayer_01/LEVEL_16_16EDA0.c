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
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_002E5950;
extern Record D_002E5960;
extern void *memset(void *dst, int value, unsigned int size);
extern float cosf(float value);
extern float sinf(float value);

void func_16EDA0(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_002E5960;
        D_002E5950.a = 0;
        D_002E5950.b = 0;
        D_002E5950.c = 0;
        D_002E5950.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.f00 = cosf(0.05235988274216652f);
        local.f08 = -sinf(0.05235988274216652f);
        local.f10 = 1.0f;
        local.f18 = sinf(0.05235988274216652f);
        local.f20 = cosf(0.05235988274216652f);
        *destination = local;
    }
}
