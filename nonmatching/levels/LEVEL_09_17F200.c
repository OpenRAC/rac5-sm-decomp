/* USA LEVEL_09.REL:0x17F200 (22 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_07E810 unlike its accepted definition.
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

typedef struct {
    int ref_00;
} Ref;

typedef struct {
    char pad_00[0x40];
    int v_40;
} Slot;

typedef struct Obj Obj;

typedef struct {
    int w_00;
    char pad_04[6];
    unsigned char b_0A;
    unsigned char pad_0B;
    unsigned char pad_0C;
    unsigned char pad_0D;
    unsigned char kind_0E;
    unsigned char far_0F;
    Obj *owner_10;
    int w_14;
} Sub;

typedef struct {
    char pad_00[8];
    float f_08;
    char pad_0C[4];
    float f_10;
    float f_14;
    float f_18;
    char pad_1C[8];
    Sub sub_24;
    char pad_3C[0];
    int w_3C;
} Node;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0xF];
    Ref *ref_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern int D_001F0894;
extern float D_001F24C4;
extern Entry D_00216E78[];
extern void func_17FBC8(void);
extern void func_17FE60(void);
extern void func_18DA50(void *a, void *b, void *key, void *d);
extern int func_07E810(Vec4 *a, Vec4 *b, Obj *o);
extern void func_091CC8(Entry *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int Resolve(Ref *r)
{
    Slot *slot;

    if (r->ref_00 == 0) {
        return 0;
    }
    slot = (Slot *)(D_001F0894 + r->ref_00);
    if (slot->v_40 == 0) {
        r->ref_00 = 0;
        return 0;
    }
    r->ref_00 = (int)slot;
    return 1;
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

int func_17F200(Obj *o)
{
    Ref *ref;
    Node *n;
    Sub *sub;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int ok;
    int far;

    ref = o->ref_54;
    n = o->node_58;
    ok = Resolve(ref);
    if (ok == 0) {
        o->flags_64 |= 0x430;
        return 1;
    }
    n->f_08 = D_001F24C4;
    n->f_10 = 0.2f;
    n->f_14 = 0.2f;
    n->f_18 = 1000.0f;
    sub = &n->sub_24;
    func_18DA50(func_17FBC8, func_17FE60, o->cfg_40, 0);
    sub->owner_10 = o;
    sub->kind_0E = 2;
    sub->w_14 = 0;
    n->sub_24.w_00 = 0;
    rec = &o->cfg_40->recs_04[o->idx_44];
    fl = (o->flags_64 & 0x1420) | 1;
    if (rec->a_0C != 0) {
        fl = (o->flags_64 & 0x1420) | 0x81;
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
    if ((o->flags_64 >> 3) & 1) {
        fl |= 0x400;
    }
    if (func_07E810(&p0, &p1, sub->owner_10)) {
        far = isFar(&p0, &p1);
        sub->far_0F = far;
        func_091CC8(&D_00216E78[far], sub, &p0, &p1, fl);
    }
    n->w_3C = 0;
    return 1;
}
