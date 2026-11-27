/* LEVEL_02:0x17B550 -- spawns the companion object of an object at its position and heading and builds its orientation frame. */

typedef struct Row {
    float x, y, z, w;
} Row;

typedef struct Frame {
    Row u, v, d, p;
} Frame;

typedef struct Mod {
    char pad_00[0x24];
    unsigned int hash;
    char pad_28[0x1C];
} Mod;

typedef struct Mgr {
    char pad_00[0x34];
    Mod *mods;
    unsigned int nmods;
} Mgr;

typedef struct Blk {
    Frame *obj;
} Blk;

typedef struct Self {
    char pad_00[0x20];
    float dir[3];
    char pad_2C[4];
    float pos[3];
    char pad_3C[9];
    unsigned char mode;
    char pad_46[0xE];
    Blk *blk;
} Self;

extern float D_00237160[3];
extern float D_0022CE08[3];
extern char D_0022CD40[];
extern Mgr *D_0021BD50;

extern float sqrtf(float x);
extern Frame *func_082E40(Mod *mod, unsigned int key, char *arg, int flags);

static __inline__ Mod *FindMod(unsigned int hash)
{
    unsigned int i;

    for (i = 0; i < D_0021BD50->nmods; i++) {
        if (D_0021BD50->mods[i].hash == hash)
            return &D_0021BD50->mods[i];
    }
    return 0;
}

static __inline__ void Copy3(float *o, float *a)
{
    o[0] = a[0];
    o[1] = a[1];
    o[2] = a[2];
}

static __inline__ void Add3(float *o, float *a)
{
    o[0] = o[0] + a[0];
    o[1] = o[1] + a[1];
    o[2] = o[2] + a[2];
}

static __inline__ void Cross(float *o, float *a, float *b)
{
    o[0] = a[1] * b[2] - a[2] * b[1];
    o[1] = a[2] * b[0] - a[0] * b[2];
    o[2] = a[0] * b[1] - a[1] * b[0];
}

static __inline__ Frame *Spawn(unsigned int hash, char *arg, int flags)
{
    Mod *mod;

    mod = FindMod(hash);
    if (mod == 0)
        return 0;
    return func_082E40(mod, hash, arg, flags);
}

void func_17B550(Self *self)
{
    Blk *blk;
    Frame *f;
    Frame *o;
    float len2;
    float inv;

    blk = self->blk;
    o = Spawn(0xA0E15DBA, D_0022CD40, 0xFF);
    blk->obj = o;
    Copy3(&o->p.x, self->pos);
    Add3(&blk->obj->p.x, D_00237160);
    Copy3(&blk->obj->d.x, self->dir);
    f = blk->obj;
    Cross(&f->u.x, D_0022CE08, &f->d.x);
    f->u.w = 0;
    len2 = f->u.x * f->u.x + f->u.y * f->u.y + f->u.z * f->u.z;
    if (!(len2 < 2.3841858e-07f)) {
        inv = 1.0f / sqrtf(len2);
        f->u.x = f->u.x * inv;
        f->u.y = f->u.y * inv;
        f->u.z = f->u.z * inv;
    }
    Cross(&f->v.x, &f->d.x, &f->u.x);
    f->v.w = 0;
    self->mode = 2;
}
