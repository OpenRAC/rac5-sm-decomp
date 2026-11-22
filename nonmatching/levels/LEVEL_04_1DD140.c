/* USA LEVEL_04.REL:0x1DD140, 544-byte candidate (22 November 2026).
 * Measured pinned --flag=-fno-gcse: 3 differing words; first difference at
 * 0x50.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

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
    char pad_00[0xCC];
    Node node;
    char pad_e4[0x104 - 0xE4];
    char *w104;
    unsigned int w108;
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
    char pad_00[0x14];
    float v14;
    float v18;
    float v1C;
    float v20;
} Fx;

extern char D_002442F0[];
extern char D_00249EF8[];
extern void func_033288(char *a, char *p);
extern void func_033440(Vec3 *in);
extern void func_033E88(char *a0, int a1);
extern int func_0851A0(float *a, float *b, int c);
extern void func_098668(void *kind, void *node, float *a, float *b, unsigned int flags);
extern unsigned int func_034B70(unsigned int index);
extern void func_083E30(void *obj, void *rec, void *p, int e, int f, int g, int h, int i, float a, float b, float c, float d);
extern void func_033AA8(char *a0);
extern void func_0333E0(char *a0);
extern void func_0335D8(char *a0);
extern void func_083F98(char *record);

static __inline__ void Unlink(Node *n)
{
    if (n->back != 0) {
        n->back->next = n->next;
        if (n->next == 0) {
            n->back = 0;
        } else {
            n->next->back = n->back;
            n->back = 0;
        }
    }
}

static __inline__ void Spawn(Actor *a, char **slot, Fx *rec)
{
    if (rec != 0)
        func_083E30(a, rec, slot, 0, 0, 0, 0, 1, rec->v14, rec->v18, rec->v1C, rec->v20);
}

void func_1DD140(Actor *a, int on, unsigned int sel)
{
    State *s;
    Rec *r;
    int f;
    int v;
    int plain;
    unsigned int u;
    float p0[4];
    float p1[4];
    int kind;
    float dx;
    float dz;
    Fx *fx;
    Node *n;

    s = a->state;
    a->flags = (a->flags & ~0x20) | (((on ^ 1) & 1) << 5);
    if (on != 0) {
        func_033288((char *)a, D_002442F0);
        n = &s->node;
        func_033440((Vec3 *)a);
        func_033E88((char *)a, 0);
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
        if (func_0851A0(p0, p1, n->w10)) {
            dx = p1[0] - p0[0];
            dz = p1[2] - p0[2];
            if (8.0f < dx || 8.0f < dz)
                kind = 1;
            else
                kind = 0;
            n->kind = kind;
            func_098668(D_00249EF8 + kind * 0x68, n, p0, p1, u);
        }
        s->w104 = 0;
        fx = (Fx *)func_034B70(sel);
        s->w108 = (unsigned int)fx;
        Spawn(a, &s->w104, fx);
    } else {
        func_033AA8((char *)a);
        func_0333E0((char *)a);
        func_0335D8((char *)a);
        Unlink(&s->node);
        func_083F98(s->w104);
    }
}
