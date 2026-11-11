/* LEVEL_23:0x1A2288 -- placement copy of LEVEL_01_1D08F0.c: updates the fade state of the overlay object. */
typedef struct {
    char pad0[0x270];
    float f270;
} Scene;

typedef struct {
    char pad0[0x64];
    int f64;
} Obj;

typedef struct {
    Obj *p;
    float f4;
    float f8;
    int fC;
    unsigned char f10;
} Fade;

extern Scene D_002025C0;
extern Fade D_003666F8;

extern float fabsf(float x);
extern void func_1A27B0(int a);
extern void func_154E58(Obj *o);
extern Obj *func_154D00(Scene *s, float f);
extern void func_1A2420(Scene *s);

static __inline__ unsigned char IsSmall(float x)
{
    if (!(fabsf(x) <= 1e-5f)) {
        return 0;
    }
    return 1;
}

void func_1A2288(void)
{
    Scene *s = &D_002025C0;
    Fade *g;
    int m;

    if (IsSmall(s->f270)) {
        func_1A27B0(0);
    } else {
        func_1A27B0(1);
    }
    if (D_003666F8.p != 0) {
        if ((D_003666F8.p->f64 & 0xF) == 1) {
            func_154E58(D_003666F8.p);
        }
    }
    g = &D_003666F8;
    m = g->fC;
    if (m != 0) {
        if (m == 1) {
            g->f8 -= 0.10000000894069672f;
            if (g->f8 < 0.0f) {
                g->f8 = 0.0f;
            }
            g->f4 -= 1.0f;
            if (g->f4 <= 0.0f || g->f10 == 0) {
                g->f4 = 30.0f;
                g->f10 = m;
                g->p = func_154D00(s, 25.0f);
            }
            func_1A2420(s);
        }
    } else {
        g->f8 += 0.10000000894069672f;
        if (g->f8 > 1.0f) {
            g->f8 = 1.0f;
        }
        if (g->f8 != 1.0f) {
            func_1A2420(s);
        }
    }
}
