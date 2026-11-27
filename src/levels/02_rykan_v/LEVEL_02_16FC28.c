/* LEVEL_02:0x16FC28 -- starts the object's effect: validates the holder reference, kicks off the node's emitter, replays the pending transform setup once, resets the node and registers it with the flags of its type record; returns 1. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    float m[16];
} Mat;

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
    char pad_04[0xA];
    unsigned char state_0E;
    unsigned char far_0F;
    void *link_10;
    Node *prev_14;
    char emit_18[1];
};

typedef struct {
    int ref_00;
} Holder;

typedef struct {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    char pad_46[0xE];
    Holder *holder_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
} Obj;

typedef struct {
    char pad_00[0x68];
} Entry;

extern char *D_0021BD54;
extern int D_002AF2DC;
extern unsigned char D_0021C5A0;
extern float D_003AB630[];
extern float D_003AB190[];
extern float D_003AB610[];
extern float D_003AB4F0[];
extern Mat D_003AB690;
extern Mat D_0022CD40;
extern Entry D_00246BF8[];

extern void func_0EEF30(char *emit, int a, int b, int c, int d, float f0, float f1, float f2);
extern void func_096630(float *a, float *b, int n);
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

static __inline__ void Resolve(int *slot)
{
    int v;
    char *p;

    v = *slot;
    if (v != 0) {
        p = D_0021BD54 + v;
        if (*(int *)(p + 0x40) == 0) {
            *slot = 0;
        } else {
            *slot = (int)p;
        }
    }
}

int func_16FC28(Obj *o)
{
    Holder *h;
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int idx;
    int bit;

    h = o->holder_54;
    n = o->node_58;
    Resolve(&h->ref_00);
    func_0EEF30(n->emit_18, 0xFFFF0000, D_002AF2DC, 1, 0x14, 0.30000001192092896f, 0.5f, 0.05235988274216652f);
    o->state_45 = 0;
    if (D_0021C5A0 != 0) {
        func_096630(D_003AB630, D_003AB190, 6);
        func_096630(D_003AB610, D_003AB4F0, 2);
        D_0021C5A0 = 0;
        D_003AB690.m[0] = D_0022CD40.m[0];
        D_003AB690.m[8] = D_0022CD40.m[8];
        D_003AB690.m[9] = D_0022CD40.m[9];
        D_003AB690.m[10] = D_0022CD40.m[10];
        D_003AB690.m[11] = D_0022CD40.m[11];
        D_003AB690.m[1] = D_0022CD40.m[1];
        D_003AB690.m[2] = D_0022CD40.m[2];
        D_003AB690.m[3] = D_0022CD40.m[3];
        D_003AB690.m[4] = D_0022CD40.m[4];
        D_003AB690.m[5] = D_0022CD40.m[5];
        D_003AB690.m[6] = D_0022CD40.m[6];
        D_003AB690.m[7] = D_0022CD40.m[7];
        D_003AB690.m[12] = D_0022CD40.m[12];
        D_003AB690.m[13] = D_0022CD40.m[13];
        D_003AB690.m[14] = D_0022CD40.m[14];
        D_003AB690.m[15] = D_0022CD40.m[15];
    }
    n->link_10 = o;
    n->state_0E = 2;
    n->prev_14 = 0;
    n->next_00 = 0;
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
    if (func_088610(&p0, &p1, o)) {
        idx = isFar(&p0, &p1);
        n->far_0F = idx;
        func_09BC40(&D_00246BF8[idx], n, &p0, &p1, fl);
    }
    return 1;
}
