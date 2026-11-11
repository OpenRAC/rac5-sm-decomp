/* LEVEL_07:0x15D678 -- placement copy of LEVEL_01_160558.c: allocates a three-part record (header, 0x80-byte table, 0x480-byte table), fills it from the static defaults and registers it twice. */
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

extern Big D_003AAA90;
extern Mid D_00233DE0;
extern Glob D_002AD6C0;

extern void *func_091D58(int n);
extern void *func_091D98(int n);
extern void func_091208(void *h, Rec *r, int a, int b, int c);
extern int func_001050(int a);

void func_15D678(void *h)
{
    Rec *r;
    Mid *m;
    Big *b;
    int w;
    r = func_091D58(0x20);
    m = func_091D58(0x80);
    b = func_091D98(0x480);
    if (r != 0 && m != 0 && b != 0) {
        *b = D_003AAA90;
        *m = D_00233DE0;
        w = D_002AD6C0.w68;
        r->mid = m;
        r->w00 = 0;
        r->w08 = 0;
        r->w14 = w;
        r->f0C = 1.0f;
        r->f04 = 0.5f;
        r->h10 = 8;
        r->big = b;
        func_091208(h, r, 0, 0, 0xFF);
        if (func_001050(1)) {
            func_091208(h, r, 0, 0, 1);
        }
    }
}
