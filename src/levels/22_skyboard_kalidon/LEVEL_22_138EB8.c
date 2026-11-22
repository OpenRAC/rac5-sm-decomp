/* LEVEL_22:0x138EB8 -- placement copy of LEVEL_01_1C7680.c: state machine of a pickup effect: states 0/1 start it and pick the glow colour, state 2 runs it and spawns a spark along the owner's velocity, state 3 shuts it down. */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Owner {
    char pad0[0x10];
    V3 vel;
    char pad1C[0x100 - 0x1C];
    short s100;
    char pad102[0x36C - 0x102];
    int w36C;
    char pad370[0x59C - 0x370];
    void *h59C;
    char pad5A0[0x5D0 - 0x5A0];
    int w5D0;
    char pad5D4[0x960 - 0x5D4];
    unsigned long long flags;
} Owner;

typedef struct St {
    Owner *own;
    char sub[0x80];
    float f84;
    char pad88[0xDC - 0x88];
    float fDC;
} St;

typedef struct Obj {
    char pad0[0x30];
    V3 pos;
    char pad3C[0x46 - 0x3C];
    unsigned char state;
    char pad47[0x58 - 0x47];
    St *st;
} Obj;

typedef struct Probe {
    int w[5];
    int hit;
    int w6[2];
} Probe;

extern V3 D_0018A7B8;
extern unsigned int D_00153338;
extern char D_0017C6F8[];

extern float func_06F590(void *a0);
extern void func_107310(void *sub, Obj *o, void *h, void *p);
extern void func_139258(Obj *o, unsigned int color);
extern int func_1076C8(void *sub, Obj *o, void *h, void *tbl);
extern void func_06F718(void *h, float a, float b, int c, int d, int e);
extern void func_13DFF8(float *src, int flag);
extern int func_01C3D0(float s, float *len, Probe *pr, float *a, float *b, int c, int d, int e);
extern void func_13E090(int a, int b, int flag);
extern void func_060A20(char *object, unsigned int enabled);
extern void func_139308(Obj *o);
extern void func_107528(void *sub);

static __inline__ void MulAdd(float *d, float *p, float *v, float s)
{
    d[0] = p[0] + v[0] * s;
    d[1] = p[1] + v[1] * s;
    d[2] = p[2] + v[2] * s;
}

static __inline__ void Neg(float *d, float *s)
{
    d[0] = -s[0];
    d[1] = -s[1];
    d[2] = -s[2];
}

void func_138EB8(Obj *o)
{
    St *st;
    Owner *own;
    unsigned int color;
    int w;
    Probe pr;
    float a[4];
    float b[4];
    float c[4];
    float len[4];

    st = o->st;
    own = st->own;
    switch (o->state) {
    case 0:
    case 1:
        if (!(func_06F590(own->h59C) >= 1.1f) && own->w36C == 0x37)
            return;
        own->flags |= 0x80000000000ULL;
        func_107310(st->sub, o, own->h59C, (char *)st->own + 0x60);
        w = own->w5D0;
        if (w != 1 && w != 0xD) {
            color = 0xAA22AADD;
            if (w == 6 || w == 0xC || w == 4)
                color = 0xFFFFFF89;
            else if (w == 5)
                color = 0xFF002080;
            else if (w == 3 || w == 9)
                color = 0xFFC47AAB;
            else if (w == 2 || w == 10)
                color = 0xFF558C70;
            func_139258(o, color);
        }
        o->state = 2;
        break;
    case 2:
        D_0018A7B8 = o->pos;
        if (func_1076C8(st->sub, o, own->h59C, D_0017C6F8) != 0) {
            o->state = 3;
            if (st->f84 < 1.0f) {
                if (own->w36C == 0x37)
                    func_06F718(own->h59C, 0.2f, 2.6666667f, 0x37, 0, 1);
            }
        }
        if (own->w5D0 == 2 && D_00153338 % 3 == 0) {
            func_13DFF8(&o->pos.x, 1);
            pr.hit = 0;
            len[0] = 50.0f;
            MulAdd(a, &o->pos.x, &own->vel.x, 0.3f);
            Neg(b, &own->vel.x);
            func_01C3D0(10.0f, len, &pr, a, b, 0x28, 0, 0);
            if (pr.hit != 0) {
                MulAdd(c, a, b, len[0]);
                func_13E090((int)c, (int)&pr, 0);
            }
        }
        break;
    case 3:
        if (own->s100 != 0x24)
            o->state = 0;
        own->flags &= ~0x80000000000ULL;
        st->fDC = 30.0f;
        func_060A20((char *)st->own, 0);
        func_139308(o);
        func_107528(st->sub);
        break;
    }
}
