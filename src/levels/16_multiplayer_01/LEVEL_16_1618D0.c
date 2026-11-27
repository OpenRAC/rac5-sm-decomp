/* LEVEL_16:0x1618D0 -- builds a uniform scale matrix from the state, applies it to the object, then builds the node's flag word, probes two points, unlinks the node and registers it with a near or far table entry. */

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

typedef struct Node {
    struct Node *next_00;
    char pad_04[0xB];
    unsigned char far_0F;
    int arg_10;
    struct Node *prev_14;
    char pad_18[0xAB];
    unsigned char live_C3;
} Node;

typedef struct {
    char pad0[0x84];
    char node[0xA0 - 0x84];
    float scale;
} State;

typedef struct {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0x13];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
} Obj;

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_001DE3F8[];
extern void *memset(void *p, int c, unsigned int n);
extern void func_1040F8(void *o, void *st, float *m);
extern int func_0748A0(void *a, void *b, void *c);
extern void func_086158(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ void unlinkNode(Node *n)
{
    if (n->prev_14 != 0) {
        n->prev_14->next_00 = n->next_00;
        if (n->next_00 != 0) {
            n->next_00->prev_14 = n->prev_14;
        }
        n->prev_14 = 0;
    }
}

void func_1618D0(Obj *o)
{
    State *st;
    Node *n;
    Rec *rec;
    float m[9];
    Vec4 p0;
    Vec4 p1;
    float sc;
    unsigned int fl;
    unsigned int base;
    unsigned int alt;
    unsigned int fl2;

    st = (State *)o->node_58;
    sc = st->scale;
    memset(m, 0, 0x24);
    m[0] = sc;
    m[4] = sc;
    m[8] = sc;
    func_1040F8(o, st, m);
    n = (Node *)((char *)st + 0x84);
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
    if (((o->flags_64 >> 3) & 1) != 0) {
        fl |= 0x400;
    }
    fl2 = fl | 0x10;
    if (func_0748A0(&p0, &p1, (void *)n->arg_10)) {
        float dx = p1.x - p0.x;
        float dz = p1.z - p0.z;
        int big;
        int idx2;
        Vec4 *lp;

        if (dx > 8.0f || dz > 8.0f) {
            big = 1;
        } else {
            big = 0;
        }
        lp = &p0;
        idx2 = big;
        unlinkNode(n);
        n->far_0F = big;
        func_086158(&D_001DE3F8[idx2], n, lp, &p1, fl2);
    } else {
        unlinkNode(n);
    }
}
