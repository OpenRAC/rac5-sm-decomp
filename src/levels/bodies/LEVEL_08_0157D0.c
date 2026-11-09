/* LEVEL_08:0x0157D0 -- placement copy of LEVEL_01_014E58.c: starts a move call, then steps the position toward a target by a fixed length unless already within a tiny distance. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_015340(Vec3 *q, int a, int b, int c, int d, float f);
extern float sqrtf(float x);

int func_0157D0(Vec3 *p, Vec3 *q, int a, int b, int c, float k, float m)
{
    Vec3 d;
    int r;
    float len2;
    float inv;

    r = func_015340(q, a, b, c, 0, k * m);
    d.x = q->x - p->x;
    d.y = q->y - p->y;
    d.z = q->z - p->z;
    len2 = d.x * d.x + d.y * d.y + d.z * d.z;
    if (!(len2 < 2.384185791015625e-07f)) {
        inv = k / sqrtf(len2);
        d.x = d.x * inv;
        d.y = d.y * inv;
        d.z = d.z * inv;
    }
    p->x = p->x + d.x;
    p->y = p->y + d.y;
    p->z = p->z + d.z;
    return r;
}
