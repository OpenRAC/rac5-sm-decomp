/* LEVEL_22:0x116B90 -- spawns the follower object of a parent: copies its parameter block, scales its matrix and hands it the parent's size. */

typedef struct {
    float x, y, z;
} Vec3;

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

typedef struct Param {
    float v[3];
    unsigned char b0;
    unsigned char b1;
} Param;

typedef struct Inst {
    char pad_00[0x70];
    int w_70;
    char pad_74[0x18];
    float size;
    int w_90;
    int w_94;
    int w_98;
} Inst;

typedef struct Obj {
    float m[16];
    char pad_40[0x14];
    Param *param;
    Inst *inst;
} Obj;

extern Mgr *D_00165D70;

extern Obj *func_06F060(Mod *mod, unsigned int key, Obj *parent, int flags);
extern void func_0FFA68(float *out, float *in, int mode, float sx, float sy, float sz);
extern void func_0FCF78(int a0, Vec3 *a1, float f12);

static __inline__ Mod *FindMod(unsigned int hash)
{
    unsigned int i;

    for (i = 0; i < D_00165D70->nmods; i++) {
        if (D_00165D70->mods[i].hash == hash)
            return &D_00165D70->mods[i];
    }
    return 0;
}

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

Obj *func_116B90(Obj *parent)
{
    float save[4];
    Param *src;
    Param *dst;
    Inst *cfg;
    Inst *inst;
    Mod *mod;
    Obj *obj;
    float z;

    if (parent == 0)
        return 0;
    src = parent->param;
    cfg = parent->inst;
    if (src == 0)
        return 0;
    if (cfg == 0)
        return 0;
    mod = FindMod(0xC083E10D);
    if (mod == 0)
        obj = 0;
    else
        obj = func_06F060(mod, 0x88CB0313, parent, 0xFF);
    if (obj == 0)
        return 0;
    dst = obj->param;
    dst->v[0] = src->v[0];
    dst->v[1] = src->v[1];
    z = src->v[2];
    dst->v[2] = z;
    dst->b0 = src->b0;
    dst->b1 = src->b1;
    inst = obj->inst;
    if (inst == 0)
        return 0;
    inst->size = cfg->size * z * 1.15f;
    inst->w_90 = 0;
    inst->w_94 = 0;
    inst->w_98 = 0;
    Copy4(save, obj->m + 12);
    func_0FFA68(obj->m, obj->m, 0, inst->size, inst->size, inst->size);
    Copy4(obj->m + 12, save);
    func_0FCF78((int)inst, (Vec3 *)(obj->m + 8), src->v[1]);
    inst->w_70 = 0;
    return obj;
}
