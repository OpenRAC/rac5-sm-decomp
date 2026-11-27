/* LEVEL_04:0x1709C0 -- integrates a velocity into a position and clamps against a limit. */
typedef struct V {
    float x, y, z;
} V;
typedef struct S {
    char pad0[0x40];
    V w;
    float f4C;
    char pad50[0xC];
    float f5C;
} S;
typedef struct O {
    char pad0[0x30];
    V p;
    char pad3C[9];
    unsigned char b45;
    char pad46[0x12];
    S *f58;
} O;
extern void func_170868(O *o);

static __inline__ void Scale3(float *out, float *in, float k)
{
    out[0] = in[0] * k;
    out[1] = in[1] * k;
    out[2] = in[2] * k;
}

static __inline__ void Add3(float *p, float *v)
{
    p[0] = p[0] + v[0];
    p[1] = p[1] + v[1];
    p[2] = p[2] + v[2];
}

void func_1709C0(O *o)
{
    S *s;
    float v[3];
    float u[3];
    float d;

    s = o->f58;
    Scale3(v, &s->w.x, 0.033333335f);
    s->f4C -= v[1];
    Add3(&o->p.x, v);
    s->w.y += -0.3266666829586029f;
    if (s->f4C >= s->f5C) {
        u[0] = 0;
        u[2] = 0;
        d = s->f4C - s->f5C;
        u[1] = d;
        o->b45 = 3;
        o->p.y += d;
    }
    func_170868(o);
}
