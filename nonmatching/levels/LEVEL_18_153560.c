/* USA LEVEL_18.REL:0x153560 (21 November 2026): exact linked bytes under
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
} Ent;

typedef struct {
    char pad_00[4];
    Ent *ents_04;
    char pad_08[0x37];
    unsigned char sel_3F;
} Cfg;

typedef struct Obj Obj;

typedef struct {
    char pad_00[2];
    unsigned char kind_02;
    unsigned char far_03;
    Obj *owner_04;
} Node;

typedef struct {
    char pad_00[4];
    Node node_04;
    char pad_0C[8];
    int w_14;
    unsigned char b_18;
} Rec;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0x13];
    Rec *rec_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0xF];
    unsigned char b_77;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_001DE778[];
extern int func_073F50(Vec4 *a, Vec4 *b, Obj *o);
extern void func_0857A0(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_153560(Obj *o)
{
    Rec *rec;
    Node *n;
    Ent *e;
    Vec4 p0;
    Vec4 p1;
    unsigned int v;
    int kind;

    rec = o->rec_58;
    n = &rec->node_04;
    n->owner_04 = o;
    n->kind_02 = 2;
    *(unsigned short *)((char *)rec + 4) = 0xFFFF;
    e = &o->cfg_40->ents_04[o->idx_44];
    v = (o->flags_64 & 0x1420) | 1;
    if (e->a_0C != 0)
        v |= 0x80;
    if (e->b_10 != 0)
        v |= 0x100;
    if (e->c_14 != 0)
        v |= 0x200;
    if (o->cfg_40->sel_3F == 1)
        v |= 0x800;
    if ((o->flags_64 >> 3) & 1)
        v |= 0x400;
    if (func_073F50(&p0, &p1, n->owner_04) != 0) {
        kind = isFar(&p0, &p1);
        n->far_03 = kind;
        func_0857A0(&D_001DE778[kind], n, &p0, &p1, v);
    }
    rec->b_18 = 0;
    rec->w_14 = 0;
    o->b_77 = 0x20;
    return 1;
}
