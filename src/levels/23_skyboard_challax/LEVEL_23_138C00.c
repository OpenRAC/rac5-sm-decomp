/* LEVEL_23:0x138C00 -- placement copy of LEVEL_22_111848.c: advances a pulse phase and fires an effect and tint while it is in range. */
typedef struct {
    char pad0[0x14];
    float a, b, c, d;
} Fx;
typedef struct {
    char pad0[0x1D8];
    float phase;
    char pad1DC[8];
    float rate;
    char pad1E8[0x1FD - 0x1E8];
    unsigned char fired;
} St;
typedef struct {
    char pad0[0x58];
    St *st;
} Obj;
extern char D_002025C0[];
extern Fx *D_00363000;
extern float fmodf(float x, float y);
extern float sinf(float x);
extern void func_077DD0(Obj *o, Fx *q, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern void func_070AF8(Obj *o, int color, int a, int b);

void func_138C00(Obj *o)
{
    St *s;
    Fx *q;
    float lo;
    float hi;
    float t;

    char *d;

    d = D_002025C0;
    s = o->st;
    if (s != 0 && d != 0) {
        s->phase = s->phase + (s->rate * 4.0f + 1.0f) * 0.033333335f;
        t = fmodf(s->phase, 2.0f);
        s->phase = t;
        hi = t * 0.5f;
        lo = s->rate * 0.39999998f + 0.3f;
        if (hi <= lo) {
            if (s->fired == 0) {
                s->fired = 1;
                q = D_00363000;
                if (q != 0)
                    func_077DD0(o, q, q->a, q->b, q->c, q->d, 0, 0, 0, 0, 0, 1);
            }
            t = sinf(hi * 3.1415927f / lo);
            func_070AF8(o, (int)((t * 0.8f + 1.1f) * 128.0f) | 0xFF000000, 1, 0);
        } else {
            s->fired = 0;
        }
    }
}
