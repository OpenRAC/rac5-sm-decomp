/* LEVEL_02:0x1A1338 -- starts a timed prop when its two counters are positive: rebases its resource offset, checks its link, builds its flag word and registers its proxy with the world. */
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
    int w_00;
    char pad_04[0xA];
    unsigned char b_0E;
    unsigned char far_0F;
    Obj *owner_10;
    int w_14;
} Node;

typedef struct {
    char pad_00[0x40];
    int field_40;
} Res;

typedef struct {
    float a;
    float b;
    float c;
    int w_0C;
} Hdr;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    char pad_46[0xE];
    Hdr *hdr_54;
    Node *node_58;
    int w_5C;
    char pad_60[4];
    unsigned int flags_64;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern int D_0021BD54;
extern Entry D_00246BF8[];
extern int func_028FB8(int x);
extern int func_088610(Vec4 *a, Vec4 *b, Obj *o);
extern void func_09BC40(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    n->far_0F = idx;
    func_09BC40(&D_00246BF8[idx], n, a, b, fl);
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

int func_1A1338(Obj *o)
{
    Hdr *h;
    Node *n;
    Rec *rec;
    Res *res;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int bit;

    h = o->hdr_54;
    n = o->node_58;
    if (h->a <= 0.0f || h->b <= 0.0f)
        return 0;
    if (h->w_0C != 0) {
        res = (Res *)(D_0021BD54 + h->w_0C);
        if (res->field_40 == 0)
            h->w_0C = 0;
        else
            h->w_0C = (int)res;
    }
    if (func_028FB8(o->w_5C) != 0)
        o->state_45 = 6;
    n->owner_10 = o;
    n->b_0E = 2;
    n->w_14 = 0;
    n->w_00 = 0;
    rec = &o->cfg_40->recs_04[o->idx_44];
    fl = (o->flags_64 & 0x1420) | 1;
    if (rec->a_0C != 0)
        fl |= 0x80;
    if (rec->b_10 != 0)
        fl |= 0x100;
    if (rec->c_14 != 0)
        fl |= 0x200;
    if (o->cfg_40->sel_3F == 1)
        fl |= 0x800;
    bit = (o->flags_64 >> 3) & 1;
    if (bit != 0)
        fl |= 0x400;
    if (func_088610(&p0, &p1, o))
        spawn(n, &p0, &p1, fl, isFar(&p0, &p1));
    return 1;
}
