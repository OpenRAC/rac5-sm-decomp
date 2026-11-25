/* LEVEL_18:0x15CD60 -- draws a pulsing quad for the active element: the colour blends toward a fixed colour as the timer runs, with the fade as alpha. */
typedef struct {
    char pad_00[0x190];
    float phase_190;
    float fade_194;
    float timer_198;
    void *tex_19C;
} Gfx;

typedef struct {
    char pad_00[0x58];
    Gfx *gfx_58;
} Node;

typedef struct {
    char pad_00[0xF4];
    int sel_F4;
} Obj;

extern float sinf(float x);
extern Node *func_15C210(int id);
extern void func_096550(int a, int b);
extern void func_09A7C0(void *a, int b, int c, int d, int e, int f, int g, int h, int i, unsigned int col);

static __inline__ float lerpf(float a, float b, float t)
{
    return (b - a) * t + a;
}

static __inline__ float *maxRef(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_15CD60(Obj *o)
{
    Node *n;
    Gfx *g;
    float zero;
    float t;
    float sq;
    float s;
    float c0, c1, c2;
    int ia, ir, ig, ib;
    unsigned int col;

    n = func_15C210((int)o);
    if (n == 0) {
        return;
    }
    g = n->gfx_58;
    if (g->fade_194 <= 0.0f) {
        return;
    }
    func_096550(o->sel_F4 - 1, 0);
    zero = 0.0f;
    t = *maxRef(&g->timer_198, &zero);
    sq = t * t;
    s = sinf(g->phase_190) * 0.5f + 0.5f;
    c0 = s * 0.5f + 0.5f;
    c1 = s * -1.0f + 1.0f;
    c2 = s * 0.0f + 1.0f;
    ia = (int)(lerpf(c0, 1.0f, sq) * 255.9f * g->fade_194);
    ir = (int)(lerpf(c1, 0.0f, sq) * 255.9f);
    ib = (int)(lerpf(c1, 1.0f, sq) * 255.9f);
    ig = (int)(lerpf(c2, 0.0f, sq) * 255.9f);
    col = ia << 24;
    col |= ir << 16;
    col |= ig << 8;
    col |= ib;
    func_09A7C0(g->tex_19C, 0xF0, 0x88, 0x20, 0x20, 0, 0, 0x10, 0x10, col);
}
