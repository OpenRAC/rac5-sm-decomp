/* USA LEVEL_02.REL:0x1C1630, 684-byte candidate (22 November 2026).
 * Measured pinned -fno-gcse: 19 differing words; first difference at 0x200.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

typedef struct Node Node;

struct Node {
    Node *next_00;
    char pad_04[0xB];
    unsigned char far_0F;
    void *link_10;
    Node *prev_14;
};

typedef struct {
    float v_00[3];
    float pad_0C;
    float t_10;
} Step;

typedef struct {
    char pad_00[0x10];
    float vel_10[3];
    char pad_1C[0x14];
    float pos_30[4];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    unsigned char kind_46;
    char pad_47[0xD];
    Step *step_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
} Obj;

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_00246BF8[];
extern int func_1C1F78(Obj *o, Vec4 *a, Vec4 *b);
extern int func_088610(Vec4 *a, Vec4 *b, void *link);
extern void func_09BC40(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

static __inline__ void Add3(float *d, float *a)
{
    d[0] = d[0] + a[0];
    d[1] = d[1] + a[1];
    d[2] = d[2] + a[2];
}

static __inline__ void Seg(float *a, float *b, float *pos, float *vel)
{
    a[0] = a[0] + vel[0] * 0.1f;
    a[1] = a[1] + vel[1] * 0.1f;
    a[2] = a[2] + vel[2] * 0.1f;
    b[0] = pos[0] + vel[0] * 0.1f;
    b[1] = pos[1] + vel[1] * 0.1f;
    b[2] = pos[2] + vel[2] * 0.1f;
}

static __inline__ void Unlink(Node *n)
{
    Node *p;

    p = n->prev_14;
    if (p != 0) {
        p->next_00 = n->next_00;
        if (n->next_00 == 0) {
            n->prev_14 = 0;
        } else {
            n->next_00->prev_14 = n->prev_14;
            n->prev_14 = 0;
        }
    }
}

void func_1C1630(Obj *o)
{
    Vec4 p0;
    Vec4 p1;
    Vec4 q0;
    Vec4 q1;
    Step *st;
    Node *n;
    Rec *rec;
    unsigned int fl;
    int idx;
    int bit;

    st = o->step_54;
    n = o->node_58;
    Copy4(&p0.x, o->pos_30);
    Add3(o->pos_30, st->v_00);
    Seg(&p0.x, &p1.x, o->pos_30, o->vel_10);
    if (func_1C1F78(o, &p0, &p1) != 0) {
        return;
    }
    st->t_10 = st->t_10 - 0.5f;
    if (st->t_10 <= 0.0f) {
        if (o->kind_46 == 1) {
            o->state_45 = 2;
            o->flags_64 |= 0x400;
        } else {
            o->state_45 = 1;
        }
    }
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
    if (func_088610(&q0, &q1, n->link_10)) {
        idx = isFar(&q0, &q1);
        Unlink(n);
        n->far_0F = idx;
        func_09BC40(&D_00246BF8[idx], n, &q0, &q1, fl);
    } else {
        Unlink(n);
    }
}
