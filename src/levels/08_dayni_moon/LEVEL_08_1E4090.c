/* LEVEL_08:0x1E4090 -- placement copy of LEVEL_04_1BD2F8.c: fills the global tuning records with their default constants when the call carries the all-ones mode: a 0x7C-byte parameter record and a 0x38-byte secondary record. */
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
    float f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    int i28;
    float f2C;
    float f30;
    int i34;
} Record28;

typedef union {
    Record124 big;
    Record28 small;
} Scratch;

extern Head D_003EA2A8;
extern Record124 D_003EA2B8;
extern Record28 D_003EA338;
extern void *memset(void *destination, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_1E4090(void *object, int mode)
{
    Scratch local;

    if (mode == 0xFFFF && object != 0) {
        Record124 *big_destination = &D_003EA2B8;
        D_003EA2A8.a = 0;
        D_003EA2A8.b = 0;
        D_003EA2A8.c = 0;
        D_003EA2A8.d = 1.0f;

        memset(&local.big, 0, sizeof local.big);
        local.big.f00 = 1800.0f;
        local.big.f04 = 60.0f;
        local.big.f10 = 0.8700000047683716f;
        local.big.f14 = 0.05235988274216652f;
        local.big.f18 = 0.41887906193733215f;
        local.big.f1C = 15.0f;
        local.big.f20 = -0.0011111112544313073f;
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
        local.small.f00 = 0.30000001192092896f;
        local.small.f04 = 0.4000000059604645f;
        local.small.f08 = 0.6000000238418579f;
        local.small.f0C = 0.800000011920929f;
        local.small.f10 = 45.0f;
        local.small.f14 = 60.0f;
        local.small.f18 = 0.13333334028720856f;
        local.small.f1C = 0.20000001788139343f;
        local.small.f20 = 0.0016666669398546219f;
        local.small.f24 = 0.10471976548433304f;
        local.small.i28 = 0x7F7F7F7F;
        local.small.f2C = powf(0.8500000238418579f, 1.0f);
        local.small.f30 = powf(0.8700000047683716f, 1.0f);
        D_003EA338 = local.small;
    }
}
