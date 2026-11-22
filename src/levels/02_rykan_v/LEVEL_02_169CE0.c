/* LEVEL_02:0x169CE0 -- per-frame update of an attached object while its state is 7: resets or advances a counter in its configuration, then refreshes the pooled bounding box of its record (unlinking the previous registration). */
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
    char pad0[0x59];
    unsigned char b59;
    char pad5A[3];
    unsigned char b5D;
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
    char pad0[4];
    Reg reg;
    char pad1C[0x3C - 0x1C];
    int w3C;
} Outer;

typedef struct {
    char pad[0x68];
} Pool;

struct Obj {
    char pad0[0x40];
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

extern char D_0024C650[];
extern char D_00234A60[];
extern char D_00234A80[];
extern Pool D_00246BF8[];

extern void func_01AB40(char *p);
extern int func_16AEA8(Obj *obj);
extern int func_16AF28(Obj *o, char *data);
extern void func_1698B8(Obj *o, int arg, int mode);
extern int func_088610(float *lo, float *hi, Obj *o);
extern void func_09BC40(Pool *pool, Reg *reg, float *lo, float *hi, unsigned int flags);

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

void func_169CE0(Obj *o)
{
    Cfg *cfg;
    Outer *out;
    Reg *reg;
    Model *model;
    Ent *ent;
    char *base;
    unsigned int f;
    unsigned int alt;
    unsigned int fb;
    unsigned int fl;
    unsigned int idx;
    int big;
    int idx2;
    float *lp;
    float dx;
    float dz;
    float lo[4];
    float hi[4];

    cfg = o->cfg;
    base = D_0024C650;
    func_01AB40(base + 0x30);
    if (func_16AEA8(o) != 7) {
        return;
    }
    if ((cfg->b59 & 4) == 0) {
        func_16AF28(o, D_00234A60);
        cfg->b5D = 0;
        o->rec->w3C = 0;
    } else {
        func_16AF28(o, D_00234A80);
        if (++cfg->b5D == 0xFF) {
            func_1698B8(o, o->b45, 0x17);
        }
    }
    idx = o->b44;
    model = o->model;
    ent = (Ent *)(model->ents + idx * 0x34);
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
    out = o->rec;
    reg = &out->reg;
    if (((unsigned int)o->flags >> 3) & 1) {
        f |= 0x400;
    }
    fl = f | 0x10;
    if (func_088610(lo, hi, reg->w10) != 0) {
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
        func_09BC40(&D_00246BF8[idx2], reg, lp, hi, fl);
    } else {
        Unlink(reg);
    }
}
