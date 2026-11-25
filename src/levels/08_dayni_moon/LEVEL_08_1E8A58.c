/* LEVEL_08:0x1E8A58 -- placement copy of LEVEL_02_1D2BF0.c: steps a beam effect object: runs the movement test of the linked object (two variants by its mode byte), then either clears the pending handle or fires the spawn effect, and finally rebuilds the beam end points, style flags and registration. */
typedef struct Slot {
    char pad0[0x68];
} Slot;

typedef struct Rec {
    char pad0[0xC];
    int fC;
    int f10;
    int f14;
    char pad18[0x1C];
} Rec;

typedef struct Info {
    char pad0[4];
    Rec *recs;
    char pad8[0x37];
    unsigned char f3F;
} Info;

typedef struct Owner {
    char pad0[0x30];
    float pos[3];
    char pad3C[4];
    Info *info;
    unsigned char f44;
    char pad45[0x1F];
    unsigned int flags;
} Owner;

typedef struct State {
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
    int f4C;
    unsigned char f50;
} State;

typedef struct Inner {
    char pad0[0x120];
    State st;
} Inner;

typedef struct Other {
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

extern int D_00264470;
typedef struct {
    float v[4];
} Vec4;

extern Vec4 D_002843D0[];
extern Slot D_0027E978[];

extern void func_16A248(int);
extern unsigned char func_0334E8(unsigned char *o, float *v, int a2, int a3);
extern int func_033668(Other *o, struct Obj *self, int y, int a, int b);
extern int func_032078(Other *o, float *v, int x);
extern int func_0321D8(Other *o, struct Obj *self, int y, int a);
extern void func_1E82D0(struct Obj *o, int a, int b);
extern void func_084C98(float a, float b, struct Obj *o, int x, int c, int d);
extern int func_1E8920(struct Obj *o);
extern void func_032B68(float *out, float *in);
extern void func_09D778(Slot *o, unsigned int index);
extern void func_09D190(Slot *o, unsigned short *handle, float *a, float *b, unsigned int flags);

static __inline__ void Vec3_Add(float *r, float *a, float *b)
{
    r[0] = a[0] + b[0];
    r[1] = a[1] + b[1];
    r[2] = a[2] + b[2];
}

static __inline__ float *CamAt(Vec4 *base)
{
    return (float *)(base + 3);
}

void func_1E8A58(struct Obj *o, int x, int y)
{
    float a[3];
    float c[3];
    float *pos;
    Vec4 *cam;
    Other *oth;
    Inner *in;
    Inner *mid;
    State *h;
    Owner *p;
    Rec *rec;
    Slot *old;
    int r;
    int st;
    unsigned int f;
    unsigned int flags;
    unsigned int nidx;
    unsigned int style;
    unsigned int alt;
    int oa;

    oth = o->other;
    in = o->inner;
    if (D_00264470 == 8) {
        func_16A248(0);
    }
    if (oth->f2F != 0) {
        func_0334E8((unsigned char *)oth, CamAt(D_002843D0), (int)o->pos, 0);
        pos = o->pos;
        r = func_033668(oth, o, y, 0, 0);
    } else {
        func_032078(oth, CamAt(D_002843D0), (int)o->pos);
        pos = o->pos;
        r = func_0321D8(oth, o, y, 0);
    }
    if (D_00264470 == 8) {
        func_16A248(1);
    }
    if (r == 0) {
        in->st.f4C = 0;
        func_1E82D0(o, o->f45, 3);
    } else {
        if (in->st.f50 != 0) {
            func_084C98(0.15f, 0.0f, o, x, 0, 1);
            in->st.f50 = 0;
        }
        st = func_1E8920(o);
        func_1E82D0(o, o->f45, st & 0xFF);
    }
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
}
