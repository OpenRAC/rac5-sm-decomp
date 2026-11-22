/* USA LEVEL_01.REL:0x1C33F0 (22 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0145D0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
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
    char pad_00[0x0C];
    float f0C;
    unsigned short handle;
    char pad_12[6];
    float p18[3];
    float p24[3];
    char pad_30[0x2C];
    float v5C[3];
    char pad_68[0x18];
    unsigned short count;
    char pad_82[6];
    unsigned char b88;
    unsigned char b89;
} Part;

typedef struct Link {
    char pad_00[0x10];
    int w10;
} Link;

typedef struct Range {
    int lo;
    int hi;
    float a_lo;
    float a_hi;
} Range;

typedef struct Owner {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x18];
    Link *link;
    Part *part;
} Owner;

extern Range D_00229570;
extern Obj D_0022F6F8[];

extern void func_0DC828(void *obj, Range *r, void *c);
extern void func_0145D0(float f, float *pos, float *dst, int w, int z);
extern void func_030AB8(Link *link, float *pos, int one);
extern void func_095858(Obj *o, unsigned int index);
extern void func_095270(Obj *entry, Sub *sub, float *a, float *b, unsigned int flags);
extern int func_07CAB8(char *a0, int a1);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095858(pool, *h);
        *h = 0xFFFF;
    }
}

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

void func_1C33F0(Owner *o)
{
    Link *link;
    Part *part;
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
    part->count++;
    if (part->f0C != -1.0f) {
        if (part->count == 0x1F) {
            func_0DC828(part, &D_00229570, 0);
        }
    }
    if (part->count == 0x22) {
        part->b89 = 1;
    }
    func_0145D0(0.2f, o->pos, part->v5C, link->w10, 0);
    func_030AB8(link, o->pos, 1);
    sub = (Sub *)((char *)part + 0x10);
    tgt = sub->target;
    Add3(a, part->p18, tgt->pos);
    Add3(b, part->p24, tgt->pos);
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
    Release(&D_0022F6F8[sub->b3], &part->handle);
    sub->b3 = kind;
    func_095270(&D_0022F6F8[kind], sub, a, b, all);
    if (func_07CAB8((char *)o, 0) != 0) {
        part->b88 = 1;
    }
}
