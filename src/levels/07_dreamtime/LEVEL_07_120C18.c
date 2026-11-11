/* LEVEL_07:0x120C18 -- placement copy of LEVEL_01_11DB30.c: tests a sphere against a vertically clamped point and returns depth and normal. */
typedef struct { float x, y, z; } V3;
extern V3 D_0022CB98;
extern float sqrtf(float x);

int func_120C18(float *depth, V3 *hit, V3 *normal, V3 *p, V3 *q, float r1, float r2, float h)
{
    float dx;
    float dy;
    float dz;
    float dist;
    float s;
    float len;
    float inv;
    float pen;
    float nx;
    float ny;
    float nz;
    V3 *dp;
    float px;
    float py;
    float pz;

    px = p->x;
    py = p->y;
    pz = p->z;
    dx = px - q->x;
    dz = pz - q->z;
    dy = py - q->y;
    if (h < dy)
        dy = dy - h;
    else if (dy > 0.0f)
        dy = 0.0f;
    dist = dx * dx + dy * dy + dz * dz;
    s = r1 + r2;
    if (s * s <= dist)
        return 0;
    if (dist < 2.384185791015625e-07f) {
        dp = &D_0022CB98;
        normal->x = D_0022CB98.x;
        normal->y = dp->y;
        normal->z = dp->z;
        hit->x = p->x;
        hit->y = p->y;
        hit->z = p->z;
        *depth = 0.0f;
    } else {
        len = sqrtf(dist);
        pen = (len - r2 + __builtin_fabsf(len - r2)) * 0.5f;
        inv = 1.0f / len;
        nx = dx * inv;
        ny = dy * inv;
        nz = dz * inv;
        *depth = pen;
        hit->x = px - nx * pen;
        hit->y = py - ny * pen;
        hit->z = pz - nz * pen;
        normal->x = nx;
        normal->y = ny;
        normal->z = nz;
    }
    return 1;
}
