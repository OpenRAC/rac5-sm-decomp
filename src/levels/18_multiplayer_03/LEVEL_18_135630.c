/* LEVEL_18:0x135630 -- placement copy of LEVEL_16_1365E8.c: advances a beam effect: rebuilds its two end points from the owner's position, re-registers it with the matching style flags and expires it when its timer runs out. */
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
    char pad0[4];
    unsigned short f4;
    char pad6;
    unsigned char f7;
    Owner *owner;
    float a[3];
    float b[3];
    unsigned char f24;
    char pad25;
    unsigned short f26;
    int f28;
} Beam;

typedef struct {
    unsigned short id;
    char pad2;
    unsigned char f3;
    Owner *owner;
    char pad8[0x18];
    unsigned char f20;
    char pad21;
    unsigned short f22;
} State;

struct Part {
    char pad0[0x34];
    float f34;
    char pad38[0xD];
    unsigned char f45;
    char pad46[0x12];
    Beam *beam;
    char pad5C[0x14];
    float f70;
};

extern Obj D_001DE778[];

extern void func_085D88(Obj *o, unsigned int index);
extern void func_0857A0(Obj *o, unsigned short *handle, float *a, float *b, unsigned int flags);

static __inline__ void Vec3_Add(float *r, float *a, float *b)
{
    r[0] = a[0] + b[0];
    r[1] = a[1] + b[1];
    r[2] = a[2] + b[2];
}

void func_135630(struct Part *o)
{
    float a[3];
    float c[3];
    Beam *b;
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

    b = o->beam;
    h = (State *)&b->f4;
    o->f34 += 0.04999900236725807f;
    p = h->owner;
    Vec3_Add(a, b->a, p->pos);
    Vec3_Add(c, b->b, p->pos);
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
    oa += (int)D_001DE778;
    old = (Obj *)oa;
    if (b->f4 != 0xFFFF) {
        func_085D88(old, b->f4);
        b->f4 = 0xFFFF;
    }
    h->f3 = nidx;
    func_0857A0(&D_001DE778[nidx], &h->id, a, c, style);
    o->f70 -= 1.0f;
    if (b->f28 == 0) {
        b->f28 = 1;
    }
    if (o->f70 < 0.0f) {
        o->f45 = 1;
        o->f70 = 10.000199317932129f;
    }
}
