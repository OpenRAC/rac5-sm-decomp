/* LEVEL_04:0x1C7C28 -- two-step effect state: first eases a fade value up, then plays a sound, resets the node, builds a flag word from the object's template, probes two points and spawns the effect with a near or far table entry. */
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
    char pad_18[0x68];
    float fade_80;
} Node;

struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[4];
    Cfg *cfg_40;
    unsigned char idx_44;
    unsigned char state_45;
    char pad_46[0x12];
    Node *node_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[8];
    float t_70;
};

typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_00249EF8[];
extern void func_1C7E68(Obj *o, float f);
extern void func_08FE08(float *pos, unsigned int id, float vol);
extern int func_0851A0(Vec4 *a, Vec4 *b, Obj *o);
extern void func_098668(Entry *e, Node *n, Vec4 *a, Vec4 *b, unsigned int fl);

static __inline__ void spawn(Node *n, Vec4 *a, Vec4 *b, unsigned int fl, int idx)
{
    n->far_0F = idx;
    func_098668(&D_00249EF8[idx], n, a, b, fl);
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

void func_1C7C28(Obj *o)
{
    Node *n;
    Rec *rec;
    Vec4 p0;
    Vec4 p1;
    unsigned int fl;
    int bit;

    n = o->node_58;
    switch (o->state_45) {
    case 0:
        o->t_70 += 1.0f;
        if (n->fade_80 < 1.0f) {
            n->fade_80 += 0.10000000894069672f;
            func_1C7E68(o, n->fade_80 * 0.8299999833106995f + 0.10000000149011612f);
        } else {
            o->t_70 = 0.0f;
            o->state_45 = 1;
        }
        break;
    case 1:
        func_08FE08(o->pos, 0xFFA600BE, 1.0f);
        n->b_0E = 2;
        n->owner_10 = o;
        n->w_14 = 0;
        n->w_00 = 0;
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
        if (func_0851A0(&p0, &p1, o)) {
            spawn(n, &p0, &p1, fl, isFar(&p0, &p1));
        }
        o->state_45 = 2;
        break;
    }
}
