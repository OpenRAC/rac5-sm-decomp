/* LEVEL_08:0x1C2460 -- updates an attached object or transitions its state if inactive, recomputing and re-registering its pooled bounding box. */
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
    float v08[3];
    float v14[3];
    unsigned char b20;
    char pad21;
    unsigned short h22;
    char pad24[0x44 - 0x24];
    float f44;
} Rec;

typedef struct {
    char pad0[0x1C];
    float f1C;
} Cfg;

struct Obj {
    char pad0[0x20];
    float v20[4];
    float pos[3];
    char pad3C[4];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Cfg *cfg;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
};

typedef struct {
    char pad[0x68];
} Pool;

extern Pool D_0027E978[];

extern int func_084A40(Obj *o, int a);
extern int func_1C10C8(Obj *o);
extern void func_1C1258(Obj *o, int state, int next);
extern int func_0310A8(Cfg *b, Obj *a1, float *a2, int a3, float f);
extern void func_09D778(Pool *pool, unsigned int index);
extern void func_09D190(Pool *pool, Rec *slot, float *lo, float *hi, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_1C2460(Obj *o)
{
    Rec *rec;
    Cfg *cfg;
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
    float lo[4];
    float hi[4];

    if (func_084A40(o, 0) != 0) {
        int next = func_1C10C8(o);
        func_1C1258(o, o->b45, next);
        return;
    }
    rec = o->rec;
    cfg = o->cfg;
    cfg->f1C -= rec->f44;
    func_0310A8(cfg, o, o->v20, 0, cfg->f1C);
    t = rec->target;
    Add3(lo, rec->v08, t->pos);
    Add3(hi, rec->v14, t->pos);
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
    fl = f | rec->h22;
    nb = rec->b20;
    oa = rec->b3 * 0x68;
    oa += (int)D_0027E978;
    old = (Pool *)oa;
    if (rec->h0 != 0xFFFF) {
        func_09D778(old, rec->h0);
        rec->h0 = 0xFFFF;
    }
    rec->b3 = nb;
    func_09D190(&D_0027E978[nb], rec, lo, hi, fl);
}
