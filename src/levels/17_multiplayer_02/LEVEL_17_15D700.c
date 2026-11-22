/* LEVEL_17:0x15D700 -- draws a pulsing quad for the object's record: the colour blends from a sine pulse toward a fixed colour as the timer runs, with the fade as alpha. */
typedef struct {
    char pad_00[0x14];
    float phase_14;
    float fade_18;
    float timer_1C;
    char pad_20[4];
    int tex_24;
} Data;

typedef struct {
    char pad_00[0x58];
    Data *data_58;
} Rec;

typedef struct {
    char pad_00[0xF4];
    int count_F4;
} Obj;

extern float sinf(float x);
extern Rec *func_15B980(Obj *o);
extern void func_096A38(int a, int b);
extern void func_09ACA8(int a, int b, int c, int d, int e, int f, int g, int h, int i, unsigned int col);

static __inline__ float lerpf(float a, float b, float t)
{
    return (b - a) * t + a;
}

static __inline__ float *maxRef(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_15D700(Obj *o)
{
    Rec *r;
    Data *d;
    float zero;
    float t;
    float sq;
    float s;
    float c0, c1, c2;
    int ia, ir, ig, ib;
    unsigned int col;

    r = func_15B980(o);
    if (r == 0)
        return;
    d = r->data_58;
    if (d->fade_18 <= 0.0f)
        return;
    func_096A38(o->count_F4 - 1, 0);
    zero = 0.0f;
    t = *maxRef(&d->timer_1C, &zero);
    sq = t * t;
    s = sinf(d->phase_14) * 0.5f + 0.5f;
    c0 = s * 0.5f + 0.5f;
    c1 = s * -1.0f + 1.0f;
    c2 = s * 0.0f + 1.0f;
    ia = (int)(lerpf(c0, 1.0f, sq) * 255.9f * d->fade_18);
    ir = (int)(lerpf(c1, 0.0f, sq) * 255.9f);
    ib = (int)(lerpf(c1, 1.0f, sq) * 255.9f);
    ig = (int)(lerpf(c2, 0.0f, sq) * 255.9f);
    col = ia << 24;
    col |= ir << 16;
    col |= ig << 8;
    col |= ib;
    func_09ACA8(d->tex_24, 0xF0, 0x88, 0x20, 0x20, 0, 0, 0x10, 0x10, col);
}
