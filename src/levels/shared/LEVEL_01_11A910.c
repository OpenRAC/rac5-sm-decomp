/* LEVEL_01:0x11A910 -- ray versus sphere test returning the entry distance and surface normal. */
typedef struct { float x, y, z; } V3;
extern float sqrtf(float x);

int func_11A910(float *out, V3 *n, V3 *p, V3 *dir, V3 *c, float maxT, float r2)
{
    float dx;
    float dy;
    float dz;
    float vx;
    float vy;
    float vz;
    float b;
    float cc;
    float s;
    float t;
    float qx;
    float qz;
    float len;
    float inv;
    int ok;

    dx = p->x - c->x;
    dy = p->y - c->y;
    dz = p->z - c->z;
    vx = dir->x;
    vy = dir->y;
    vz = dir->z;
    b = vx * dx + vy * dy + vz * dz;
    cc = dx * dx + dy * dy + dz * dz;
    len = b * b + r2 - cc;
    if (len < 0.0f) {
        ok = 0;
    } else {
        s = sqrtf(len);
        t = -s - b;
        if (maxT < t) {
            ok = 0;
        } else if (t >= 0.0f) {
            *out = t;
            ok = 1;
        } else if (b <= s) {
            *out = 0.0f;
            ok = 1;
        } else {
            ok = 0;
        }
    }
    if ((ok & 0xFF) == 0)
        return 0;
    qx = dx + vx * *out;
    dy = dy + vy * *out;
    qz = dz + vz * *out;
    len = qx * qx + dy * dy + qz * qz;
    if (len < 1.0000001111620804e-06f) {
        n->x = 0.0f;
        n->y = 1.0f;
        n->z = 0.0f;
    } else {
        inv = 1.0f / sqrtf(len);
        n->x = qx * inv;
        n->y = dy * inv;
        n->z = qz * inv;
    }
    return 1;
}
