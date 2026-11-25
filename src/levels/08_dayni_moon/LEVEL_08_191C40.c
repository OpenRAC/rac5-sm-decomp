/* LEVEL_08:0x191C40 -- placement copy of LEVEL_09_168C50.c: placement copy of LEVEL_02_18F6B8.c: builds the object's flag word from the model entry, probes two points and, when found, registers its proxy node with the near or far pool entry. */
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
    unsigned char mode_45;
    char pad_46[0x12];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[8];
    float f_70;
};

extern Entry D_0027E978[];
extern int func_089D30(Vec4 *a, Vec4 *b, void *c);
extern void func_09D490(Entry *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

void func_191C40(Obj *o)
{
    Sub *sub;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int fl2;
    unsigned int base;
    unsigned int alt;
    unsigned int extra;
    int far;
    unsigned char mode;

    sub = (Sub *)o->node_58;
    mode = o->mode_45;
    extra = 0x1000;
    rec = &o->cfg_40->recs_04[o->idx_44];
    base = o->flags_64 & 0x1420;
    alt = base | 1;
    fl = base | 0x81;
    if (rec->a_0C == 0) {
        fl = alt;
    }
    if (rec->b_10 != 0) {
        fl |= 0x100;
    }
    if (rec->c_14 != 0) {
        fl |= 0x200;
    }
    if (mode != 1) {
        extra = 0;
    }
    if (o->cfg_40->sel_3F == 1) {
        fl |= 0x800;
    }
    if ((o->flags_64 >> 3) & 1) {
        fl |= 0x400;
    }
    fl2 = fl | extra;
    if (func_089D30(&p0, &p1, sub->owner_10) != 0) {
        far = isFar(&p0, &p1);
        sub->far_0F = far;
        func_09D490(&D_0027E978[far], sub, &p0, &p1, fl2);
    }
}
