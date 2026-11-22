/* USA LEVEL_18.REL:0x15D048 (22 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_073F50 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
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
    unsigned short h_00;
    unsigned char b_02;
    unsigned char far_03;
    Obj *owner_04;
} Node;

typedef struct {
    int ref_00;
    unsigned char b_04;
} Holder;

typedef struct {
    char pad_00[4];
    float v_04[3];
    char pad_10[0xC];
    int w_1C;
    Node seg_20;
    int w_28;
    char pad_2C;
    unsigned char b_2D;
} State;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0xF];
    Holder *holder_54;
    State *state_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[4];
    int w_6C;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern char *D_001B5D24;
extern Entry D_001DE778[];
extern unsigned int func_111BB8(void);
extern int func_073F50(Vec4 *a, Vec4 *b, Obj *o);
extern void func_0857A0(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);
extern int func_1140D8(int index);
extern void func_15D888(Obj *o);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

static __inline__ void Zero3(float *v)
{
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
}

static __inline__ int Resolve(int *slot)
{
    int v;
    char *p;

    v = *slot;
    if (v == 0) {
        return 0;
    }
    p = D_001B5D24 + v;
    if (*(int *)(p + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)p;
    return 1;
}

int func_15D048(Obj *o)
{
    Holder *h;
    State *st;
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int idx;
    int bit;

    if (func_111BB8() == 2) {
        return -1;
    }
    h = o->holder_54;
    st = o->state_58;
    if (!Resolve(&h->ref_00)) {
        return 0;
    }
    n = &st->seg_20;
    n->b_02 = 2;
    n->owner_04 = o;
    n->h_00 = 0xFFFF;
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
    if (func_073F50(&p0, &p1, n->owner_04)) {
        idx = isFar(&p0, &p1);
        n->far_03 = idx;
        func_0857A0(&D_001DE778[idx], n, &p0, &p1, fl);
    }
    o->w_6C = func_1140D8(h->b_04);
    Zero3(st->v_04);
    st->w_1C = 0;
    st->w_28 = 0;
    st->b_2D = 0;
    func_15D888(o);
    return 1;
}
