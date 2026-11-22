/* USA LEVEL_04.REL:0x19B8C8, 864-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 4 differing words; first difference at 0x1D8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    char pad_04[0xB];
    unsigned char kind;
    int w10;
    struct Node *back;
} Node;

typedef struct {
    char pad_00[4];
    Node node;
    float link[3];
    float f28[3];
    float f34;
} State;

typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[4];
    Table *table;
    unsigned char idx;
    char pad_45[0x13];
    State *state;
    char pad_5C[8];
    int flags;
} Actor;

typedef struct {
    char pad_00[0x54];
    char *p54;
} World;

extern World *D_00221E2C;
extern float D_0023D160;
extern char D_00249EF8[];

extern void func_12FEF8(float t, float *m, float *v);
extern void func_130F80(Actor *a, Actor *b, float *m);
extern void func_19B7E0(char *object, int enabled);
extern int func_01F450(float t, float *a, float *b, float *c, int d, int e);
extern int func_020960(float len, float *out, float *p1, float *pos, float *dir, int a, int b, int c);
extern void func_19B810(Actor *a);
extern int func_0851A0(float *a, float *b, int c);
extern void func_098668(void *kind, void *node, float *a, float *b, unsigned int flags);
extern float sqrtf(float x);

static __inline__ char *Row(int i)
{
    return D_00249EF8 + i * 0x68;
}

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

void func_19B8C8(Actor *a)
{
    State *st;
    Node *n;
    float *link;
    Rec *r;
    float mat[12];
    float q[4];
    float hit[4];
    float v[4];
    float p1[8];
    float out[4];
    float len2;
    float len;
    float inv;
    float t;
    float dx;
    float dz;
    int f;
    unsigned int plain;
    unsigned int flags;
    int kind;
    int row;
    float *pp;

    st = a->state;
    link = st->link;
    func_12FEF8(st->f34, mat, st->f28);
    func_130F80(a, a, mat);
    Add3(q, a->pos, link);
    if (a->pos[1] <= *(float *)(D_00221E2C->p54 + 0x28))
        goto done;
    func_19B7E0((char *)a, 0);
    if (func_01F450(0.15000000596046448f, q, hit, q, 0x28, 0) != 0)
        goto done;
    Copy3(v, link);
    len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (len2 < 2.3841857910156250e-07f) {
        len = 0.0f;
    } else {
        t = sqrtf(len2);
        inv = 1.0f / t;
        v[0] = v[0] * inv;
        v[1] = v[1] * inv;
        v[2] = v[2] * inv;
        len = t;
    }
    pp = p1;
    if (func_020960(len, out, pp, &a->pos[0], v, 0x28, 0, 0) != 0) {
done:
        func_19B810(a);
        return;
    }
    n = &st->node;
    st->link[1] = st->link[1] - D_0023D160;
    Copy3(a->pos, q);
    f = a->flags & 0x1420;
    r = &a->table->recs[a->idx];
    plain = f | 1;
    flags = plain;
    if (r->w0C != 0)
        flags = f | 0x81;
    if (r->w10 != 0)
        flags |= 0x100;
    if (r->w14 != 0)
        flags |= 0x200;
    if (a->table->b3F == 1)
        flags |= 0x800;
    if ((unsigned int)a->flags >> 3 & 1)
        flags |= 0x400;
    if (func_0851A0(v, pp, n->w10)) {
        dx = p1[0] - v[0];
        dz = p1[2] - v[2];
        if (8.0f < dx || 8.0f < dz)
            kind = 1;
        else
            kind = 0;
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
        func_098668(Row(row), n, v, pp, flags);
        return;
    }
    if (n->back != 0) {
        n->back->next = st->node.next;
        if (st->node.next == 0) {
            n->back = 0;
            return;
        }
        st->node.next->back = n->back;
        n->back = 0;
    }
    return;
}
