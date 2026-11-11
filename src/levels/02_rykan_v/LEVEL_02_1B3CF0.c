/* LEVEL_02:0x1B3CF0 -- enters state 0x12 with a launch velocity unless already in states 0x12-0x15, and refreshes the part's two tracked points with the world. */
typedef struct Entry {
    char pad_00[0x18];
    unsigned char flags;
    char pad_19[3];
} Entry;

typedef struct Obj {
    char pad_00[0x58];
    Entry *table;
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
    char pad_00[0x24];
    float p24[3];
    float p30[3];
    char pad_3C[4];
    int f40;
    char pad_44[4];
    float vel[3];
    unsigned char res;
} Part;

typedef struct Link {
    char pad_00[0x30];
    Obj *world;
    char pad_34[4];
    int f38;
} Link;

typedef struct Bin {
    char pad_00[0x68];
} Bin;

typedef struct Owner {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[9];
    unsigned char state;
    char pad_46[0x0E];
    Link *link;
    Part *part;
} Owner;

extern float D_003AEF18[3];
extern Bin D_00246BF8[];

extern int func_181020(Obj *self, Owner *owner, int extra, float f10, float f14);
extern void func_1B3F68(Owner *o, int state, int next);
extern void func_09B940(Bin *entry, Sub *sub, float *a, float *b, unsigned int flags);

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

static __inline__ void Scale3(float *out, float *a, float s)
{
    out[0] = a[0] * s;
    out[1] = a[1] * s;
    out[2] = a[2] * s;
}

int func_1B3CF0(Owner *o, int a, float *v)
{
    Part *part;

    if (o->state < 0x12 || o->state > 0x15) {
        part = o->part;
        part->f40 = a;
        Add3(D_003AEF18, v, o->pos);
        Scale3(part->vel, v, 0.033333335f);
        func_1B3F68(o, o->state, 0x12);
        return 1;
    }
    return 0;
}

void func_1B3DB8(Owner *self)
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

    link = self->link;
    part = self->part;
    part->res = func_181020(link->world, self, (int)link, 0.5f, 0.5f);
    link->f38 = 0;
    sub = (Sub *)((char *)part + 0x1C);
    tgt = sub->target;
    Add3(a, part->p24, tgt->pos);
    Add3(b, part->p30, tgt->pos);
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
    sub->b3 = kind;
    func_09B940(&D_00246BF8[kind], sub, a, b, flags | sub->extra);
    if (self->state == 1) {
        Entry *e;

        e = link->world->table + part->res;
        e->flags |= 4;
    }
}
