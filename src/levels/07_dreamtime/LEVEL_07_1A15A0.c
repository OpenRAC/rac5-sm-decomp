/* LEVEL_07:0x1A15A0 -- builds two effect parameter records and copies them to globals. */
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
    int i24;
    unsigned char b28;
    unsigned char pad28[3];
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
    float f40;
    int i44;
    unsigned char b48;
    unsigned char b49;
    unsigned char pad4A[2];
    float f4C;
    float f50;
    float f54;
    float f58;
    int i5C;
    unsigned char b60;
    unsigned char pad60[3];
    float f64;
    float f68;
    float f6C;
    float f70;
    float f74;
    unsigned int i78;
    int i7C;
    unsigned char b80;
    unsigned char pad80[3];
    float f84;
    float f88;
    float f8C;
    float f90;
    unsigned char b94;
    unsigned char pad94[3];
    int i98;
    unsigned char b9C;
    unsigned char pad9C[3];
} RecordA;

typedef struct {
    float f00;
    float f04;
    int i08;
    int i0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    void *p20;
} RecordB;

typedef struct {
    float a;
    float b;
    float c;
    float d;
} Head;


typedef union {
    RecordA a;
    RecordB b;
} Local;

extern Head D_003AC7F8;
extern RecordA D_003AC808;
extern RecordB D_003AC8A8;
extern char D_0021D0C0[];
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_1A15A0(void *object, int mode) {
    Local u;

    if (mode == 0xFFFF && object != 0) {
        RecordA *destination = &D_003AC808;
        RecordB *destinationB;
        D_003AC7F8.a = 0;
        D_003AC7F8.b = 0;
        D_003AC7F8.c = 0;
        D_003AC7F8.d = 1.0f;
        memset(&u.a, 0, sizeof u.a);
        u.a.f00 = 0.009999999776482582f;
        u.a.f04 = 0.20000001788139343f;
        u.a.f08 = 0.30000001192092896f;
        u.a.f0C = 0.6000000238418579f;
        u.a.f10 = 0.004999999888241291f;
        u.a.f14 = powf(0.9700000286102295f, 1.0f);
        u.a.f18 = 60.00119400024414f;
        u.a.f1C = 90.00179290771484f;
        u.a.f20 = 6.000119209289551f;
        u.a.i24 = 1;
        u.a.b28 = 1;
        u.a.f2C = 4.0f;
        u.a.f30 = 5.0f;
        u.a.f34 = 20.000398635864258f;
        u.a.f38 = 5.0000996589660645f;
        u.a.f40 = 0.004999999888241291f;
        u.a.i44 = 2;
        u.a.b48 = 1;
        u.a.b49 = 1;
        u.a.f4C = 0.20000001788139343f;
        u.a.f50 = 1.0f;
        u.a.f54 = 0.20000000298023224f;
        u.a.f58 = 0.5f;
        u.a.i5C = 3;
        u.a.b60 = 1;
        u.a.f64 = 0.019999999552965164f;
        u.a.f68 = 0.07999999821186066f;
        u.a.f6C = 0.5f;
        u.a.f70 = 60.00119400024414f;
        u.a.f74 = 40.000797271728516f;
        u.a.i78 = 0x80606060u;
        u.a.i7C = 3;
        u.a.b80 = 1;
        u.a.f84 = 0.699999988079071f;
        u.a.f88 = 0.4000000059604645f;
        u.a.f8C = 0.0010000000474974513f;
        u.a.f90 = 2.5000498294830322f;
        u.a.i98 = 20;
        *destination = u.a;
        memset(&u.b, 0, sizeof u.b);
        destinationB = &D_003AC8A8;
        u.b.f00 = powf(0.949999988079071f, 1.0f);
        u.b.f04 = powf(0.949999988079071f, 1.0f);
        u.b.f10 = 0.0011111112544313073f;
        u.b.f14 = 0.0022222225088626146f;
        u.b.f18 = 0.05000000447034836f;
        u.b.f1C = 0.10000000894069672f;
        u.b.p20 = D_0021D0C0;
        *destinationB = u.b;
    }
}
