/* LEVEL_02:0x164FC8 -- initialises a pickup object: validates and relocates the record's linked reference, clears and fills the node, builds its option word, probes two points and spawns the node with a near or far table entry. */
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
    char pad_00[0x40];
    int w_40;
} Ref;

typedef struct {
    int ref_00;
} Head;

typedef struct {
    int w_00;
    char pad_04[0xA];
    unsigned char kind_0E;
    unsigned char far_0F;
    Obj *owner_10;
    int link_14;
    char pad_18[0x10];
    unsigned char b_28;
    char pad_29[3];
} Node;

typedef struct {
    char pad_00[0x68];
} Entry;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char b_45;
    char pad_46[0xE];
    Head *head_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[8];
    float f_70;
    unsigned char b_74[2];
    unsigned char b_76;
    unsigned char b_77;
};

extern int D_0021BD54;
extern Entry D_00246BF8[];
extern void *memset(void *p, int c, unsigned int n);
extern void func_165580(Obj *o, int ref);
extern int func_088610(Vec4 *a, Vec4 *b, Obj *o);
extern void func_09BC40(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);
extern void func_165480(Obj *o, float f);

static __inline__ int Check(int *slot)
{
    int n = *slot;
    Ref *c;

    if (n == 0)
        return 0;
    c = (Ref *)(D_0021BD54 + n);
    if (c->w_40 == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)c;
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

int func_164FC8(Obj *o)
{
    Head *h;
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int f;
    int far;
    float k;

    h = o->head_54;
    n = o->node_58;
    if (Check(&h->ref_00))
        func_165580(o, h->ref_00);
    o->b_76 = o->b_77 = 0x2D;
    k = 0.0f;
    if (o->b_45 == 1)
        k = 1.0f;
    o->f_70 = k;
    memset(n, 0, 0x2C);
    n->b_28 = o->b_45;
    n->kind_0E = 2;
    n->owner_10 = o;
    n->link_14 = 0;
    n->w_00 = 0;
    rec = &o->cfg_40->recs_04[o->idx_44];
    f = o->flags_64 & 0x1420;
    fl = f | 1;
    if (rec->a_0C != 0) {
        fl = f | 0x81;
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
    if (((int (*)(Vec4 *, Vec4 *, Obj *))func_088610)(&p0, &p1, o)) {
        far = isFar(&p0, &p1);
        n->far_0F = far;
        func_09BC40(&D_00246BF8[far], n, &p0, &p1, fl);
    }
    func_165480(o, 1.0f);
    return 1;
}
