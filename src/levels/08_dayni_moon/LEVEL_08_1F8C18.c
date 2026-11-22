/* LEVEL_08:0x1F8C18 -- ends a node's hold: subtracts its stored height from the object, re-registers its bounding box with the near or far pool (or just unlinks it) and clears the node's timers. */
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
    float h_18;
    int w_1C;
    int w_20;
} Node;

typedef struct {
    char pad_00[0xD];
    unsigned char flag_0D;
} Hdr;

typedef struct {
    char pad_00[0x34];
    float y_34;
    char pad_38[8];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    char pad_46[0xE];
    Hdr *hdr_54;
    Node *node_58;
    int w_5C;
    char pad_60[4];
    unsigned int flags_64;
} Obj;

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_0027E978[];
extern int func_089D30(Vec4 *a, Vec4 *b, int c);
extern void func_09D490(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);
extern void func_028D10(int a);

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
    func_09D490(&D_0027E978[idx], n, a, b, fl);
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

void func_1F8C18(Obj *o)
{
    Node *n;
    Hdr *hdr;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int f;
    unsigned int fl;

    n = o->node_58;
    hdr = o->hdr_54;
    o->y_34 = o->y_34 - n->h_18;
    n->h_18 = 0.0f;
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
    if (func_089D30(&p0, &p1, n->arg_10)) {
        spawn(n, &p0, &p1, fl, isFar(&p0, &p1));
    } else {
        unlinkNode(n);
    }
    o->state_45 = 0;
    if (hdr->flag_0D != 0) {
        func_028D10(o->w_5C);
    }
    n->w_20 = 0;
    n->w_1C = 0;
}
