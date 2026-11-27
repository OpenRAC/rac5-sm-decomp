/* LEVEL_15:0x10F550 -- chooses a random launch direction vector, copies speed parameters, and resets state. */
typedef struct {
    char pad0[0x1C];
    float f1C;
    float f20;
    float f24;
    int pad28;
    float f2C;
    char pad30[0x58 - 0x30];
    char sub58[4];
} Cfg;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad0[0xC];
    Vec3 v0C;
    float f18;
    float f1C;
    float f20;
    char pad24[0x244 - 0x24];
    char sub244[0x2D4 - 0x244];
    Cfg *cfg2D4;
    char pad2D8[0x3B8 - 0x2D8];
    float f3B8;
} Obj;

extern int rand(void);
extern float floorf(float x);
extern float cosf(float x);
extern float sqrtf(float x);
extern void func_0FE8D8(void *a0, void *a1, int a2);

static __inline__ void NormalizeTo(Vec3 *dst, const Vec3 *src)
{
    float inv = 1.0f / sqrtf(src->x * src->x + src->y * src->y + src->z * src->z);
    dst->x = inv * src->x;
    dst->y = inv * src->y;
    dst->z = inv * src->z;
}

void func_10F550(Obj *o)
{
    Vec3 v;
    Cfg *cfg;
    float lo;
    float range;
    float theta;
    float c;
    float sn;

    cfg = o->cfg2D4;
    lo = cfg->f1C;
    range = cfg->f20 - lo;
    theta = lo + range * ((float)rand() * 4.656612873077392578125e-10f);
    theta -= floorf(theta * 0.15915493667125702f + 0.5f) * 6.2831854820251465f;
    c = cosf(theta);
    sn = sqrtf(1.0f - c * c);
    if (theta < 0.0f) {
        sn = -sn;
    }

    v.x = sn * 40.0f;
    v.y = c * 40.0f;
    v.z = 20.0f;
    NormalizeTo(&o->v0C, &v);
    o->f18 = cfg->f24;
    o->f1C = 0.0f;
    o->f20 = cfg->f2C;
    func_0FE8D8(o->sub244, o->cfg2D4->sub58, 1);
    o->f3B8 = 0.0f;
}
