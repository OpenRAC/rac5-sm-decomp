/* USA LEVEL_10.REL:0x198C88, 744-byte candidate (22 November 2026).
 * Measured gnu-ee-trial -fno-gcse: 22 differing words; first difference at
 * 0x80.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

typedef struct {
    char pad_00[0x2C];
    int w_2C;
    int w_30;
} Head;

typedef struct Obj Obj;

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    int w_00;
    char pad_04[0xA];
    unsigned char kind_0E;
    unsigned char far_0F;
    Obj *owner_10;
    int link_14;
    char pad_18[4];
    int w_1C;
    char pad_20[4];
    float f_24;
    int w_28;
    int w_2C;
    int w_30;
    int w_34;
    float f_38;
    short h_3C;
    short h_3E;
    int w_40;
    int w_44;
    int w_48;
    int w_4C;
    int w_50;
    V3 pos_54;
    unsigned char z_60;
    char pad_64[0xB8];
    V3 pos_11C;
    V3 pos_128;
    V3 pos_134;
    V3 pos_140;
    int w_14C;
    int w_150;
    int w_154;
    float f_158;
    int w_15C;
    int w_160;
    char b_164;
} Node;

typedef struct {
    char pad_00[0xDC];
    void (*fn_DC)(void);
} Hook;

typedef struct {
    char pad_00[0x68];
} Entry;

struct Obj {
    char pad_00[0x30];
    V3 pos_30;
    char pad_3C[4];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[3];
    Hook *hook_48;
    char pad_4C[8];
    Node *head_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
};

extern int D_0020F9F4;
extern Entry D_00238AF8[];
extern float D_0022DD30[];
extern void func_02F7F0(Head *h);
extern void func_02F850(Head *h, Obj *o);
extern int func_0823F0(Vec4 *a, Vec4 *b, Obj *o);
extern void func_0958E0(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);
extern int func_027B98(void);
extern void func_199438(Obj *o, int n);
extern void func_199540(Obj *o, int n);
extern void func_19AB98(void);

static __inline__ void Copy3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
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

int func_198C88(Obj *o)
{
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    unsigned int alt;
    unsigned int all;
    unsigned int base;
    int far;
    int t;

    n = o->head_54;
    func_02F7F0((Head *)n);
    func_02F850((Head *)n, o);
    if (((Head *)n)->w_2C != 0) {
        t = D_0020F9F4 + ((Head *)n)->w_2C;
        if (*(int *)(t + 0x40) == 0)
            ((Head *)n)->w_2C = 0;
        else
            ((Head *)n)->w_2C = t;
    }
    if (((Head *)n)->w_30 != 0) {
        t = D_0020F9F4 + ((Head *)n)->w_30;
        if (*(int *)(t + 0x40) == 0)
            ((Head *)n)->w_30 = 0;
        else
            ((Head *)n)->w_30 = t;
    }
    n = o->node_58;
    n->kind_0E = 2;
    n->owner_10 = o;
    n->link_14 = 0;
    n->w_00 = 0;
    base = o->flags_64 & 0x1420;
    rec = &o->cfg_40->recs_04[o->idx_44];
    fl = rec->a_0C != 0 ? (base | 0x81) : (base | 1);
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
    all = fl | 0x10;
    if (func_0823F0(&p0, &p1, o) != 0) {
        far = isFar(&p0, &p1);
        n->far_0F = far;
        func_0958E0(&D_00238AF8[far], n, &p0, &p1, all);
    }
    n->w_1C = 0;
    n->f_24 = D_0022DD30[func_027B98()];
    n->w_2C = 0xFF00FF00;
    n->f_38 = 60.0f;
    n->w_28 = 0;
    n->w_30 = 0;
    n->w_34 = 0;
    n->h_3C = 0;
    n->h_3E = 0;
    n->w_40 = 0;
    n->w_44 = 0;
    n->w_48 = 0;
    n->w_4C = 0;
    n->w_50 = 0;
    n->w_14C = 0;
    n->w_150 = 0;
    n->w_154 = 0;
    Copy3(&n->pos_54, &o->pos_30);
    n->z_60 = 0;
    n->pos_54.y = n->pos_54.y + 2.0f;
    Copy3(&n->pos_11C, &o->pos_30);
    Copy3(&n->pos_128, &o->pos_30);
    Copy3(&n->pos_134, &o->pos_30);
    Copy3(&n->pos_140, &o->pos_30);
    n->f_158 = o->pos_30.y;
    n->w_15C = 0;
    n->w_160 = 0;
    n->b_164 = 0;
    func_199438(o, 1);
    func_199540(o, 1);
    o->hook_48->fn_DC = func_19AB98;
    return 1;
}
