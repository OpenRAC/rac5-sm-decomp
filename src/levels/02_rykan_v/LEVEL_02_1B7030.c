/* LEVEL_02:0x1B7030 -- dispatches on the shared state result: for the special result it checks a table entry, builds a flag word for its linked node, probes two points and spawns the node with a near or far table entry or unlinks it; otherwise it forwards the result. */

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
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    char pad_46[0xE];
    void *info_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
} Obj;

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_00246BF8[];
extern char D_0023D938[];
extern int func_088610(Vec4 *a, Vec4 *b, int c);
extern void func_09BC40(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);
extern int func_1B6650(Obj *o);
extern void func_1B5FC0(Obj *o, int state, int code);
extern int func_031288(void *info, Obj *o, char *tab, int z);

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

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    unlinkNode(n);
    n->far_0F = idx;
    func_09BC40(&D_00246BF8[idx], n, a, b, fl);
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

void func_1B7030(Obj *o)
{
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int base;
    unsigned int alt;
    unsigned int fl2;
    int bit;
    int r;

    r = func_1B6650(o);
    if (r != 10) {
        func_1B5FC0(o, o->state_45, (unsigned char)r);
        return;
    }
    if (func_031288(o->info_54, o, D_0023D938, 0) != 0) {
        func_1B5FC0(o, o->state_45, 12);
    }
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
    bit = (o->flags_64 >> 3) & 1;
    if (bit != 0) {
        fl |= 0x400;
    }
    fl2 = fl | 0x10;
    n = o->node_58;
    if (func_088610(&p0, &p1, n->arg_10)) {
        spawn(n, &p0, &p1, fl2, isFar(&p0, &p1));
    } else {
        unlinkNode(n);
    }
}
