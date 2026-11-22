/* LEVEL_24:0x068AF8 -- placement copy of LEVEL_01_06F4B8.c: fills one segment record of an emitter: its time span, kind and, unless it is the centre segment, random offsets. */
typedef struct {
    unsigned int count;
    char pad_04[0x1C];
    int mode;
    int kind;
    char pad_28[4];
    float f2C;
    float f30;
    char pad_34[8];
    float f3C;
    float f40;
} Cfg;

typedef struct {
    float t0;
    float t1;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    unsigned char flag;
    unsigned char idx;
    unsigned char type;
    unsigned char on;
} Seg;

typedef struct {
    char pad_00[0x20];
    Cfg *cfg;
    char pad_24[0xC];
    unsigned char state;
} Obj;

extern int rand(void);
extern Seg *func_0905B8(int *out, Obj *o, int n);

static __inline__ float Rnd(float lo, float hi)
{
    float d;

    d = hi - lo;
    return lo + d * ((float)rand() * 4.6566128730773926e-10f);
}

Seg *func_068AF8(Obj *o, unsigned int idx, unsigned char flag)
{
    Cfg *cfg;
    Seg *s;
    int n;
    float step;

    cfg = o->cfg;
    n = 0;
    s = func_0905B8(&n, o, 1);
    if (s == 0) {
        o->state = 3;
        return 0;
    }
    step = 1.0f / (float)cfg->count;
    if (flag == 1 && cfg->mode == 2) {
        float u = (float)(idx + 1) * step;
        s->t1 = u;
        s->t0 = u - step;
    } else {
        float w = (float)idx * step;
        s->t0 = w;
        s->t1 = w + step;
    }
    if (cfg->kind == 0) {
        s->type = 6;
    } else if (cfg->kind == 4) {
        s->type = 7;
    } else if (cfg->kind == 1) {
        s->type = 3;
    } else if (cfg->kind == 2) {
        if (idx < cfg->count >> 1)
            s->type = 3;
        else
            s->type = 4;
    } else if (cfg->kind == 3) {
        if (idx >= cfg->count >> 1)
            s->type = 3;
        else
            s->type = 4;
    }
    s->flag = flag;
    s->on = 1;
    s->f1C = 0.0f;
    s->f08 = 0.0f;
    s->idx = idx;
    if (idx == cfg->count || (float)idx == (float)cfg->count * 0.5f - 1.0f) {
        s->f10 = s->f0C = s->f14 = s->f18 = s->f20 = 0.0f;
    } else {
        s->f0C = Rnd(-cfg->f30, cfg->f30);
        s->f10 = Rnd(-cfg->f2C, cfg->f2C);
        s->f20 = Rnd(cfg->f3C, cfg->f40);
        s->f14 = Rnd(-cfg->f30, cfg->f30);
        s->f18 = Rnd(-cfg->f2C, cfg->f2C);
    }
    return s;
}
