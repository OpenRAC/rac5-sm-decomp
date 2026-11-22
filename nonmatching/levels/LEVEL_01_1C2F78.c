/* USA LEVEL_01.REL:0x1C2F78, 664-byte candidate (22 November 2026).
 * Measured pinned: 28 differing words; first difference at 0x124.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    int pad_00[3];
    int w0C;
    int w10;
    int w14;
    char pad_18[0x34 - 0x18];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs;
    char pad_08[0x37];
    unsigned char b3F;
} Table;

typedef struct {
    char pad_00[0x30];
    Vec3 pos;
    char pad_3C[4];
    Table *table;
    unsigned char idx;
    char pad_45[0x1F];
    unsigned int flags;
} Owner;

typedef struct {
    unsigned short slot;
    char pad_02;
    unsigned char set;
    Owner *owner;
    Vec3 a;
    Vec3 b;
    unsigned char b20;
    char pad_21;
    unsigned short h22;
} Slot;

typedef struct {
    char pad_00[0x10];
    Slot sl;
    char pad_34[0x4C];
    unsigned short cnt;
} State;

typedef struct {
    char pad_00[0x10];
    int w10;
} Sub;

typedef struct {
    char pad_00[0x30];
    Vec3 pos;
    char pad_3C[0x18];
    Sub *w54;
    State *state;
} Actor;

typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

extern Obj D_0022F6F8[];
extern int D_0021A7F0;
extern char D_00219E00[];
extern void func_0145D0(float f, Vec3 *pos, void *p, int a, int b);
extern void func_030AB8(Sub *w, Vec3 *pos, int a);
extern void func_095858(Obj *o, unsigned int index);
extern void func_095270(Obj *o, Slot *s, Vec3 *a, Vec3 *b, unsigned int flags);
extern int func_014358(Actor *o, float a, float b, float c);
extern int func_028290(void);
extern void func_01A4B0(float f, float g, int a, int b, Vec3 *pos, int c, Actor *src);
extern int func_07CAB8(char *a0, int a1);
extern int func_1C3630(Actor *obj);
extern void func_1C1E90(Actor *a, int mask, int value);

static __inline__ void Add(Vec3 *out, Vec3 *p, Vec3 *q)
{
    out->x = p->x + q->x;
    out->y = p->y + q->y;
    out->z = p->z + q->z;
}

void func_1C2F78(Actor *a)
{
    State *s;
    Slot *sl;
    Owner *o;
    Rec *r;
    Vec3 p0;
    Vec3 p1;
    Sub *w;
    unsigned int f;
    unsigned int v;
    unsigned int plain;
    unsigned int u;
    unsigned char set;
    Obj *prev;

    w = a->w54;
    s = a->state;
    func_0145D0(0.2f, &a->pos, (char *)s + 0x5C, w->w10, 0);
    func_030AB8(w, &a->pos, 1);
    sl = &s->sl;
    o = sl->owner;
    Add(&p0, &sl->a, &o->pos);
    Add(&p1, &sl->b, &o->pos);
    r = &o->table->recs[o->idx];
    f = o->flags & 0x1420;
    plain = f | 1;
    v = f | 0x81;
    if (r->w0C == 0)
        v = plain;
    if (r->w10 != 0)
        v |= 0x100;
    if (r->w14 != 0)
        v |= 0x200;
    if (o->table->b3F == 1)
        v |= 0x800;
    if (o->flags >> 3 & 1)
        v |= 0x400;
    prev = &D_0022F6F8[sl->set];
    set = sl->b20;
    u = v | sl->h22;
    if (s->sl.slot != 0xFFFF) {
        func_095858(prev, s->sl.slot);
        s->sl.slot = 0xFFFF;
    }
    sl->set = set;
    func_095270(&D_0022F6F8[set], sl, &p0, &p1, u);
    s->cnt++;
    if ((unsigned short)(s->cnt - 0x32) < 3 && func_014358(a, 1.2f, 2.0f, 0.8660254f) != 0)
        func_01A4B0(*(float *)(D_00219E00 + func_028290() * 0x10 + 8 + (D_0021A7F0 - 1) * 0x40 + 0x20), 1.0f, 2, 1, &a->pos, 0, a);
    if (func_07CAB8((char *)a, 0) != 0)
        func_1C1E90(a, 0xFF, (unsigned char)func_1C3630(a));
}
