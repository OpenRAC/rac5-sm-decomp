/* LEVEL_05:0x18C240 -- initialises a freshly placed timed prop: clears its proxy record, packs the table flags, registers its bounds with the world and copies its start position. */
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
    unsigned int fl_18;
    float pos_1C[3];
} Node;

typedef struct {
    float w_00;
    int w_04;
    int off_08;
} Hdr;

struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[4];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0xF];
    Hdr *hdr_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[8];
    float w_70;
    char pad_74[2];
    unsigned char b_76;
    unsigned char b_77;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern int D_001F5E14;
extern Entry D_0021B3F8[];
extern void *memset(void *s, int c, unsigned int n);
extern int func_07F460(Vec4 *a, Vec4 *b, Obj *o);
extern void func_092C68(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    n->far_0F = idx;
    func_092C68(&D_0021B3F8[idx], n, a, b, fl);
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

int func_18C240(Obj *o)
{
    Node *n;
    Hdr *h;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int f;
    int bit;
    Cfg *c;
    unsigned char sel;
    int rb;
    int rc;

    n = o->node_58;
    h = o->hdr_54;
    memset(n, 0, 0x28);
    f = o->flags_64;
    c = o->cfg_40;
    sel = c->sel_3F;
    rec = &c->recs_04[o->idx_44];
    rb = rec->b_10;
    fl = (f & 0x1420) | 1;
    if (rec->a_0C != 0)
        fl |= 0x80;
    rc = rec->c_14;
    n->owner_10 = o;
    if (rb != 0)
        fl |= 0x100;
    n->w_14 = 0;
    n->w_00 = 0;
    if (rc != 0)
        fl |= 0x200;
    n->b_0E = 2;
    if (sel == 1)
        fl |= 0x800;
    bit = (f >> 3) & 1;
    if (bit != 0)
        fl |= 0x400;
    n->fl_18 = fl;
    if (func_07F460(&p0, &p1, o))
        spawn(n, &p0, &p1, fl, isFar(&p0, &p1));
    if (h->off_08 != 0)
        h->off_08 = D_001F5E14 + h->off_08;
    o->b_77 = 0x2D;
    o->b_76 = 0x2D;
    o->flags_64 |= 0x800;
    o->w_70 = h->w_00;
    Copy3(n->pos_1C, o->pos);
    return 1;
}
