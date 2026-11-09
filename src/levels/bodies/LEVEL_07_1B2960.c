/* LEVEL_07:0x1B2960 -- placement copy of LEVEL_01_1A07B8.c: three-state update: approach check, shadow handler setup and sound restart. */
typedef struct Inner {
    char pad0[0x48];
    struct Hook *p48;
} Inner;

typedef struct Hook {
    char pad[0xDC];
    void (*cb)(void);
} Hook;

typedef struct Ent {
    char pad0[0x10];
    struct Node *node;
    char pad1[0x54];
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    float f7c;
    float f80;
    float f84;
    float f88;
} Ent;

typedef struct Node {
    char pad0[0x30];
    float pos[3];
    char pad1[0x0C];
    Hook *p48;
} Node;

typedef struct St {
    char pad0[0x2A];
    unsigned char b2a;
    char pad1[0x23];
    unsigned char b4e;
    char pad2[0x69];
    char blk_b8[0x40];
    char blk_f8[0x10];
    unsigned char b108;
    unsigned char b109;
    unsigned char b10a;
} St;

typedef struct Obj {
    char pad0[0x45];
    unsigned char state;
    char pad1[0xE];
    Ent *ent;
    St *st;
} Obj;

typedef struct Glob {
    char pad0[0x30];
    float pos[3];
    char pad1[0xC4];
    short h100;
} Glob;

extern Glob D_0024AA40;
extern unsigned char g_bRenderPlayerShadow;
extern void SND_StartSoundThread__Fv(void);
extern void func_017240(Node *a, char *b, Node *c, char *d, float f0, float f1, float f2, float f3,
                        float f4, float f5, float f6, float f7, float f8);
extern void func_0B7460(void *value);
extern int func_1354B0(int a);
extern void func_0B7508(void *a, void *b, void *c, void *d);
extern int func_08A058(int a);
extern int func_0A9330(void);
extern void func_089EB8(int a);
extern void func_1B3160(Obj *o);
extern void func_1B2B90(Obj *o);
extern void func_1B1BC8(void);
extern void func_06B748(Glob *g, int a);
extern void func_024028(Glob *g, int a);
extern void func_02A3E8(void);

static inline void vsub(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static inline float vlen2(float *v)
{
    return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}

int func_1B2960(Obj *o)
{
    Ent *e = o->ent;
    St *s = o->st;
    Glob *g = &D_0024AA40;
    float d[3];

    switch (o->state) {
    case 0:
        func_017240(e->node, s->blk_b8, e->node, s->blk_f8, e->f68, e->f6c, e->f70, e->f74, e->f78,
                    e->f7c, e->f80, e->f84, e->f88);
        vsub(d, g->pos, e->node->pos);
        if (vlen2(d) <= 64.0f) {
            if (s->b4e) {
                func_0B7460(0);
                s->b4e = 0;
            }
            func_0B7508(0, (void *)func_1354B0(0x24B), 0, 0);
            if (!(func_08A058(2) & 0x1000))
                return 1;
            if (func_0A9330())
                return 1;
            o->state = 2;
            func_089EB8(0x8000);
            s->b109 = 0;
            return 0;
        }
        s->b4e = 1;
        return 1;
    case 1:
        g_bRenderPlayerShadow = 0;
        e->node->p48->cb = func_1B1BC8;
        func_1B3160(o);
        break;
    case 2:
        func_1B2B90(o);
        break;
    }
    SND_StartSoundThread__Fv();
    s->b109 = 0;
    s->b2a = 0;
    if (g->h100 == 0x23)
        func_06B748(g, 0);
    func_024028(g, 1);
    if (s->b10a)
        s->b108 = 1;
    else
        s->b108 = 2;
    func_02A3E8();
    return 0;
}
