/* LEVEL_07:0x1B87D0 -- placement copy of LEVEL_01_1A3FB0.c: creates the spark actor: builds an orientation from the direction and a reference axis, finds the template record, then fills the actor state and registers it. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    Vec3 r;
    int w0C;
    Vec3 u;
    int w1C;
    Vec3 f;
    int w2C;
    Vec3 p;
    float w3C;
} Basis;

typedef struct {
    char pad_00[4];
    int w04;
    int w08;
    Vec3 dir;
    float f18;
    int w1C;
    char b20;
    char pad_21[3];
    char pad_24[4];
    char pad_28[4];
    float f2C;
    int w30;
} State;

typedef struct {
    char pad_00[0x58];
    State *state;
} Actor;

typedef struct {
    char pad_00[0x24];
    unsigned int key;
    char pad_28[0x44 - 0x28];
} Entry;

typedef struct {
    char pad_00[0x34];
    Entry *entries;
    unsigned int count;
} Table;

typedef struct {
    char pad_00[0x14];
    float v14;
    float v18;
    float v1C;
    float v20;
} Fx;

extern Table *D_0021B090[1];
extern Fx *D_0021D8B4[1];
extern Vec3 D_0022CB88;
extern int rand(void);
extern float sqrtf(float x);
extern float floorf(float x);

extern Actor *func_07E6D8(Entry *e, unsigned int key, Basis *m, int flags);
extern void func_082B38(void *obj, void *cam, float a, float b, float c, float d, int p6, int p7, int p8, int p9, int p10, int p11);
extern void func_1295A8(float *a, float *b, float *c);
extern void func_1B99D8(Actor *a);

static __inline__ void Cross(Vec3 *o, Vec3 *a, Vec3 *b)
{
    o->x = a->y * b->z - a->z * b->y;
    o->y = a->z * b->x - a->x * b->z;
    o->z = a->x * b->y - a->y * b->x;
}

static __inline__ float Rnd(float lo, float hi)
{
    float d;

    d = hi - lo;
    return lo + d * ((float)rand() * 4.6566128730773926e-10f);
}

static __inline__ unsigned char Norm(Vec3 *v)
{
    float d2 = v->x * v->x + v->y * v->y + v->z * v->z;
    float inv;
    if (d2 < 2.3841858e-7f)
        return 0;
    inv = 1.0f / sqrtf(d2);
    v->x = v->x * inv;
    v->y = v->y * inv;
    v->z = v->z * inv;
    return 1;
}

static __inline__ Entry *Find(Table *t, unsigned int key)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->entries[i].key == key)
            return &t->entries[i];
    }
    return 0;
}

Actor *func_1B87D0(float a, Vec3 *pos, Vec3 *dir, int p4, int p5)
{
    Basis m;
    Basis *mp;
    Basis *ma;
    unsigned int key;
    Entry *e;
    Actor *r;
    State *st;
    Vec3 *d;

    mp = &m;
    mp->w2C = 0;
    mp->f.x = dir->x;
    mp->f.y = dir->y;
    mp->f.z = dir->z;
    Cross(&mp->r, &D_0022CB88, &mp->f);
    mp->w0C = 0;
    Norm(&mp->r);
    Cross(&mp->u, &mp->f, &mp->r);
    mp->w1C = 0;
    m.p.x = pos->x;
    m.p.y = pos->y;
    m.p.z = pos->z;
    m.w3C = 1.0f;
    m.w0C = 0;
    m.w1C = 0;
    m.w2C = 0;
    key = 0x814DC15A;
    ma = &m;
    e = Find(D_0021B090[0], key);
    if (e == 0)
        r = 0;
    else
        r = func_07E6D8(e, key, ma, 0xFF);
    if (r != 0) {
        st = r->state;
        st->w04 = p5;
        st->w08 = p4;
        st->f18 = a;
        st->b20 = (char)(int)(2.0f * floorf((float)rand() * 4.6566129e-10f + 0.5f) - 1.0f);
        d = &st->dir;
        d->x = dir->x;
        d->y = dir->y;
        d->z = dir->z;
        st->w1C = 0;
        if (D_0021D8B4[0] != 0)
            func_082B38(r, D_0021D8B4[0], D_0021D8B4[0]->v14, D_0021D8B4[0]->v18, D_0021D8B4[0]->v1C, D_0021D8B4[0]->v20, (int)&st->w1C, 0, 0, 0, 0, 1);
        func_1295A8((float *)((char *)st + 0x28), (float *)((char *)st + 0x24), &d->x);
        st->f2C = Rnd(24.0f, 36.0f);
        st->w30 = 0;
        func_1B99D8(r);
    }
    return r;
}
