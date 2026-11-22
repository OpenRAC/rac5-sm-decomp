/* LEVEL_08:0x1B5670 -- prepares the object's node, builds its option word from the record and the object flags, probes two points and, when the probe succeeds, spawns the node with a near or far table entry; then marks the object. */
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
    unsigned short h_00;
    unsigned char b_02;
    unsigned char b_03;
    Obj *o_04;
} Node;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0x13];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0xF];
    unsigned char b_77;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_0027E978[];
extern int func_089D30(Vec4 *a, Vec4 *b, Obj *o);
extern void func_09D190(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_1B5670(Obj *o)
{
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int bit;
    unsigned int alt;
    unsigned int opt;
    unsigned int f;
    int far;

    n = o->node_58;
    n->b_02 = 2;
    n->h_00 = 0xFFFF;
    n->o_04 = o;
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
    bit = (o->flags_64 >> 3) & 1;
    if (bit != 0) {
        fl |= 0x400;
    }
    opt = fl | 0x10;
    if (func_089D30(&p0, &p1, o)) {
        far = isFar(&p0, &p1);
        n->b_03 = far;
        func_09D190(&D_0027E978[far], n, &p0, &p1, opt);
    }
    o->b_77 = 0x32;
    o->flags_64 |= 0x800;
    return 1;
}
