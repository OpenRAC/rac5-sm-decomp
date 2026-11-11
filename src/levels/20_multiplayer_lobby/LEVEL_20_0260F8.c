/* USA LEVEL_20.REL:0x0260F8. Two-record initialization hypothesis. */
typedef unsigned int u32;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

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
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
    float f40;
    float f44;
    float f48;
    float f4C;
    int i50;
    float f54;
    float f58;
    float f5C;
    float f60;
    float f64;
    int i68;
    int i6C;
    u32 padding70[3];
} Record124;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    int i14;
    int i18;
} Record28;

typedef union {
    Record124 big;
    Record28 small;
} Scratch;

extern Head D_00137D40;
extern Record124 D_00137D50;
extern Record28 D_00137DD0;
extern void *memset(void *destination, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_0260F8(void *object, int mode)
{
    Scratch local;

    if (mode == 0xFFFF && object != 0) {
        Record124 *big_destination = &D_00137D50;
        D_00137D40.a = 0;
        D_00137D40.b = 0;
        D_00137D40.c = 0;
        D_00137D40.d = 1.0f;

        memset(&local.big, 0, sizeof local.big);
        local.big.f00 = 120.0f;
        local.big.f04 = 30.0f;
        local.big.f08 = 0.25f;
        local.big.f0C = 0.3333333432674408f;
        local.big.f10 = 0.8700000047683716f;
        local.big.f14 = 0.05235988274216652f;
        local.big.f18 = 0.41887906193733215f;
        local.big.f1C = 60.0f;
        local.big.f20 = -0.0002222222537966445f;
        local.big.f24 = 30.0f;
        local.big.f28 = -0.02222222462296486f;
        local.big.f2C = powf(0.6000000238418579f, 1.0f);
        local.big.f30 = 0.800000011920929f;
        local.big.f34 = 0.699999988079071f;
        local.big.f38 = 0.5f;
        local.big.f3C = 0.6000000238418579f;
        local.big.f40 = 0.0066666672937572f;
        local.big.f44 = 0.9900000095367432f;
        local.big.f48 = 0.949999988079071f;
        local.big.f4C = 4.5f;
        local.big.i50 = 2;
        local.big.f54 = 3.0f;
        local.big.f5C = 0.050999999046325684f;
        local.big.f60 = 10.0f;
        local.big.f64 = 30.0f;
        local.big.i68 = 0xB69;
        local.big.i6C = 0x200;
        *big_destination = local.big;

        memset(&local.small, 0, sizeof local.small);
        local.small.f00 = 0.002222200157120824f;
        local.small.f04 = powf(0.8999999761581421f, 1.0f);
        local.small.f08 = 1.5f;
        local.small.f0C = -0.800000011920929f;
        local.small.f10 = 5.0f;
        local.small.i14 = 1;
        local.small.i18 = 1;
        D_00137DD0 = local.small;
    }
}
