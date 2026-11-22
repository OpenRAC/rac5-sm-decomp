/* LEVEL_06:0x1B0520 -- sets up a world object: clears its record, hooks it to its owner (or runs the fallback), installs the handler, picks the draw flags and registers its bounding box with the pool. */
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
    char pad18[0x10];
    float f28;
} Ent;

typedef struct {
    int w0;
    unsigned char sub4[0x10];
    int w14;
    char pad18[0x2D - 0x18];
    unsigned char b2D;
    char pad2E[0x44 - 0x2E];
    int w44;
    char pad48[7];
    unsigned char b4F;
} Cfg;

typedef struct {
    int w0;
    char pad4[0xA];
    unsigned char bE;
    unsigned char bF;
    Obj *obj;
    int w14;
    float rect[4];
    char pad28[0x5C - 0x28];
    unsigned char b5C;
    unsigned char b5D;
    char pad5E;
    unsigned char b5F;
    unsigned char b60;
} Rec;

typedef struct {
    char pad0[0xDC];
    void (*fn)(void);
} Vt;

struct Obj {
    char pad0[0x20];
    float v20[4];
    float pos[3];
    char pad3C[4];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[2];
    Vt *vt;
    char pad4C[8];
    Cfg *cfg;
    Rec *rec;
    char pad5C[8];
    int flags;
    char pad68[0x77 - 0x68];
    unsigned char b77;
};

typedef struct {
    char pad[0x68];
} Pool;

extern int D_001F5994;
extern Pool D_0021C478[];

extern void *memset(void *p, int v, unsigned int n);
extern void func_1AFF28(void);
extern void func_1B04E0(Obj *o);
extern int func_02DDA8(unsigned char *object, void *owner);
extern void func_15EB70(char *object, char *member, int value);
extern int func_07B530(float *lo, float *hi, Obj *o);
extern void func_08E1C0(Pool *pool, Rec *rec, float *lo, float *hi, unsigned int flags);

static __inline__ void Relink(int *p, void (*cb)(Obj *), Obj *o)
{
    int ok;
    int v;
    char *t;
    Obj *c;

    v = p[0];
    if (v == 0) {
        ok = 0;
    } else {
        t = (char *)(D_001F5994 + v);
        if (*(int *)(t + 0x40) == 0) {
            p[0] = 0;
            ok = 0;
        } else {
            p[0] = (int)t;
            ok = 1;
        }
    }
    if (ok) {
        c = *(Obj **)p;
        if (c->rec->b60 < 12) {
            func_15EB70((char *)c, (char *)o, (int)cb);
        }
    } else if (cb != 0) {
        cb(o);
    }
}

int func_1B0520(Obj *o)
{
    Cfg *cfg;
    Rec *rec;
    Model *model;
    Ent *ent;
    unsigned int f;
    unsigned int alt;
    unsigned int base;
    unsigned int fl;
    int big;
    float lo[4];
    float hi[4];
    float dx;
    float dz;

    rec = o->rec;
    cfg = o->cfg;
    memset(rec, 0, 0x64);
    if (o->b45 > 5) {
        return 0;
    }
    rec->b5D = 0xFF;
    func_02DDA8(cfg->sub4, o);
    if (cfg->w44 != 0) {
        Relink(&cfg->w44, func_1B04E0, o);
    }
    o->vt->fn = func_1AFF28;
    ((Ent *)((int)o->model->ents + o->b44 * 0x34))->f28 = 0.5f;
    o->b77 = 0x2D;
    if (cfg->b4F == 0) {
        cfg->b2D = 3;
    }
    rec->obj = o;
    rec->bE = 2;
    rec->b5C = 0;
    rec->w14 = 0;
    rec->w0 = 0;
    model = o->model;
    ent = (Ent *)(model->ents + o->b44 * 0x34);
    base = o->flags & 0x1420;
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
    if (((unsigned int)o->flags >> 3) & 1) {
        f |= 0x400;
    }
    fl = f | 0x1000;
    if (func_07B530(lo, hi, o) != 0) {
        dx = hi[0] - lo[0];
        dz = hi[2] - lo[2];
        if (dx > 8.0f || dz > 8.0f) {
            big = 1;
        } else {
            big = 0;
        }
        rec->bF = big;
        func_08E1C0(&D_0021C478[big], rec, lo, hi, fl);
    }
    return 1;
}
