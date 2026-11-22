/* USA LEVEL_04.REL:0x194B58 (22 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_1300C0 unlike its accepted definition.
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
    float f[16];
} Mat;

typedef struct {
    unsigned char pad_00[2];
    unsigned char b_02;
    unsigned char b_03;
    Obj *o_04;
} Sub;

typedef struct {
    float f_00[16];
    char pad_40[0x40];
    unsigned short h_80;
    char pad_82[2];
    Obj *o_84;
} Node;

typedef struct {
    char pad_00[0x68];
} Entry;

struct Obj {
    float f[16];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char b_45;
    unsigned char b_46;
    char pad_47[0x11];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0xE];
    unsigned char b_76;
    unsigned char b_77;
};

extern Entry D_00249EF8[];
extern void func_1300C0(void *a, void *b);
extern int func_0851A0(Vec4 *a, Vec4 *b, Obj *o);
extern void func_098368(Entry *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_194B58(Obj *o)
{
    Node *n;
    Sub *sub;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int alt;
    unsigned int opt;
    unsigned int f;
    int far;

    n = o->node_58;
    n->f_00[8] = o->f[8];
    n->f_00[9] = o->f[9];
    n->f_00[10] = o->f[10];
    n->f_00[11] = o->f[11];
    n->f_00[0] = o->f[0];
    n->f_00[1] = o->f[1];
    n->f_00[2] = o->f[2];
    n->f_00[3] = o->f[3];
    n->f_00[4] = o->f[4];
    n->f_00[5] = o->f[5];
    n->f_00[6] = o->f[6];
    n->f_00[7] = o->f[7];
    n->f_00[12] = o->f[12];
    n->f_00[13] = o->f[13];
    n->f_00[14] = o->f[14];
    n->f_00[15] = o->f[15];
    func_1300C0(&n->f_00[16], n);
    sub = (Sub *)&n->h_80;
    sub->o_04 = o;
    sub->b_02 = 2;
    n->h_80 = 0xFFFF;
    rec = &o->cfg_40->recs_04[o->idx_44];
    f = o->flags_64 & 0x1420;
    alt = f | 1;
    fl = f | 0x81;
    if (rec->a_0C == 0) {
        fl = alt;
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
    opt = fl | 0x10;
    if (func_0851A0(&p0, &p1, sub->o_04)) {
        far = isFar(&p0, &p1);
        sub->b_03 = far;
        func_098368(&D_00249EF8[far], sub, &p0, &p1, opt);
    }
    o->b_45 = 0;
    o->flags_64 |= 0x1000;
    o->b_46 = 0;
    o->b_76 = 0x40;
    o->b_77 = 0x40;
    return 1;
}
