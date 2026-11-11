/* LEVEL_01:0x15A800 -- per-frame update of an attached object: when its state allows, tests the attachment, then refreshes the pooled bounding box around its target (unregistering the previous pool entry first); otherwise forwards the state code. */
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
    char pad0[0x20];
    unsigned short h20;
    char pad22;
    unsigned char b23;
    Obj *target;
    float v28[3];
    float v34[3];
} Rec;

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
    char *cfg;
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

extern char D_0021E998[];
extern Col D_0021EA38;
extern Pool D_0022F6F8[];

extern int func_07CE40(char *a0);
extern int func_15C960(Obj *a);
extern int func_030B38(char *cfg, Obj *o, char *data, Col col, int z);
extern void func_15C260(Obj *o, int arg, int mode);
extern void func_095858(Pool *pool, unsigned int index);
extern void func_095270(Pool *pool, Slot *slot, float *lo, float *hi, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_15A800(Obj *o)
{
    char *cfg;
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
    int r1;
    int r2;
    Col col;
    float lo[4];
    float hi[4];
    float *lp;

    r1 = func_07CE40((char *)o);
    r2 = func_15C960(o);
    if (r2 == 0xB || r1 == 10 || r1 == 8 || r1 == 9) {
        cfg = o->cfg;
        col = D_0021EA38;
        rec = o->rec;
        if (func_030B38(cfg, o, D_0021E998, col, 0) != 0) {
            func_15C260(o, o->b45, 0xC);
        }
        s = (Slot *)&rec->h20;
        t = s->target;
        Add3(lo, rec->v28, t->pos);
        Add3(hi, rec->v34, t->pos);
        model = t->model;
        ent = (Ent *)(model->ents + t->b44 * 0x34);
        lp = lo;
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
        if (rec->h20 != 0xFFFF) {
            func_095858(old, rec->h20);
            rec->h20 = 0xFFFF;
        }
        s->b3 = nb;
        func_095270(&D_0022F6F8[nb], s, lp, hi, fl);
    } else {
        func_15C260(o, o->b45, r2 & 0xFF);
    }
}
