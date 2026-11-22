/* LEVEL_08:0x1AED38 -- probes two points for the active node, then unlinks it and spawns it with a near or far table entry (or just unlinks it when the probe fails). */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Node {
    struct Node *next_00;
    char pad_04[0xB];
    unsigned char far_0F;
    int arg_10;
    struct Node *prev_14;
} Node;

typedef struct {
    char pad_00[0x58];
    Node *node_58;
} Obj;

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_0027E978[];
extern int func_089D30(Vec4 *a, Vec4 *b, int c);
extern void func_09D490(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

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

void func_1AED38(Obj *o)
{
    Node *n;
    Vec4 p0;
    Vec4 p1;

    n = o->node_58;
    if (func_089D30(&p0, &p1, n->arg_10)) {
        spawn(n, &p0, &p1, 0x1191, isFar(&p0, &p1));
    } else {
        unlinkNode(n);
    }
}
