/* LEVEL_07:0x1AECD8 -- placement copy of LEVEL_01_19CB30.c: pulses the object's two tint words: sets up the effect once, advances the wrapped phase angle and writes a sine-driven alpha into both colors. */

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

extern char D_0021D588[];
extern char D_0021D598[];
extern char D_0021D5E8[];
extern char D_0023BB18[];
extern char D_0023BB40[];

extern float fmodf(float x, float y);
extern float sinf(float x);
extern void func_1E9EA8(void **desc);
extern void func_1E9FB8(void *dst, void **desc, int n);
extern unsigned int func_1FF5F0(float v);

static __inline__ float Wrap(float a)
{
    a = fmodf(a, 6.2831854820251465f);
    if (a < 0.0f) {
        a = a + 6.2831854820251465f;
    }
    return a;
}

void func_1AECD8(Obj *o)
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
        d1[4] = D_0023BB18;
        d1[2] = D_0021D588;
        d1[0] = &fx->col_a;
        d1[1] = &fx->col_b;
        d1[3] = o;
        func_1E9EA8(d1);
        d2[1] = D_0021D5E8;
        d2[0] = D_0023BB40;
        d2[3] = o;
        d2[2] = D_0021D598;
        func_1E9FB8(fx->part, d2, 5);
        fx->ready = 1;
    }
    ang = Wrap(st->phase + 0.017000000923871994f);
    st->phase = ang;
    v = sinf(ang) * 110.0f + 145.0f;
    fx->col_a = (func_1FF5F0(v) << 24) | 0xFF8080;
    fx->col_b = (func_1FF5F0(v) << 24) | 0xFF8080;
}
