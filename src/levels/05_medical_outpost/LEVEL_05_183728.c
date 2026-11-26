/* LEVEL_05:0x183728 -- initializes an entity's random horizontal basis, line-interpolated spawn position, and upward hemisphere direction. */
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern float sqrtf(float x);
extern float fabsf(float x);

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Src183728 {
    Vec3 v00;
    unsigned char pad0C[0x24];
    Vec3 v30;
} Src183728;

typedef struct Dst183728 {
    Vec3 v00;
    Vec3 v0C;
    Vec3 v18;
    Vec3 v24;
    Vec3 v30;
    int w3C;
} Dst183728;

extern Vec3 D_00206D88;

static __inline__ void Cross3(Vec3 *out, Vec3 *a, Vec3 *b)
{
    out->x = a->y * b->z - a->z * b->y;
    out->y = a->z * b->x - a->x * b->z;
    out->z = a->x * b->y - a->y * b->x;
}

static __inline__ void AddScale3(Vec3 *out, Vec3 *a, Vec3 *b, float s)
{
    out->x = a->x + b->x * s;
    out->y = a->y + b->y * s;
    out->z = a->z + b->z * s;
}

static __inline__ void Copy3(Vec3 *out, Vec3 *src)
{
    out->x = src->x;
    out->y = src->y;
    out->z = src->z;
}

static __inline__ void RandRing(Vec3 *out)
{
    float ang = (float)rand() * 4.656612873077393e-10f;
    ang = ang + ang;
    ang = ang * 3.1415927410125732f;
    out->x = cosf(ang);
    out->z = sinf(ang);
}

static __inline__ float RandRange(float lo, float span)
{
    return (float)rand() * 4.656612873077393e-10f * span + lo;
}

static __inline__ void RandUnitSphere(Vec3 *out)
{
    float phi;
    float c;
    float s;
    float t;

    out->z = (float)rand() * 9.313225746154785e-10f - 1.0f;
    phi = (float)rand() * 2.925836239953128e-09f - 3.1415927410125732f;
    c = cosf(phi);
    s = sqrtf(1.0f - c * c);
    if (phi < 0.0f) {
        s = -s;
    }
    t = sqrtf(1.0f - out->z * out->z);
    out->x = c * t;
    out->y = s * t;
}

void func_183728(Src183728 *src, Dst183728 *dst)
{
    float r;

    RandRing(&dst->v0C);
    dst->v0C.y = 0.0f;

    Copy3(&dst->v18, &D_00206D88);

    Cross3(&dst->v00, &dst->v0C, &dst->v18);

    r = RandRange(-4.0f, 8.0f);
    AddScale3(&dst->v24, &src->v30, &src->v00, r);
    dst->w3C = 0;

    RandUnitSphere(&dst->v30);
    dst->v30.y = fabsf(dst->v30.y);
}
