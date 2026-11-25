/* LEVEL_08:0x14CBF8 -- placement copy of LEVEL_01_13B750.c: per-frame step of a chasing actor: drops a lost target, counts down and re-aims at the target, then refreshes the pooled bounding box of the actor (unlinking the previous node) with the matching slot flags. */
typedef struct Node {
    struct Node *next;
    char pad_04[8];
    unsigned short flags;
    char pad_0E;
    unsigned char kind;
    void *w10;
    struct Node *back;
} Node;

typedef struct Rec {
    int pad_00[3];
    int w0C;
    int w10;
    int w14;
    char pad_18[0x34 - 0x18];
} Rec;

typedef struct Table {
    char pad_00[4];
    Rec *recs;
    char pad_08[0x37];
    unsigned char b3F;
} Table;

typedef struct Target {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x64 - 0x3C];
    unsigned int flags;
} Target;

typedef struct Mat {
    float m[4][4];
} Mat;

typedef struct Mat43 {
    float m[4][3];
} Mat43;

typedef struct State {
    Node node;
    char pad_18[0x6C - 0x18];
    Target *target;
    int count;
    Mat *p74;
    char fld[0x30];
    char mat[0x38];
    int mode;
    char pad_E4[4];
    unsigned int flags2;
    char pad_EC[8];
    unsigned char bF4;
} State;

typedef struct Actor {
    char pad_00[0x20];
    float dir[3];
    char pad_2C[4];
    float pos[3];
    char pad_3C[4];
    Table *table;
    unsigned char idx;
    char pad_45[0x13];
    State *state;
    char pad_5C[8];
    unsigned int flags;
} Actor;

extern char D_0027E978[];
extern float sqrtf(float x);
extern int func_14B7E8(Actor *a);
extern void func_14BA58(Actor *a, int b, int c);
extern int func_14F3A8(Actor *a, State *s, int b, int c);
extern float *func_14EAA8(Actor *a, State *s);
extern void func_139898(Mat *o, Mat43 *a, Mat *b);
extern void func_134E80(char *dst, int value);
extern int func_089D30(float *a, float *b, void *c);
extern void func_09D490(void *kind, void *node, float *a, float *b, unsigned int flags);

static __inline__ char *Row(int i)
{
    return D_0027E978 + i * 0x68;
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void func_14CBF8(Actor *a)
{
    State *st;
    Rec *r;
    float d[4];
    float p0[4];
    float p1[4];
    float *lim;
    float *dir;
    float len;
    float inv;
    float rt;
    float len2;
    float dx;
    float dz;
    unsigned int f;
    unsigned int plain;
    unsigned int v;
    unsigned int u;
    int kind;
    int row;
    float *pa;

    st = a->state;
    if (st->target != 0) {
        if (st->target->flags & 0x40E) {
            st->target = 0;
        }
    }
    if (st->target == 0) {
        func_14BA58(a, func_14B7E8(a) & 0xFF, 0);
        return;
    }
    func_14F3A8(a, st, 0, 0);
    st->count = st->count - 1;
    if (st->count == 0) {
        if (st->mode == 2) {
            func_14BA58(a, 5, 0);
        } else if (st->mode == 1) {
            st->bF4 = 1;
            dir = a->dir;
            Sub3(d, st->target->pos, a->pos);
            len2 = Dot3(d, d);
            if (len2 < 2.3841858e-07f) {
                d[0] = a->dir[0];
                d[1] = dir[1];
                d[2] = dir[2];
                len = 0.0f;
            } else {
                rt = sqrtf(len2);
                inv = 1.0f / rt;
                len = rt;
                d[0] = inv * d[0];
                d[1] = inv * d[1];
                d[2] = inv * d[2];
            }
            lim = func_14EAA8(a, st);
            if (len <= lim[0] && lim[1] < d[0] * a->dir[0] + d[1] * dir[1] + d[2] * dir[2]) {
                st->count = 0x3C;
            } else {
                func_14BA58(a, func_14B7E8(a) & 0xFF, 0);
            }
        }
    }
    if (st->p74 == 0) {
        return;
    }
    func_139898((Mat *)a, (Mat43 *)st->mat, st->p74);
    func_134E80(st->fld, (int)st->p74);
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
    u = v | st->flags2;
    if (func_089D30(p0, p1, st->node.w10)) {
        dx = p1[0] - p0[0];
        dz = p1[2] - p0[2];
        if (8.0f < dx || 8.0f < dz)
            kind = 1;
        else
            kind = 0;
        pa = p0;
        row = kind;
        if (st->node.back != 0) {
            st->node.back->next = st->node.next;
            if (st->node.next == 0) {
                st->node.back = 0;
            } else {
                st->node.next->back = st->node.back;
                st->node.back = 0;
            }
        }
        st->node.kind = kind;
        func_09D490(Row(row), &st->node, pa, p1, u);
    } else {
        if (st->node.back != 0) {
            st->node.back->next = st->node.next;
            if (st->node.next == 0) {
                st->node.back = 0;
            } else {
                st->node.next->back = st->node.back;
                st->node.back = 0;
            }
        }
    }
}
