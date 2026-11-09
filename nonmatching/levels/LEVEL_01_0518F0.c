/* LEVEL_01.REL:0x0518F0: reviewed 272-byte candidate, held for ABI review.
 * Pushes four clamped/selected float values from a UI state object to setters.
 * gnu-ee-trial C with gnu-ee-trial links 272/272 bytes and is byte-exact at
 * this and 14 other USA placements, but the prototypes disagree.
 * It declares func_003888 returning void with (int, float, float, int), but
 * the accepted LEVEL_01_003888.c defines it returning void with (pointer,
 * pointer).
 * It declares func_0036E8 returning void with (int, int, float, float), but
 * the accepted LEVEL_01_0036E8.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
extern G D_00238D48;
extern void func_03BE20(void);
extern void func_0033D0(float a, float b);
extern void func_003888(int a, float x, float y, int b);
extern void func_0036E8(int a, int b, float x, float y);
extern void func_003718(int a, int b, float x, float y);

static inline float *maxp(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_0518F0(void)
{
    S *s;
    float one;
    float *m;
    float *e;

    s = D_00238D48.p->s;
    func_03BE20();
    func_0033D0(0.0f, 0.0f);
    func_003888(10, s->f24, 1.0f, 2);
    one = 1.0f;
    m = maxp(&one, &s->f1C);
    func_0036E8(10, 2, *m, 1.0f);
    if (s->t->b16 != 0) {
        e = *(float **)(s->t->items + D_00238D48.w10 * 16 + 0xC);
        if (e != 0) {
            if (*e != 0.0f)
                D_00238D48.f34 = *e;
        }
    }
    func_003718(10, 2, D_00238D48.f34, 1.0f);
}
