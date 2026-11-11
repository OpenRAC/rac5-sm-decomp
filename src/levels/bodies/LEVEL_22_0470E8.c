/* LEVEL_22:0x0470E8 -- placement copy of LEVEL_01_0518F0.c: pushes four clamped/selected float values from a UI state object to setters. */
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
extern G D_0018A948;
extern void func_0319C0(void *obj);
extern void func_003140(float a, float b);
extern void func_003608(int a, float x, float y, int b);
extern void func_003468(int a, int b, float x, float y);
extern void func_003498(int a, int b, float x, float y);

static inline float *maxp(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_0470E8(char *state)
{
    S *s;
    float one;
    float *m;
    float *e;

    s = D_0018A948.p->s;
    func_0319C0(state);
    func_003140(0.0f, 0.0f);
    func_003608(10, s->f24, 1.0f, 2);
    one = 1.0f;
    m = maxp(&one, &s->f1C);
    func_003468(10, 2, *m, 1.0f);
    if (s->t->b16 != 0) {
        e = *(float **)(s->t->items + D_0018A948.w10 * 16 + 0xC);
        if (e != 0) {
            if (*e != 0.0f)
                D_0018A948.f34 = *e;
        }
    }
    func_003498(10, 2, D_0018A948.f34, 1.0f);
}
