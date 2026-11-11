/* LEVEL_07:0x19CA68 -- marks the object busy, initialises its attached proxy node (kind 2, no id, back-reference), builds the flag word from the model entry, probes two points and, when found, registers the proxy with the near or far pool entry; then resolves the link's first offset into a pointer and clears bit 0 of the byte at +0x61 of its target (returns 0 when the link is empty). */
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
    char pad_00[0x61];
    unsigned char b_61;
} Target;

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

extern Entry D_00244FF8[];
extern int D_0021B094;
extern int func_083F28(Vec4 *a, Vec4 *b, void *c);
extern void func_0970F8(Entry *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

static __inline__ int Fixup(int *slot)
{
    int value = *slot;

    if (value == 0) {
        return 0;
    }
    *slot = D_0021B094 + value;
    return 1;
}

int func_19CA68(Obj *o)
{
    Sub *sub;
    Link *link;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int base;
    int far;

    sub = o->sub_58;
    link = o->link_54;
    o->flags_64 |= 0x10;
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
    if (func_083F28(&p0, &p1, o) != 0) {
        far = isFar(&p0, &p1);
        sub->far_03 = far;
        func_0970F8(&D_00244FF8[far], sub, &p0, &p1, fl);
    }
    if (!Fixup(&link->first_00)) {
        return 0;
    }
    ((Target *)link->first_00)->b_61 &= 0xFE;
    return 1;
}
