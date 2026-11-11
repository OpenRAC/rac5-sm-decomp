/* LEVEL_04:0x1D1558 -- placement copy of LEVEL_01_1BE698.c: spawns two burst effects at a random point on a small sphere around an emitter. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad0[0x50];
    Vec3 pos;
    char pad5C[4];
    Vec3 vel;
} Emitter;

typedef struct {
    char pad0[0x58];
    Emitter *em;
} Obj;

extern unsigned D_0020D138;
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);
extern void func_1322E0(Vec4 *out, Obj *o, Vec4 *in);
extern void func_0E0AE8(int a, Vec4 *p, Vec4 *v, float f0, float f1, unsigned c0, unsigned c1, float f2, float f3, float f4, int t0, int t1, int t2);

static inline float RandUnit(void)
{
    return (float)rand() * 4.656612873077393e-10f;
}

static inline float RandLerp(float lo, float range)
{
    return RandUnit() * range + lo;
}

static inline void AddPos(Vec4 *p, Vec3 *q)
{
    p->x = p->x + q->x;
    p->y = p->y + q->y;
    p->z = p->z + q->z;
}

static inline void NegVec(Vec4 *o, Vec3 *q)
{
    o->x = -q->x;
    o->y = -q->y;
    o->z = -q->z;
}

static inline float Frames(float x)
{
    return x * 0.5f * 0.03333333507180214f * 60.0f;
}

void func_1D1558(Obj *o)
{
    Vec4 p;
    Vec4 v;
    Emitter *e;
    float z;
    float ang;
    float c;
    float s;
    float r;
    float a;
    float b;
    float d;
    float f;

    if (D_0020D138 & 1) {
        return;
    }
    e = o->em;
    p.w = 1.0f;
    z = (float)rand() * 9.313225746154785e-10f - 1.0f;
    p.z = z;
    ang = (float)rand() * 2.925836239953128e-09f - 3.1415927410125732f;
    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f) {
        s = -s;
    }
    r = sqrtf(1.0f - p.z * p.z);
    p.x = c * r;
    p.y = s * r;
    p.x = p.x * 0.009999999776482582f;
    p.y = p.y * 0.009999999776482582f;
    p.z = p.z * 0.009999999776482582f;
    AddPos(&p, &e->pos);
    p.y = p.y - 0.10000000149011612f;
    func_1322E0(&p, o, &p);
    v.w = 0.0f;
    NegVec(&v, &e->vel);
    func_1322E0(&v, o, &v);
    a = Frames(RandLerp(0.026999998837709427f, 0.006000000983476639f));
    b = RandLerp(0.4699999988079071f, 0.0599999725818634f);
    d = Frames(RandLerp(0.0139999995008111f, 0.0019999993965029716f));
    f = Frames(RandLerp(0.0f, 0.20000000298023224f));
    func_0E0AE8(3, &p, &v, a, b, 0xFF204080, 0xFF204080, 0.25f, d, f, 0, 1, 5);
    func_0E0AE8(2, &p, &v, a, b * 0.5f, 0xFFFFFFFF, 0xFFFFFFFF, 0.25f, d, f, 0, 1, 5);
}
