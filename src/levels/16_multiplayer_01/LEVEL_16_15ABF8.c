/* LEVEL_16:0x15ABF8 -- builds a randomized orthonormal basis and applies a random uniform scale. */
typedef struct { float x, y, z; } Vec3;
typedef struct {
    Vec3 r;
    float pad0c;
    Vec3 u;
    float pad1c;
    Vec3 n;
    float pad2c;
    float px;
    float pad34;
    float pz;
    char pad3c[0x58 - 0x3C];
    Vec3 *tmp;
    char pad5c[0x70 - 0x5C];
    float f70;
} Obj;

extern float sqrtf(float x);
extern int rand(void);
extern void *memset(void *p, int c, unsigned int n);
static inline float RandRange(float a, float b)
{
    return (float)rand() * 4.656612873077393e-10f * a + b;
}

extern float D_001CCD38[3];
extern float D_001CCD48[3];
extern void func_1040F8(Obj *a, Obj *b, float *m);

void func_15ABF8(Obj *o, float v)
{
    Vec3 *t;
    Vec3 *pn;
    Vec3 *pu;
    float m[9];
    float k;
    float inv;
    float inv2;
    float inv3;
    float n2;
    float s;

    o->f70 = v;
    t = o->tmp;
    t->x = o->px - D_001CCD38[0];
    t->z = o->pz - D_001CCD38[2];
    k = RandRange(0.30000001192092896f, 0.6000000238418579f);
    n2 = t->x * t->x + t->z * t->z;
    if (!(n2 < 2.384185791015625e-07f)) {
        n2 = k / sqrtf(n2);
        t->x = n2 * t->x;
        t->z = n2 * t->z;
    }
    pn = &o->n;
    t->y = (float)rand() * 4.656612873077393e-10f * -0.2666666507720947f + -0.40000003576278687f;
    inv2 = 1.0f / sqrtf(t->x * t->x + t->y * t->y + t->z * t->z);
    pn->x = inv2 * t->x;
    pn->y = inv2 * t->y;
    pn->z = inv2 * t->z;
    o->r.x = D_001CCD48[1] * pn->z - D_001CCD48[2] * pn->y;
    o->r.y = D_001CCD48[2] * pn->x - D_001CCD48[0] * pn->z;
    o->r.z = D_001CCD48[0] * pn->y - D_001CCD48[1] * pn->x;
    inv3 = 1.0f / sqrtf(o->r.x * o->r.x + o->r.y * o->r.y + o->r.z * o->r.z);
    o->r.x = inv3 * o->r.x;
    o->r.y = inv3 * o->r.y;
    o->r.z = inv3 * o->r.z;
    pu = &o->u;
    pu->x = pn->y * o->r.z - pn->z * o->r.y;
    pu->y = pn->z * o->r.x - pn->x * o->r.z;
    pu->z = pn->x * o->r.y - pn->y * o->r.x;
    s = RandRange(200.0f, 100.0f);
    memset(m, 0, 0x24);
    m[0] = s;
    m[4] = s;
    m[8] = s;
    func_1040F8(o, o, m);
}
