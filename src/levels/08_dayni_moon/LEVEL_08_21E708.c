/* LEVEL_08:0x21E708 -- effect setup: when the caller passes the all-ones id and a non-null flag, resets the state block and builds two 0x38-byte emitter records (zeroed, filled, then block-copied into their globals). */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} State;

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
    unsigned int w28;
    float f2C;
    float f30;
    unsigned char b34;
    unsigned char pad35[3];
} Rec;

extern State D_003EB908;
extern Rec D_003EB918;
extern Rec D_003EB950;

extern void *memset(void *s, int c, unsigned int n);
extern float powf(float x, float y);

void func_21E708(int a, int id)
{
    Rec r;
    Rec *p;
    Rec *q;

    if (id == 0xFFFF && a != 0) {
        p = &D_003EB918;
        q = &D_003EB950;
        D_003EB908.a = 0;
        D_003EB908.b = 0;
        D_003EB908.c = 0;
        D_003EB908.d = 1.0f;
        memset(&r, 0, 0x38);
        r.f00 = 0.05f;
        r.f04 = 0.1f;
        r.f08 = 0.1f;
        r.f0C = 0.15f;
        r.f10 = 4.0f;
        r.f14 = 6.0f;
        r.f18 = 0.10000001f;
        r.f1C = 0.23333335f;
        r.f24 = 0.104719765f;
        r.w28 = 0xFFFFFFFF;
        r.f2C = powf(0.9f, 1.0f);
        r.f30 = powf(1.0f, 1.0f);
        r.b34 = 1;
        *p = r;
        memset(&r, 0, 0x38);
        r.f00 = 0.05f;
        r.f04 = 0.1f;
        r.f08 = 0.1f;
        r.f0C = 0.15f;
        r.f10 = 2.0f;
        r.f14 = 3.0f;
        r.f18 = 0.10000001f;
        r.f1C = 0.23333335f;
        r.f24 = 0.104719765f;
        r.w28 = 0xFFFFFFFF;
        r.f2C = powf(0.9f, 1.0f);
        r.f30 = powf(1.0f, 1.0f);
        r.b34 = 1;
        *q = r;
    }
}
