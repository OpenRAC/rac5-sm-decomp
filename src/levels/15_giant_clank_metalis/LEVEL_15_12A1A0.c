/* LEVEL_15:0x12A1A0 -- advances emitter accumulators, spawns normalized point emissions, and updates phase, offsets, 2D rotation, and clamped timer. */
extern float floorf(float x);
extern float sqrtf(float x);
extern float fabsf(float x);

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 pos;
    float f0C;
    float f10;
    Vec3 norm;
    float f20;
    float f24;
} EmitArg;

typedef struct {
    float accum;
    char sub04[0x30];
} Channel;

typedef struct {
    Channel ch[2];
    float f68;
    float f6C;
    float f70;
    int pad74;
    float f78;
    float f7C;
    float f80;
} State;

typedef struct {
    float rate;
    float f04;
    float f08;
    float f0C;
    float f10;
    char pad14[0xBC - 0x14];
} SubCfg;

typedef struct {
    Vec3 *pts;
    int count;
    SubCfg sub[2];
    char pad180[0x190 - 0x180];
    float f190;
    char pad194[0x1C4 - 0x194];
    float f1C4;
    float f1C8;
    char pad1CC[0x1EC - 0x1CC];
    float f1EC;
    float mat[4];
} Cfg;

typedef struct {
    Cfg *cfg;
    float scale[2];
} Input;

extern void func_129918(char *sub04, EmitArg *arg, int n, float a, float b);

static __inline__ void Rotate2D(State *s, float *mat)
{
    float dx = s->f7C - 1.0f;
    float dy = s->f80;
    float nx = mat[0] * dx + mat[1] * dy + 1.0f;
    float ny = mat[2] * dx + mat[3] * dy;
    s->f80 = ny;
    s->f7C = nx;
}

void func_12A1A0(State *a0, Input *a1)
{
    EmitArg arg;
    Cfg *cfg;
    unsigned int i;
    float f1;
    float t;

    cfg = a1->cfg;
    for (i = 0; i < 2; i++) {
        float prev = a0->ch[i].accum;
        float total = prev + cfg->sub[i].rate;
        float fl = floorf(total);
        if (fl > 0.0f) {
            float rem = total - fl;
            float s = a1->scale[i];
            float first = (1.0f - prev) * s;
            Vec3 *p;
            Vec3 *end;

            arg.f0C = cfg->sub[i].f04;
            arg.f10 = cfg->sub[i].f08;
            arg.f20 = cfg->sub[i].f0C;
            arg.f24 = cfg->sub[i].f10;
            p = cfg->pts;
            end = p + cfg->count;
            if (p != end) {
                int n = (int)fl;
                do {
                    float inv;
                    arg.pos = *p;
                    inv = 1.0f / sqrtf(p->x * p->x + p->y * p->y + p->z * p->z);
                    arg.norm.x = inv * p->x;
                    arg.norm.y = inv * p->y;
                    arg.norm.z = inv * p->z;
                    func_129918(a0->ch[i].sub04, &arg, n, first, s);
                    p++;
                } while (p != end);
            }
            a0->ch[i].accum = rem;
        } else {
            a0->ch[i].accum = total;
        }
    }
    f1 = a0->f68 + cfg->f190;
    a0->f68 = f1;
    if (f1 < 0.0f) {
        a0->f68 = f1 + 1.0f;
    } else if (f1 > 1.0f) {
        a0->f68 = f1 - 1.0f;
    }
    a0->f6C += cfg->f1C4;
    a0->f70 += cfg->f1C8;
    Rotate2D(a0, cfg->mat);
    t = a0->f78 - cfg->f1EC;
    a0->f78 = (t + fabsf(t)) * 0.5f;
}
