/* LEVEL_01:0x18A890 -- converts the linked record's first offset into a pointer (kept only when its target is valid), builds a flag word from the object's template, probes two points and spawns the effect with a near or far table entry; returns 1, or 0 when the link is invalid. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad_00[0xC];
    int a_0C;
    int b_10;
    int c_14;
    char pad_18[0x1C];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs_04;
    char pad_08[0x37];
    unsigned char sel_3F;
} Cfg;

typedef struct Obj Obj;

typedef struct {
    int w_00;
    char pad_04[0xA];
    unsigned char b_0E;
    unsigned char far_0F;
    Obj *owner_10;
    int w_14;
} Node;

typedef struct {
    int w_00;
} Link;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0xF];
    Link *link_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern int D_00206D94;
extern Entry D_0022F6F8[];
extern int func_081D90(Vec4 *a, Vec4 *b, Obj *o);
extern void func_095570(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    n->far_0F = idx;
    func_095570(&D_0022F6F8[idx], n, a, b, fl);
}

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_18A890(Obj *o)
{
    Link *lk = o->link_54;
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int bit;
    int v;
    int t;
    int ok;

    v = lk->w_00;
    if (v == 0) {
        ok = 0;
    } else {
        t = D_00206D94 + v;
        if (*(int *)(t + 0x40) == 0) {
            lk->w_00 = 0;
            ok = 0;
        } else {
            lk->w_00 = t;
            ok = 1;
        }
    }
    if (!ok) {
        return 0;
    }
    n = o->node_58;
    n->b_0E = 2;
    n->owner_10 = o;
    n->w_14 = 0;
    n->w_00 = 0;
    rec = &o->cfg_40->recs_04[o->idx_44];
    fl = (o->flags_64 & 0x1420) | 1;
    if (rec->a_0C != 0) {
        fl |= 0x80;
    }
    if (rec->b_10 != 0) {
        fl |= 0x100;
    }
    if (rec->c_14 != 0) {
        fl |= 0x200;
    }
    if (o->cfg_40->sel_3F == 1) {
        fl |= 0x800;
    }
    bit = (o->flags_64 >> 3) & 1;
    if (bit != 0) {
        fl |= 0x400;
    }
    if (func_081D90(&p0, &p1, o) != 0) {
        spawn(n, &p0, &p1, fl, isFar(&p0, &p1));
    }
    return 1;
}
