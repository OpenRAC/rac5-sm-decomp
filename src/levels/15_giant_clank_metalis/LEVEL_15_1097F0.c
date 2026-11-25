/* LEVEL_15:0x1097F0 -- orients the object's basis toward a target point: forward from the point and the object's anchor (falling back to its stored axis when they coincide), then right/up from the reference vectors. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    Vec3 r[3];
} Basis;

typedef struct {
    char pad_00[0x84];
    float m[12];
    char pad_B4[0x208 - 0xB4];
    char b208[1];
} Obj;

extern float D_0016FEB8[];
extern float sqrtf(float x);
extern void func_0EABF0(float *a0, float *a1, float *a2);
extern void func_0EB9C8(Vec3 *o1, Vec3 *o2, Vec3 *fwd, Vec3 *up, Vec3 *alt);
extern void func_0E8A98(void *dst, Basis *src);

static __inline__ unsigned char NormTo(Vec3 *out, Vec3 *in)
{
    float d2 = in->x * in->x + in->y * in->y + in->z * in->z;
    float inv;
    if (d2 < 2.3841858e-7f)
        return 0;
    inv = 1.0f / sqrtf(d2);
    out->x = inv * in->x;
    out->y = inv * in->y;
    out->z = inv * in->z;
    return 1;
}

static __inline__ void NormRawTo(Vec3 *out, Vec3 *in)
{
    float inv = 1.0f / sqrtf(in->x * in->x + in->y * in->y + in->z * in->z);
    out->x = inv * in->x;
    out->y = inv * in->y;
    out->z = inv * in->z;
}

static __inline__ void Build(Obj *o, Vec3 *fwd, Vec3 *up, Vec3 *alt)
{
    Basis m;

    func_0EB9C8(&m.r[0], &m.r[1], fwd, up, alt);
    m.r[2].x = fwd->x;
    m.r[2].y = fwd->y;
    m.r[2].z = fwd->z;
    func_0E8A98(o->b208, &m);
}

void func_1097F0(Obj *o, float *p, Vec3 *up, Vec3 *alt)
{
    Vec3 anchor;
    Vec3 d;
    Vec3 fwd;

    func_0EABF0((float *)&anchor, o->m, D_0016FEB8);
    d.x = p[0] - anchor.x;
    d.y = p[1] - anchor.y;
    d.z = p[2] - anchor.z;
    if (!NormTo(&fwd, &d))
        NormRawTo(&fwd, (Vec3 *)&o->m[6]);
    Build(o, &fwd, up, alt);
}
