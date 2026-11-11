/* LEVEL_08:0x17BC10 -- placement copy of LEVEL_04_170868.c: on first use registers the object's two colour words with the update helpers, then advances the pulse phase and recomputes both colours. */

struct Reg1 {
    unsigned int *c0;
    unsigned int *c1;
    char *q;
    void *o;
    char *r;
};

struct Reg2 {
    char *a;
    char *b;
    char *c;
    void *o;
};

struct St {
    char pad_00[0x34];
    unsigned int w_34;
    unsigned int w_38;
    unsigned char b_3C;
    char pad_3D[0x50 - 0x3D];
    float f_50;
};

struct Obj {
    char pad_00[0x58];
    struct St *s_58;
};

extern char D_0026ABB8[];
extern char D_00250898[];
extern char D_0026ABE0[];
extern char D_002508F8[];
extern char D_002508A8[];

extern float fmodf(float a, float b);
extern float sinf(float a);
extern void func_21D450(struct Reg1 *r);
extern void func_21D560(struct St *s, struct Reg2 *r, int n);
extern int func_233E00(float f);

static __inline__ float WrapAngle(float x)
{
    x = fmodf(x, 6.2831855f);
    if (x < 0.0f) {
        x += 6.2831855f;
    }
    return x;
}

void func_17BC10(struct Obj *o)
{
    struct St *s;
    struct Reg1 r1;
    struct Reg2 r2;
    float a;
    float v;

    s = o->s_58;
    if (s->b_3C == 0) {
        r1.r = D_0026ABB8;
        r1.q = D_00250898;
        r1.c0 = &s->w_34;
        r1.c1 = &s->w_38;
        r1.o = o;
        func_21D450(&r1);
        r2.b = D_002508F8;
        r2.a = D_0026ABE0;
        r2.o = o;
        r2.c = D_002508A8;
        func_21D560(s, &r2, 5);
        s->b_3C = 1;
    }
    a = WrapAngle(s->f_50 + 0.017000001f);
    s->f_50 = a;
    v = sinf(a) * 110.0f + 145.0f;
    s->w_34 = (func_233E00(v) << 24) | 0xFF8080;
    s->w_38 = (func_233E00(v) << 24) | 0xFF8080;
}
