/* LEVEL_01:0x160558 -- allocates a three-part record (header, 0x80-byte table, 0x480-byte table), fills it from the static defaults and registers it twice. */
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

extern Big D_003952A8;
extern Mid D_0021F9F8;
extern Glob D_00297DC0;

extern void *func_08FED0(int n);
extern void *func_08FF10(int n);
extern void func_08F380(void *h, Rec *r, int a, int b, int c);
extern int func_001050(int a);

void func_160558(void *h)
{
    Rec *r;
    Mid *m;
    Big *b;
    int w;
    r = func_08FED0(0x20);
    m = func_08FED0(0x80);
    b = func_08FF10(0x480);
    if (r != 0 && m != 0 && b != 0) {
        *b = D_003952A8;
        *m = D_0021F9F8;
        w = D_00297DC0.w68;
        r->mid = m;
        r->w00 = 0;
        r->w08 = 0;
        r->w14 = w;
        r->f0C = 1.0f;
        r->f04 = 0.5f;
        r->h10 = 8;
        r->big = b;
        func_08F380(h, r, 0, 0, 0xFF);
        if (func_001050(1)) {
            func_08F380(h, r, 0, 0, 1);
        }
    }
}
