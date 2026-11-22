/* LEVEL_03:0x155020 -- placement copy of LEVEL_01_155B90.c: switches the actor's effect on or off: on places the effect's two points from its owner, rebuilds the slot flags and re-registers the slot; off spawns the global effect, then reports the state change. */
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
} State;

typedef struct {
    char pad_00[0x34];
    float f34;
    char pad_38[0x0D];
    unsigned char b45;
    char pad_46[0x12];
    State *state;
    int w5C;
    char pad_60[0x10];
    int w70;
} Actor;

typedef struct {
    char pad_00[0x14];
    float v14;
    float v18;
    float v1C;
    float v20;
} Fx;

typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

extern Obj D_0024A578[];
extern Fx *D_0021FAAC;
extern void func_095488(Obj *o, unsigned int index);
extern void func_094EA0(Obj *o, State *s, Vec3 *a, Vec3 *b, unsigned int flags);
extern void func_0807B0(void *obj, void *rec, int e, int f, int g, int h, int i, int j, float a, float b, float c, float d);
extern void func_028568(int key);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095488(pool, *h);
        *h = 0xFFFF;
    }
}

static __inline__ void Add(Vec3 *out, Vec3 *p, Vec3 *q)
{
    out->x = p->x + q->x;
    out->y = p->y + q->y;
    out->z = p->z + q->z;
}

static __inline__ void Spawn(Actor *a, Fx *rec)
{
    if (rec != 0)
        func_0807B0(a, rec, 0, 0, 0, 0, 0, 1, rec->v14, rec->v18, rec->v1C, rec->v20);
}

void func_155020(Actor *a, int mode)
{
    State *s;
    Owner *o;
    Rec *r;
    Vec3 p0;
    Vec3 p1;
    unsigned int f;
    unsigned int v;
    unsigned int plain;
    unsigned int u;
    unsigned char set;
    Obj *prev;

    if (mode != 0) {
        a->w70 = 0;
        s = a->state;
        a->f34 = a->f34 - 0.5f;
        o = s->owner;
        Add(&p0, &s->a, &o->pos);
        Add(&p1, &s->b, &o->pos);
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
        set = s->b20;
        u = v | s->h22;
        Release(&D_0024A578[s->set], &s->slot);
        s->set = set;
        func_094EA0(&D_0024A578[set], s, &p0, &p1, u);
    } else {
        Spawn(a, D_0021FAAC);
    }
    func_028568(a->w5C);
    a->b45 = 2;
}
