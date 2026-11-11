/* LEVEL_23:0x04AC18 -- placement copy of LEVEL_01_0518F0.c: pushes four clamped/selected float values from a UI state object to setters. */
typedef struct {
    char pad0[4];
    char *items;
    char pad8[0xE];
    unsigned char b16;
} T;
typedef struct {
    char pad0[0x14];
    T *t;
    char pad18[4];
    float f1C;
    char pad20[4];
    float f24;
} S;
typedef struct {
    char pad0[0x54];
    S *s;
} P;
typedef struct {
    char pad0[0x10];
    int w10;
    char pad14[0x18];
    P *p;
    char pad30[4];
    float f34;
} G;
extern G D_002061C8;
extern void func_0352A0(void *obj);
extern void func_0033D0(float a, float b);
extern void func_003898(int a, float x, float y, int b);
extern void func_0036F8(int a, int b, float x, float y);
extern void func_003728(int a, int b, float x, float y);

static inline float *maxp(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_04AC18(void *obj)
{
    S *s;
    float one;
    float *m;
    float *e;

    s = D_002061C8.p->s;
    func_0352A0(obj);
    func_0033D0(0.0f, 0.0f);
    func_003898(10, s->f24, 1.0f, 2);
    one = 1.0f;
    m = maxp(&one, &s->f1C);
    func_0036F8(10, 2, *m, 1.0f);
    if (s->t->b16 != 0) {
        e = *(float **)(s->t->items + D_002061C8.w10 * 16 + 0xC);
        if (e != 0) {
            if (*e != 0.0f)
                D_002061C8.f34 = *e;
        }
    }
    func_003728(10, 2, D_002061C8.f34, 1.0f);
}
