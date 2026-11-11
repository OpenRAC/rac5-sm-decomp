/* LEVEL_08:0x1E7CC8 -- placement copy of LEVEL_02_1D1E60.c: refreshes a beam effect: copies the anchor point, rebuilds the two end points from the owner's position, re-registers it with the matching style flags, then updates the linked object and releases the pending handle. */
typedef struct {
    char pad0[0x68];
} Slot;

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
    float d[4];
    float c[3];
    int f40;
    int f44;
    int f48;
} State;

typedef struct {
    char pad0[0x120];
    State st;
} Inner;

typedef struct {
    char pad0[0x2F];
    unsigned char f2F;
} Other;

struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[9];
    unsigned char f45;
    char pad46[0xE];
    Other *other;
    Inner *inner;
};

extern Slot D_0027E978[];

extern void func_032B68(float *out, float *in);
extern void func_09D778(Slot *o, unsigned int index);
extern void func_09D190(Slot *o, unsigned short *handle, float *a, float *b, unsigned int flags);
extern unsigned char func_033BF0(char *a0, int a1, int a2);
extern void func_032820(Other *o, float *p);
extern void func_1E82D0(struct Obj *o, int a, int b);
extern void func_0845F8(int p, int mode);

static __inline__ void Vec3_Copy(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Vec3_Add(float *r, float *a, float *b)
{
    r[0] = a[0] + b[0];
    r[1] = a[1] + b[1];
    r[2] = a[2] + b[2];
}

void func_1E7CC8(struct Obj *o)
{
    float a[4];
    float c[4];
    float *pos;
    Inner *in;
    Inner *mid;
    Other *oth;
    State *h;
    Owner *p;
    Rec *rec;
    Slot *old;
    unsigned int f;
    unsigned int flags;
    unsigned int nidx;
    unsigned int alt;
    int oa;
    unsigned int style;

    pos = o->pos;
    in = o->inner;
    oth = o->other;
    in->st.f44 = 0;
    in->st.f40 = 0;
    Vec3_Copy(pos, in->st.c);
    mid = o->inner;
    func_032B68(pos, mid->st.d);
    h = &mid->st;
    p = h->owner;
    Vec3_Add(a, mid->st.a, p->pos);
    Vec3_Add(c, mid->st.b, p->pos);
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
    oa += (int)D_0027E978;
    old = (Slot *)oa;
    if (mid->st.id != 0xFFFF) {
        func_09D778(old, mid->st.id);
        mid->st.id = -1;
    }
    h->f3 = nidx;
    func_09D190(&D_0027E978[nidx], &h->id, a, c, style);
    if (oth->f2F != 0) {
        func_033BF0((char *)oth, (int)pos, 0);
    } else {
        func_032820(oth, pos);
    }
    func_1E82D0(o, o->f45, 0);
    if (in->st.f48 != 0) {
        func_0845F8(in->st.f48, 1);
        in->st.f48 = 0;
    }
}
