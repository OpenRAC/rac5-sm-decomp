/* LEVEL_01:0x11A588 -- stores two points into the segment record and the difference of the second from the first. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 a;
    Vec3 b;
    Vec3 d;
} Seg;

static __inline__ void Sub3(Vec3 *r, Vec3 *p, Vec3 *q)
{
    r->x = p->x - q->x;
    r->y = p->y - q->y;
    r->z = p->z - q->z;
}

void func_11A588(Vec3 *a, Vec3 *b, Seg *out)
{
    out->a = *a;
    out->b = *b;
    Sub3(&out->d, b, a);
}
