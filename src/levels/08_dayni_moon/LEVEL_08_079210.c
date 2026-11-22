/* LEVEL_08:0x079210 -- placement copy of LEVEL_04_0755A8.c: initialises the motion of a spawned particle: random rate, start point and velocity from the emitter. */

typedef struct Src {
    char pad_00[0x1C];
    float *ptr;
    char pad_20[0x2A];
    unsigned char idx;
} Src;

typedef struct Cfg {
    char pad_00[0x1C];
    int count;
    char pad_20[0x30];
    float lo;
    float hi;
    unsigned char za;
    unsigned char zb;
} Cfg;

typedef struct Sub {
    char pad_00[8];
    float scale;
    float *dir;
    char pad_10[0xC];
    float *base;
    float rate;
    float jitter[3];
    int w_30;
    float vel[3];
} Sub;

typedef struct Part {
    char pad_00[0x20];
    float pos[3];
    char pad_2C[4];
    Sub sub;
} Part;

extern float fabsf(float x);
extern int rand(void);
extern void func_078F28(float *dst, char *src, float *p);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Add3(float *d, float *v)
{
    d[0] = d[0] + v[0];
    d[1] = d[1] + v[1];
    d[2] = d[2] + v[2];
}

static __inline__ void MulAdd(float *d, float *a, float *b, float s)
{
    d[0] = a[0] + b[0] * s;
    d[1] = a[1] + b[1] * s;
    d[2] = a[2] + b[2] * s;
}

static __inline__ float RandRange(float lo, float hi)
{
    float range;

    range = hi - lo;
    return lo + range * ((float)rand() * 4.656612873077393e-10f);
}

static __inline__ int SmallI(float x)
{
    int r = 1;

    if (!(fabsf(x) <= 1.0e-5f))
        r = 0;
    return r;
}

void func_079210(Src *a, Cfg *p, Part *o)
{
    float tmp[3];
    Sub *s;
    float hi;
    unsigned char za;
    unsigned char zb;

    if (o == 0)
        return;
    s = &o->sub;
    s->w_30 = 0;
    za = SmallI(p->lo);
    hi = p->hi;
    if (za && (zb = SmallI(hi)))
        s->rate = 0.0f;
    else
        s->rate = 0.033333335f / RandRange(p->lo, hi);
    if (a->idx == p->count - 1)
        Copy3(o->pos, a->ptr);
    else
        func_078F28(s->jitter, (char *)a, (float *)p);
    func_078F28(tmp, (char *)a, (float *)p);
    MulAdd(o->pos, s->base, s->dir, s->scale);
    Add3(o->pos, tmp);
    Copy3(s->vel, tmp);
}
