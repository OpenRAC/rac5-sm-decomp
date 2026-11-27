/* LEVEL_01:0x15ACC0 -- hands over to the next state while the target is in range, otherwise probes it, re-registers the part's two tracked points with the world and switches state when the probe or the follow-up check hits. */
typedef struct {
    float v[2];
    unsigned short pad8;
    unsigned short fA;
    unsigned short *next;
} Node;

typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
} Entry;

typedef struct {
    char pad60[0x60];
    Entry *entries;
    Node *nodes;
} Pool;

typedef struct Rec {
    char pad_00[0x0C];
    int a;
    int b;
    int c;
    char pad_18[0x1C];
} Rec;

typedef struct Desc {
    char pad_00[4];
    Rec *recs;
    char pad_08[0x37];
    unsigned char big;
} Desc;

typedef struct Target {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[4];
    Desc *desc;
    unsigned char idx;
    char pad_45[0x1F];
    unsigned int flags;
} Target;

typedef struct Sub {
    char pad_00[3];
    unsigned char b3;
    Target *target;
    char pad_08[0x18];
    unsigned char kind;
    char pad_21;
    unsigned short extra;
} Sub;

typedef struct Part {
    char pad_00[0x20];
    unsigned short handle;
    char pad_22[6];
    float p28[3];
    float p34[3];
} Part;

typedef struct Link {
    char pad_00[0x2C];
    int w2C;
} Link;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[9];
    unsigned char state;
    char pad_46[0x0E];
    Link *link;
    Part *part;
} Obj;

extern float D_0020D840;
extern float D_0021E9C8[];
extern Pool D_0022F6F8[];

extern int func_15D2C0(Obj *o);
extern int func_02FE68(float amount, char *out, char *actor, float *other, unsigned long flags);
extern void func_095858(Pool *o, unsigned int index);
extern void func_15C260(Obj *o, int state, int next);
extern int func_084708(int key, char *buf);
extern void func_095270(Pool *entry, Sub *sub, float *a, float *b, unsigned int flags);

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

static __inline__ void UpdateProxy(Part *part)
{
    Sub *sub;
    Target *tgt;
    Desc *desc;
    Rec *rec;
    Pool *old;
    float a[3];
    float b[3];
    unsigned int f;
    unsigned int base;
    unsigned int flags;
    unsigned int kind;
    unsigned int alt;
    unsigned int all;

    sub = (Sub *)((char *)part + 0x20);
    tgt = sub->target;
    Add3(a, part->p28, tgt->pos);
    Add3(b, part->p34, tgt->pos);
    desc = tgt->desc;
    rec = desc->recs + tgt->idx;
    f = tgt->flags;
    old = (Pool *)(sub->b3 * 0x68);
    old = (Pool *)((char *)D_0022F6F8 + (int)old);
    kind = sub->kind;
    base = f & 0x1420;
    alt = base | 1;
    flags = base | 0x81;
    if (rec->a == 0) {
        flags = alt;
    }
    if (rec->b != 0) {
        flags |= 0x100;
    }
    if (rec->c != 0) {
        flags |= 0x200;
    }
    if (desc->big == 1) {
        flags |= 0x800;
    }
    if ((f >> 3) & 1) {
        flags |= 0x400;
    }
    all = flags | sub->extra;
    if (part->handle != 0xFFFF) {
        func_095858(old, part->handle);
        part->handle = 0xFFFF;
    }
    sub->b3 = kind;
    func_095270(&D_0022F6F8[kind], sub, a, b, all);
}

void func_15ACC0(Obj *o)
{
    Link *link;
    Part *part;
    int hit;

    link = o->link;
    part = o->part;
    if (func_15D2C0(o) != 0) {
        func_15C260(o, o->state, 5);
    } else {
        hit = func_02FE68(D_0020D840, (char *)link, (char *)o, D_0021E9C8, 0);
        UpdateProxy(part);
        if (hit == 0 || func_084708(link->w2C, (char *)o->pos) != 0) {
            func_15C260(o, o->state, 0x11);
        }
    }
}
