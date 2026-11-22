/* LEVEL_10:0x1A9CB0 -- per-frame update of a beam effect: runs the attachment test against the owner, advances the countdown byte, rebuilds the two end points from the owner position, re-registers the beam with the matching style flags and then lets the owner update itself. */
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
} State;

typedef struct Inner {
    char pad0[4];
    State st;
    char pad28[0x48];
    int f70;
    char pad74[0xA];
    unsigned char f7E;
} Inner;

struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x18];
    char *info;
    Inner *inner;
};

extern char D_0022F484[];
extern Slot D_00238AF8[];

extern int func_1A93C0(struct Obj *o);
extern void func_1A8E40(struct Obj *o, int mode);
extern float func_0134B0(int a0, int a1, int a2, int a3);
extern int func_0305C0(char *info, float *pos, int *p, char *q, int z);
extern void func_095BC8(Slot *o, unsigned int index);
extern void func_0955E0(Slot *o, unsigned short *handle, float *a, float *b, unsigned int flags);
extern void func_1AA218(struct Obj *o);

static __inline__ void Vec2_Save(float *d, float *p)
{
    d[0] = p[0];
    d[1] = p[2];
}

static __inline__ void Vec3_Add(float *r, float *a, float *b)
{
    r[0] = a[0] + b[0];
    r[1] = a[1] + b[1];
    r[2] = a[2] + b[2];
}

void func_1A9CB0(struct Obj *o)
{
    float sv[2];
    float a[3];
    float c[3];
    float *lp;
    float *pos;
    float dx;
    float dz;
    char *info;
    char *q;
    Inner *in;
    State *h;
    Owner *p;
    Rec *rec;
    Slot *old;
    int r;
    unsigned int f;
    unsigned int flags;
    unsigned int nidx;
    unsigned int style;
    unsigned int alt;
    int oa;

    info = o->info;
    in = o->inner;
    r = func_1A93C0(o);
    if (r != 0x11) {
        func_1A8E40(o, r);
        return;
    }
    pos = o->pos;
    q = D_0022F484;
    Vec2_Save(sv, pos);
    func_0134B0((int)o, (int)(info + 8), (int)(info + 0xC), (int)q);
    if (func_0305C0(info, pos, &in->f70, q - 0xC, 0) == 2) {
        dx = sv[0] - pos[0];
        dz = sv[1] - pos[2];
        if (dx * dx + dz * dz <= 0.09f) {
            if (in->f7E == 0) {
                in->f7E = 0x3C;
            } else if (in->f7E == 1) {
                func_1A8E40(o, 0x14);
            }
        }
    }
    h = &in->st;
    p = h->owner;
    lp = a;
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
    oa += (int)D_00238AF8;
    old = (Slot *)oa;
    if (h->id != 0xFFFF) {
        func_095BC8(old, h->id);
        h->id = -1;
    }
    h->f3 = nidx;
    func_0955E0(&D_00238AF8[nidx], &h->id, lp, c, style);
    if (in->f7E != 0) {
        in->f7E = in->f7E - 1;
    }
    func_1AA218(o);
}
