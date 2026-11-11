/* LEVEL_06:0x1B02A8 -- sets up a world object from its spawn arguments (handler, rectangle, spawn mode, draw flags, bounding box registration) and a small state-reset handler that follows it. */
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
    int w0;
    unsigned char sub4[0x10];
    int w14;
    char pad18[0x2D - 0x18];
    unsigned char b2D;
    char pad2E[0x38 - 0x2E];
    int w38;
    int w3C;
    char pad40[4];
    int w44;
    char pad48[5];
    unsigned char b4D;
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

extern Pool D_0021C478[];

extern void *memset(void *p, int v, unsigned int n);
extern void func_1AF0A8(Obj *o, int mode);
extern void func_1AFF28(void);
extern int func_02DDA8(unsigned char *object, void *owner);
extern int func_07B530(float *lo, float *hi, Obj *o);
extern void func_08E1C0(Pool *pool, Rec *rec, float *lo, float *hi, unsigned int flags);

static __inline__ void Set4(float *d, float a, float b, float c, float e)
{
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}

void func_1B02A8(Obj *o, int p2, int p3, int p4, int p5, int p6)
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
    Set4(rec->rect, o->pos[0], o->pos[2], o->v20[0], o->v20[2]);
    rec->b5F = 0xD;
    o->vt->fn = func_1AFF28;
    rec->b5D = 0xFF;
    if (p6 != 0) {
        func_1AF0A8(o, 3);
    } else {
        func_1AF0A8(o, 1);
    }
    cfg->w3C = p5;
    cfg->w0 = p2;
    cfg->w38 = p3;
    cfg->w14 = p4;
    cfg->b4D = 0;
    o->flags &= ~0x20;
    o->flags &= ~0x10;
    func_02DDA8(cfg->sub4, o);
    cfg->b2D = 3;
    rec->b5C = 0;
    o->b77 = 0x2D;
    rec->bE = 2;
    rec->obj = o;
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
    fl = f | 0x1010;
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
}

void func_1B04E0(Obj *o)
{
    Cfg *cfg;

    cfg = o->cfg;
    cfg->w44 = 0;
    if (o->b45 == 0xB) {
        func_1AF0A8(o, 0);
    }
}
