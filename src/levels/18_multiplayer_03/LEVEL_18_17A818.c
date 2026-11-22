/* LEVEL_18:0x17A818 -- when the object is not blocked, refreshes the pooled bounding box of its attached record around the record's target (unregistering the previous pool entry first) and registers it again with the target's flag word. */
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
    float lo[3];
    float hi[3];
    unsigned char b20;
    char pad21;
    unsigned short h22;
} Slot;

typedef struct {
    char pad0[0x36];
    unsigned char b36;
} Aux;

struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[4];
    Model *model;
    unsigned char b44;
    char pad45[0xF];
    Aux *aux;
    Slot *slot;
    char pad5C[8];
    unsigned int flags;
};

typedef struct {
    char pad[0x68];
} Pool;

extern Pool D_001DE778[];
extern void func_085D88(Pool *pool, unsigned int index);
extern void func_0857A0(Pool *pool, Slot *slot, float *lo, float *hi, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

void func_17A818(Obj *o)
{
    Slot *s;
    Model *model;
    Ent *ent;
    Obj *t;
    unsigned int f;
    unsigned int alt;
    unsigned int base;
    unsigned int fl;
    unsigned char nb;
    int oa;
    Pool *old;
    float lo[4];
    float hi[4];

    s = o->slot;
    if (o->aux->b36 == 0) {
        t = s->target;
        Add3(lo, s->lo, t->pos);
        Add3(hi, s->hi, t->pos);
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
        oa += (int)D_001DE778;
        old = (Pool *)oa;
        if (s->h0 != 0xFFFF) {
            func_085D88(old, s->h0);
            s->h0 = 0xFFFF;
        }
        s->b3 = nb;
        func_0857A0(&D_001DE778[nb], s, lo, hi, fl);
    }
}
