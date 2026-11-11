/* LEVEL_17:0x16FEA8 -- per-frame update of an attached object: forwards its state to the state handler when allowed, then refreshes the pooled bounding box around its target (unregistering the previous pool entry first). */
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
    char pad0[0x1C];
    unsigned short h1C;
    char pad1E[0x24 - 0x1E];
    float v24[3];
    float v30[3];
    char pad3C[0x50 - 0x3C];
    int w50;
} Rec;

struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[4];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[2];
    char pad48[12];
    void *cfg;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
};

typedef struct {
    char pad[0x68];
} Pool;

extern char D_001C9FE8[];
extern Pool D_001CF6F8[];

extern int func_170488(void);
extern int func_16ECE0(Obj *o);
extern void func_16E838(Obj *o, int arg, int mode);
extern int func_02E428(float f, void *cfg, Obj *o, char *data, int n);
extern void func_086E80(Pool *pool, unsigned int index);
extern void func_086898(Pool *pool, Slot *slot, float *lo, float *hi, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_16FEA8(Obj *o)
{
    void *cfg;
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
    int oa;
    int st;
    float *lp;
    float lo[4];
    float hi[4];

    cfg = o->cfg;
    rec = o->rec;
    if (func_170488() == 0) {
        func_16E838(o, o->b45, 3);
        return;
    }
    st = func_16ECE0(o);
    if ((st != 0xB && st != 8) || func_02E428(0.9f, cfg, o, D_001C9FE8, 6) != 0) {
        func_16E838(o, o->b45, st & 0xFF);
    }
    lp = lo;
    s = (Slot *)&rec->h1C;
    t = s->target;
    Add3(lo, rec->v24, t->pos);
    Add3(hi, rec->v30, t->pos);
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
    oa += (int)D_001CF6F8;
    old = (Pool *)oa;
    if (rec->h1C != 0xFFFF) {
        func_086E80(old, rec->h1C);
        rec->h1C = 0xFFFF;
    }
    s->b3 = nb;
    func_086898(&D_001CF6F8[nb], s, lp, hi, fl);
}
