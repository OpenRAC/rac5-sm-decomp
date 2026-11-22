/* USA LEVEL_01.REL:0x1DAE60 (22 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_081D90 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    float f0, f1, f2;
    float pad[3];
    float f18;
} Cfg;

typedef struct {
    float f0, f1, f2;
    float pad[3];
    float f18;
    char pad_1c[0x3C - 0x1C];
    int f3C;
} CfgEntry;

typedef struct {
    char pad0[0x24];
    char f24[0x10];
    float pos;
    float vel;
    float vy;
    int state;
} Obj;

typedef struct {
    int pad_00[3];
    int w0C;
    int w10;
    int w14;
    char pad_18[0x34 - 0x18];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs;
    char pad_08[0x37];
    unsigned char b3F;
} Table;

typedef struct Node {
    struct Node *next;
    char pad_04[8];
    unsigned short flags;
    char pad_0E;
    unsigned char kind;
    int w10;
    struct Node *back;
} Node;

typedef struct {
    char pad_00[4];
    Node node;
    char pad_1c[0x78 - 0x1C];
    float *frame;
    char pad_7c[0x80 - 0x7C];
} State;

typedef struct {
    char pad_00[0x40];
    Table *table;
    unsigned char idx;
    char pad_45[0x13];
    State *state;
    char pad_5C[8];
    int flags;
} Actor;

typedef struct {
    int kind;
    float *m;
} Hit;

extern CfgEntry D_0022AE80[];
extern char D_0022F6F8[];

extern int func_1CE068(Obj *o, int p1, int p2, Cfg *cfg, int p4);
extern void func_123BA8(char *p);
extern int func_081D90(float *a, float *b, int c);
extern void func_095570(void *kind, void *node, float *a, float *b, unsigned int flags);
extern int func_07CE40(char *a0);
extern void func_07CD28(Actor *a, int b, int c, int d, float t, float u);
extern float fabsf(float x);

static __inline__ char *Row(int i)
{
    return D_0022F6F8 + i * 0x68;
}

static __inline__ int IsUnit(float *v)
{
    return fabsf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2] - 1.0f) <= 0.00001f;
}

static __inline__ void Busy(Node *n)
{
    n->flags |= 8;
}

int func_1DAE60(Actor *a, int mode, int idx)
{
    State *st;
    Node *n;
    Rec *r;
    Hit hit;
    float p0[4];
    float p1[4];
    float *m;
    int res;
    int f;
    unsigned int v;
    unsigned int plain;
    unsigned int u;
    int kind;
    int row;
    float *pa;
    float dx;
    float dz;
    CfgEntry *c;
    unsigned char ok0, ok1, ok2;

    st = a->state;
    c = &D_0022AE80[idx];
    Busy(&st->node);
    res = func_1CE068((Obj *)&st->pad_1c[0], (int)a, mode, (Cfg *)c, (int)&hit);
    if (hit.kind == 2) {
        m = hit.m;
        if (m != 0 && (*(unsigned int *)(*(int *)(*(int *)((char *)m + 0x40) + 0x10) + 0x3C) & 8) && (ok0 = IsUnit(m + 0)) && (ok1 = IsUnit(m + 4)) && (ok2 = IsUnit(m + 8))) {
            func_123BA8((char *)st + 0x7C);
            st->frame = hit.m;
        } else {
            st->frame = 0;
        }
    }
    n = &st->node;
    n->flags &= 0xFFF7;
    r = &a->table->recs[a->idx];
    f = a->flags & 0x1420;
    plain = f | 1;
    v = f | 0x81;
    if (r->w0C == 0)
        v = plain;
    if (r->w10 != 0)
        v |= 0x100;
    if (r->w14 != 0)
        v |= 0x200;
    if (a->table->b3F == 1)
        v |= 0x800;
    if ((unsigned int)a->flags >> 3 & 1)
        v |= 0x400;
    u = v | 0x10;
    if (func_081D90(p0, p1, n->w10)) {
        dx = p1[0] - p0[0];
        dz = p1[2] - p0[2];
        if (8.0f < dx || 8.0f < dz)
            kind = 1;
        else
            kind = 0;
        pa = p0;
        row = kind;
        if (n->back != 0) {
            n->back->next = n->next;
            if (n->next == 0) {
                n->back = 0;
            } else {
                n->next->back = n->back;
                n->back = 0;
            }
        }
        n->kind = kind;
        func_095570(Row(row), n, pa, p1, u);
    } else {
        if (n->back != 0) {
            n->back->next = st->node.next;
            if (st->node.next == 0) {
                n->back = 0;
            } else {
                st->node.next->back = n->back;
                n->back = 0;
            }
        }
    }
    if (func_07CE40((char *)a) != c->f3C)
        func_07CD28(a, c->f3C, 0, 1, 0.10000000149011612f, 0.0f);
    return res;
}
