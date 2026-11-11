/* LEVEL_18:0x1586A8 -- integrates a clamped angular velocity and rotates the object. */
typedef struct S {
    char pad0[0x10];
    float lo;
    float hi;
    float cur;
    float v;
    float vel;
} S;

typedef struct O {
    char pad[0x58];
    S *s;
} O;

extern float D_0019C1A4;
extern float D_001D5F58[3];

extern void func_1021B8(void *m, float a);
extern void func_1029C0(void *a, void *b, void *c);
extern void func_158840(O *o);

static inline const int *Min(const int *x, const int *y)
{
    return *x < *y ? x : y;
}

void func_1586A8(O *o, float t)
{
    int b = 2;
    int a = (int)(D_0019C1A4 * 59.9988022f);
    int n;
    S *s = o->s;
    float *pv = &s->v;
    float *pvel = &s->vel;
    float m[12];
    float d;
    int neg;

    float hp = 1.5707964f;
    float k0 = D_001D5F58[0];
    float k1 = D_001D5F58[1];
    float k2 = D_001D5F58[2];
    n = *Min(&a, &b);
    if (n > 0) {
        do {
            float x = (hp - *pv) * k0 - *pvel * k1;
            *pvel = x;
            if (x > k2)
                *pvel = k2;
            else if (x < -k2)
                *pvel = -k2;
            *pv += *pvel;
            n--;
        } while (n != 0);
    }
    neg = 0;
    d = s->v * t;
    if (s->hi < s->lo) {
        d = -d;
        neg = 1;
    }
    func_1021B8(m, d);
    func_1029C0(o, o, m);
    s->cur += d;
    if (neg ? s->cur <= s->hi : s->hi <= s->cur)
        func_158840(o);
}
