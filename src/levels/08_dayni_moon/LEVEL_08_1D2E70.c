/* LEVEL_08:0x1D2E70 -- placement copy of LEVEL_01_1A07B8.c: three-state update: approach check, shadow handler setup and sound restart. */
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

extern Glob D_002843D0;
extern unsigned char g_bRenderPlayerShadow;
extern void SND_StartSoundThread__Fv(void);
extern void func_0174A8(Node *a, char *b, Node *c, char *d, float f0, float f1, float f2, float f3,
                        float f4, float f5, float f6, float f7, float f8);
extern void func_0C01D8(void *value);
extern int func_1439E8(int a);
extern void func_0C0280(void *a, void *b, void *c, void *d);
extern int func_08FFD8(int a);
extern int func_0B1C28(void);
extern void func_08FE38(int a);
extern void func_1D3670(Obj *o);
extern void func_1D30A0(Obj *o);
extern void func_1D20D8(void);
extern void func_070288(Glob *g, int a);
extern void func_0242E0(Glob *g, int a);
extern void func_02A620(void);

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

int func_1D2E70(Obj *o)
{
    Ent *e = o->ent;
    St *s = o->st;
    Glob *g = &D_002843D0;
    float d[3];

    switch (o->state) {
    case 0:
        func_0174A8(e->node, s->blk_b8, e->node, s->blk_f8, e->f68, e->f6c, e->f70, e->f74, e->f78,
                    e->f7c, e->f80, e->f84, e->f88);
        vsub(d, g->pos, e->node->pos);
        if (vlen2(d) <= 64.0f) {
            if (s->b4e) {
                func_0C01D8(0);
                s->b4e = 0;
            }
            func_0C0280(0, (void *)func_1439E8(0x24B), 0, 0);
            if (!(func_08FFD8(2) & 0x1000))
                return 1;
            if (func_0B1C28())
                return 1;
            o->state = 2;
            func_08FE38(0x8000);
            s->b109 = 0;
            return 0;
        }
        s->b4e = 1;
        return 1;
    case 1:
        g_bRenderPlayerShadow = 0;
        e->node->p48->cb = func_1D20D8;
        func_1D3670(o);
        break;
    case 2:
        func_1D30A0(o);
        break;
    }
    SND_StartSoundThread__Fv();
    s->b109 = 0;
    s->b2a = 0;
    if (g->h100 == 0x23)
        func_070288(g, 0);
    func_0242E0(g, 1);
    if (s->b10a)
        s->b108 = 1;
    else
        s->b108 = 2;
    func_02A620();
    return 0;
}
