/* LEVEL_16:0x1387E0 -- per-frame update of an attached object: when its state allows, tests the attachment, then refreshes the pooled bounding box around its target (unregistering the previous pool entry first); otherwise forwards the state code. */
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
    char pad0[0x10];
    unsigned short h10;
    char pad12;
    unsigned char b13;
    Obj *target;
    float v18[3];
    float v24[3];
    char pad30[0x5C - 0x30];
    int w5C;
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

extern char D_001D2048[];
extern Col D_001D20C8;
extern Pool D_001DE3F8[];

extern int func_06FDC0(char *a0);
extern int func_139988(Obj *a);
extern int func_02EA00(char *cfg, Obj *o, char *data, int w, Col col, int z);
extern void func_1394D0(Obj *o, int arg, int mode);
extern void func_086440(Pool *pool, unsigned int index);
extern void func_085E58(Pool *pool, Slot *slot, float *lo, float *hi, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_1387E0(Obj *o)
{
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

    r1 = func_06FDC0((char *)o);
    r2 = func_139988(o);
    if (r2 == 0xB || r1 == 10 || r1 == 8 || r1 == 9) {
        rec = o->rec;
        col = D_001D20C8;
        if (func_02EA00(o->cfg, o, D_001D2048, rec->w5C, col, 0) != 0) {
            func_1394D0(o, o->b45, 0xC);
        }
        s = (Slot *)&rec->h10;
        t = s->target;
        Add3(lo, rec->v18, t->pos);
        Add3(hi, rec->v24, t->pos);
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
        oa += (int)D_001DE3F8;
        old = (Pool *)oa;
        if (rec->h10 != 0xFFFF) {
            func_086440(old, rec->h10);
            rec->h10 = 0xFFFF;
        }
        s->b3 = nb;
        func_085E58(&D_001DE3F8[nb], s, lp, hi, fl);
    } else {
        func_1394D0(o, o->b45, r2 & 0xFF);
    }
}
