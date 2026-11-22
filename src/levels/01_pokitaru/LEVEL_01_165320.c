/* LEVEL_01:0x165320 -- on the object's end: unlinks its node from the active list, spawns the preset effect, and emits three bursts along the object's velocity. */
typedef struct Link Link;

struct Link {
    Link *next_00;
    char pad_04[0x10];
    Link *prev_14;
};

typedef struct {
    char pad_00[0x78];
    Link link_78;
} Node;

typedef struct {
    char pad_00[0x10];
    float v_10[3];
    char pad_1C[0x14];
    float p_30[3];
    char pad_3C[0x1C];
    Node *node_58;
} Obj;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Preset;

typedef struct {
    int a;
    int b;
    int c;
    int *p;
    int w;
    float one;
    float t;
    int *q;
} Init;

extern float D_0020763C;
extern int D_0021FE00[];
extern int D_0021FE38[];

extern Preset *func_024238(int id);
extern void func_0809D0(Obj *o, Preset *p, int a, int b, int c, int d, int e, int f, float f0, float f1, float f2, float f3);
extern void func_100DE0(int frames, float *pos, float f0, int n, float f1);

static __inline__ void Mad3(float *r, float *p, float *v, float k)
{
    r[0] = p[0] + v[0] * k;
    r[1] = p[1] + v[1] * k;
    r[2] = p[2] + v[2] * k;
}

void func_165320(Obj *o)
{
    Link *l;
    Preset *p;
    struct {
        float pos[3];
        Init init;
    } loc;

    l = &o->node_58->link_78;
    if (l->prev_14 != 0) {
        l->prev_14->next_00 = l->next_00;
        if (l->next_00 != 0)
            l->next_00->prev_14 = l->prev_14;
        l->prev_14 = 0;
    }
    loc.init.q = D_0021FE00;
    loc.init.t = o->p_30[1];
    loc.init.one = 1.0f;
    loc.init.p = D_0021FE38;
    loc.init.w = 0;
    loc.init.a = 0;
    loc.init.b = 0;
    loc.init.c = 0;
    p = func_024238(6);
    if (p != 0)
        func_0809D0(o, p, 0, 0, 0, 0, 0, 1, p->f_14, p->f_18, p->f_1C, p->f_20);
    Mad3(loc.pos, o->p_30, o->v_10, 0.16500000655651093f);
    func_100DE0((int)D_0020763C, loc.pos, 0.0f, 3, 0.0f);
    Mad3(loc.pos, o->p_30, o->v_10, 0.33000001311302185f);
    func_100DE0((int)D_0020763C, loc.pos, 0.0f, 3, 0.0f);
    Mad3(loc.pos, o->p_30, o->v_10, 0.550000011920929f);
    func_100DE0((int)D_0020763C, loc.pos, 0.0f, 3, 0.0f);
}
