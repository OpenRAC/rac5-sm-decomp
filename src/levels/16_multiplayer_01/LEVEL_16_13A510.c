/* LEVEL_16:0x13A510 -- placement copy of LEVEL_01_15DED8.c: on a sentinel id, resets a small block and installs a default parameter table. */
typedef struct Big {
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
    int w40;
    int w44;
    int w48;
    int w4C;
} Big;

typedef struct Small {
    int a;
    int b;
    int c;
    float d;
} Small;

extern Small D_002E2CC0;
extern char D_002E2CD0[];
extern float powf(float x, float y);
extern void *memset(void *p, int c, unsigned int n);

void func_13A510(int a, int b)
{
    Big t;
    Big *dst;

    if (b == 0xFFFF && a != 0) {
        D_002E2CC0.a = 0;
        D_002E2CC0.b = 0;
        D_002E2CC0.c = 0;
        D_002E2CC0.d = 1.0f;
        dst = (Big *)D_002E2CD0;
        memset(&t, 0, sizeof(Big));
        t.f00 = 0.011111112f;
        t.f04 = powf(0.97f, 1.0f);
        t.f08 = 0.4f;
        t.f0C = 0.033333335f;
        t.f10 = 0.06666667f;
        t.f14 = 0.3f;
        t.f18 = 0.4f;
        t.f1C = 0.8f;
        t.f20 = 1.0f;
        t.f28 = 0.15f;
        t.f30 = 3.0f;
        t.f34 = 15.0f;
        t.f38 = 30.0f;
        t.f3C = 0.25f;
        t.w40 = 0xFF42FF42;
        t.w44 = 0xFF768E2D;
        t.w48 = 8;
        t.w4C = 12;
        *dst = t;
    }
}
