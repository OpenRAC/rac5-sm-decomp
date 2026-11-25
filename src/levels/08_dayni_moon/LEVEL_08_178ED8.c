/* LEVEL_08:0x178ED8 -- placement copy of LEVEL_04_16DB30.c: allocates a three-part record (header, 0x80-byte table, 0x480-byte table), fills it from the static defaults and registers it. */
typedef struct Big {
    int w[0x120];
} Big;

typedef struct Mid {
    int w[0x20];
} Mid;

typedef struct Rec {
    int w00;
    float f04;
    int w08;
    float f0C;
    short h10;
    int w14;
    Mid *mid;
    Big *big;
} Rec;

typedef struct Glob {
    char pad00[0x68];
    int w68;
} Glob;

extern Big D_003E4FB0;
extern Mid D_0026A810;
extern Glob D_002E7040;

extern void *func_097DF0(unsigned int n);
extern int func_097E30(int n);
extern void func_0972A0(void *h, Rec *r, int a, int b, int c);

void func_178ED8(void *h)
{
    Rec *r;
    Mid *m;
    Big *b;
    int w;
    r = func_097DF0(0x20);
    m = func_097DF0(0x80);
    b = (Big *)func_097E30(0x480);
    if (r != 0 && m != 0 && b != 0) {
        *b = D_003E4FB0;
        *m = D_0026A810;
        w = D_002E7040.w68;
        r->mid = m;
        r->w00 = 0;
        r->w08 = 0;
        r->w14 = w;
        r->f0C = 1.0f;
        r->f04 = 0.5f;
        r->h10 = 8;
        r->big = b;
        func_0972A0(h, r, 0, 0, 0xFF);
    }
}
