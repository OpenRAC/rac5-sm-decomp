/* LEVEL_04:0x1D9330 -- placement copy of LEVEL_01_1C6008.c: marks the object busy, initialises its attached node (id, kind 2, back-reference), builds the flag word from the model entry, probes two points and registers the node with the near or far pool entry; clears the object's record word, starts the follow-up and sets the state bytes; returns 1. */
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
} Node;

typedef struct {
    char pad_00[0x68];
} Entry;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0xF];
    int *rec_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0xE];
    unsigned char st_76;
    unsigned char st_77;
};

extern Entry D_00249EF8[];
extern void func_0851A0(void *a, void *b, void *c);
extern void func_098368(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);
extern void func_07FFB8(Obj *o, float t, unsigned int idx);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_1D9330(Obj *o)
{
    Node *n;
    int *record;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int fl2;
    unsigned int base;
    unsigned int alt;
    int far;

    o->flags_64 |= 0x1000;
    n = o->node_58;
    record = o->rec_54;
    n->kind_02 = 2;
    n->id_00 = 0xFFFF;
    n->owner_04 = o;
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
    if (o->cfg_40->sel_3F == 1) {
        fl |= 0x800;
    }
    if ((o->flags_64 >> 3) & 1) {
        fl |= 0x400;
    }
    fl2 = fl | 0x4010;
    if (((int (*)(Vec4 *, Vec4 *, Obj *))func_0851A0)(&p0, &p1, o) != 0) {
        far = isFar(&p0, &p1);
        n->far_03 = far;
        func_098368(&D_00249EF8[far], n, &p0, &p1, fl2);
    }
    *record = 0;
    func_07FFB8(o, 0.0f, 0);
    o->st_76 = 0x10;
    o->st_77 = 0x40;
    o->flags_64 |= 0x4000;
    return 1;
}
