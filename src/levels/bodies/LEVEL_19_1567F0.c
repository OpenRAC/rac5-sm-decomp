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

extern Head D_002E53C8;
extern Record D_002E53D8;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_1567F0(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_002E53D8;
        D_002E53C8.a = 0;
        D_002E53C8.b = 0;
        D_002E53C8.c = 0;
        D_002E53C8.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.f00 = 0.10000000149011612f;
        local.f04 = 0.20000000298023224f;
        local.f08 = 0.20000000298023224f;
        local.f0C = 0.30000001192092896f;
        local.f10 = 30.0f;
        local.f14 = 45.0f;
        local.f18 = 0.03333333507180214f;
        local.f1C = 0.10000000894069672f;
        local.f20 = 0.0033333338797092438f;
        local.f24 = 0.20943953096866608f;
        local.color28 = 0xFFFFFFFFu;
        local.f2C = powf(0.800000011920929f, 1.0f);
        local.f30 = powf(0.8500000238418579f, 1.0f);
        local.flag34 = 1;
        *destination = local;
    }
}
