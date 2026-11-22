/* LEVEL_08:0x1F4218 -- moves an actor and its body along the actor's axis by twice the step, re-registers the part's two tracked points with the world and passes the step on to the follow-up. */
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

typedef struct Body {
    char pad_00[0x30];
    float pos[3];
} Body;

typedef struct Part {
    Body *body;
    char pad_04[4];
    unsigned short handle;
    char pad_0A[6];
    float p10[3];
    float p1C[3];
} Part;

typedef struct Link {
    char pad_00[4];
    int w4;
} Link;

typedef struct Actor {
    char pad_00[0x20];
    float dir[3];
    char pad_2C[4];
    float pos[3];
    char pad_3C[0x18];
    Link *link;
    Part *part;
} Actor;

extern Obj D_0027E978[];

extern void func_09D778(Obj *o, unsigned int index);
extern void func_09D190(Obj *entry, Sub *sub, float *a, float *b, unsigned int flags);
extern void func_1F4DE8(float dt, int w);

static __inline__ void Scale3(float *out, float *a, float s)
{
    out[0] = s * a[0];
    out[1] = s * a[1];
    out[2] = s * a[2];
}

static __inline__ void Add3(float *a, float *b)
{
    a[0] = a[0] + b[0];
    a[1] = a[1] + b[1];
    a[2] = a[2] + b[2];
}

static __inline__ void Sum3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09D778(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1F4218(float dt, Actor *a)
{
    Part *part;
    Link *link;
    Sub *sub;
    Target *tgt;
    Desc *desc;
    Rec *rec;
    float n[4];
    float va[3];
    float vb[3];
    unsigned int f;
    unsigned int base;
    unsigned int flags;
    unsigned int kind;
    unsigned int alt;
    unsigned int all;
    float *pa;

    part = a->part;
    link = a->link;
    pa = va;
    Scale3(n, a->dir, dt + dt);
    Add3(a->pos, n);
    Add3(part->body->pos, n);
    sub = (Sub *)((char *)part + 8);
    tgt = sub->target;
    Sum3(va, part->p10, tgt->pos);
    Sum3(vb, part->p1C, tgt->pos);
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
    Release(&D_0027E978[sub->b3], &part->handle);
    sub->b3 = kind;
    func_09D190(&D_0027E978[kind], sub, pa, vb, all);
    func_1F4DE8(dt, link->w4);
}
