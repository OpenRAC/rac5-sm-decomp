/* LEVEL_19:0x169FF8 -- allocates and fills a two-ended beam effect record. */
typedef struct Ext {
    float f0; float f4; void *f8; float fC; void *f10; void *f14;
    void *f18; void *f1c; unsigned char f20;
} Ext;
typedef struct Fx {
    void (*fn)(void); int pad4; unsigned int f8; float a[3]; float f18;
    unsigned int f1c; float b[3]; float f2c;
    Ext ext;
} Fx;
typedef struct Ob { char pad0[0x20]; float v[3]; } Ob;
static inline void Scale3(float *o, float *a, float k)
{
    o[0] = a[0] * k;
    o[1] = a[1] * k;
    o[2] = a[2] * k;
}

static inline void Add3(float *o, float *a, float *b)
{
    o[0] = a[0] + b[0];
    o[1] = a[1] + b[1];
    o[2] = a[2] + b[2];
}

static inline void Sub3(float *o, float *a, float *b)
{
    float n0, n1, n2;
    n0 = -b[0]; o[0] = a[0] + n0;
    n1 = -b[1]; o[1] = a[1] + n1;
    n2 = -b[2]; o[2] = a[2] + n2;
}

static inline void Mad3(float *o, float *a, float k)
{
    o[0] += a[0] * k;
    o[1] += a[1] * k;
    o[2] += a[2] * k;
}

extern unsigned short D_0024E47C;
extern Fx *func_0852D0(int a, int b, unsigned short c, int d, int e);
extern void func_16A340(void);

void func_169FF8(Ob *o, float *p, void *a2, float *s, float *r, int k)
{
    Fx *fx;
    float t[3];
    float zero;
    Ext *e;
    fx = func_0852D0(3, 1, D_0024E47C, 0, 1);
    if (!fx) return;
    e = &fx->ext;
    fx->fn = func_16A340;
    fx->f1c = 0xAAFFC000;
    fx->f8 = 0xAAFFC000;
    zero = 0.0f;
    fx->f2c = zero;
    fx->f18 = zero;
    Scale3(t, o->v, 0.25f);
    Add3(fx->a, p, t);
    Sub3(fx->b, p, t);
    Mad3(fx->a, r, 0.3f);
    Mad3(fx->b, r, 0.3f);
    Mad3(fx->a, s, -0.175f);
    Mad3(fx->b, s, -0.175f);
    e->fC = 0.25f;
    e->f8 = o;
    e->f0 = zero;
    e->f4 = 0.033333335f;
    e->f14 = a2;
    e->f1c = r;
    e->f18 = s;
    e->f10 = p;
    e->f20 = k;
}
