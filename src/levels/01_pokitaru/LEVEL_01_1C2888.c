/* LEVEL_01:0x1C2888 -- per-frame update of an attached object: counts down its timer and runs its check, then refreshes the pooled bounding box around its current target (unregistering the previous pool entry first) and picks the next state. */
typedef struct Obj Obj;

typedef struct {
    char pad0[4];
    char *ents;
    char pad8[0x3F - 8];
    unsigned char b3F;
} Model;

typedef struct {
    char pad0[0xC];
    int w0C;
    int w10;
    int w14;
} Ent;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
    Obj *target;
    char pad8[0x20 - 8];
    unsigned char b20;
    char pad21;
    unsigned short h22;
} Slot;

typedef struct {
    char pad0[0x19];
    unsigned char b19;
    char pad1A[0x1C - 0x1A];
} Rec2;

typedef struct {
    char pad0[0x10];
    unsigned short h10;
    char pad12;
    unsigned char b13;
    Obj *target;
    float v18[3];
    float v24[3];
    char pad30[0x5C - 0x30];
    float v5C[3];
    char pad68[0x80 - 0x68];
    short h80;
    char pad82[2];
    unsigned char b84;
} Rec;

typedef struct {
    char pad0[0x58];
    Rec2 *rec;
} Obj2;

typedef struct {
    char pad0[0x30];
    Obj2 *w30;
} Cfg;

struct Obj {
    char pad0[0x2C];
    char pad2C[4];
    float pos[3];
    char pad3C[4];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[2];
    char pad48[12];
    Cfg *cfg;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
};

typedef struct {
    char pad[0x68];
} Pool;

typedef struct {
    unsigned char c[4];
} Col;

extern float D_0020D840;
extern char D_00229510[];
extern Pool D_0022F6F8[];

extern int func_1C1DF8(Obj *o);
extern unsigned int func_02FF10(void *out, void *actor, void *offset, float *other, unsigned long flags, float amount);
extern void func_1C1E90(Obj *o, int arg, int mode);
extern void func_095858(Pool *pool, unsigned int index);
extern void func_095270(Pool *pool, Slot *slot, float *lo, float *hi, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_1C2888(Obj *o)
{
    Cfg *cfg;
    Rec *rec;
    Slot *s;
    Model *model;
    Ent *ent;
    Obj *t;
    Pool *old;
    unsigned int f;
    unsigned int alt;
    unsigned int base;
    unsigned int fl;
    unsigned char nb;
    unsigned int res;
    int oa;
    int x;
    float *lp;
    float lo[4];
    float hi[4];

    rec = o->rec;
    cfg = o->cfg;
    rec->h80 = rec->h80 - 1;
    if (func_1C1DF8(o) != 0) {
        func_1C1E90(o, o->b45, 3);
        return;
    }
    if (rec->h80 > 0) {
        x = rec->b84 * 0x1C;
        if (((Rec2 *)((char *)cfg->w30->rec + x))->b19 != 1) {
            goto box;
        }
    }
    func_1C1E90(o, o->b45, 0);
    return;
box:
    res = func_02FF10(cfg, o, rec->v5C, (float *)D_00229510, 0, D_0020D840);
    lp = lo;
    s = (Slot *)&rec->h10;
    t = s->target;
    Add3(lo, rec->v18, t->pos);
    Add3(hi, rec->v24, t->pos);
    model = t->model;
    ent = (Ent *)(model->ents + t->b44 * 0x34);
    base = t->flags & 0x1420;
    alt = base | 1;
    f = base | 0x81;
    if (ent->w0C == 0) {
        f = alt;
    }
    if (ent->w10 != 0) {
        f |= 0x100;
    }
    if (ent->w14 != 0) {
        f |= 0x200;
    }
    if (model->b3F == 1) {
        f |= 0x800;
    }
    if (((unsigned int)t->flags >> 3) & 1) {
        f |= 0x400;
    }
    fl = f | s->h22;
    nb = s->b20;
    oa = s->b3 * 0x68;
    oa += (int)D_0022F6F8;
    old = (Pool *)oa;
    if (rec->h10 != 0xFFFF) {
        func_095858(old, rec->h10);
        rec->h10 = 0xFFFF;
    }
    s->b3 = nb;
    func_095270(&D_0022F6F8[nb], s, lp, hi, fl);
    if (res != 1) {
        func_1C1E90(o, o->b45, 0);
    }
}
