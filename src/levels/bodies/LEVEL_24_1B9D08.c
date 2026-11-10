/* LEVEL_24:0x1B9D08 -- placement copy of LEVEL_08_2303D8.c: placement copy of LEVEL_01_1E9030.c: advances two phase accumulators and emits the whole steps through a callback. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Ctx {
    void *a;
    void *b;
    void *c;
    float t;
} Ctx;

typedef struct Rate {
    float lo;
    float hi;
    void *tag;
    char pad[0x70];
} Rate;

typedef struct Rec {
    char b[0x18];
} Rec;

typedef struct Src {
    char pad0[0xB0];
    Rate r[2];
} Src;

typedef struct Dst {
    char pad0[0x60];
    float ph[2];
} Dst;

extern V3 D_001E8BD8;
extern V3 D_001E8C18;
extern float floorf(float x);
extern void func_0FC988(void *a, void *b, int c);
extern void func_1B99E0(int r, Ctx *c, int n, float f, float g);

void func_1B9D08(Dst *dst, Src *src, Rec *out, float t)
{
    V3 pts[2];
    Ctx ctx;
    unsigned i;
    float *php;
    Rec *o;

    func_0FC988(dst, (char *)src + 0x10, 2);
    pts[0].x = D_001E8BD8.x;
    pts[0].y = D_001E8BD8.y;
    pts[0].z = D_001E8BD8.z;
    pts[1].x = D_001E8C18.x;
    pts[1].y = D_001E8C18.y;
    pts[1].z = D_001E8C18.z;
    ctx.a = pts;
    ctx.b = pts;
    ctx.t = t;
    o = out;
    php = dst->ph;
    for (i = 0; i < 2; o++, php++, i++) {
        float lo;
        float v;
        float inv;
        float p, q, n;

        lo = src->r[i].lo;
        ctx.c = &src->r[i].tag;
        v = (src->r[i].hi - lo) * t + lo;

        if (v != 0.0f)
            inv = 1.0f / v;
        else
            inv = 0.0f;
        p = *php;
        q = p + v;
        n = floorf(q);
        if (n > 0.0f) {
            func_1B99E0((int)o, &ctx, (int)n, (1.0f - p) * inv, inv);
            *php = q - n;
        } else {
            *php = q;
        }
    }
}
