/* LEVEL_10:0x19D048 -- updates an entity transform from state, refreshes its grid node, and updates sound/state when active. */
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
    void *arg_10;
    struct Node *prev_14;
} Node;

typedef struct Target {
    char pad_00[0x64];
    unsigned int flags64;
} Target;

typedef struct State58 {
    float m[4][4];
    Node node;
    Target *target58;
    char pad_5C[0x30];
    float f8C;
} State58;

typedef struct Obj {
    float m[4][4];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    char pad_46[0x12];
    State58 *p58;
    char pad_5C[8];
    unsigned int flags_64;
} Obj;

typedef struct {
    char pad_00[0x68];
} Entry;

extern int D_00238C90;
extern Entry D_00238AF8[];

extern void func_07CCA0(Obj *o, int mode);
extern void func_19E7E8(Obj *o);
extern void func_19ED18(Obj *o);
extern void func_19D468(Obj *o, float x, float y, float z);
extern int func_0823F0(Vec4 *a, Vec4 *b, void *c);
extern void func_0958E0(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);
extern void func_19F298(Obj *o);
extern void func_0B33B0(int a, int b, float x, float y);
extern void func_19F330(Obj *o);

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
    func_0958E0(&D_00238AF8[idx], n, a, b, fl);
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

void func_19D048(Obj *o)
{
    State58 *s;
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int base;
    unsigned int alt;
    unsigned int fl;
    unsigned int fl2;

    s = o->p58;
    if (D_00238C90 >= 5) {
        func_07CCA0(o, 1);
        return;
    }

    if (s->target58 != 0 && (s->target58->flags64 & 6) != 0) {
        s->target58 = 0;
    }

    n = &s->node;
    o->m[2][0] = s->m[2][0];
    o->m[2][1] = s->m[2][1];
    o->m[2][2] = s->m[2][2];
    o->m[2][3] = s->m[2][3];
    o->m[0][0] = s->m[0][0];
    o->m[0][1] = s->m[0][1];
    o->m[0][2] = s->m[0][2];
    o->m[0][3] = s->m[0][3];
    o->m[1][0] = s->m[1][0];
    o->m[1][1] = s->m[1][1];
    o->m[1][2] = s->m[1][2];
    o->m[1][3] = s->m[1][3];
    o->m[3][0] = s->m[3][0];
    o->m[3][1] = s->m[3][1];
    o->m[3][2] = s->m[3][2];
    o->m[3][3] = s->m[3][3];

    func_19E7E8(o);
    func_19ED18(o);
    func_19D468(o, 3.0f, 3.0f, 3.0f);

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
    fl2 = fl | 0x10;
    if (func_0823F0(&p0, &p1, n->arg_10)) {
        spawn(n, &p0, &p1, fl2, isFar(&p0, &p1));
    } else {
        if (n->prev_14 != 0) {
            n->prev_14->next_00 = s->node.next_00;
            if (s->node.next_00 != 0) {
                s->node.next_00->prev_14 = n->prev_14;
            }
            n->prev_14 = 0;
        }
    }

    if (o->state_45 != 0) {
        func_19F298(o);
        func_0B33B0(0x65F, 0x5A, 60.0f, s->f8C);
    }
    func_19F330(o);
}
