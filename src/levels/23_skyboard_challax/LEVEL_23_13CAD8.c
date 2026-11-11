/* LEVEL_23:0x13CAD8 -- placement copy of LEVEL_22_115720.c: on a sentinel id, resets a small block and installs a default parameter table. */
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

extern Small D_00363038;
extern char D_00363048[];
extern float powf(float x, float y);
extern void *memset(void *p, int c, unsigned int n);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_13CAD8(int a, int b)
{
    Big t;
    Big *dst;

    if (b == 0xFFFF && a != 0) {
        D_00363038.a = 0;
        D_00363038.b = 0;
        D_00363038.c = 0;
        D_00363038.d = 1.0f;
        dst = (Big *)D_00363048;
        memset(&t, 0, sizeof(Big));
        t.f00 = 0.0055555562f;
        t.f04 = powf(0.9f, 1.0f);
        t.f08 = 0.2f;
        t.f0C = 0.40000004f;
        t.f10 = 0.6f;
        t.f14 = 0.3f;
        t.f18 = 0.35f;
        t.f1C = 0.65f;
        t.f20 = 0.8f;
        t.f28 = 1.15f;
        t.f30 = 30.0f;
        t.f34 = 15.0f;
        t.f38 = 30.0f;
        t.f3C = 0.95f;
        t.w40 = 0x8040FFA0;
        t.w44 = 0x80462EAD;
        t.w48 = 50;
        t.w4C = 50;
        *dst = t;
    }
}
