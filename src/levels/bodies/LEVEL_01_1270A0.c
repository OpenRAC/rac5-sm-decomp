/* LEVEL_01:0x1270A0 -- builds a right/up basis pair from a forward vector and reference up vectors. */
typedef struct { float x, y, z; } Vec3;

extern float sqrtf(float x);

static inline void Cross(Vec3 *o, Vec3 *a, Vec3 *b)
{
    o->x = a->y * b->z - a->z * b->y;
    o->y = a->z * b->x - a->x * b->z;
    o->z = a->x * b->y - a->y * b->x;
}

static inline unsigned char Norm(Vec3 *v)
{
    float d2 = v->x * v->x + v->y * v->y + v->z * v->z;
    float inv;
    if (d2 < 2.3841858e-7f)
        return 0;
    inv = 1.0f / sqrtf(d2);
    v->x = inv * v->x;
    v->y = inv * v->y;
    v->z = inv * v->z;
    return 1;
}

static inline void NormRaw(Vec3 *v)
{
    float inv = 1.0f / sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    v->x = inv * v->x;
    v->y = inv * v->y;
    v->z = inv * v->z;
}

void func_1270A0(Vec3 *o1, Vec3 *o2, Vec3 *fwd, Vec3 *up, Vec3 *alt)
{
    Vec3 r, u;

    Cross(&r, up, fwd);
    if (Norm(&r)) {
        Cross(&u, fwd, &r);
    } else {
        Cross(&u, fwd, alt);
        NormRaw(&u);
        Cross(&r, &u, fwd);
    }
    o1->x = r.x;
    o1->y = r.y;
    o1->z = r.z;
    o2->x = u.x;
    o2->y = u.y;
    o2->z = u.z;
}
