/* LEVEL_08:0x2022F0 -- spawns an animated lightweight object at a position and registers its spatial bounds. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad0[0x1C];
    char *w1C;
} PoolCfg;

typedef struct {
    char pad0[0x14];
    float f14;
    float pad18;
    float f1C;
} AnimDef;

typedef struct {
    int w00;
    char pad04[0xE - 0x4];
    unsigned char b0E;
    unsigned char b0F;
    void *owner10;
    int w14;
} SpatialNode;

typedef struct {
    char pad0[0x30];
    Vec3 pos30;
    float pad3C;
    void *w40;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x4C - 0x46];
    void *anim4C;
    SpatialNode node50;
    float f68;
} Obj;

typedef struct {
    char pad0[0x68];
} Region;

extern PoolCfg D_003EB140;
extern AnimDef D_003EAFA0;
extern char D_003EB1A0[];
extern char D_002528F8[];
extern Region D_0027E978[2];

extern Obj *func_0AA518(int *ok, PoolCfg *cfg, int count);
extern void func_202030(Obj *obj, char *tab);
extern void func_20FC68(void **animSlot);
extern int func_2100F8(void *mgr, void **animSlot, AnimDef *def, float t, float rate);
extern int rand(void);
extern int func_089D30(Vec4 *lo, Vec4 *hi, void *owner);
extern void func_09D490(Region *r, SpatialNode *node, Vec4 *lo, Vec4 *hi, unsigned int flags);

void func_2022F0(Vec3 *a0, float d)
{
    Vec4 lo;
    Vec4 hi;
    int ok;
    Obj *obj;
    Vec3 *pos;
    SpatialNode *node;
    float t;
    float minLife;
    (void)d;

    obj = func_0AA518(&ok, &D_003EB140, 1);
    if (ok == 0) {
        return;
    }
    func_202030(obj, D_003EB140.w1C);
    pos = &obj->pos30;
    obj->pos30.x = a0->x;
    pos->y = a0->y;
    pos->z = a0->z;
    func_20FC68(&obj->anim4C);

    {
        void *mgr = D_003EB1A0;
        t = D_003EAFA0.f14 + 0.0f;
        if (t >= D_003EAFA0.f1C) {
            t -= D_003EAFA0.f1C;
        }
        minLife = 20.0f;
        func_2100F8(mgr, &obj->anim4C, &D_003EAFA0, t, 1.0f);
    }

    obj->w40 = D_002528F8;
    obj->b44 = 0;
    obj->b45 = 0;
    obj->f68 = (float)rand() * 4.656612873077392578125e-10f + minLife;
    node = &obj->node50;
    node->owner10 = obj;
    node->b0E = 2;
    node->w14 = 0;
    obj->node50.w00 = 0;
    if (func_089D30(&lo, &hi, node->owner10) != 0) {
        float dx = hi.x - lo.x;
        float dz = hi.z - lo.z;
        int big;
        if (dx > 8.0f || dz > 8.0f) {
            big = 1;
        } else {
            big = 0;
        }
        node->b0F = (unsigned char)big;
        func_09D490(&D_0027E978[big], node, &lo, &hi, 0x511);
    }
}
