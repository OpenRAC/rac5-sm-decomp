/* LEVEL_19:0x155398 -- counts a timer down, switches state when a probe hits or the timer runs out, and otherwise re-registers the part's two tracked points with the world. */
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
    unsigned short handle;
    char pad_02[6];
    float p08[3];
    float p14[3];
    char pad_20[0x20];
    int w40;
    char pad_44[0xC];
    unsigned char b50;
} Part;

typedef struct Link {
    char pad_00[0x2C];
    int w2C;
    char *p30;
} Link;

typedef struct Hit {
    char pad_00[0x59C];
    int w59C;
} Hit;

typedef struct Owner {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[9];
    unsigned char state;
    char pad_46[0x0E];
    Link *link;
    Part *part;
    char pad_5C[0x14];
    float timer;
} Owner;

extern char D_001D5990[];
extern Obj D_001DE578[];

extern Hit *func_113128(float *pos, int w, int z);
extern int func_145010(char *a0, unsigned int a1, char *a2);
extern void func_0868F0(Obj *o, unsigned int index);
extern void func_154A90(Owner *o, int state, int next);
extern void func_086308(Obj *entry, Sub *sub, float *a, float *b, unsigned int flags);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_0868F0(pool, *h);
        *h = 0xFFFF;
    }
}

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

static __inline__ unsigned char Grab(Owner *o, Link *link, Part *part)
{
    Hit *hit;
    int w;

    hit = func_113128(o->pos, link->w2C, 0);
    if (hit != 0) {
        w = hit->w59C;
        if (w != 0) {
            part->w40 = w;
            return 1;
        }
    }
    return 0;
}

void func_155398(Owner *o)
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

    link = o->link;
    part = o->part;
    o->timer = o->timer - 1.0f;
    if (Grab(o, link, part)) {
        func_154A90(o, o->state, 7);
    } else if (o->timer <= 0.0f) {
        func_154A90(o, o->state, 3);
    } else {
        if (func_145010(link->p30, part->b50, D_001D5990) != 0) {
            func_154A90(o, o->state, 3);
        }
        sub = (Sub *)part;
        tgt = sub->target;
        Add3(a, part->p08, tgt->pos);
        Add3(b, part->p14, tgt->pos);
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
        Release(&D_001DE578[sub->b3], &part->handle);
        sub->b3 = kind;
        func_086308(&D_001DE578[kind], sub, a, b, all);
    }
}
