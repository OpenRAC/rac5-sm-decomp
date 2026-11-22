/* LEVEL_10:0x190FA0 -- rebases the two resource offsets of a freshly placed prop, builds its flag word from its template, registers its bounds and sets its default state and tint. */
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
    unsigned char far_03;
    Obj *owner_04;
} Node;

typedef struct {
    char pad_00[0x40];
    Node n;
    float v_48[3];
    float f_54;
} Dst;

typedef struct {
    int first;
    int second;
} Hdr;

typedef struct {
    char pad_00[0x40];
    int field_40;
} Res;

struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0xF];
    Hdr *hdr_54;
    Dst *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0xE];
    unsigned char b_76;
    unsigned char b_77;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern int D_0020F9F4;
extern Entry D_00238AF8[];
extern float D_0022CCB8[3];
extern int func_0823F0(Vec4 *a, Vec4 *b, Obj *o);
extern void func_0955E0(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    n->far_03 = idx;
    func_0955E0(&D_00238AF8[idx], n, a, b, fl);
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

int func_190FA0(Obj *o)
{
    Hdr *h;
    Dst *d;
    Node *n;
    Rec *rec;
    Res *res;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int bit;

    h = o->hdr_54;
    if (h->first != 0) {
        res = (Res *)(D_0020F9F4 + h->first);
        if (res->field_40 == 0)
            h->first = 0;
        else
            h->first = (int)res;
    }
    if (h->second != 0)
        h->second = D_0020F9F4 + h->second;
    d = o->node_58;
    n = &d->n;
    n->owner_04 = o;
    n->b_02 = 2;
    n->h_00 = 0xFFFF;
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
    if (func_0823F0(&p0, &p1, n->owner_04))
        spawn(n, &p0, &p1, fl, isFar(&p0, &p1));
    d->f_54 = 1.0f;
    Copy3(d->v_48, D_0022CCB8);
    o->b_76 = 0x18;
    o->b_77 = 0x40;
    return 1;
}
