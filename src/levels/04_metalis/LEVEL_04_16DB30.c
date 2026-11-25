/* LEVEL_04:0x16DB30 -- allocates a three-part record (header, 0x80-byte table, 0x480-byte table), fills it from the static defaults and registers it. */
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

extern Big D_003AFA78;
extern Mid D_00239478;
extern Glob D_002B25C0;

extern void *func_092FC8(unsigned int n);
extern int func_093008(int n);
extern void func_092478(void *h, Rec *r, int a, int b, int c);

void func_16DB30(void *h)
{
    Rec *r;
    Mid *m;
    Big *b;
    int w;
    r = func_092FC8(0x20);
    m = func_092FC8(0x80);
    b = (Big *)func_093008(0x480);
    if (r != 0 && m != 0 && b != 0) {
        *b = D_003AFA78;
        *m = D_00239478;
        w = D_002B25C0.w68;
        r->mid = m;
        r->w00 = 0;
        r->w08 = 0;
        r->w14 = w;
        r->f0C = 1.0f;
        r->f04 = 0.5f;
        r->h10 = 8;
        r->big = b;
        func_092478(h, r, 0, 0, 0xFF);
    }
}
