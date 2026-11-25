/* LEVEL_09:0x183D70 -- one-time start of a spawned object: resolves its record pointer (failing when it does not resolve), clears and tags its node, either clears the node flag or snaps the object to the start pose, builds a flag word from the object's template and spawns the node with a near or far table entry. */
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
    int w_18;
    unsigned char b_1C;
} Node;

typedef struct {
    int slot;
} Info;

struct Obj {
    char pad_00[0x30];
    float pos[3];
    float t_3C;
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    char pad_46[0xE];
    Info *info_54;
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern char *D_001F0894;
extern unsigned char D_001DFF6C;
extern float D_0020CAC8[3];
extern Entry D_00216E78[];
extern void *memset(void *p, int c, unsigned int n);
extern int func_07E810(Vec4 *a, Vec4 *b, Obj *c);
extern void func_091CC8(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ int Fix(int *p)
{
    char *q;

    if (*p == 0) {
        return 0;
    }
    q = D_001F0894 + *p;
    if (*(int *)(q + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = (int)q;
    return 1;
}

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    n->far_0F = idx;
    func_091CC8(&D_00216E78[idx], n, a, b, fl);
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

int func_183D70(Obj *o)
{
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int bit;
    float *d;

    n = o->node_58;
    if (!Fix(&o->info_54->slot)) {
        return 0;
    }
    memset(n, 0, 0x18);
    n->owner_10 = o;
    n->b_0E = 2;
    n->w_14 = 0;
    n->w_00 = 0;
    if (D_001DFF6C != 0) {
        n->b_1C = 0;
    } else if (n->b_1C != 0) {
        d = o->pos;
        d[0] = D_0020CAC8[0];
        d[1] = D_0020CAC8[1];
        d[2] = D_0020CAC8[2];
        o->pos[1] = 0.7200000286102295f;
        o->state_45 = 4;
    }
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
    if (((int (*)(Vec4 *, Vec4 *, Obj *))func_07E810)(&p0, &p1, n->owner_10)) {
        spawn(n, &p0, &p1, fl, isFar(&p0, &p1));
    }
    n->w_18 = 0;
    return 1;
}
