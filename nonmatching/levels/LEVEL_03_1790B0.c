/* USA LEVEL_03.REL:0x1790B0, 296-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad -fno-gcse: 6 differing words; first difference
 * at 0x78.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Node {
    unsigned short id_00;
    unsigned char kind_02;
    unsigned char far_03;
    int arg_04;
    char pad_08[8];
    int w_10;
    float f_14;
    int w_18;
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    Vec3 v_2C;
    char pad_38[0x28];
} Node;

typedef struct {
    char pad_00[0x45];
    unsigned char mode_45;
    char pad_46[0x12];
    Node *node_58;
    char pad_5C[8];
    int flags_64;
} Obj;

typedef struct {
    char pad_00[0x68];
} Entry;

extern Vec3 D_00230D58;
extern char D_00220330[];
extern Entry D_0024A578[];
extern void func_1E2608(void *a, void *b, void *c, void *d);
extern int func_081B70(Vec4 *a, Vec4 *b, int c);
extern void func_094EA0(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

void func_1790B0(Obj *o)
{
    Node *n;
    Vec4 p0;
    Vec4 p1;
    int which;
    int *q;

    o->flags_64 = o->flags_64 & ~0x10;
    n = o->node_58;
    o->mode_45 = 0;
    o->flags_64 = o->flags_64 & ~0x20;
    n->f_14 = 1.0f;
    n->w_10 = 0;
    n->w_18 = 0;
    n->w_28 = 0;
    n->v_2C = D_00230D58;
    n->w_20 = 0;
    n->w_24 = 0;
    n->w_1C = 0;
    func_1E2608((char *)n + 0x38, (char *)n + 0x60, D_00220330, &n->w_1C);
    if (n->id_00 == 0xFFFF) {
        if (func_081B70(&p0, &p1, n->arg_04)) {
            which = isFar(&p0, &p1);
            n->far_03 = which;
            func_094EA0(&D_0024A578[which], n, &p0, &p1, 0x1411);
        }
    }
}
