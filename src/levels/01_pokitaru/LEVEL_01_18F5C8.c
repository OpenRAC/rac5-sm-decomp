/* LEVEL_01:0x18F5C8 -- per-frame update of an attached object: either clears two record bytes and forwards a helper result as the next state, or lowers a byte counter in the configuration; then refreshes the pooled bounding box of its record (unlinking the previous registration). */
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
    char pad0[0x2C];
    unsigned char b2C;
    unsigned char b2D;
} Cfg;

typedef struct Reg Reg;
struct Reg {
    Reg *next;
    char pad4[0xB];
    unsigned char bF;
    Obj *w10;
    Reg **prev;
};

typedef struct {
    char pad0[0x450];
    Reg reg;
    char pad468[0x4F9 - 0x468];
    unsigned char b4F9;
    char pad4FA[2];
    unsigned char b4FC;
} Outer;

typedef struct {
    char pad[0x68];
} Pool;

struct Obj {
    char pad0[0x30];
    char pos[0x10];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[2];
    char pad48[12];
    Cfg *cfg;
    Outer *rec;
    char pad5C[8];
    unsigned int flags;
};

extern char D_00223E30[];
extern Pool D_0022F6F8[];

extern int func_18F7D0(void);
extern int func_0321B8(Cfg *cfg, Obj *o, char *data, int z);
extern int func_18EFC0(Obj *p);
extern void func_18EBB0(Obj *p, int a, int b);
extern void func_032890(Cfg *cfg, char *pos, int v);
extern int func_081D90(float *lo, float *hi, Obj *o);
extern void func_095570(Pool *pool, Reg *reg, float *lo, float *hi, unsigned int flags);

static __inline__ void Unlink(Reg *n)
{
    if (n->prev != 0) {
        *n->prev = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
}

void func_18F5C8(Obj *o)
{
    Cfg *cfg;
    Outer *out;
    Reg *reg;
    Model *model;
    Ent *ent;
    unsigned int f;
    unsigned int alt;
    unsigned int fb;
    unsigned int fl;
    unsigned int idx;
    unsigned int n;
    int r;
    int v;
    int big;
    int idx2;
    float *lp;
    float dx;
    float dz;
    float lo[4];
    float hi[4];

    cfg = o->cfg;
    out = o->rec;
    r = func_18F7D0();
    if (func_0321B8(cfg, o, D_00223E30, 0) == 0 && r == 0) {
        out->b4F9 = 0;
        out->b4FC = 0;
        v = func_18EFC0(o);
        func_18EBB0(o, o->b45, v & 0xFF);
    } else {
        n = cfg->b2D;
        if (n < cfg->b2C) {
            cfg->b2C = n;
            func_032890(cfg, o->pos, cfg->b2C);
        }
    }
    idx = o->b44;
    model = o->model;
    ent = (Ent *)(model->ents + idx * 0x34);
    reg = &out->reg;
    fb = o->flags & 0x1420;
    alt = fb | 1;
    f = fb | 0x81;
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
    if (((unsigned int)o->flags >> 3) & 1) {
        f |= 0x400;
    }
    fl = f | 0x10;
    if (func_081D90(lo, hi, reg->w10) != 0) {
        dx = hi[0] - lo[0];
        dz = hi[2] - lo[2];
        if (dx > 8.0f || dz > 8.0f) {
            big = 1;
        } else {
            big = 0;
        }
        lp = lo;
        idx2 = big;
        Unlink(reg);
        reg->bF = big;
        func_095570(&D_0022F6F8[idx2], reg, lp, hi, fl);
    } else {
        Unlink(reg);
    }
}
