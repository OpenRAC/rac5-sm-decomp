/* LEVEL_03:0x199BE8 -- starts an object: marks its flags, initialises the linked node, builds a flag word from the object's template record, probes two points and, when the probe passes, spawns the effect with a near or far table entry; then runs the object start step, sets two timer bytes and returns 1. */
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
    unsigned char far_03;
    Obj *owner_04;
} Node;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0x13];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0xE];
    unsigned char b_76;
    unsigned char b_77;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_0024A578[];
extern int func_081B70(Vec4 *a, Vec4 *b, Obj *o);
extern void func_094EA0(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);
extern void func_07C938(Obj *o, float t, unsigned int idx);

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    n->far_03 = idx;
    func_094EA0(&D_0024A578[idx], n, a, b, fl);
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

int func_199BE8(Obj *o)
{
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int base;
    unsigned int alt;
    unsigned int mask;
    unsigned int flags;
    int bit;

    o->flags_64 = o->flags_64 | 0x1000;
    n = o->node_58;
    n->b_02 = 2;
    n->owner_04 = o;
    n->h_00 = 0xFFFF;
    rec = &o->cfg_40->recs_04[o->idx_44];
    base = o->flags_64 & 0x1420;
    alt = base | 1;
    mask = base | 0x81;
    if (rec->a_0C == 0) {
        mask = alt;
    }
    if (rec->b_10 != 0) {
        mask |= 0x100;
    }
    if (rec->c_14 != 0) {
        mask |= 0x200;
    }
    if (o->cfg_40->sel_3F == 1) {
        mask |= 0x800;
    }
    bit = (o->flags_64 >> 3) & 1;
    if (bit != 0) {
        mask |= 0x400;
    }
    flags = mask | 0x10;
    if (func_081B70(&p0, &p1, o) != 0) {
        spawn(n, &p0, &p1, flags, isFar(&p0, &p1));
    }
    func_07C938(o, 0.0f, 1);
    o->b_77 = 0x4B;
    o->b_76 = 0x32;
    return 1;
}
