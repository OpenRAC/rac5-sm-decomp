/* LEVEL_07:0x19A658 -- initialises the object's proxy node (kind 2, back-reference, state cleared), probes two points and, when found, registers the proxy with the near or far pool entry; always returns 1. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad_00[0x68];
} Entry;

struct Obj;

typedef struct {
    unsigned short w_00;
    unsigned char kind_02;
    unsigned char far_03;
    struct Obj *owner_04;
    char pad_08[0x130];
    int w_138;
    unsigned char b_13C;
} Node;

typedef struct Obj {
    char pad_00[0x58];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0xE];
    unsigned char b_76;
    unsigned char b_77;
} Obj;

extern Entry D_00244FF8[];
extern int func_083F28(Vec4 *a, Vec4 *b, Obj *o);
extern void func_0970F8(Entry *e, Node *n, Vec4 *a, Vec4 *b, int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_19A658(Obj *o)
{
    Node *n;
    Vec4 p0;
    Vec4 p1;
    int far;

    o->b_77 = 0x2A;
    o->flags_64 |= 0x20;
    n = o->node_58;
    o->b_76 = 0x2A;
    n->b_13C = 0;
    n->kind_02 = 2;
    n->w_00 = 0xFFFF;
    n->owner_04 = o;
    if (func_083F28(&p0, &p1, o) != 0) {
        far = isFar(&p0, &p1);
        n->far_03 = far;
        func_0970F8(&D_00244FF8[far], n, &p0, &p1, 0x111);
    }
    n->w_138 = 0;
    return 1;
}
