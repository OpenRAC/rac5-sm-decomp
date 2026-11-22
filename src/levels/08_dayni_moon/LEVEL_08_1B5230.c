/* LEVEL_08:0x1B5230 -- when the shared check passes, resets the object's node, builds a flag word from the object's template, probes two points and spawns the effect with a near or far table entry; returns 1, or -1 when the check fails. */
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
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_0027E978[];
extern unsigned char func_027CA8(unsigned int index);
extern int func_089D30(Vec4 *a, Vec4 *b, Obj *o);
extern void func_09D190(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    n->far_03 = idx;
    func_09D190(&D_0027E978[idx], n, a, b, fl);
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

int func_1B5230(Obj *o)
{
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int bit;

    if (func_027CA8(9) == 0) {
        return -1;
    }
    n = o->node_58;
    n->b_02 = 2;
    n->owner_04 = o;
    n->h_00 = 0xFFFF;
    rec = &o->cfg_40->recs_04[o->idx_44];
    fl = (o->flags_64 & 0x1420) | 1;
    if (rec->a_0C != 0) {
        fl |= 0x80;
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
    if (func_089D30(&p0, &p1, o)) {
        spawn(n, &p0, &p1, fl, isFar(&p0, &p1));
    }
    return 1;
}
