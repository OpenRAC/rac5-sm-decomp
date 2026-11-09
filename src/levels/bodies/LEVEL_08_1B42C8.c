/* LEVEL_08:0x1B42C8 -- on a sentinel id, resets a small block and installs a default parameter table. */
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
    int w28;
    float f2C;
    float f30;
    float f34;
} Big;

typedef struct Small {
    int a;
    int b;
    int c;
    float d;
} Small;

extern Small D_003E7B58;
extern char D_003E7B68[];
extern float powf(float x, float y);
extern void *memset(void *p, int c, unsigned int n);

void func_1B42C8(int a, int b)
{
    Big t;
    Big *dst;

    if (b == 0xFFFF && a != 0) {
        D_003E7B58.a = 0;
        D_003E7B58.b = 0;
        D_003E7B58.c = 0;
        D_003E7B58.d = 1.0f;
        dst = (Big *)D_003E7B68;
        memset(&t, 0, sizeof(Big));
        t.f00 = 0.1f;
        t.f04 = 0.2f;
        t.f08 = 0.2f;
        t.f0C = 0.3f;
        t.f10 = 10.00002f;
        t.f14 = 15.0f;
        t.f18 = 0.033333335f;
        t.f1C = 0.10000001f;
        t.f20 = 0.0011111113f;
        t.f24 = 0.20943953f;
        t.w28 = 0x7F74A8F1;
        t.f2C = powf(0.8f, 1.0f);
        t.f30 = powf(0.85f, 1.0f);
        *dst = t;
    }
}
