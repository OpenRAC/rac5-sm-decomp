/* LEVEL_09:0x04F9E8 -- placement copy of LEVEL_01_0532F8.c: resets the shared effect parameter record to its defaults when the sentinel mode is passed. */
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
    float f34;
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_00220480;
extern Record D_00220490;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_04F9E8(int enable, int id)
{
    if (id == 0xFFFF && enable) {
        Record local;
        Record *destination = &D_00220490;

        D_00220480.a = 0;
        D_00220480.b = 0;
        D_00220480.c = 0;
        D_00220480.d = 1.0f;
        memset(&local, 0, sizeof(Record));
        local.f00 = 0.10000000149011612f;
        local.f04 = 0.20000000298023224f;
        local.f08 = 0.30000001192092896f;
        local.f0C = 0.4000000059604645f;
        local.f10 = 15.0f;
        local.f14 = 22.5f;
        local.f18 = 0.03333333507180214f;
        local.f1C = 0.10000000894069672f;
        local.f20 = 0.0011111112544313073f;
        local.f24 = 0.20943953096866608f;
        local.color28 = 0xFF5FB3BFu;
        local.f2C = powf(0.949999988079071f, 1.0f);
        local.f30 = powf(0.9700000286102295f, 1.0f);
        *destination = local;
    }
}
