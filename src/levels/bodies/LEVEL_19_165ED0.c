/* LEVEL_19:0x165ED0 -- placement copy of LEVEL_17_15D950.c: builds two effect parameter records and copies them to globals. */
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
    float f80;
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
    unsigned int c0;
    unsigned int c1;
    unsigned int c2;
    unsigned int c3;
    int i10;
    int i14;
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

extern Head D_002E5960;
extern RecordA D_002E5970;
extern RecordB D_002E5A10;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_165ED0(void *object, int mode) {
    Local u;

    if (mode == 0xFFFF && object != 0) {
        RecordA *destination = &D_002E5970;
        D_002E5960.a = 0;
        D_002E5960.b = 0;
        D_002E5960.c = 0;
        D_002E5960.d = 1.0f;
        memset(&u.a, 0, sizeof u.a);
        u.a.f00 = 0.10000000894069672f;
        u.a.f04 = 0.40000003576278687f;
        u.a.f08 = 0.699999988079071f;
        u.a.f0C = 1.0f;
        u.a.f10 = 0.009999999776482582f;
        u.a.f14 = powf(0.9700000286102295f, 1.0f);
        u.a.f18 = 30.00059700012207f;
        u.a.f1C = 45.00089645385742f;
        u.a.f20 = 6.000119209289551f;
        u.a.i24 = 1;
        u.a.b28 = 1;
        u.a.f2C = 6.0f;
        u.a.f30 = 7.900000095367432f;
        u.a.f34 = 17.500349044799805f;
        u.a.f38 = 5.0000996589660645f;
        u.a.f3C = 0.15000000596046448f;
        u.a.f40 = 0.009999999776482582f;
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
        u.a.f6C = 0.30000001192092896f;
        u.a.f70 = 30.00059700012207f;
        u.a.f74 = 20.000398635864258f;
        u.a.i78 = 0x80606060u;
        u.a.i7C = 6;
        u.a.f84 = 0.699999988079071f;
        u.a.f88 = 0.4000000059604645f;
        u.a.f8C = 5.0000996589660645f;
        u.a.f90 = 2.5000498294830322f;
        u.a.b94 = 1;
        u.a.i98 = 30;
        u.a.b9C = 1;
        *destination = u.a;
        memset(&u.b, 0, sizeof u.b);
        u.b.c0 = 0x44777777u;
        u.b.c1 = 0x66555555u;
        u.b.c2 = 0x00999999u;
        u.b.c3 = 0x00999999u;
        u.b.i10 = 12;
        u.b.i14 = 18;
        u.b.f18 = 0.10000000894069672f;
        u.b.f1C = 0.1666666716337204f;
        u.b.f20 = 0.6000000238418579f;
        u.b.f24 = 1.2000000476837158f;
        u.b.f28 = 1.2000000476837158f;
        u.b.f2C = 1.7999999523162842f;
        u.b.f30 = 0.05235988274216652f;
        u.b.f34 = 0.10471976548433304f;
        u.b.f38 = powf(0.10000000149011612f, 1.0f);
        u.b.f3C = powf(0.30000001192092896f, 1.0f);
        D_002E5A10 = u.b;
    }
}
