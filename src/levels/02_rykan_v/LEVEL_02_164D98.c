typedef struct {
    unsigned int color0;
    unsigned int color1;
    int mode08;
    unsigned int color0C;
    int first10;
    int second14;
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
    float f40;
    float f44;
    unsigned char byte48;
    unsigned char byte49;
    unsigned char padding[2];
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_003AAF78;
extern Record D_003AAF88;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_164D98(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_003AAF88;
        D_003AAF78.a = 0;
        D_003AAF78.b = 0;
        D_003AAF78.c = 0;
        D_003AAF78.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0x800099FFu;
        local.color1 = 0x806666FFu;
        local.mode08 = mode;
        local.color0C = 0x00CCCCFFu;
        local.first10 = 30;
        local.second14 = 45;
        local.f18 = 0.1600000113248825f;
        local.f1C = 0.24000000953674316f;
        local.f24 = 0.5f;
        local.f28 = 0.75f;
        local.f2C = 1.5f;
        local.f30 = 2.0f;
        local.f34 = 0.10471976548433304f;
        local.f38 = 0.20943953096866608f;
        local.f3C = 1.5707963705062866f;
        local.f40 = powf(0.9599999785423279f, 1.0f);
        local.f44 = powf(0.9700000286102295f, 1.0f);
        local.byte49 = 36;
        *destination = local;
    }
}
