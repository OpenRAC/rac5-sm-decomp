/* LEVEL_19:0x1390C8 -- placement copy of LEVEL_01_160558.c: allocates a three-part record (header, 0x80-byte table, 0x480-byte table), fills it from the static defaults and registers it twice. */
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

extern Big D_002E4568;
extern Mid D_001D34F0;
extern Glob D_0024E3C0;

extern void *func_0815D8(int n);
extern void *func_081618(int n);
extern void func_080A40(void *h, Rec *r, int a, int b, int c);
extern int func_000CB8(int a);

void func_1390C8(void *h)
{
    Rec *r;
    Mid *m;
    Big *b;
    int w;
    r = func_0815D8(0x20);
    m = func_0815D8(0x80);
    b = func_081618(0x480);
    if (r != 0 && m != 0 && b != 0) {
        *b = D_002E4568;
        *m = D_001D34F0;
        w = D_0024E3C0.w68;
        r->mid = m;
        r->w00 = 0;
        r->w08 = 0;
        r->w14 = w;
        r->f0C = 1.0f;
        r->f04 = 0.5f;
        r->h10 = 8;
        r->big = b;
        func_080A40(h, r, 0, 0, 0xFF);
        if (func_000CB8(1)) {
            func_080A40(h, r, 0, 0, 1);
        }
    }
}
