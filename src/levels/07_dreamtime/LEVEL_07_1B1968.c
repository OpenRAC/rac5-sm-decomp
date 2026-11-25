/* LEVEL_07:0x1B1968 -- placement copy of LEVEL_01_19F7C0.c: when the shared check passes, prepares the object's node, builds its option word from the record and the object flags, probes two points and spawns the node with a near or far table entry, then marks the object; returns -1 when the check fails. */
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

typedef struct Obj Obj;

typedef struct {
    unsigned short h_00;
    unsigned char b_02;
    unsigned char b_03;
    Obj *o_04;
} Node;

typedef struct {
    char pad_00[0x68];
} Entry;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0x13];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0xE];
    unsigned char b_76;
    unsigned char b_77;
};

extern int D_0022F4F0;
extern Entry D_00244FF8[];
extern int func_0279E0(int a);
extern int func_027A50(int a);
extern float func_07ED90(Obj *o, int idx);
extern int func_083F28(Vec4 *a, Vec4 *b, Obj *o);
extern void func_0970F8(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

int func_1B1968(Obj *o)
{
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int f;
    int far;

    if (D_0022F4F0 == 4) {
        if (func_0279E0(5) == 0)
            return -1;
    } else if (D_0022F4F0 == 1) {
        if (func_027A50(2) == 0)
            return -1;
    }
    n = o->node_58;
    func_07ED90(o, 0);
    n->b_02 = 2;
    n->h_00 = 0xFFFF;
    n->o_04 = o;
    rec = &o->cfg_40->recs_04[o->idx_44];
    f = o->flags_64 & 0x1420;
    fl = f | 1;
    if (rec->a_0C != 0) {
        fl = f | 0x81;
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
    if ((o->flags_64 >> 3) & 1) {
        fl |= 0x400;
    }
    if (func_083F28(&p0, &p1, o)) {
        far = isFar(&p0, &p1);
        n->b_03 = far;
        func_0970F8(&D_00244FF8[far], n, &p0, &p1, fl);
    }
    o->flags_64 |= 0x1000000;
    o->b_77 = 0x32;
    o->b_76 = 0x32;
    return 1;
}
