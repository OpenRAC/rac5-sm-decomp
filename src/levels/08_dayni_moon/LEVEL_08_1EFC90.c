/* LEVEL_08:0x1EFC90 -- placement copy of LEVEL_04_1C6B10.c: switches the actor's effect on or off: on builds the slot flags, probes the extent and places the effect record, off unlinks the effect node. */
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
    float f18;
} Node;

typedef struct {
    char pad_00[0x30];
    Vec3 pos;
    char pad_3C[4];
    Table *table;
    unsigned char idx;
    char pad_45[0xF];
    float *link;
    Node *state;
    char pad_5C[8];
    int flags;
} Actor;

extern char D_0027E978[];
extern char D_00275FF8[];
extern int func_089D30(float *a, float *b, int c);
extern void func_09D490(void *kind, void *node, float *a, float *b, unsigned int flags);
extern void func_07CBD8(void *a0, void *a1, void *a2, void *a3);

static __inline__ void Copy(Vec3 *dst, Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

void func_1EFC90(Actor *a, int on)
{
    Node *s;
    float *link;
    Rec *r;
    int f;
    unsigned int v;
    struct {
        float x, y, z, w;
    } p0;
    float p1[4];
    unsigned int t;
    int kind;
    int w;
    float dx;
    float dz;

    s = a->state;
    t = (on ^ 1) & 1;
    a->flags = (a->flags & -0x11) | (t << 4);
    w = a->flags & -0x21;
    w |= t << 5;
    a->flags = w;
    if (on != 0) {
        link = a->link;
        r = &a->table->recs[a->idx];
        f = a->flags & 0x1420;
        v = f | 1;
        if (r->w0C != 0)
            v = f | 0x81;
        if (r->w10 != 0)
            v |= 0x100;
        if (r->w14 != 0)
            v |= 0x200;
        if (a->table->b3F == 1)
            v |= 0x800;
        if ((unsigned int)a->flags >> 3 & 1)
            v |= 0x400;
        if (func_089D30((float *)&p0, p1, s->w10)) {
            dx = p1[0] - p0.x;
            dz = p1[2] - p0.z;
            if (8.0f < dx || 8.0f < dz)
                kind = 1;
            else
                kind = 0;
            s->kind = kind;
            func_09D490(D_0027E978 + kind * 0x68, s, (float *)&p0, p1, v);
        }
        Copy((Vec3 *)&p0, &a->pos);
        p0.y = p0.y + 0.1f;
        func_07CBD8(a, &p0, (char *)a + 0x10, D_00275FF8);
        s->f18 = link[1];
    } else {
        if (s->back != 0) {
            s->back->next = s->next;
            if (s->next == 0) {
                s->back = 0;
            } else {
                s->next->back = s->back;
                s->back = 0;
            }
        }
    }
}
