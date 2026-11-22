/* USA LEVEL_03.REL:0x18D118, 304-byte candidate (21 November 2026).
 * Measured pinned -fno-gcse: 19 differing words; first difference at 0x20.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
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
    int flags_64;
    char pad_68[8];
    float f_70;
};

extern Entry D_0024A578[];
extern int func_081B70(void *a, void *b, void *c);
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

void func_18D118(Obj *o)
{
    Node *n;
    Sub *sub;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int fl2;
    unsigned int base;
    unsigned int alt;
    int flags;
    int masked;
    int far;

    flags = o->flags_64;
    masked = flags & ~0x20;
    o->flags_64 = masked;
    n = o->node_58;
    sub = (Sub *)n;
    rec = &o->cfg_40->recs_04[o->idx_44];
    if (rec->c_14 == 0) {
        return;
    }
    if (sub->link_14 != 0) {
        return;
    }
    base = flags & 0x1400;
    alt = base | 1;
    fl = base | 0x81;
    if (rec->a_0C == 0) {
        fl = alt;
    }
    if (rec->b_10 != 0) {
        fl |= 0x100;
    }
    fl |= 0x200;
    if (o->cfg_40->sel_3F == 1) {
        fl |= 0x800;
    }
    if (((unsigned int)masked >> 3) & 1) {
        fl |= 0x400;
    }
    fl2 = fl | 0x2000;
    if (func_081B70(&p0, &p1, sub->owner_10) != 0) {
        far = isFar(&p0, &p1);
        sub->far_0F = far;
        func_0951A0(&D_0024A578[far], sub, &p0, &p1, fl2);
    }
}
