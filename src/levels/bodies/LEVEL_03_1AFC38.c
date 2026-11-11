/* LEVEL_03:0x1AFC38 -- placement copy of LEVEL_01_19CB30.c: pulses the object's two tint words: sets up the effect once, advances the wrapped phase angle and writes a sine-driven alpha into both colors. */

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

extern char D_00221928[];
extern char D_00221938[];
extern char D_00221988[];
extern char D_00240C08[];
extern char D_00240C30[];

extern float fmodf(float x, float y);
extern float sinf(float x);
extern void func_1F04C0(void **desc);
extern void func_1F05D0(void *dst, void **desc, int n);
extern unsigned int func_203908(float v);

static __inline__ float Wrap(float a)
{
    a = fmodf(a, 6.2831854820251465f);
    if (a < 0.0f) {
        a = a + 6.2831854820251465f;
    }
    return a;
}

void func_1AFC38(Obj *o)
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
        d1[4] = D_00240C08;
        d1[2] = D_00221928;
        d1[0] = &fx->col_a;
        d1[1] = &fx->col_b;
        d1[3] = o;
        func_1F04C0(d1);
        d2[1] = D_00221988;
        d2[0] = D_00240C30;
        d2[3] = o;
        d2[2] = D_00221938;
        func_1F05D0(fx->part, d2, 5);
        fx->ready = 1;
    }
    ang = Wrap(st->phase + 0.017000000923871994f);
    st->phase = ang;
    v = sinf(ang) * 110.0f + 145.0f;
    fx->col_a = (func_203908(v) << 24) | 0xFF8080;
    fx->col_b = (func_203908(v) << 24) | 0xFF8080;
}
