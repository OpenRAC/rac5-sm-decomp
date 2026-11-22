/* LEVEL_16:0x16D950 -- registers two argument tables once, advances the sub-record's phase angle and rebuilds its two pulse colours from the sine of it. */

struct Sub16D950 {
    char pad00[0x04];
    char sub4[0x34];
    unsigned int w38;
    unsigned int w3C;
    unsigned char b40;
    char pad41[0x13];
    float f54;
};

struct Obj16D950 {
    char pad00[0x58];
    struct Sub16D950 *p58;
};

extern char D_001BE1F8[];
extern char D_001D7248[];
extern char D_001BE258[];
extern char D_001D7270[];
extern char D_001BE208[];

extern float fmodf(float x, float y);
extern float sinf(float x);
extern void func_18DED8(void **args);
extern void func_18DFE8(void *p, void **args, int n);
extern unsigned int func_196D18(float x);

static __inline__ float Wrap(float x)
{
    float r;

    r = fmodf(x, 6.2831855f);
    if (r < 0.0f) {
        r = r + 6.2831855f;
    }
    return r;
}

void func_16D950(struct Obj16D950 *o)
{
    void *a[5];
    void *b[4];
    struct Sub16D950 *s;
    float ang;
    float v;

    s = o->p58;
    if (s->b40 == 0) {
        a[4] = D_001D7248;
        a[2] = D_001BE1F8;
        a[0] = &s->w38;
        a[1] = &s->w3C;
        a[3] = o;
        func_18DED8(a);
        b[1] = D_001BE258;
        b[0] = D_001D7270;
        b[3] = o;
        b[2] = D_001BE208;
        func_18DFE8(s->sub4, b, 5);
        s->b40 = 1;
    }
    ang = Wrap(s->f54 + 0.017f);
    s->f54 = ang;
    v = sinf(ang) * 110.0f + 145.0f;
    s->w38 = (func_196D18(v) << 24) | 0x80FFFF;
    s->w3C = (func_196D18(v) << 24) | 0x40FFFF;
}
