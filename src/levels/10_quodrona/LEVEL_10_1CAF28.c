/* LEVEL_10:0x1CAF28 -- placement copy of LEVEL_01_1C7680.c: state machine of a pickup effect: states 0/1 start it and pick the glow colour, state 2 runs it and spawns a spark along the owner's velocity, state 3 shuts it down. */
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

extern V3 D_00241FB8;
extern unsigned int D_001FCFB8;
extern char D_00233428[];

extern float func_07D0C0(void *a0);
extern void func_12DCA0(void *sub, Obj *o, void *h, void *p);
extern void func_1CB2C8(Obj *o, unsigned int color);
extern int func_12E058(void *sub, Obj *o, void *h, void *tbl);
extern void func_07D358(void *h, float a, float b, int c, int d, int e);
extern void func_1DCE70(float *src, int flag);
extern int func_0204E0(float s, float *len, Probe *pr, float *a, float *b, int c, int d, int e);
extern void func_1DCF08(int a, int b, int flag);
extern void func_069C48(char *object, unsigned int enabled);
extern void func_1CB378(Obj *o);
extern void func_12DEB8(void *sub);

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

void func_1CAF28(Obj *o)
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
        if (!(func_07D0C0(own->h59C) >= 1.1f) && own->w36C == 0x37)
            return;
        own->flags |= 0x80000000000ULL;
        func_12DCA0(st->sub, o, own->h59C, (char *)st->own + 0x60);
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
            func_1CB2C8(o, color);
        }
        o->state = 2;
        break;
    case 2:
        D_00241FB8 = o->pos;
        if (func_12E058(st->sub, o, own->h59C, D_00233428) != 0) {
            o->state = 3;
            if (st->f84 < 1.0f) {
                if (own->w36C == 0x37)
                    func_07D358(own->h59C, 0.2f, 2.6666667f, 0x37, 0, 1);
            }
        }
        if (own->w5D0 == 2 && D_001FCFB8 % 3 == 0) {
            func_1DCE70(&o->pos.x, 1);
            pr.hit = 0;
            len[0] = 50.0f;
            MulAdd(a, &o->pos.x, &own->vel.x, 0.3f);
            Neg(b, &own->vel.x);
            func_0204E0(10.0f, len, &pr, a, b, 0x28, 0, 0);
            if (pr.hit != 0) {
                MulAdd(c, a, b, len[0]);
                func_1DCF08((int)c, (int)&pr, 0);
            }
        }
        break;
    case 3:
        if (own->s100 != 0x24)
            o->state = 0;
        own->flags &= ~0x80000000000ULL;
        st->fDC = 30.0f;
        func_069C48((char *)st->own, 0);
        func_1CB378(o);
        func_12DEB8(st->sub);
        break;
    }
}
