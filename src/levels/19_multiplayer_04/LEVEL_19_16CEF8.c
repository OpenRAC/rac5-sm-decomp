/* LEVEL_19:0x16CEF8 -- placement copy of LEVEL_01_19CB30.c: pulses the object's two tint words: sets up the effect once, advances the wrapped phase angle and writes a sine-driven alpha into both colors. */

typedef struct {
    char pad_00[0x28];
    char part[0x34];
    unsigned int col_a;
    unsigned int col_b;
    unsigned char ready;
} Fx;

typedef struct {
    char pad_00[0x14];
    float phase;
} State;

typedef struct {
    char pad_00[0x54];
    State *state;
    Fx *fx;
} Obj;

extern char D_001BF2D8[];
extern char D_001BF2E8[];
extern char D_001BF338[];
extern char D_001D7998[];
extern char D_001D79C0[];

extern float fmodf(float x, float y);
extern float sinf(float x);
extern void func_18CF40(void **desc);
extern void func_18D050(void *dst, void **desc, int n);
extern unsigned int func_197EE0(float v);

static __inline__ float Wrap(float a)
{
    a = fmodf(a, 6.2831854820251465f);
    if (a < 0.0f) {
        a = a + 6.2831854820251465f;
    }
    return a;
}

void func_16CEF8(Obj *o)
{
    Fx *fx;
    State *st;
    void *d1[5];
    void *d2[4];
    float ang;
    float v;

    fx = o->fx;
    st = o->state;
    if (fx->ready == 0) {
        d1[4] = D_001D7998;
        d1[2] = D_001BF2D8;
        d1[0] = &fx->col_a;
        d1[1] = &fx->col_b;
        d1[3] = o;
        func_18CF40(d1);
        d2[1] = D_001BF338;
        d2[0] = D_001D79C0;
        d2[3] = o;
        d2[2] = D_001BF2E8;
        func_18D050(fx->part, d2, 5);
        fx->ready = 1;
    }
    ang = Wrap(st->phase + 0.017000000923871994f);
    st->phase = ang;
    v = sinf(ang) * 110.0f + 145.0f;
    fx->col_a = (func_197EE0(v) << 24) | 0xFF8080;
    fx->col_b = (func_197EE0(v) << 24) | 0xFF8080;
}
