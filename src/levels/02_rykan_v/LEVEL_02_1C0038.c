/* LEVEL_02:0x1C0038 -- counts a hit timer down, re-picks its pose when it runs out or the probe fails, and re-registers the part's two tracked points with the world. */
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
} Obj;

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
    char pad_00[0x44];
    unsigned short handle;
    char pad_46[6];
    float p4C[3];
    float p58[3];
    char pad_64[0x2E];
    unsigned char timer;
    unsigned char side;
} Part;

typedef struct Owner {
    char pad_00[0x54];
    char *link;
    Part *part;
} Owner;

extern float D_002227C0;
extern float D_0023E648[];
extern Obj D_00246BF8[];

extern void func_030820(float amount, char *out, char *actor, float *other, unsigned long flags);
extern void func_09BF28(Obj *o, unsigned int index);
extern int func_1BF9A8(Owner *o);
extern void func_1BEE60(Owner *o, int a, int b);
extern void func_09B940(Obj *entry, Sub *sub, float *a, float *b, unsigned int flags);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09BF28(pool, *h);
        *h = 0xFFFF;
    }
}

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

void func_1C0038(Owner *o)
{
    Part *part;
    char *link;
    Sub *sub;
    Target *tgt;
    Desc *desc;
    Rec *rec;
    float a[3];
    float b[3];
    unsigned int f;
    unsigned int base;
    unsigned int flags;
    unsigned int kind;
    unsigned int alt;
    unsigned int all;

    part = o->part;
    link = o->link;
    part->timer--;
    if ((float)part->timer <= 0.0f || ((int (*)(float, char *, char *, float *, unsigned long))func_030820)(D_002227C0, link, (char *)o, D_0023E648, 0) != 1) {
        part->side = 3 - part->side;
        func_1BEE60(o, 0xFF, func_1BF9A8(o));
    }
    sub = (Sub *)((char *)part + 0x44);
    tgt = sub->target;
    Add3(a, part->p4C, tgt->pos);
    Add3(b, part->p58, tgt->pos);
    desc = tgt->desc;
    rec = desc->recs + tgt->idx;
    f = tgt->flags;
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
    Release(&D_00246BF8[sub->b3], &part->handle);
    sub->b3 = kind;
    func_09B940(&D_00246BF8[kind], sub, a, b, all);
}
