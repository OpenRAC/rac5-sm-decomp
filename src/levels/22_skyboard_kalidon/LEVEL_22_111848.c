/* LEVEL_22:0x111848 -- advances a pulse phase and fires an effect and tint while it is in range. */
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
extern char D_00186D40[];
extern Fx *D_002E73E8;
extern float fmodf(float x, float y);
extern float sinf(float x);
extern void func_0733A8(Obj *o, Fx *q, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern void func_06C1E0(Obj *o, int color, int a, int b);

void func_111848(Obj *o)
{
    St *s;
    Fx *q;
    float lo;
    float hi;
    float t;

    char *d;

    d = D_00186D40;
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
                q = D_002E73E8;
                if (q != 0)
                    func_0733A8(o, q, q->a, q->b, q->c, q->d, 0, 0, 0, 0, 0, 1);
            }
            t = sinf(hi * 3.1415927f / lo);
            func_06C1E0(o, (int)((t * 0.8f + 1.1f) * 128.0f) | 0xFF000000, 1, 0);
        } else {
            s->fired = 0;
        }
    }
}
