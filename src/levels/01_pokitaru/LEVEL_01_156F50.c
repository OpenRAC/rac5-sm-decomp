/* LEVEL_01:0x156F50 -- lazily builds the shared link block of the model's first record, then registers the object's proxy node with the near or far pool entry; always returns 1. */
typedef struct {
    int w00;
    float v[4];
    float one;
    char pad18[0x28 - 0x18];
} Block;

typedef struct {
    char b0;
    char pad1[3];
    Block *blk;
} Link;

typedef struct {
    char pad0[0xC];
    Link *w0C;
    Link *w10;
    int w14;
    char pad18[0x1C];
} Rec;

typedef struct {
    char pad0[4];
    Rec *recs;
    char pad8[0x3F - 8];
    unsigned char b3F;
} Cfg;

typedef struct Obj Obj;

typedef struct {
    int w0;
    char pad4[0xE - 4];
    unsigned char kind;
    unsigned char far;
    Obj *owner;
    int link;
} Node;

typedef struct {
    char pad[0x68];
} Entry;

struct Obj {
    char pad0[0x40];
    Cfg *cfg;
    unsigned char idx;
    char pad45[0x13];
    Node *node;
    char pad5C[8];
    unsigned int flags;
};

extern Link D_00393930;
extern Block D_00393908;
extern float D_00217E78[4];
extern Entry D_0022F6F8[];

extern int func_081D90(float *a, float *b, Obj *c);
extern void func_095570(Entry *e, Node *n, float *a, float *b, unsigned int flags);

static __inline__ void Fill(Block *b, float *s)
{
    float *d = b->v;

    b->one = 1.0f;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

static __inline__ int isFar(float *a, float *b)
{
    float dx = b[0] - a[0];
    float dz = b[2] - a[2];

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_156F50(Obj *o)
{
    Node *n;
    Rec *rec;
    float p0[4];
    float p1[4];
    unsigned int fl;
    unsigned int base;
    int far;

    if (o->cfg->recs->w0C == 0) {
        o->cfg->recs->w10 = &D_00393930;
        o->cfg->recs->w0C = &D_00393930;
        o->cfg->recs->w0C->b0 = 1;
        o->cfg->recs->w0C->blk = &D_00393908;
        D_00393908.w00 = 0;
        Fill(&D_00393908, D_00217E78);
    }
    n = o->node;
    n->kind = 2;
    n->owner = o;
    n->link = 0;
    n->w0 = 0;
    rec = &o->cfg->recs[o->idx];
    base = o->flags & 0x1420;
    fl = base | 1;
    if (rec->w0C != 0) {
        fl = base | 0x81;
    }
    if (rec->w10 != 0) {
        fl |= 0x100;
    }
    if (rec->w14 != 0) {
        fl |= 0x200;
    }
    if (o->cfg->b3F == 1) {
        fl |= 0x800;
    }
    if ((o->flags >> 3) & 1) {
        fl |= 0x400;
    }
    if (func_081D90(p0, p1, o) != 0) {
        far = isFar(p0, p1);
        n->far = far;
        func_095570(&D_0022F6F8[far], n, p0, p1, fl);
    }
    return 1;
}
