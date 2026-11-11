/* LEVEL_03:0x1D3A98 -- spawns two burst effects at a random point on a small sphere around an emitter, unless a global flag is set. */

typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float f[4];
} Vec4;

typedef struct {
    float m[16];
} Matrix;

typedef struct {
    float v[4];
} Vector;

typedef struct {
    char pad0[0x60];
    Vec3 pos;
    Vec3 vel;
} Emitter;

typedef struct {
    char pad0[0x58];
    Emitter *em;
} Obj;

extern unsigned D_0020C638;
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);
extern void func_1242E8(Vec4 *dst, Matrix *mat, Vector *vec);
extern void func_0DB010(int a, Vec4 *p, Vec4 *v, float f0, float f1, unsigned c0, unsigned c1, float f2, float f3, float f4, int t0, int t1, int t2);

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
    p->f[0] = p->f[0] + q->x;
    p->f[1] = p->f[1] + q->y;
    p->f[2] = p->f[2] + q->z;
}

static inline void NegVec(Vec4 *o, Vec3 *q)
{
    o->f[0] = -q->x;
    o->f[1] = -q->y;
    o->f[2] = -q->z;
}

static inline float Frames(float x)
{
    return x * 0.5f * 0.03333333507180214f * 60.0f;
}

void func_1D3A98(Obj *o)
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

    e = o->em;
    if (D_0020C638 & 1) {
        return;
    }
    p.f[3] = 1.0f;
    z = (float)rand() * 9.313225746154785e-10f - 1.0f;
    p.f[2] = z;
    ang = (float)rand() * 2.925836239953128e-09f - 3.1415927410125732f;
    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f) {
        s = -s;
    }
    r = sqrtf(1.0f - p.f[2] * p.f[2]);
    p.f[0] = c * r;
    p.f[1] = s * r;
    p.f[0] = p.f[0] * 0.009999999776482582f;
    p.f[1] = p.f[1] * 0.009999999776482582f;
    p.f[2] = p.f[2] * 0.009999999776482582f;
    AddPos(&p, &e->pos);
    p.f[1] = p.f[1] - 0.10000000149011612f;
    func_1242E8(&p, (Matrix *)o, (Vector *)&p);
    v.f[3] = 0.0f;
    NegVec(&v, &e->vel);
    func_1242E8(&v, (Matrix *)o, (Vector *)&v);
    a = Frames(RandLerp(0.026999998837709427f, 0.006000000983476639f));
    b = RandLerp(0.4699999988079071f, 0.0599999725818634f);
    d = Frames(RandLerp(0.0139999995008111f, 0.0019999993965029716f));
    f = Frames(RandLerp(0.0f, 0.20000000298023224f));
    func_0DB010(3, &p, &v, a, b, 0xFF204080, 0xFF204080, 0.25f, d, f, 0, 1, 5);
    func_0DB010(2, &p, &v, a, b * 0.5f, 0xFFFFFFFF, 0xFFFFFFFF, 0.25f, d, f, 0, 1, 5);
}
