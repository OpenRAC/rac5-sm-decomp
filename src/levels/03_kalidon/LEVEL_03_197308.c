/* LEVEL_03:0x197308 -- initialises the object's attached proxy node (kind 2, back-reference, cleared links), builds its flag word from the model entry, probes two points and, when found, registers the proxy with the near or far pool entry; always returns 1. */
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
    int d_14;
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
    char pad_00[0xE];
    unsigned char kind_0E;
    unsigned char far_0F;
    Obj *owner_10;
    int link_14;
} Sub;

typedef struct {
    int w_00;
    Sub sub_04;
    char pad_1C[0];
} NodeHead;

typedef struct {
    char pad_00[0x68];
} Entry;

typedef struct {
    int w_00;
    int w_04;
    char pad_08[0x14];
    float f_1C;
    float f_20;
} Node;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0x13];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0x77 - 0x68];
    unsigned char b_77;
};

extern Entry D_0024A578[];
extern int func_081B70(Vec4 *a, Vec4 *b, void *c);
extern void func_0951A0(Entry *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

void func_197308(Obj *o)
{
    Node *n;
    Sub *sub;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int base;
    int old;
    int far;
    Cfg *cfg;

    old = o->flags_64;
    cfg = o->cfg_40;
    o->flags_64 = old & ~0x20;
    n = o->node_58;
    sub = (Sub *)n;
    rec = (Rec *)(o->idx_44 * sizeof(Rec) + (int)cfg->recs_04);
    if (rec->d_14 != 0) {
        if (sub->link_14 == 0) {
            base = old & 0x1400;
            fl = base | 1;
            if (rec->a_0C != 0) {
                fl = base | 0x81;
            }
            if (rec->b_10 != 0) {
                fl |= 0x100;
            }
            fl |= 0x200;
            if (cfg->sel_3F == 1) {
                fl |= 0x800;
            }
            if ((o->flags_64 >> 3) & 1) {
                fl |= 0x400;
            }
            if (func_081B70(&p0, &p1, sub->owner_10) != 0) {
                far = isFar(&p0, &p1);
                sub->far_0F = far;
                func_0951A0(&D_0024A578[far], sub, &p0, &p1, fl);
            }
        }
    }
}
