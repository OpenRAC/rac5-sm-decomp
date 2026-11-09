/* LEVEL_06:0x067978 -- placement copy of LEVEL_01_06ABB8.c: draws a pulsing quad whose colour blends toward a fixed colour as the timer runs, with the fade as alpha. */

typedef struct {
    char pad_00[0xF4C];
    int tex_F4C;
    float fade_F50;
    float phase_F54;
    float timer_F58;
} Obj;

extern float sinf(float x);
extern void func_0A3650(int a, int b);
extern void func_0A7890(int a, int b, int c, int d, int e, int f, int g, int h, int i, unsigned int col);

static __inline__ float lerpf(float a, float b, float t)
{
    return (b - a) * t + a;
}

static __inline__ float *maxRef(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_067978(Obj *o)
{
    float zero;
    float t;
    float sq;
    float s;
    float c0, c1, c2;
    int ia, ir, ig, ib;
    unsigned int col;

    if (o->fade_F50 <= 0.0f) {
        return;
    }
    zero = 0.0f;
    t = *maxRef(&o->timer_F58, &zero);
    sq = t * t;
    s = sinf(o->phase_F54) * 0.5f + 0.5f;
    c0 = s * 0.5f + 0.5f;
    c1 = s * -1.0f + 1.0f;
    c2 = s * 0.0f + 1.0f;
    ir = (int)(lerpf(c1, 0.0f, sq) * 255.9f);
    ig = (int)(lerpf(c2, 0.0f, sq) * 255.9f);
    ib = (int)(lerpf(c1, 1.0f, sq) * 255.9f);
    ia = (int)(lerpf(c0, 1.0f, sq) * 255.9f * o->fade_F50);
    col = ia << 24;
    col |= ir << 16;
    col |= ig << 8;
    col |= ib;
    func_0A3650(0, 0);
    func_0A7890(o->tex_F4C, 0xF0, 0x88, 0x10, 0x10, 0, 0, 0x10, 0x10, col);
}
