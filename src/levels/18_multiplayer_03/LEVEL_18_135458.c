/* LEVEL_18:0x135458 -- placement copy of LEVEL_16_136410.c: re-registers an emitter's effect record at its owner's position (world-space start and end points, packed flag bits), then ticks the object's timers. */
typedef struct {
    float x, y, z;
} Vec3;

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
} Chain;

typedef struct {
    char pad60[0x60];
    Chain *entries;
    Node *nodes;
} Obj;

typedef struct {
    char pad00[0xC];
    int w0C;
    int w10;
    int w14;
    char pad18[0x1C];
} Entry;

typedef struct {
    char pad00[4];
    Entry *tbl;
    char pad08[0x37];
    unsigned char cat;
} Kind;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[4];
    Kind *kind;
    unsigned char idx;
    char pad45[0x1F];
    unsigned int flags;
} Owner;

typedef struct {
    unsigned short id;
    unsigned char pad02;
    unsigned char slot;
    Owner *owner;
    Vec3 p0;
    Vec3 p1;
    unsigned char sel;
    unsigned char pad21;
    unsigned short extra;
} Link;

typedef struct {
    char pad00[4];
    Link link;
} Emit;

typedef struct {
    char pad00[0x34];
    float f34;
    char pad38[0x20];
    Emit *emit;
    char pad5C[0x14];
    float f70;
} Thing;

extern Obj D_001DE778[];

extern void func_085D88(Obj *o, unsigned int index);
extern void func_0857A0(Obj *o, Link *l, Vec3 *a, Vec3 *b, unsigned int bits);

static __inline__ void Add3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x + b->x;
    d->y = a->y + b->y;
    d->z = a->z + b->z;
}

void func_135458(Thing *t)
{
    Emit *e;
    Link *l;
    Owner *own;
    Vec3 a;
    Vec3 b;
    Entry *ent;
    unsigned int fl;
    unsigned int keep;
    unsigned int bits;
    unsigned int sel;
    unsigned int flags;
    Obj *old;
    int oa;

    e = t->emit;
    t->f34 = t->f34 - 0.049999002f;
    l = &e->link;
    own = l->owner;
    Add3(&a, &e->link.p0, &own->pos);
    Add3(&b, &e->link.p1, &own->pos);
    fl = own->flags;
    ent = own->kind->tbl + own->idx;
    keep = fl & 0x1420;
    bits = keep | 0x81;
    keep |= 1;
    if (ent->w0C == 0) {
        bits = keep;
    }
    if (ent->w10 != 0) {
        bits |= 0x100;
    }
    if (ent->w14 != 0) {
        bits |= 0x200;
    }
    if (own->kind->cat == 1) {
        bits |= 0x800;
    }
    if ((fl >> 3) & 1) {
        bits |= 0x400;
    }
    flags = bits | l->extra;
    sel = l->sel;
    oa = l->slot * 0x68;
    oa += (int)D_001DE778;
    old = (Obj *)oa;
    if (e->link.id != 0xFFFF) {
        func_085D88(old, e->link.id);
        e->link.id = 0xFFFF;
    }
    l->slot = sel;
    func_0857A0(&D_001DE778[sel], l, &a, &b, flags);
    t->f70 = t->f70 - 1.0f;
    if (t->f70 < 0.0f) {
        t->f70 = 0.0f;
    }
}
