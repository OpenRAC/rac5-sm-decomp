/* LEVEL_01:0x127598 -- builds two unit vectors perpendicular to a normal. */
typedef struct {
    float x, y, z;
} Vec;

extern float sqrtf(float x);

static inline unsigned char Normalize3(Vec *v)
{
    float l = v->x * v->x + v->y * v->y + v->z * v->z;
    float inv;

    if (l < 2.384185791015625e-07f) {
        return 0;
    }
    inv = 1.0f / sqrtf(l);
    v->x = inv * v->x;
    v->y = inv * v->y;
    v->z = inv * v->z;
    return 1;
}

static inline void Copy(Vec *d, Vec *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static inline void Cross(Vec *r, Vec *a, Vec *b)
{
    r->x = a->y * b->z - a->z * b->y;
    r->y = a->z * b->x - a->x * b->z;
    r->z = a->x * b->y - a->y * b->x;
}

void func_127598(Vec *u, Vec *v, Vec *n)
{
    Vec a;
    Vec b;
    float inv;
    float l;

    a.x = n->z;
    a.y = 0.0f;
    a.z = -n->x;
    if (Normalize3(&a)) {
        Cross(&b, n, &a);
    } else {
        b.x = 0.0f;
        b.y = n->z;
        b.z = -n->y;
        l = b.x * b.x + b.y * b.y + b.z * b.z;
        inv = 1.0f / sqrtf(l);
        b.x = inv * b.x;
        b.y = inv * b.y;
        b.z = inv * b.z;
        Cross(&a, &b, n);
    }
    Copy(u, &a);
    Copy(v, &b);
}
