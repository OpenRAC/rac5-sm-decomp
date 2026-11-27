/* LEVEL_15:0x1076B0 -- launches the object in a random direction: picks a random angle inside the configured range, wraps it, builds a normalized heading from its cosine and sine plus a fixed rise, stores the heading, timing values and clears the spin, then starts the launch routine. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Cfg {
    char pad_00[0x24];
    float lo;
    float hi;
    float f_2C;
    char pad_30[4];
    float f_34;
} Cfg;

typedef struct Obj {
    char pad_00[0xC];
    Vec3 dir;
    float t_18;
    float w_1C;
    float t_20;
    char pad_24[0x40C];
    Cfg *cfg;
    char pad_434[0x148];
    float spin;
} Obj;

extern int rand(void);
extern float floorf(float x);
extern float cosf(float x);
extern float sqrtf(float x);
extern void func_104B30(Obj *o, int a, float f0, float f1);

static __inline__ void Normalize(Vec3 *dst, Vec3 *src)
{
    float inv;

    inv = 1.0f / sqrtf(src->x * src->x + src->y * src->y + src->z * src->z);
    dst->x = inv * src->x;
    dst->y = inv * src->y;
    dst->z = inv * src->z;
}

void func_1076B0(Obj *o)
{
    Cfg *c;
    float a;
    float cs;
    float sn;
    Vec3 v;
    float lo;
    float span;

    c = o->cfg;
    lo = c->lo;
    span = c->hi - lo;
    a = lo + span * ((float)rand() * 4.656612873077393e-10f);
    a = a - floorf(a * 0.15915493667125702f + 0.5f) * 6.2831854820251465f;
    cs = cosf(a);
    sn = sqrtf(1.0f - cs * cs);
    if (a < 0.0f) {
        sn = -sn;
    }
    v.x = sn * 40.0f;
    v.y = cs * 40.0f;
    v.z = 20.0f;
    Normalize(&o->dir, &v);
    o->t_18 = c->f_2C;
    o->w_1C = 0.0f;
    o->t_20 = c->f_34;
    func_104B30(o, 0x3C, 0.0f, 1.0f);
    o->spin = 0.0f;
}
