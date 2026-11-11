/* LEVEL_04:0x12AB58 -- placement copy of LEVEL_01_11EC88.c: builds a plane (normal and offset) from two edge vectors and a point. */
typedef struct Vec3 {
    float x, y, z;
} Vec3;

extern float sqrtf(float x);
extern void func_133810(Vec3 *a, Vec3 *b, Vec3 *c);

static inline unsigned char normalize(Vec3 *dst, Vec3 *src)
{
    float len2;
    float inv;

    len2 = src->x * src->x + src->y * src->y + src->z * src->z;
    if (len2 < 2.384185791015625e-07f)
        return 0;
    inv = 1.0f / sqrtf(len2);
    dst->x = inv * src->x;
    dst->y = inv * src->y;
    dst->z = inv * src->z;
    return 1;
}

void func_12AB58(Vec3 *n, float *d, Vec3 *p, Vec3 *u, Vec3 *v)
{
    Vec3 c;
    Vec3 t;
    Vec3 w;
    float len2;
    float inv;
    unsigned char ok;

    c.x = u->y * v->z - u->z * v->y;
    c.y = u->z * v->x - u->x * v->z;
    c.z = u->x * v->y - u->y * v->x;
    ok = normalize(n, &c);
    if (!ok) {
        len2 = v->x * v->x + v->y * v->y + v->z * v->z;
        inv = 1.0f / sqrtf(len2);
        t.x = inv * v->x;
        t.y = inv * v->y;
        t.z = inv * v->z;
        func_133810(n, &w, &t);
    }
    *d = -(n->x * p->x + n->y * p->y + n->z * p->z);
}
