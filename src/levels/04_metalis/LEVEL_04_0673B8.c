/* LEVEL_04:0x0673B8 -- placement copy of LEVEL_01_065950.c: state machine step: captures a reference offset from a matrix, then applies a scaled offset and moves the sub-object. */
struct E { char pad_00[0x10]; float scale; };
struct C { char pad_00[0x1C]; struct E *e; };
struct R { char pad_00[4]; struct C *c; char pad_08[0x2C]; };
struct B { char pad_00[4]; struct R *r; };
struct Sub {
    char pad_00[0x30];
    float pos[3];
    char pad_3c[4];
    struct B *b;
    unsigned char idx;
};
struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3c[0x108 - 0x3C];
    unsigned short state;
    char pad_10a[0x59C - 0x10A];
    struct Sub *sub;
};
struct Mat { char pad_00[0x30]; float pos[3]; };
struct DT { float v[3]; char pad_0c[0x24 - 0x0C]; int w24; };

extern struct DT D_002539E0;

static __inline__ void Set3(float *d, struct Mat *m)
{
    float *s = m->pos;

    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Sub3(float *d, struct Mat *m)
{
    float *s = m->pos;

    d[0] = d[0] - s[0];
    d[1] = d[1] - s[1];
    d[2] = d[2] - s[2];
}

extern int func_07FF30(struct Sub *s, int a);
extern struct Mat *func_08EF98(int a, int b);
extern void func_132058(float *out, struct Obj *o, float *v);

void func_0673B8(struct Obj *o)
{
    struct Sub *s;
    struct Sub *s2;
    float *p;
    float *dp;
    float sc;

    if (o->state == 1 && func_07FF30(o->sub, 0) != 0) {
        Set3(D_002539E0.v, func_08EF98(1, 1));
        D_002539E0.w24 = 2;
    } else if (o->state == 2) {
        p = o->pos;
        Sub3(D_002539E0.v, func_08EF98(1, 1));
        s = o->sub;
        sc = s->b->r[s->idx].c->e->scale;
        D_002539E0.v[0] = D_002539E0.v[0] * sc;
        D_002539E0.v[1] = D_002539E0.v[1] * sc;
        D_002539E0.v[2] = D_002539E0.v[2] * sc;
        func_132058(p, o, D_002539E0.v);
        s2 = o->sub;
        dp = s2->pos;
        dp[0] = o->pos[0];
        dp[1] = p[1];
        dp[2] = p[2];
        o->state = 3;
    }
}
