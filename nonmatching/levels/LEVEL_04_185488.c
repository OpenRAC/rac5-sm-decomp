/* USA LEVEL_04.REL:0x185488, 368-byte candidate (21 November 2026).
 * Measured pinned -fno-gcse: 9 differing words; first difference at 0x118.
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
    unsigned short id_00;
    unsigned char kind_02;
    unsigned char far_03;
    Obj *owner_04;
    int link_08;
} Sub;

typedef struct {
    char pad_00[0x68];
} Entry;

typedef struct {
    int first_00;
} Link;

typedef struct {
    char pad_00[0x1C64];
    int w_1C64;
} Game;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char b_45;
    char pad_46[0x54 - 0x46];
    Link *link_54;
    Sub *sub_58;
    char pad_5C[8];
    unsigned int flags_64;
};

extern Entry D_00249EF8[];
extern unsigned char D_0020F62C;
extern Game *D_0020D12C;
extern int func_0851A0(Vec4 *a, Vec4 *b, void *c);
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

int func_185488(Obj *o)
{
    Sub *sub;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int base;
    int far;

    sub = o->sub_58;
    sub->kind_02 = 2;
    sub->id_00 = 0xFFFF;
    sub->owner_04 = o;
    rec = &o->cfg_40->recs_04[o->idx_44];
    base = o->flags_64 & 0x1420;
    fl = base | 1;
    if (rec->a_0C != 0) {
        fl = base | 0x81;
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
    if (func_0851A0(&p0, &p1, o) != 0) {
        far = isFar(&p0, &p1);
        sub->far_03 = far;
        func_098368(&D_00249EF8[far], sub, &p0, &p1, fl);
    }
    if (D_0020F62C != 0 && D_0020D12C->w_1C64 == o->link_54->first_00) {
        o->b_45 = 0;
    } else {
        o->b_45 = 1;
    }
    sub->link_08 = 0;
    return 1;
}
