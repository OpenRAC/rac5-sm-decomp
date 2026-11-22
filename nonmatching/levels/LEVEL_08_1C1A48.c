/* USA LEVEL_08.REL:0x1C1A48, 568-byte candidate (22 November 2026).
 * Measured pinned --flag=-fno-gcse: 5 differing words; first difference at
 * 0xDC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    char pad0[0x19];
    unsigned char b19;
    char pad1A[0x1C - 0x1A];
} Rec2;

typedef struct {
    char pad0[0x58];
    Rec2 *rec;
} Obj2;

typedef struct {
    char pad0[0x2C];
    void *w2C;
    Obj2 *w30;
} Cfg;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
    Obj *target;
    float v8[3];
    float v14[3];
    unsigned char b20;
    char pad21;
    unsigned short h22;
    char pad24[0x4C - 0x24];
    unsigned char b4C;
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
    Cfg *cfg;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
};

typedef struct {
    char pad[0x68];
} Pool;

extern float D_002574C0;
extern char D_00271678[];
extern Pool D_0027E978[];

extern int func_01AE08(void *value);
extern int func_030678(float amount, char *out, char *actor, float *other, unsigned long flags);
extern void func_1C1258(Obj *o, int arg, int mode);
extern void func_09D778(Pool *pool, unsigned int index);
extern void func_09D190(Pool *pool, Rec *rec, float *lo, float *hi, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_1C1A48(Obj *o)
{
    Cfg *cfg;
    Rec *rec;
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
    int res;
    int x;
    unsigned char c;
    float *lp;
    float lo[4];
    float hi[4];

    cfg = o->cfg;
    rec = o->rec;
    c = (unsigned char)func_01AE08(cfg->w2C);
    if (c != 0) {
        func_1C1258(o, o->b45, 7);
        return;
    }
    if (cfg->w30 == 0) {
        goto box;
    }
    x = rec->b4C * 0x1C;
    if (((Rec2 *)((char *)cfg->w30->rec + x))->b19 != 1) {
        goto box;
    }
    func_1C1258(o, o->b45, 6);
    return;
box:
    res = func_030678(D_002574C0, (char *)cfg, (char *)o, (float *)D_00271678, 0);
        lp = lo;
        t = rec->target;
        Add3(lo, rec->v8, t->pos);
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
        func_09D190(&D_0027E978[nb], rec, lp, hi, fl);
    if (res != 1) {
        func_1C1258(o, o->b45, 3);
    }
}
