/* USA LEVEL_16.REL:0x138C98, 528-byte candidate (22 November 2026).
 * Measured pinned -fno-gcse --as: 5 differing words; first difference at 0x7C.
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

extern float D_001C2820;
extern char D_001D2078[];
extern Pool D_001DE3F8[];

extern int func_139E98(char *obj);
extern int func_02DD18(float amount, char *out, char *actor, float *other, unsigned long flags);
extern void func_1394D0(Obj *o, int arg, int mode);
extern int func_0763F8(void *a, float *b);
extern void func_086440(Pool *pool, unsigned int index);
extern void func_085E58(Pool *pool, Slot *slot, float *lo, float *hi, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_138C98(Obj *o)
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
    int r;
    float lo[4];
    float hi[4];

    cfg = o->cfg;
    rec = o->rec;
    if (func_139E98((char *)o) != 0) {
        func_1394D0(o, o->b45, 5);
        return;
    }
    r = func_02DD18(D_001C2820, cfg, (char *)o, (float *)D_001D2078, 0);
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
    oa += (int)D_001DE3F8;
    old = (Pool *)oa;
    if (rec->h10 != 0xFFFF) {
        func_086440(old, rec->h10);
        rec->h10 = 0xFFFF;
    }
    s->b3 = nb;
    func_085E58(&D_001DE3F8[nb], s, lo, hi, fl);
    if (r == 0 || func_0763F8(*(void **)(cfg + 0x2C), o->pos) != 0) {
        func_1394D0(o, o->b45, 4);
    }
}
