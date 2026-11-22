/* LEVEL_19:0x154670 -- placement copy of LEVEL_01_1BC220.c: rebuilds a beam node's two end points from its owner's position, re-registers the node with the style flags of the owner's template and the node's own bits, releasing its previous table entry first when one is held. */
typedef struct {
    char pad0[0x68];
} Obj;

typedef struct {
    char pad0[0xC];
    int fC;
    int f10;
    int f14;
    char pad18[0x1C];
} Rec;

typedef struct {
    char pad0[4];
    Rec *recs;
    char pad8[0x37];
    unsigned char f3F;
} Info;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad3C[4];
    Info *info;
    unsigned char f44;
    char pad45[0x1F];
    unsigned int flags;
} Owner;

typedef struct {
    unsigned short id;
    char pad2;
    unsigned char f3;
    Owner *owner;
    float a[3];
    float b[3];
    unsigned char f20;
    char pad21;
    unsigned short f22;
} State;

struct Part {
    char pad0[0x58];
    State *state;
};

extern Obj D_001DE578[];

extern void func_0868F0(Obj *o, unsigned int index);
extern void func_086308(Obj *o, State *handle, float *a, float *b, unsigned int flags);

static __inline__ void Vec3_Add(float *r, float *a, float *b)
{
    r[0] = a[0] + b[0];
    r[1] = a[1] + b[1];
    r[2] = a[2] + b[2];
}

void func_154670(struct Part *o)
{
    float a[3];
    float c[3];
    State *h;
    Owner *p;
    Rec *rec;
    Obj *old;
    unsigned int f;
    unsigned int flags;
    unsigned int nidx;
    unsigned int style;
    unsigned int alt;
    int oa;

    h = o->state;
    p = h->owner;
    Vec3_Add(a, h->a, p->pos);
    Vec3_Add(c, h->b, p->pos);
    flags = p->flags & 0x1420;
    rec = p->info->recs + p->f44;
    alt = flags | 1;
    f = flags | 0x81;
    if (rec->fC == 0) {
        f = alt;
    }
    if (rec->f10 != 0) {
        f |= 0x100;
    }
    if (rec->f14 != 0) {
        f |= 0x200;
    }
    if (p->info->f3F == 1) {
        f |= 0x800;
    }
    if (((p->flags >> 3) & 1) != 0) {
        f |= 0x400;
    }
    style = f | h->f22;
    nidx = h->f20;
    oa = h->f3 * 0x68;
    oa += (int)D_001DE578;
    old = (Obj *)oa;
    if (h->id != 0xFFFF) {
        func_0868F0(old, h->id);
        h->id = 0xFFFF;
    }
    h->f3 = nidx;
    func_086308(&D_001DE578[nidx], h, a, c, style);
}
