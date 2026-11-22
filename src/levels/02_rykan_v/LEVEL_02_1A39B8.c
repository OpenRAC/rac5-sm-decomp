/* LEVEL_02:0x1A39B8 -- initialises an object's proxy node, links its parent record and registers the node with the near or far pool. */
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
    char pad_04[0xE - 4];
    unsigned char kind_0E;
    unsigned char far_0F;
    Obj *owner_10;
    int link_14;
} Sub;

typedef struct {
    char pad_00[0x58];
    char pad_58[0x6B0];
} Parent;

typedef struct {
    char pad_00[0x58];
    char *slots_58;
} Parent2;

typedef struct {
    float z_00;
    int w_04;
    Parent2 *parent_08;
    char pad_0C[4];
    unsigned char idx_10;
} Info;

typedef struct {
    char pad_00[0x68];
} Entry;

struct Obj {
    char pad_00[0x34];
    float z_34;
    char pad_38[0x40 - 0x38];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char b_45;
    char pad_46[0x54 - 0x46];
    Info *info_54;
    Sub *sub_58;
    int w_5C;
    char pad_60[4];
    unsigned int flags_64;
    char pad_68[0x70 - 0x68];
    int w_70;
    char pad_74[2];
    unsigned char b_76;
    unsigned char b_77;
};

extern int D_0021BD54;
extern Entry D_00246BF8[];
extern int func_028FB8(int a);
extern int func_088610(Vec4 *a, Vec4 *b, Obj *o);
extern void func_09BC40(Entry *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_1A39B8(Obj *o)
{
    Info *in;
    Sub *sub;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int base;
    int far;
    int off;

    in = o->info_54;
    o->b_45 = 0;
    o->w_70 = 0;
    sub = o->sub_58;
    off = (int)in->parent_08;
    if (off != 0) {
        Parent2 *pp = (Parent2 *)(D_0021BD54 + off);

        if (*(int *)((char *)pp + 0x40) == 0)
            in->parent_08 = 0;
        else
            in->parent_08 = pp;
    }
    in->z_00 = o->z_34;
    if (func_028FB8(o->w_5C) != 0) {
        o->b_45 = 4;
        o->z_34 = o->z_34 - 3.46f;
        if (in->parent_08 != 0)
            (((Parent2 *)in->parent_08)->slots_58 + in->idx_10)[0x6B0] = 1;
    }
    sub->owner_10 = o;
    sub->kind_0E = 2;
    sub->link_14 = 0;
    sub->w_00 = 0;
    base = o->flags_64 & 0x1420;
    rec = &o->cfg_40->recs_04[o->idx_44];
    fl = base | 1;
    if (rec->a_0C != 0)
        fl = base | 0x81;
    if (rec->b_10 != 0)
        fl |= 0x100;
    if (rec->c_14 != 0)
        fl |= 0x200;
    if (o->cfg_40->sel_3F == 1)
        fl |= 0x800;
    if ((o->flags_64 >> 3) & 1)
        fl |= 0x400;
    if (func_088610(&p0, &p1, o) != 0) {
        far = isFar(&p0, &p1);
        sub->far_0F = far;
        func_09BC40(&D_00246BF8[far], sub, &p0, &p1, fl);
    }
    o->b_77 = 0x40;
    o->b_76 = 0x10;
    return 1;
}
